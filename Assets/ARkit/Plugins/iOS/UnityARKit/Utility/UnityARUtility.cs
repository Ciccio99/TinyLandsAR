using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.iOS
{
	public class UnityARUtility
	{
		
		private MeshCollider meshCollider; //declared to avoid code stripping of class
		private MeshFilter meshFilter; //declared to avoid code stripping of class
		private static GameObject planePrefab = null;

		public static void InitializePlanePrefab(GameObject go)
		{
			planePrefab = go;
		}
		
		public static GameObject CreatePlaneInScene(ARPlaneAnchor arPlaneAnchor)
		{
			GameObject plane;
			if (planePrefab != null) {
				plane = GameObject.Instantiate(planePrefab);
			} else {
				plane = new GameObject (); //put in a blank gameObject to get at least a transform to manipulate
			}

			plane.name = arPlaneAnchor.identifier;

			return UpdatePlaneWithAnchorTransform(plane, arPlaneAnchor);

		}

		public static GameObject UpdatePlaneWithAnchorTransform(GameObject plane, ARPlaneAnchor arPlaneAnchor)
		{	
			//do coordinate conversion from ARKit to Unity
			plane.transform.position = UnityARMatrixOps.GetPosition (arPlaneAnchor.transform);
			plane.transform.rotation = UnityARMatrixOps.GetRotation (arPlaneAnchor.transform);

			MeshFilter mf = plane.GetComponentInChildren<MeshFilter> ();

			if (mf != null) {
                //since our plane mesh is actually 10mx10m in the world, we scale it here by 0.1f
				mf.gameObject.transform.localScale = new Vector3(arPlaneAnchor.extent.x * 0.1f, arPlaneAnchor.extent.y * 0.1f, arPlaneAnchor.extent.z * 0.1f);

                //convert our center position to unity coords
                mf.gameObject.transform.localPosition = new Vector3(arPlaneAnchor.center.x,arPlaneAnchor.center.y, -arPlaneAnchor.center.z);
			}
                
			return plane;
		}
    
        /*
            Scales a passed in object with the average scaling of the passed in ARPlane, the y scaling is excluded
            (y Scaling is always 0 for arPlaneAnchors)
            @param Gameobject to scale
            @param ARPlaneAnchor object
            @param Scale factor to be added to the gameobject ontop of the arPlaneAnchor scaling
        */
        public static GameObject UpdateObjectWithAnchorTransform(GameObject go, ARPlaneAnchor arPlaneAnchor, float scaling)
        {
            // Do coordinate conversion from ARKit to Unity to position the parent object correctly between 
            // unity space and real life space
            go.transform.position = UnityARMatrixOps.GetPosition (arPlaneAnchor.transform);
            go.transform.rotation = UnityARMatrixOps.GetRotation (arPlaneAnchor.transform);

            // Get the extents of the plane and use it to modify your object scale
            // The anchorPlanes extent.y is always 0, so use an average of x & z to get an approximation
            float avgExtent = (arPlaneAnchor.extent.x + arPlaneAnchor.extent.z) / 2f;
//            float scaleX = arPlaneAnchor.extent.x * scaling;
//            float scaleY = avgExtent * scaling;
//            float scaleZ = arPlaneAnchor.extent.z * scaling;
            float scaleX = avgExtent * scaling;
            float scaleY = avgExtent * scaling;
            float scaleZ = avgExtent * scaling;

            // Scale the parent object so that all children scale equally
            go.transform.localScale = new Vector3 (scaleX, scaleY, scaleZ);
                       
            // Now change the position of the children so that they're realistically placed in the world
            foreach (Transform tf in go.transform) {
                tf.localPosition = new Vector3 (arPlaneAnchor.center.x, arPlaneAnchor.center.y, -arPlaneAnchor.center.z);
            }
                
            return go;
        }
	}
}

