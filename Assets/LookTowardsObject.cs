using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookTowardsObject : MonoBehaviour {

    public Transform m_TransformToLookAt;

	// Use this for initialization
	void Start () {
        if (m_TransformToLookAt != null)
            transform.LookAt (m_TransformToLookAt.position);	
	}
}
