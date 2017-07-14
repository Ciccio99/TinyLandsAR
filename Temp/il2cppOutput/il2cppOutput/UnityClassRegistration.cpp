template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; template <> void RegisterClass<WheelCollider>();
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 90 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. Skybox
	RegisterClass<Skybox>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. Light
	RegisterClass<Light>();
	//13. Mesh
	RegisterClass<Mesh>();
	//14. NamedObject
	RegisterClass<NamedObject>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. NetworkView
	RegisterClass<NetworkView>();
	//17. Shader
	RegisterClass<Shader>();
	//18. Material
	RegisterClass<Material>();
	//19. Sprite
	RegisterClass<Sprite>();
	//20. TextAsset
	RegisterClass<TextAsset>();
	//21. Texture
	RegisterClass<Texture>();
	//22. Texture2D
	RegisterClass<Texture2D>();
	//23. RenderTexture
	RegisterClass<RenderTexture>();
	//24. Transform
	RegisterClass<Transform>();
	//25. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//26. ParticleSystem
	RegisterClass<ParticleSystem>();
	//27. Rigidbody
	RegisterClass<Rigidbody>();
	//28. Unity::Joint
	RegisterClass<Unity::Joint>();
	//29. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//30. Collider
	RegisterClass<Collider>();
	//31. BoxCollider
	RegisterClass<BoxCollider>();
	//32. SphereCollider
	RegisterClass<SphereCollider>();
	//33. MeshCollider
	RegisterClass<MeshCollider>();
	//34. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//35. CharacterController
	RegisterClass<CharacterController>();
	//36. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//37. WheelCollider
	RegisterClass<WheelCollider>();
	//38. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//39. AudioClip
	RegisterClass<AudioClip>();
	//40. SampleClip
	RegisterClass<SampleClip>();
	//41. AudioListener
	RegisterClass<AudioListener>();
	//42. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//43. AudioSource
	RegisterClass<AudioSource>();
	//44. Animation
	RegisterClass<Animation>();
	//45. Animator
	RegisterClass<Animator>();
	//46. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//47. GUIElement
	RegisterClass<GUIElement>();
	//48. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//49. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//50. UI::Canvas
	RegisterClass<UI::Canvas>();
	//51. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//52. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//53. MeshRenderer
	RegisterClass<MeshRenderer>();
	//54. Collider2D
	RegisterClass<Collider2D>();
	//55. TrailRenderer
	RegisterClass<TrailRenderer>();
	//56. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//57. FlareLayer
	RegisterClass<FlareLayer>();
	//58. PreloadData
	RegisterClass<PreloadData>();
	//59. Cubemap
	RegisterClass<Cubemap>();
	//60. Texture3D
	RegisterClass<Texture3D>();
	//61. Texture2DArray
	RegisterClass<Texture2DArray>();
	//62. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//63. TimeManager
	RegisterClass<TimeManager>();
	//64. AudioManager
	RegisterClass<AudioManager>();
	//65. InputManager
	RegisterClass<InputManager>();
	//66. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//67. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//68. PhysicsManager
	RegisterClass<PhysicsManager>();
	//69. TagManager
	RegisterClass<TagManager>();
	//70. ScriptMapper
	RegisterClass<ScriptMapper>();
	//71. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//72. MonoScript
	RegisterClass<MonoScript>();
	//73. MonoManager
	RegisterClass<MonoManager>();
	//74. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//75. PlayerSettings
	RegisterClass<PlayerSettings>();
	//76. BuildSettings
	RegisterClass<BuildSettings>();
	//77. ResourceManager
	RegisterClass<ResourceManager>();
	//78. NetworkManager
	RegisterClass<NetworkManager>();
	//79. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//80. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//81. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//82. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//83. LevelGameManager
	RegisterClass<LevelGameManager>();
	//84. RenderSettings
	RegisterClass<RenderSettings>();
	//85. CGProgram
	RegisterClass<CGProgram>();
	//86. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//87. LightmapSettings
	RegisterClass<LightmapSettings>();
	//88. LightProbes
	RegisterClass<LightProbes>();
	//89. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
