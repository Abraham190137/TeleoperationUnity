#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.Collision>
struct Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2;
// System.Action`1<Oculus.Interaction.HandPosing.ISnapper>
struct Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513;
// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Oculus.Interaction.PointerArgs>
struct Action_1_t4E869C10687560FFADF53A2249A616FC9633AC1C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct CollisionInteractionRegistry_2_tEFBB537D54ED80B332B265B4D00DB7ACD8DCF833;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct InteractableRegistry_2_tF701CC2F45625A25C8B19CDDCC9D651DD55659D7;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint>
struct List_1_tA3C96FB2BF6285D5475DB19EF23AF65E5EDF7721;
// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter>
struct List_1_tEF5142D8491A1B504F4F7D8131E10D1E4C83EE6C;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandPosing.HandGrabInteractable>
struct MultiAction_1_t407E4C5762FF8835E2393E65437BCA24F7359A8A;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandPosing.HandGrabInteractor>
struct MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E;
// Oculus.Interaction.MultiAction`1<System.Object>
struct MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3;
// Oculus.Interaction.HandPosing.SnapAddress`1<Oculus.Interaction.HandPosing.HandGrabInteractable>
struct SnapAddress_1_tC6DE0261C244492136A61F66A29B2C555089D862;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// Oculus.Interaction.ActiveStateSelector[]
struct ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Oculus.Interaction.Input.HandRef[]
struct HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// Oculus.Interaction.TwoGrabFreeTransformer[]
struct TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Oculus.Interaction.ActiveStateSelector
struct ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Oculus.Interaction.AudioPhysics
struct AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Oculus.Interaction.AudioTrigger
struct AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Oculus.Interaction.Samples.CarouselView
struct CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// Oculus.Interaction.Samples.ColorChanger
struct ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Oculus.Interaction.Samples.CountdownTimer
struct CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.Samples.EnableTargetOnStart
struct EnableTargetOnStart_t09E86E6C056419CDFAA6AB7BC1099FB4D447F709;
// Oculus.Interaction.Samples.FadeTextAfterActive
struct FadeTextAfterActive_t48518F07AB8C1C1982A329E41B77AAE1DA0D9C2A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Oculus.Interaction.HandPosing.GrabPointsPoseFinder
struct GrabPointsPoseFinder_t89BF512A1E1A7EAD94A8B140B2D86BB108E27095;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787;
// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986;
// Oculus.Interaction.HandPosing.HandGrabInteractor
struct HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2;
// Oculus.Interaction.Grab.HandGrabbableData
struct HandGrabbableData_t70DB908DBA5946A4D14E6EA8E20C2BF3B83EE7BD;
// Oculus.Interaction.HandPosing.HandPose
struct HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8;
// Oculus.Interaction.Input.HandRef
struct HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977;
// Oculus.Interaction.HandVisual
struct HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80;
// Oculus.Interaction.HandWristOffset
struct HandWristOffset_t14881D3F3DE56E04E9415060498F0CB82F571F8A;
// Oculus.Interaction.Samples.HideHandVisualOnGrab
struct HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218;
// Oculus.Interaction.IActiveState
struct IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Oculus.Interaction.IGrabbable
struct IGrabbable_t29BBED07EE978D3762F867A5E18F9C79C0020CB0;
// Oculus.Interaction.Input.IHand
struct IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5;
// Oculus.Interaction.IInteractableView
struct IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F;
// Oculus.Interaction.IMovement
struct IMovement_t636D9C1ED5B84F85EA2F469377AEAEC4E17294EA;
// Oculus.Interaction.IMovementProvider
struct IMovementProvider_tF89A1ECDB010071D4F96A7E88B2343363BD834E1;
// Oculus.Interaction.IPointableElement
struct IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1;
// Oculus.Interaction.ISelector
struct ISelector_t67FC626DAEE009248843EA2CE7425D5CDFBEE730;
// Oculus.Interaction.HandPosing.ISnapData
struct ISnapData_tF679483EF2786EFCAECA0D238B062543C2E988A4;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Oculus.Interaction.Throw.IVelocityCalculator
struct IVelocityCalculator_t330C870F0625311FBA255F43606D62282186FF39;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Oculus.Interaction.Samples.LookAtTarget
struct LookAtTarget_tB093B3119B1ADE3D1656211C079DAA2827A50DD1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Oculus.Interaction.MaterialPropertyBlockEditor
struct MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Oculus.Interaction.PhysicsGrabbable
struct PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF;
// Oculus.Interaction.Samples.PoseUseSample
struct PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Oculus.Interaction.Samples.RespawnOnDrop
struct RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Oculus.Interaction.Samples.RotationAudioEvents
struct RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Oculus.Interaction.Samples.ScaleAudioEvents
struct ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A;
// Oculus.Interaction.Samples.ScaleModifier
struct ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C;
// Oculus.Interaction.Samples.SceneLoader
struct SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126;
// Oculus.Interaction.Samples.ShouldHideHandOnGrab
struct ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Oculus.Interaction.Samples.StayInView
struct StayInView_tE8D2B7875C6FA1C3D1632647610427931746757A;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Oculus.Interaction.TwoGrabFreeTransformer
struct TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Oculus.Interaction.AudioPhysics/CollisionEvents
struct CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9;
// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tFD9DEEFCB352A72EE319F2C7C386E43F67CA0865;
// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
struct U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisHandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977_mA46B0153470667D040AD2552563EEE1829340A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisTwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344_m82ABD5D6E1B4F6522812E4785F07F62F505EEDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65_mAB989F2F1D86B58092C1ACEAF57C032EF2BF1DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mBAFA1EFDA78758B4B85A530FB817AA0E4E8E9393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m719B66DD4F7BB79144CF8B6836E8F8343895FE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisAudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B_mD1837F2D3975E6E5BCD601C14B00FCBE5F75FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225_m65E854CA9119C0647AA2970B4E1581826BD31329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_SelectedInteractable_m9AF31BA2401767028B0F2AF4ED4335972E16A610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_State_mB374F6767B81C1B0D67E0E15E497CF6CDED3935B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m56595F072414FB8469C297A3FFFC33496D0BA0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_mED076EBEECE15EDFD8A011931A69BE5C9FC71D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_mEDB257212F02FDAD2920709E2FE68E4D83931810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_m570CABFBFDAE91A1E1EE1BE38BC293FEC425B6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_m9C1F9C2282B55EC6517F73BDDC70DA8325DA267C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78;
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5D28AF4ACC87C4C432AB9FA17D53E81915E7ED7F 
{
};

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::poseNumber
	int32_t ___poseNumber_0;
	// Oculus.Interaction.Samples.PoseUseSample Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<>4__this
	PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* ___U3CU3E4__this_1;
};

// Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::sceneName
	String_t* ___sceneName_2;
	// UnityEngine.AsyncOperation Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::<asyncLoad>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncLoadU3E5__2_3;
};

// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
struct U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38  : public RuntimeObject
{
};

struct U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields
{
	// Oculus.Interaction.AudioPhysics/CollisionEvents/<>c Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<>9
	U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Collision> Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<>9__4_0
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___U3CU3E9__4_0_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D 
{
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_thumbRequirement
	int32_t ____thumbRequirement_0;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_indexRequirement
	int32_t ____indexRequirement_1;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_middleRequirement
	int32_t ____middleRequirement_2;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_ringRequirement
	int32_t ____ringRequirement_3;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_pinkyRequirement
	int32_t ____pinkyRequirement_4;
	// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::_unselectMode
	int32_t ____unselectMode_5;
};

struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields
{
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPalmRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPalmRuleU3Ek__BackingField_6;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPinchRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPinchRuleU3Ek__BackingField_7;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<FullGrab>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CFullGrabU3Ek__BackingField_8;
};

// Oculus.Interaction.ImpactAudio
struct ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2 
{
	// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::_hardCollisionSound
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____hardCollisionSound_0;
	// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::_softCollisionSound
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____softCollisionSound_1;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.ImpactAudio
struct ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_pinvoke
{
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____hardCollisionSound_0;
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____softCollisionSound_1;
};
// Native definition for COM marshalling of Oculus.Interaction.ImpactAudio
struct ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_com
{
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____hardCollisionSound_0;
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ____softCollisionSound_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Oculus.Interaction.MinMaxPair
struct MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8 
{
	// System.Boolean Oculus.Interaction.MinMaxPair::_useRandomRange
	bool ____useRandomRange_0;
	// System.Single Oculus.Interaction.MinMaxPair::_min
	float ____min_1;
	// System.Single Oculus.Interaction.MinMaxPair::_max
	float ____max_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.MinMaxPair
struct MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_pinvoke
{
	int32_t ____useRandomRange_0;
	float ____min_1;
	float ____max_2;
};
// Native definition for COM marshalling of Oculus.Interaction.MinMaxPair
struct MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_com
{
	int32_t ____useRandomRange_0;
	float ____min_1;
	float ____max_2;
};

// Oculus.Interaction.HandPosing.PoseMeasureParameters
struct PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 
{
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_maxDistance
	float ____maxDistance_0;
	// System.Single Oculus.Interaction.HandPosing.PoseMeasureParameters::_positionRotationWeight
	float ____positionRotationWeight_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.Collision>
struct Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactable_2_t85AE2A52B087345A658C36D072087160847F424C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_4;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_5;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8* ____interactors_6;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t78794DD2D0A0752525F93002D691BBFD48718DA8* ____selectingInteractors_7;
	// System.Action Oculus.Interaction.Interactable`2::WhenInteractorsCountUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenInteractorsCountUpdated_8;
	// System.Action Oculus.Interaction.Interactable`2::WhenSelectingInteractorsCountUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenSelectingInteractorsCountUpdated_9;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_11;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenInteractorAdded_12;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenInteractorRemoved_13;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenSelectingInteractorAdded_14;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_t57302A46EA8CDBBC3894C93E89DC8229A019690E* ____whenSelectingInteractorRemoved_15;
};

struct Interactable_2_t85AE2A52B087345A658C36D072087160847F424C_StaticFields
{
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_tF701CC2F45625A25C8B19CDDCC9D651DD55659D7* ____registry_16;
};

// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tEF5142D8491A1B504F4F7D8131E10D1E4C83EE6C* ___InteractableFilters_7;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldSelect>k__BackingField
	bool ___U3CShouldSelectU3Ek__BackingField_8;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldUnselect>k__BackingField
	bool ___U3CShouldUnselectU3Ek__BackingField_9;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_11;
	// System.Action Oculus.Interaction.Interactor`2::WhenInteractorUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenInteractorUpdated_12;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_13;
	// System.Int32 Oculus.Interaction.Interactor`2::MaxIterationsPerFrame
	int32_t ___MaxIterationsPerFrame_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_performSelect
	bool ____performSelect_15;
	// System.Boolean Oculus.Interaction.Interactor`2::_performUnselect
	bool ____performUnselect_16;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* ____candidate_17;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* ____interactable_18;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* ____selectedInteractable_19;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t407E4C5762FF8835E2393E65437BCA24F7359A8A* ____whenInteractableSet_20;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t407E4C5762FF8835E2393E65437BCA24F7359A8A* ____whenInteractableUnset_21;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t407E4C5762FF8835E2393E65437BCA24F7359A8A* ____whenInteractableSelected_22;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t407E4C5762FF8835E2393E65437BCA24F7359A8A* ____whenInteractableUnselected_23;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_24;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_25;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_26;
};

// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IMonoBehaviourFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tEF5142D8491A1B504F4F7D8131E10D1E4C83EE6C* ___InteractableFilters_7;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldSelect>k__BackingField
	bool ___U3CShouldSelectU3Ek__BackingField_8;
	// System.Boolean Oculus.Interaction.Interactor`2::<ShouldUnselect>k__BackingField
	bool ___U3CShouldUnselectU3Ek__BackingField_9;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_11;
	// System.Action Oculus.Interaction.Interactor`2::WhenInteractorUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenInteractorUpdated_12;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_13;
	// System.Int32 Oculus.Interaction.Interactor`2::MaxIterationsPerFrame
	int32_t ___MaxIterationsPerFrame_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_performSelect
	bool ____performSelect_15;
	// System.Boolean Oculus.Interaction.Interactor`2::_performUnselect
	bool ____performUnselect_16;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	RuntimeObject* ____candidate_17;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	RuntimeObject* ____interactable_18;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	RuntimeObject* ____selectedInteractable_19;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSet_20;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnset_21;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSelected_22;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnselected_23;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_24;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_25;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_26;
};

// Oculus.Interaction.ActiveStateSelector
struct ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.ActiveStateSelector::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.ActiveStateSelector::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Boolean Oculus.Interaction.ActiveStateSelector::_selecting
	bool ____selecting_6;
	// System.Action Oculus.Interaction.ActiveStateSelector::WhenSelected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenSelected_7;
	// System.Action Oculus.Interaction.ActiveStateSelector::WhenUnselected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenUnselected_8;
};

// Oculus.Interaction.AudioPhysics
struct AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Oculus.Interaction.AudioPhysics::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_4;
	// Oculus.Interaction.ImpactAudio Oculus.Interaction.AudioPhysics::_impactAudioEvents
	ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2 ____impactAudioEvents_5;
	// System.Single Oculus.Interaction.AudioPhysics::_velocitySplit
	float ____velocitySplit_6;
	// System.Single Oculus.Interaction.AudioPhysics::_minimumVelocity
	float ____minimumVelocity_7;
	// System.Single Oculus.Interaction.AudioPhysics::_timeBetweenCollisions
	float ____timeBetweenCollisions_8;
	// System.Boolean Oculus.Interaction.AudioPhysics::_allowMultipleCollisions
	bool ____allowMultipleCollisions_9;
	// System.Single Oculus.Interaction.AudioPhysics::_timeAtLastCollision
	float ____timeAtLastCollision_10;
	// System.Boolean Oculus.Interaction.AudioPhysics::_started
	bool ____started_11;
	// Oculus.Interaction.AudioPhysics/CollisionEvents Oculus.Interaction.AudioPhysics::_collisionEvents
	CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* ____collisionEvents_12;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Oculus.Interaction.AudioTrigger
struct AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Oculus.Interaction.AudioTrigger::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Oculus.Interaction.AudioTrigger::_randomAudioClipPool
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____randomAudioClipPool_5;
	// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::_previousAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____previousAudioClip_6;
	// UnityEngine.AudioClip[] Oculus.Interaction.AudioTrigger::_audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____audioClips_7;
	// System.Single Oculus.Interaction.AudioTrigger::_volume
	float ____volume_8;
	// Oculus.Interaction.MinMaxPair Oculus.Interaction.AudioTrigger::_volumeRandomization
	MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8 ____volumeRandomization_9;
	// System.Single Oculus.Interaction.AudioTrigger::_pitch
	float ____pitch_10;
	// Oculus.Interaction.MinMaxPair Oculus.Interaction.AudioTrigger::_pitchRandomization
	MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8 ____pitchRandomization_11;
	// System.Boolean Oculus.Interaction.AudioTrigger::_spatialize
	bool ____spatialize_12;
	// System.Boolean Oculus.Interaction.AudioTrigger::_loop
	bool ____loop_13;
	// System.Single Oculus.Interaction.AudioTrigger::_chanceToPlay
	float ____chanceToPlay_14;
	// System.Boolean Oculus.Interaction.AudioTrigger::_playOnStart
	bool ____playOnStart_15;
};

// Oculus.Interaction.Samples.CarouselView
struct CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::_viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____viewport_4;
	// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::_content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____content_5;
	// UnityEngine.AnimationCurve Oculus.Interaction.Samples.CarouselView::_easeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____easeCurve_6;
	// System.Int32 Oculus.Interaction.Samples.CarouselView::_currentChildIndex
	int32_t ____currentChildIndex_7;
	// System.Single Oculus.Interaction.Samples.CarouselView::_scrollVal
	float ____scrollVal_8;
};

// Oculus.Interaction.Samples.ColorChanger
struct ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer Oculus.Interaction.Samples.ColorChanger::_target
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____target_4;
	// UnityEngine.Material Oculus.Interaction.Samples.ColorChanger::_targetMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____targetMaterial_5;
	// UnityEngine.Color Oculus.Interaction.Samples.ColorChanger::_savedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____savedColor_6;
	// System.Single Oculus.Interaction.Samples.ColorChanger::_lastHue
	float ____lastHue_7;
};

// Oculus.Interaction.Samples.CountdownTimer
struct CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.Samples.CountdownTimer::_countdownTime
	float ____countdownTime_4;
	// System.Boolean Oculus.Interaction.Samples.CountdownTimer::_countdownOn
	bool ____countdownOn_5;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.CountdownTimer::_callback
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____callback_6;
	// UnityEngine.Events.UnityEvent`1<System.Single> Oculus.Interaction.Samples.CountdownTimer::_progressCallback
	UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* ____progressCallback_7;
	// System.Single Oculus.Interaction.Samples.CountdownTimer::_countdownTimer
	float ____countdownTimer_8;
};

// Oculus.Interaction.Samples.EnableTargetOnStart
struct EnableTargetOnStart_t09E86E6C056419CDFAA6AB7BC1099FB4D447F709  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour[] Oculus.Interaction.Samples.EnableTargetOnStart::_components
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ____components_4;
	// UnityEngine.GameObject[] Oculus.Interaction.Samples.EnableTargetOnStart::_gameObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____gameObjects_5;
};

// Oculus.Interaction.Samples.FadeTextAfterActive
struct FadeTextAfterActive_t48518F07AB8C1C1982A329E41B77AAE1DA0D9C2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.Samples.FadeTextAfterActive::_fadeOutTime
	float ____fadeOutTime_4;
	// TMPro.TextMeshPro Oculus.Interaction.Samples.FadeTextAfterActive::_text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ____text_5;
	// System.Single Oculus.Interaction.Samples.FadeTextAfterActive::_timeLeft
	float ____timeLeft_6;
};

// Oculus.Interaction.Input.HandRef
struct HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.HandRef::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.Input.HandRef::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_5;
};

// Oculus.Interaction.HandVisual
struct HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandVisual::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandVisual::Hand
	RuntimeObject* ___Hand_5;
	// UnityEngine.SkinnedMeshRenderer Oculus.Interaction.HandVisual::_skinnedMeshRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ____skinnedMeshRenderer_6;
	// System.Boolean Oculus.Interaction.HandVisual::_updateRootPose
	bool ____updateRootPose_7;
	// System.Boolean Oculus.Interaction.HandVisual::_updateRootScale
	bool ____updateRootScale_8;
	// UnityEngine.Transform Oculus.Interaction.HandVisual::_root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____root_9;
	// Oculus.Interaction.MaterialPropertyBlockEditor Oculus.Interaction.HandVisual::_handMaterialPropertyBlockEditor
	MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* ____handMaterialPropertyBlockEditor_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Oculus.Interaction.HandVisual::_jointTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____jointTransforms_11;
	// System.Action Oculus.Interaction.HandVisual::WhenHandVisualUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenHandVisualUpdated_12;
	// System.Int32 Oculus.Interaction.HandVisual::_wristScalePropertyId
	int32_t ____wristScalePropertyId_13;
	// System.Boolean Oculus.Interaction.HandVisual::<ForceOffVisibility>k__BackingField
	bool ___U3CForceOffVisibilityU3Ek__BackingField_14;
	// System.Boolean Oculus.Interaction.HandVisual::_started
	bool ____started_15;
};

// Oculus.Interaction.Samples.HideHandVisualOnGrab
struct HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandPosing.HandGrabInteractor Oculus.Interaction.Samples.HideHandVisualOnGrab::_handGrabInteractor
	HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* ____handGrabInteractor_4;
	// Oculus.Interaction.HandVisual Oculus.Interaction.Samples.HideHandVisualOnGrab::_handVisual
	HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* ____handVisual_5;
};

// Oculus.Interaction.Samples.LookAtTarget
struct LookAtTarget_tB093B3119B1ADE3D1656211C079DAA2827A50DD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.Samples.LookAtTarget::_toRotate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____toRotate_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.LookAtTarget::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_5;
};

// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors_13;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_14;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_15;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_16;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_17;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_18;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_19;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_20;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_21;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_22;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_23;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_24;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_25;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_26;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera_27;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera_29;
};

// Oculus.Interaction.Samples.PoseUseSample
struct PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.ActiveStateSelector[] Oculus.Interaction.Samples.PoseUseSample::_poses
	ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* ____poses_4;
	// UnityEngine.Material[] Oculus.Interaction.Samples.PoseUseSample::_onSelectIcons
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____onSelectIcons_5;
	// UnityEngine.GameObject Oculus.Interaction.Samples.PoseUseSample::_poseActiveVisualPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____poseActiveVisualPrefab_6;
	// UnityEngine.GameObject[] Oculus.Interaction.Samples.PoseUseSample::_poseActiveVisuals
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____poseActiveVisuals_7;
};

// Oculus.Interaction.Samples.RespawnOnDrop
struct RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.Samples.RespawnOnDrop::_yThresholdForRespawn
	float ____yThresholdForRespawn_4;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RespawnOnDrop::_whenRespawned
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenRespawned_5;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.RespawnOnDrop::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_6;
	// UnityEngine.Quaternion Oculus.Interaction.Samples.RespawnOnDrop::_initialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____initialRotation_7;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.RespawnOnDrop::_initialScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialScale_8;
	// Oculus.Interaction.TwoGrabFreeTransformer[] Oculus.Interaction.Samples.RespawnOnDrop::_freeTransformers
	TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* ____freeTransformers_9;
	// UnityEngine.Rigidbody Oculus.Interaction.Samples.RespawnOnDrop::_rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidBody_10;
};

// Oculus.Interaction.Samples.RotationAudioEvents
struct RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Samples.RotationAudioEvents::_interactableView
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____interactableView_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::_trackedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackedTransform_5;
	// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_6;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_thresholdDeg
	float ____thresholdDeg_7;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_maxRangeDeg
	float ____maxRangeDeg_8;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotationStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenRotationStarted_9;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotationEnded
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenRotationEnded_10;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotatedOpen
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenRotatedOpen_11;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::_whenRotatedClosed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenRotatedClosed_12;
	// Oculus.Interaction.IInteractableView Oculus.Interaction.Samples.RotationAudioEvents::InteractableView
	RuntimeObject* ___InteractableView_13;
	// System.Single Oculus.Interaction.Samples.RotationAudioEvents::_baseDelta
	float ____baseDelta_14;
	// System.Boolean Oculus.Interaction.Samples.RotationAudioEvents::_isRotating
	bool ____isRotating_15;
	// Oculus.Interaction.Samples.RotationAudioEvents/Direction Oculus.Interaction.Samples.RotationAudioEvents::_lastCrossedDirection
	int32_t ____lastCrossedDirection_16;
	// System.Boolean Oculus.Interaction.Samples.RotationAudioEvents::_started
	bool ____started_17;
};

// Oculus.Interaction.Samples.ScaleAudioEvents
struct ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Samples.ScaleAudioEvents::_interactableView
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____interactableView_4;
	// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::_trackedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackedTransform_5;
	// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::_stepSize
	float ____stepSize_6;
	// System.Int32 Oculus.Interaction.Samples.ScaleAudioEvents::_maxEventFreq
	int32_t ____maxEventFreq_7;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScalingStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenScalingStarted_8;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScalingEnded
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenScalingEnded_9;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScaledUp
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenScaledUp_10;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::_whenScaledDown
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____whenScaledDown_11;
	// Oculus.Interaction.IInteractableView Oculus.Interaction.Samples.ScaleAudioEvents::InteractableView
	RuntimeObject* ___InteractableView_12;
	// System.Boolean Oculus.Interaction.Samples.ScaleAudioEvents::_isScaling
	bool ____isScaling_13;
	// UnityEngine.Vector3 Oculus.Interaction.Samples.ScaleAudioEvents::_lastStep
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastStep_14;
	// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::_lastEventTime
	float ____lastEventTime_15;
	// Oculus.Interaction.Samples.ScaleAudioEvents/Direction Oculus.Interaction.Samples.ScaleAudioEvents::_direction
	int32_t ____direction_16;
	// System.Boolean Oculus.Interaction.Samples.ScaleAudioEvents::_started
	bool ____started_17;
};

// Oculus.Interaction.Samples.ScaleModifier
struct ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Samples.SceneLoader
struct SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Samples.SceneLoader::_loading
	bool ____loading_4;
};

// Oculus.Interaction.Samples.ShouldHideHandOnGrab
struct ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Samples.StayInView
struct StayInView_tE8D2B7875C6FA1C3D1632647610427931746757A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.Samples.StayInView::_eyeCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____eyeCenter_4;
	// System.Single Oculus.Interaction.Samples.StayInView::_extraDistanceForward
	float ____extraDistanceForward_5;
	// System.Boolean Oculus.Interaction.Samples.StayInView::_zeroOutEyeHeight
	bool ____zeroOutEyeHeight_6;
};

// Oculus.Interaction.TwoGrabFreeTransformer
struct TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Quaternion Oculus.Interaction.TwoGrabFreeTransformer::_activeRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____activeRotation_4;
	// UnityEngine.Vector3 Oculus.Interaction.TwoGrabFreeTransformer::_initialLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialLocalScale_5;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_initialDistance
	float ____initialDistance_6;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_initialScale
	float ____initialScale_7;
	// System.Single Oculus.Interaction.TwoGrabFreeTransformer::_activeScale
	float ____activeScale_8;
	// UnityEngine.Pose Oculus.Interaction.TwoGrabFreeTransformer::_previousGrabPointA
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____previousGrabPointA_9;
	// UnityEngine.Pose Oculus.Interaction.TwoGrabFreeTransformer::_previousGrabPointB
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____previousGrabPointB_10;
	// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints Oculus.Interaction.TwoGrabFreeTransformer::_constraints
	TwoGrabFreeConstraints_tFD9DEEFCB352A72EE319F2C7C386E43F67CA0865* ____constraints_11;
	// Oculus.Interaction.IGrabbable Oculus.Interaction.TwoGrabFreeTransformer::_grabbable
	RuntimeObject* ____grabbable_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.AudioPhysics/CollisionEvents
struct CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.Collision> Oculus.Interaction.AudioPhysics/CollisionEvents::WhenCollisionEnter
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___WhenCollisionEnter_4;
};

// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct PointerInteractable_2_tEECF4E3894F5B0E1721F59D3150A8B348DE08F5E  : public Interactable_2_t85AE2A52B087345A658C36D072087160847F424C
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.PointerInteractable`2::_pointableElement
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____pointableElement_17;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_18;
	// System.Action`1<Oculus.Interaction.PointerArgs> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_t4E869C10687560FFADF53A2249A616FC9633AC1C* ___WhenPointerEventRaised_19;
	// System.Boolean Oculus.Interaction.PointerInteractable`2::_started
	bool ____started_20;
};

// Oculus.Interaction.PointerInteractor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>
struct PointerInteractor_2_t7E9806AE4AFACECA57605781831C82BFC84F1F6F  : public Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Oculus.Interaction.HandPosing.HandGrabInteractable
struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986  : public PointerInteractable_2_tEECF4E3894F5B0E1721F59D3150A8B348DE08F5E
{
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractable::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_21;
	// UnityEngine.Rigidbody Oculus.Interaction.HandPosing.HandGrabInteractable::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_22;
	// System.Boolean Oculus.Interaction.HandPosing.HandGrabInteractable::_resetGrabOnGrabsUpdated
	bool ____resetGrabOnGrabsUpdated_23;
	// Oculus.Interaction.PhysicsGrabbable Oculus.Interaction.HandPosing.HandGrabInteractable::_physicsGrabbable
	PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF* ____physicsGrabbable_24;
	// Oculus.Interaction.HandPosing.PoseMeasureParameters Oculus.Interaction.HandPosing.HandGrabInteractable::_scoringModifier
	PoseMeasureParameters_t8A836E7C8702C2E91E18C3E11FA8EBD3FD5D4AB1 ____scoringModifier_25;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandPosing.HandGrabInteractable::_supportedGrabTypes
	int32_t ____supportedGrabTypes_26;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_pinchGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____pinchGrabRules_27;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandPosing.HandGrabInteractable::_palmGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____palmGrabRules_28;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractable::_movementProvider
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____movementProvider_29;
	// Oculus.Interaction.IMovementProvider Oculus.Interaction.HandPosing.HandGrabInteractable::<MovementProvider>k__BackingField
	RuntimeObject* ___U3CMovementProviderU3Ek__BackingField_30;
	// Oculus.Interaction.HandPosing.HandAlignType Oculus.Interaction.HandPosing.HandGrabInteractable::_handAligment
	int32_t ____handAligment_31;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandPosing.HandGrabPoint> Oculus.Interaction.HandPosing.HandGrabInteractable::_handGrabPoints
	List_1_tA3C96FB2BF6285D5475DB19EF23AF65E5EDF7721* ____handGrabPoints_32;
	// UnityEngine.Collider[] Oculus.Interaction.HandPosing.HandGrabInteractable::<Colliders>k__BackingField
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___U3CCollidersU3Ek__BackingField_33;
	// Oculus.Interaction.HandPosing.GrabPointsPoseFinder Oculus.Interaction.HandPosing.HandGrabInteractable::_grabPointsPoseFinder
	GrabPointsPoseFinder_t89BF512A1E1A7EAD94A8B140B2D86BB108E27095* ____grabPointsPoseFinder_34;
};

struct HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986_StaticFields
{
	// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable> Oculus.Interaction.HandPosing.HandGrabInteractable::_registry
	CollisionInteractionRegistry_2_tEFBB537D54ED80B332B265B4D00DB7ACD8DCF833* ____registry_35;
};

// Oculus.Interaction.HandPosing.HandGrabInteractor
struct HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2  : public PointerInteractor_2_t7E9806AE4AFACECA57605781831C82BFC84F1F6F
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractor::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_27;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandPosing.HandGrabInteractor::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_28;
	// UnityEngine.Rigidbody Oculus.Interaction.HandPosing.HandGrabInteractor::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_29;
	// Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.HandPosing.HandGrabInteractor::_handGrabApi
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* ____handGrabApi_30;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandPosing.HandGrabInteractor::_supportedGrabTypes
	int32_t ____supportedGrabTypes_31;
	// Oculus.Interaction.HandWristOffset Oculus.Interaction.HandPosing.HandGrabInteractor::_gripPoint
	HandWristOffset_t14881D3F3DE56E04E9415060498F0CB82F571F8A* ____gripPoint_32;
	// UnityEngine.Transform Oculus.Interaction.HandPosing.HandGrabInteractor::_pinchPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pinchPoint_33;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandPosing.HandGrabInteractor::_velocityCalculator
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____velocityCalculator_34;
	// Oculus.Interaction.Throw.IVelocityCalculator Oculus.Interaction.HandPosing.HandGrabInteractor::<VelocityCalculator>k__BackingField
	RuntimeObject* ___U3CVelocityCalculatorU3Ek__BackingField_35;
	// Oculus.Interaction.HandPosing.SnapAddress`1<Oculus.Interaction.HandPosing.HandGrabInteractable> Oculus.Interaction.HandPosing.HandGrabInteractor::_currentSnap
	SnapAddress_1_tC6DE0261C244492136A61F66A29B2C555089D862* ____currentSnap_36;
	// Oculus.Interaction.HandPosing.HandPose Oculus.Interaction.HandPosing.HandGrabInteractor::_cachedBestHandPose
	HandPose_t1A009FF05E74070BB94FA24A636B242F15D528D8* ____cachedBestHandPose_37;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_cachedBestSnapPoint
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____cachedBestSnapPoint_38;
	// Oculus.Interaction.IMovement Oculus.Interaction.HandPosing.HandGrabInteractor::_movement
	RuntimeObject* ____movement_39;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_wristToSnapOffset
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____wristToSnapOffset_40;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_snapOffset
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____snapOffset_41;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_trackedGripPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____trackedGripPose_42;
	// UnityEngine.Pose Oculus.Interaction.HandPosing.HandGrabInteractor::_trackedPinchPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____trackedPinchPose_43;
	// Oculus.Interaction.Grab.HandGrabbableData Oculus.Interaction.HandPosing.HandGrabInteractor::_lastInteractableData
	HandGrabbableData_t70DB908DBA5946A4D14E6EA8E20C2BF3B83EE7BD* ____lastInteractableData_44;
	// System.Single Oculus.Interaction.HandPosing.HandGrabInteractor::<SnapStrength>k__BackingField
	float ___U3CSnapStrengthU3Ek__BackingField_45;
	// Oculus.Interaction.HandPosing.ISnapData Oculus.Interaction.HandPosing.HandGrabInteractor::<SnapData>k__BackingField
	RuntimeObject* ___U3CSnapDataU3Ek__BackingField_46;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor::<WhenSnapStarted>k__BackingField
	Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* ___U3CWhenSnapStartedU3Ek__BackingField_47;
	// System.Action`1<Oculus.Interaction.HandPosing.ISnapper> Oculus.Interaction.HandPosing.HandGrabInteractor::<WhenSnapEnded>k__BackingField
	Action_1_tAB23AFC877506AF4C4CF91A26FDE48FBD9A93038* ___U3CWhenSnapEndedU3Ek__BackingField_48;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* m_Items[1];

	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.ActiveStateSelector[]
struct ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78  : public RuntimeArray
{
	ALIGN_FIELD (8) ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* m_Items[1];

	inline ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.Input.HandRef[]
struct HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342  : public RuntimeArray
{
	ALIGN_FIELD (8) HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* m_Items[1];

	inline HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.TwoGrabFreeTransformer[]
struct TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A  : public RuntimeArray
{
	ALIGN_FIELD (8) TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* m_Items[1];

	inline TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Interactor_2_get_State_m6425C65DC9166A222ED2A4850455B4A377DA3FC8_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_SelectedInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.AudioPhysics/CollisionEvents>()
inline CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* GameObject_AddComponent_TisCollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65_mAB989F2F1D86B58092C1ACEAF57C032EF2BF1DCA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Collision>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7A62C2251042042F7CBABE072CD3CC4E129ACE19 (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::add_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_add_WhenCollisionEnter_m8D75E886D4866CBE2186DEA531392A0851FFC828 (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::remove_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_remove_WhenCollisionEnter_m427C00B01BE0812D24FE0FF3976AE56CB4C473C2 (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AudioPhysics::TryPlayCollisionAudio(UnityEngine.Collision,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_TryPlayCollisionAudio_m186514445C38A1C96C564D3EC466D593B67E0D9B (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Oculus.Interaction.AudioPhysics>(T&)
inline bool GameObject_TryGetComponent_TisAudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B_mD1837F2D3975E6E5BCD601C14B00FCBE5F75FDC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Single Oculus.Interaction.AudioPhysics::GetObjectVelocity(Oculus.Interaction.AudioPhysics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioPhysics_GetObjectVelocity_m86284A432AC074F11E06E3BC47E233C7A22527BD (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* ___target0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AudioPhysics::PlayCollisionAudio(Oculus.Interaction.ImpactAudio,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlayCollisionAudio_m5FBC1CFD72B242301AF32161A23F254C4CC7AB66 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2 ___impactAudio0, float ___magnitude1, const RuntimeMethod* method) ;
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_HardCollisionSound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_SoftCollisionSound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_inline (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AudioPhysics::PlaySoundOnAudioTrigger(Oculus.Interaction.AudioTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlaySoundOnAudioTrigger_mC83E7ADCD28A07266A6DB0203D5B6BB117600E08 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ___audioTrigger0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AudioTrigger::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_PlayAudio_m53EDF1EDCC5067C250A5E972C29A231ACBAAD598 (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Collision>::Invoke(T)
inline void Action_1_Invoke_m8BE888962814019C7D77B23ECB16D927ECA818EB_inline (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC197BD95FDC59A35099482CBA34F65CE76C622A7 (U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::Add(T)
inline void List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_inline (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8 (int32_t ___seed0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.MinMaxPair::get_UseRandomRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.MinMaxPair::get_Min()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.MinMaxPair::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::RandomClipWithoutRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioTrigger_RandomClipWithoutRepeat_mB344C01020114F131CF4CDAE4A5E5CE70281ABED (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
inline int32_t List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m56595F072414FB8469C297A3FFFC33496D0BA0C8 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::.ctor()
inline void List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::GetCurrentChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CarouselView_GetCurrentChild_mEF16FA56034EE866B1C0B8F38E89C3F0A370628B (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_m1DFB9F055F838E4CB32A471460AEA23D85DA8B57 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___layoutRoot0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollToChild(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollToChild_mB0282AA8104AFC10E8992E108E77D823911A27B1 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___child0, float ___amount011, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>::get_State()
inline int32_t Interactor_2_get_State_mB374F6767B81C1B0D67E0E15E497CF6CDED3935B_inline (Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B*, const RuntimeMethod*))Interactor_2_get_State_m6425C65DC9166A222ED2A4850455B4A377DA3FC8_gshared_inline)(__this, method);
}
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandPosing.HandGrabInteractable>::get_SelectedInteractable()
inline HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* Interactor_2_get_SelectedInteractable_m9AF31BA2401767028B0F2AF4ED4335972E16A610_inline (Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B* __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* (*) (Interactor_2_t871CF2D0BC7681F581C3BB661EF7EF1F303E870B*, const RuntimeMethod*))Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Oculus.Interaction.Samples.ShouldHideHandOnGrab>(T&)
inline bool GameObject_TryGetComponent_TisShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225_m65E854CA9119C0647AA2970B4E1581826BD31329 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Void Oculus.Interaction.HandVisual::set_ForceOffVisibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandVisual_set_ForceOffVisibility_mA193E64D7A4E8F539BF02CD723D9DA870C90E5C7_inline (HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandGrabInteractor(Oculus.Interaction.HandPosing.HandGrabInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandGrabInteractor_m3A2E71CE76E326E2CD2A0B838F3080D3A0BD88F1_inline (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* ___handGrabInteractor0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandVisual(Oculus.Interaction.HandVisual)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandVisual_mFDCFBCD4EBAB52AEF2F5393943432F7F414F29BD_inline (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* ___handVisual0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m635CE6FF2CF37C100DAB72A366D5C6C09FD182E6 (U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GameObject_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m719B66DD4F7BB79144CF8B6836E8F8343895FE28 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* GameObject_GetComponentInChildren_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mBAFA1EFDA78758B4B85A530FB817AA0E4E8E9393 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.ActiveStateSelector::add_WhenSelected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveStateSelector_add_WhenSelected_m8573112236A5E1BE9210411A43006A785D5C744B (ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.ActiveStateSelector::add_WhenUnselected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveStateSelector_add_WhenUnselected_m17BB61289D6B73D6074E3DC4973C17CCF21E8D57 (ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<OVRCameraRig>()
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B (const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.Transform OVRCameraRig::get_centerEyeAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Oculus.Interaction.Input.HandRef>()
inline HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* Component_GetComponents_TisHandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977_mA46B0153470667D040AD2552563EEE1829340A0F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.HandRef::GetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandRef_GetRootPose_m04AFFB03A7F61F09E262F6123BB4F2252F9367F0 (HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandRef::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandRef_get_Handedness_mC78780570E5E479E0BA0022564C0FEE220649918 (HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.PoseUseSample::ShowVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_ShowVisuals_m30BC84A4F1C83268B61B7FD8DA9662A77E88A710 (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, int32_t ___poseNumber0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.PoseUseSample::HideVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_HideVisuals_mCEB8FD00C59B39F69B1D9554191F55C76ABE4650 (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, int32_t ___poseNumber0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Oculus.Interaction.TwoGrabFreeTransformer>()
inline TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* Component_GetComponents_TisTwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344_m82ABD5D6E1B4F6522812E4785F07F62F505EEDAF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.TwoGrabFreeTransformer::MarkAsBaseScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabFreeTransformer_MarkAsBaseScale_m4B4C2BCB0D5D81DD50BE420226279EC4FBC76596 (TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Samples.RotationAudioEvents::GetTotalDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotationAudioEvents_GetTotalDelta_m6E66F48DAF7AAEDFEEBE000A719E7D646622D666 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RotationAudioEvents_get_TrackedTransform_mF4B368235C0B351474DCA312E5E8DE59F397D61B (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Samples.RotationAudioEvents::GetCurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 RotationAudioEvents_GetCurrentRotation_m25D818176E4C177F8A53FEA857DCCB30AC25202C (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationEnded_m1068B0E7336B53F4BACB84B1A0E7DE34D56A0451 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationStarted_m4B6FB0D1435F7D640275B03E3D0D3155981D7871 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_UpdateRotation_mFB6E6D015072D45524704F2D24F494AB174417C0 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ScaleAudioEvents_get_TrackedTransform_m4F7A78F1D91FD82991E0636C773583944548E462 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::GetTotalDelta(Oculus.Interaction.Samples.ScaleAudioEvents/Direction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleAudioEvents_GetTotalDelta_mF949B30F7774F1FA166BC4C99987F09A60C77D36 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, int32_t* ___direction0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingEnded_m22E19C9E78B9C104B08A769ED5767631605D2804 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingStarted_mAC45C31D04221EE5EE83DF8024D2BB26B3BA0C59 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::UpdateScaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_UpdateScaling_mD7A487C286EA70BFC5104304EF5D63FAF8F82E15 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Oculus.Interaction.Samples.SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_m90E81AA3DE97DF5F6642AA05466B50EAE68BCC21 (SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126* __this, String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m432ECE43BCAF427E1BC972FFF7C5BF0473643BCA (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74 (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.AudioPhysics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_Start_m090C1A1D8C9C6029EACF41642A9376A4FD5C9012 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65_mAB989F2F1D86B58092C1ACEAF57C032EF2BF1DCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_11);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// _collisionEvents = _rigidbody.gameObject.AddComponent<CollisionEvents>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* L_3;
		L_3 = GameObject_AddComponent_TisCollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65_mAB989F2F1D86B58092C1ACEAF57C032EF2BF1DCA(L_2, GameObject_AddComponent_TisCollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65_mAB989F2F1D86B58092C1ACEAF57C032EF2BF1DCA_RuntimeMethod_var);
		__this->____collisionEvents_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collisionEvents_12), (void*)L_3);
		// this.EndStart(ref _started);
		bool* L_4 = (&__this->____started_11);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnEnable_m98E6695F0ACFB9EC68BFBF7F180676FAB9F5FE22 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// _collisionEvents.WhenCollisionEnter += HandleCollisionEnter;
		CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* L_1 = __this->____collisionEvents_12;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_2 = (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)il2cpp_codegen_object_new(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m7A62C2251042042F7CBABE072CD3CC4E129ACE19(L_2, __this, (intptr_t)((void*)AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		CollisionEvents_add_WhenCollisionEnter_m8D75E886D4866CBE2186DEA531392A0851FFC828(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnDisable_m5955465470215E3A0FEA3F50041D88550AA1D369 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// _collisionEvents.WhenCollisionEnter -= HandleCollisionEnter;
		CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* L_1 = __this->____collisionEvents_12;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_2 = (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)il2cpp_codegen_object_new(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m7A62C2251042042F7CBABE072CD3CC4E129ACE19(L_2, __this, (intptr_t)((void*)AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		CollisionEvents_remove_WhenCollisionEnter_m427C00B01BE0812D24FE0FF3976AE56CB4C473C2(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_OnDestroy_m1A6E69BDE728FD265D2F7BC7B2913A74DEF28367 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_collisionEvents != null)
		CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* L_0 = __this->____collisionEvents_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(_collisionEvents);
		CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* L_2 = __this->____collisionEvents_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::HandleCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_HandleCollisionEnter_m220A3678A69B418E037418944BA86718FD2CE29B (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// TryPlayCollisionAudio(collision, _rigidbody);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_4;
		AudioPhysics_TryPlayCollisionAudio_m186514445C38A1C96C564D3EC466D593B67E0D9B(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::TryPlayCollisionAudio(UnityEngine.Collision,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_TryPlayCollisionAudio_m186514445C38A1C96C564D3EC466D593B67E0D9B (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B_mD1837F2D3975E6E5BCD601C14B00FCBE5F75FDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* V_3 = NULL;
	{
		// float collisionMagnitude = collision.relativeVelocity.sqrMagnitude;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_0, NULL);
		V_2 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		V_0 = L_2;
		// if (collision.collider.gameObject == null)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_3);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_3, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// float deltaTime = Time.time - _timeAtLastCollision;
		float L_7;
		L_7 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_8 = __this->____timeAtLastCollision_10;
		V_1 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// if (_timeBetweenCollisions > deltaTime)
		float L_9 = __this->____timeBetweenCollisions_8;
		float L_10 = V_1;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_003a;
		}
	}
	{
		// return;
		return;
	}

IL_003a:
	{
		// if (_allowMultipleCollisions == false)
		bool L_11 = __this->____allowMultipleCollisions_9;
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		// if (collision.collider.gameObject.TryGetComponent(out AudioPhysics otherAudioPhysicsObj))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision0;
		NullCheck(L_12);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_12, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_TryGetComponent_TisAudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B_mD1837F2D3975E6E5BCD601C14B00FCBE5F75FDC5(L_14, (&V_3), GameObject_TryGetComponent_TisAudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B_mD1837F2D3975E6E5BCD601C14B00FCBE5F75FDC5_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		// if (GetObjectVelocity(otherAudioPhysicsObj) > GetObjectVelocity(this))
		AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* L_16 = V_3;
		float L_17;
		L_17 = AudioPhysics_GetObjectVelocity_m86284A432AC074F11E06E3BC47E233C7A22527BD(L_16, NULL);
		float L_18;
		L_18 = AudioPhysics_GetObjectVelocity_m86284A432AC074F11E06E3BC47E233C7A22527BD(__this, NULL);
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0065;
		}
	}
	{
		// return;
		return;
	}

IL_0065:
	{
		// _timeAtLastCollision = Time.time;
		float L_19;
		L_19 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____timeAtLastCollision_10 = L_19;
		// PlayCollisionAudio(_impactAudioEvents, collisionMagnitude);
		ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2 L_20 = __this->____impactAudioEvents_5;
		float L_21 = V_0;
		AudioPhysics_PlayCollisionAudio_m5FBC1CFD72B242301AF32161A23F254C4CC7AB66(__this, L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::PlayCollisionAudio(Oculus.Interaction.ImpactAudio,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlayCollisionAudio_m5FBC1CFD72B242301AF32161A23F254C4CC7AB66 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2 ___impactAudio0, float ___magnitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (impactAudio.HardCollisionSound == null || impactAudio.SoftCollisionSound == null)
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0;
		L_0 = ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline((&___impactAudio0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_2;
		L_2 = ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_inline((&___impactAudio0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_001e:
	{
		// return;
		return;
	}

IL_001f:
	{
		// if (magnitude > _minimumVelocity)
		float L_4 = ___magnitude1;
		float L_5 = __this->____minimumVelocity_7;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_005b;
		}
	}
	{
		// if (magnitude > _velocitySplit && impactAudio.HardCollisionSound != null)
		float L_6 = ___magnitude1;
		float L_7 = __this->____velocitySplit_6;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_004e;
		}
	}
	{
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_8;
		L_8 = ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline((&___impactAudio0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// PlaySoundOnAudioTrigger(impactAudio.HardCollisionSound);
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_10;
		L_10 = ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline((&___impactAudio0), NULL);
		AudioPhysics_PlaySoundOnAudioTrigger_mC83E7ADCD28A07266A6DB0203D5B6BB117600E08(__this, L_10, NULL);
		return;
	}

IL_004e:
	{
		// PlaySoundOnAudioTrigger(impactAudio.SoftCollisionSound);
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_11;
		L_11 = ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_inline((&___impactAudio0), NULL);
		AudioPhysics_PlaySoundOnAudioTrigger_mC83E7ADCD28A07266A6DB0203D5B6BB117600E08(__this, L_11, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Single Oculus.Interaction.AudioPhysics::GetObjectVelocity(Oculus.Interaction.AudioPhysics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioPhysics_GetObjectVelocity_m86284A432AC074F11E06E3BC47E233C7A22527BD (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* ___target0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return target._rigidbody.velocity.sqrMagnitude;
		AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = L_0->____rigidbody_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::PlaySoundOnAudioTrigger(Oculus.Interaction.AudioTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics_PlaySoundOnAudioTrigger_mC83E7ADCD28A07266A6DB0203D5B6BB117600E08 (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ___audioTrigger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioTrigger != null)
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0 = ___audioTrigger0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// audioTrigger.PlayAudio();
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_2 = ___audioTrigger0;
		NullCheck(L_2);
		AudioTrigger_PlayAudio_m53EDF1EDCC5067C250A5E972C29A231ACBAAD598(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPhysics__ctor_m266D76A3373751145AA920DF219D0F7874DC9ABD (AudioPhysics_t61104C241007770EEBD90EA279344F09A01E3C2B* __this, const RuntimeMethod* method) 
{
	{
		// private float _velocitySplit = 1.0f;
		__this->____velocitySplit_6 = (1.0f);
		// private float _timeBetweenCollisions = 0.2f;
		__this->____timeBetweenCollisions_8 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::add_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_add_WhenCollisionEnter_m8D75E886D4866CBE2186DEA531392A0851FFC828 (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_0 = NULL;
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_1 = NULL;
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_2 = NULL;
	{
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_0 = __this->___WhenCollisionEnter_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_2 = V_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)Castclass((RuntimeObject*)L_4, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var));
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2** L_5 = (&__this->___WhenCollisionEnter_4);
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_6 = V_2;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_7 = V_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_9 = V_0;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)L_9) == ((RuntimeObject*)(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::remove_WhenCollisionEnter(System.Action`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_remove_WhenCollisionEnter_m427C00B01BE0812D24FE0FF3976AE56CB4C473C2 (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_0 = NULL;
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_1 = NULL;
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* V_2 = NULL;
	{
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_0 = __this->___WhenCollisionEnter_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_2 = V_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)Castclass((RuntimeObject*)L_4, Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var));
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2** L_5 = (&__this->___WhenCollisionEnter_4);
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_6 = V_2;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_7 = V_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_9 = V_0;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)L_9) == ((RuntimeObject*)(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents_OnCollisionEnter_mD8D492ED8ACF8D979FBAF296B69CB1C7C4D7526B (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// WhenCollisionEnter.Invoke(collision);
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_0 = __this->___WhenCollisionEnter_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_0);
		Action_1_Invoke_m8BE888962814019C7D77B23ECB16D927ECA818EB_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvents__ctor_m7734430D9B82FC41408B6DD6ECCD417D59DA1753 (CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_mEDB257212F02FDAD2920709E2FE68E4D83931810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* G_B2_0 = NULL;
	CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* G_B2_1 = NULL;
	Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* G_B1_0 = NULL;
	CollisionEvents_t036F7D60BC8FBC5E55F19F7E4B92CA0CE3F99A65* G_B1_1 = NULL;
	{
		// public event Action<Collision> WhenCollisionEnter = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var);
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_0 = ((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var);
		U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* L_2 = ((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_3 = (Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2*)il2cpp_codegen_object_new(Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m7A62C2251042042F7CBABE072CD3CC4E129ACE19(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__4_0_mEDB257212F02FDAD2920709E2FE68E4D83931810_RuntimeMethod_var), NULL);
		Action_1_t828B8B4DD1F7F9D7E01CE4F4F847669A57C106B2* L_4 = L_3;
		((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenCollisionEnter_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenCollisionEnter_4), (void*)G_B2_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2CAD80F488CCF6026592044E5DCC12CB8B85BF72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* L_0 = (U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38*)il2cpp_codegen_object_new(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC197BD95FDC59A35099482CBA34F65CE76C622A7(L_0, NULL);
		((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC197BD95FDC59A35099482CBA34F65CE76C622A7 (U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.AudioPhysics/CollisionEvents/<>c::<.ctor>b__4_0(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_0_mEDB257212F02FDAD2920709E2FE68E4D83931810 (U3CU3Ec_t4F224F2E0174B59EA3EE4570F53E25D51D5E6A38* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<Collision> WhenCollisionEnter = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_pinvoke(const ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2& unmarshaled, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_pinvoke& marshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_pinvoke_back(const ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_pinvoke& marshaled, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2& unmarshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_pinvoke_cleanup(ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_com(const ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2& unmarshaled, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_com& marshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_com_back(const ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_com& marshaled, ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2& unmarshaled)
{
	Exception_t* ____hardCollisionSound_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_hardCollisionSound' of type 'ImpactAudio': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____hardCollisionSound_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.ImpactAudio
IL2CPP_EXTERN_C void ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshal_com_cleanup(ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2_marshaled_com& marshaled)
{
}
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_HardCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039 (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) 
{
	{
		// public AudioTrigger HardCollisionSound => _hardCollisionSound;
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0 = __this->____hardCollisionSound_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2*>(__this + _offset);
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* _returnValue;
	_returnValue = ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline(_thisAdjusted, method);
	return _returnValue;
}
// Oculus.Interaction.AudioTrigger Oculus.Interaction.ImpactAudio::get_SoftCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7 (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) 
{
	{
		// public AudioTrigger SoftCollisionSound => _softCollisionSound;
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0 = __this->____softCollisionSound_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2*>(__this + _offset);
	AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* _returnValue;
	_returnValue = ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.AudioTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_Start_mD613262A9DDCC298510077C58E5D4A94837AFC70 (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->____audioSource_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_4), (void*)L_1);
		// for (int i = 0; i < _audioClips.Length; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// _randomAudioClipPool.Add(_audioClips[i]);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_2 = __this->____randomAudioClipPool_5;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->____audioClips_7;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_inline(L_2, L_6, List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_RuntimeMethod_var);
		// for (int i = 0; i < _audioClips.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < _audioClips.Length; i++)
		int32_t L_8 = V_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = __this->____audioClips_7;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// _audioSource.volume = _volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->____audioSource_4;
		float L_11 = __this->____volume_8;
		NullCheck(L_10);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_10, L_11, NULL);
		// _audioSource.pitch = _pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->____audioSource_4;
		float L_13 = __this->____pitch_10;
		NullCheck(L_12);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_12, L_13, NULL);
		// _audioSource.spatialize = _spatialize;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->____audioSource_4;
		bool L_15 = __this->____spatialize_12;
		NullCheck(L_14);
		AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C(L_14, L_15, NULL);
		// _audioSource.loop = _loop;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->____audioSource_4;
		bool L_17 = __this->____loop_13;
		NullCheck(L_16);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_16, L_17, NULL);
		// Random.InitState((int)Time.time);
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(il2cpp_codegen_cast_double_to_int<int32_t>(L_18), NULL);
		// if (_playOnStart)
		bool L_19 = __this->____playOnStart_15;
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		// PlayAudio();
		AudioTrigger_PlayAudio_m53EDF1EDCC5067C250A5E972C29A231ACBAAD598(__this, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.AudioTrigger::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger_PlayAudio_m53EDF1EDCC5067C250A5E972C29A231ACBAAD598 (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* G_B12_0 = NULL;
	{
		// if (!_audioSource.isActiveAndEnabled)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// float pick = Random.Range(0.0f, 100.0f);
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (100.0f), NULL);
		V_0 = L_2;
		// if (_chanceToPlay < 100 && pick > _chanceToPlay)
		float L_3 = __this->____chanceToPlay_14;
		if ((!(((float)L_3) < ((float)(100.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_4 = V_0;
		float L_5 = __this->____chanceToPlay_14;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0035;
		}
	}
	{
		// return;
		return;
	}

IL_0035:
	{
		// if (_volumeRandomization.UseRandomRange == true)
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_6 = (&__this->____volumeRandomization_9);
		bool L_7;
		L_7 = MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// _audioSource.volume = Random.Range(_volumeRandomization.Min, _volumeRandomization.Max);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____audioSource_4;
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_9 = (&__this->____volumeRandomization_9);
		float L_10;
		L_10 = MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_inline(L_9, NULL);
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_11 = (&__this->____volumeRandomization_9);
		float L_12;
		L_12 = MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_inline(L_11, NULL);
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_10, L_12, NULL);
		NullCheck(L_8);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_8, L_13, NULL);
	}

IL_0068:
	{
		// if (_pitchRandomization.UseRandomRange == true)
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_14 = (&__this->____pitchRandomization_11);
		bool L_15;
		L_15 = MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		// _audioSource.pitch = Random.Range(_pitchRandomization.Min, _pitchRandomization.Max);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->____audioSource_4;
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_17 = (&__this->____pitchRandomization_11);
		float L_18;
		L_18 = MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_inline(L_17, NULL);
		MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* L_19 = (&__this->____pitchRandomization_11);
		float L_20;
		L_20 = MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_inline(L_19, NULL);
		float L_21;
		L_21 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_18, L_20, NULL);
		NullCheck(L_16);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_16, L_21, NULL);
	}

IL_009b:
	{
		// AudioClip clipToPlay = _audioClips.Length == 1 ? _audioClips[0] : RandomClipWithoutRepeat();
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_22 = __this->____audioClips_7;
		NullCheck(L_22);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))) == ((int32_t)1)))
		{
			goto IL_00ae;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23;
		L_23 = AudioTrigger_RandomClipWithoutRepeat_mB344C01020114F131CF4CDAE4A5E5CE70281ABED(__this, NULL);
		G_B12_0 = L_23;
		goto IL_00b6;
	}

IL_00ae:
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_24 = __this->____audioClips_7;
		NullCheck(L_24);
		int32_t L_25 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		G_B12_0 = L_26;
	}

IL_00b6:
	{
		V_1 = G_B12_0;
		// _audioSource.clip = clipToPlay;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->____audioSource_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = V_1;
		NullCheck(L_27);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_27, L_28, NULL);
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->____audioSource_4;
		NullCheck(L_29);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_29, NULL);
		// }
		return;
	}
}
// UnityEngine.AudioClip Oculus.Interaction.AudioTrigger::RandomClipWithoutRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioTrigger_RandomClipWithoutRepeat_mB344C01020114F131CF4CDAE4A5E5CE70281ABED (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m56595F072414FB8469C297A3FFFC33496D0BA0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		// int randomIndex = Random.Range(0, _randomAudioClipPool.Count);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_0 = __this->____randomAudioClipPool_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_0, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_1, NULL);
		V_0 = L_2;
		// AudioClip randomClip = _randomAudioClipPool[randomIndex];
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_3 = __this->____randomAudioClipPool_5;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_3, L_4, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		V_1 = L_5;
		// _randomAudioClipPool.RemoveAt(randomIndex);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_6 = __this->____randomAudioClipPool_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m56595F072414FB8469C297A3FFFC33496D0BA0C8(L_6, L_7, List_1_RemoveAt_m56595F072414FB8469C297A3FFFC33496D0BA0C8_RuntimeMethod_var);
		// if (_previousAudioClip != null) {
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->____previousAudioClip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// _randomAudioClipPool.Add(_previousAudioClip);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_10 = __this->____randomAudioClipPool_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->____previousAudioClip_6;
		NullCheck(L_10);
		List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_inline(L_10, L_11, List_1_Add_m51C49FD07D05048E52C4324E83FEC9BD2174F6B7_RuntimeMethod_var);
	}

IL_004a:
	{
		// _previousAudioClip = randomClip;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = V_1;
		__this->____previousAudioClip_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____previousAudioClip_6), (void*)L_12);
		// return randomClip;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = V_1;
		return L_13;
	}
}
// System.Void Oculus.Interaction.AudioTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrigger__ctor_m774BACEB6C82CBA4A569F4782E546656BD585F71 (AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<AudioClip> _randomAudioClipPool = new List<AudioClip>();
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_0 = (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*)il2cpp_codegen_object_new(List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33(L_0, List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var);
		__this->____randomAudioClipPool_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____randomAudioClipPool_5), (void*)L_0);
		// private float _volume = 0.7f;
		__this->____volume_8 = (0.699999988f);
		// private float _pitch = 1f;
		__this->____pitch_10 = (1.0f);
		// private bool _spatialize = true;
		__this->____spatialize_12 = (bool)1;
		// private float _chanceToPlay = 100;
		__this->____chanceToPlay_14 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_pinvoke(const MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8& unmarshaled, MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_pinvoke& marshaled)
{
	marshaled.____useRandomRange_0 = static_cast<int32_t>(unmarshaled.____useRandomRange_0);
	marshaled.____min_1 = unmarshaled.____min_1;
	marshaled.____max_2 = unmarshaled.____max_2;
}
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_pinvoke_back(const MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_pinvoke& marshaled, MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8& unmarshaled)
{
	bool unmarshaled_useRandomRange_temp_0 = false;
	unmarshaled_useRandomRange_temp_0 = static_cast<bool>(marshaled.____useRandomRange_0);
	unmarshaled.____useRandomRange_0 = unmarshaled_useRandomRange_temp_0;
	float unmarshaled_min_temp_1 = 0.0f;
	unmarshaled_min_temp_1 = marshaled.____min_1;
	unmarshaled.____min_1 = unmarshaled_min_temp_1;
	float unmarshaled_max_temp_2 = 0.0f;
	unmarshaled_max_temp_2 = marshaled.____max_2;
	unmarshaled.____max_2 = unmarshaled_max_temp_2;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_pinvoke_cleanup(MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_com(const MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8& unmarshaled, MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_com& marshaled)
{
	marshaled.____useRandomRange_0 = static_cast<int32_t>(unmarshaled.____useRandomRange_0);
	marshaled.____min_1 = unmarshaled.____min_1;
	marshaled.____max_2 = unmarshaled.____max_2;
}
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_com_back(const MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_com& marshaled, MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8& unmarshaled)
{
	bool unmarshaled_useRandomRange_temp_0 = false;
	unmarshaled_useRandomRange_temp_0 = static_cast<bool>(marshaled.____useRandomRange_0);
	unmarshaled.____useRandomRange_0 = unmarshaled_useRandomRange_temp_0;
	float unmarshaled_min_temp_1 = 0.0f;
	unmarshaled_min_temp_1 = marshaled.____min_1;
	unmarshaled.____min_1 = unmarshaled_min_temp_1;
	float unmarshaled_max_temp_2 = 0.0f;
	unmarshaled_max_temp_2 = marshaled.____max_2;
	unmarshaled.____max_2 = unmarshaled_max_temp_2;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.MinMaxPair
IL2CPP_EXTERN_C void MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshal_com_cleanup(MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8_marshaled_com& marshaled)
{
}
// System.Boolean Oculus.Interaction.MinMaxPair::get_UseRandomRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseRandomRange => _useRandomRange;
		bool L_0 = __this->____useRandomRange_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.MinMaxPair::get_Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9 (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public float Min => _min;
		float L_0 = __this->____min_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.MinMaxPair::get_Max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public float Max => _max;
		float L_0 = __this->____max_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8*>(__this + _offset);
	float _returnValue;
	_returnValue = MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.CarouselView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_Start_mC8271BF973C438CF30C746EA32651930DB7BF180 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollRight_m7E11439366912FD1F32FB394E921B897CE7E86B9 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// if (_content.childCount <= 1)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____content_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// else if (_currentChildIndex > 0)
		int32_t L_2 = __this->____currentChildIndex_7;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// RectTransform currentChild = GetCurrentChild();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = CarouselView_GetCurrentChild_mEF16FA56034EE866B1C0B8F38E89C3F0A370628B(__this, NULL);
		V_0 = L_3;
		// _content.GetChild(0).SetAsLastSibling();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____content_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_5, NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(_content);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->____content_5;
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_m1DFB9F055F838E4CB32A471460AEA23D85DA8B57(L_6, NULL);
		// ScrollToChild(currentChild, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		CarouselView_ScrollToChild_mB0282AA8104AFC10E8992E108E77D823911A27B1(__this, L_7, (1.0f), NULL);
		goto IL_0057;
	}

IL_0049:
	{
		// _currentChildIndex++;
		int32_t L_8 = __this->____currentChildIndex_7;
		__this->____currentChildIndex_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0057:
	{
		// _scrollVal = Time.time;
		float L_9;
		L_9 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____scrollVal_8 = L_9;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollLeft_mA55D97FC8FAF89A9304D14DF59DBEF24E3BE52F1 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// if (_content.childCount <= 1)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____content_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// else if (_currentChildIndex < _content.childCount - 1)
		int32_t L_2 = __this->____currentChildIndex_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____content_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_0061;
		}
	}
	{
		// RectTransform currentChild = GetCurrentChild();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = CarouselView_GetCurrentChild_mEF16FA56034EE866B1C0B8F38E89C3F0A370628B(__this, NULL);
		V_0 = L_5;
		// _content.GetChild(_content.childCount - 1).SetAsFirstSibling();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->____content_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->____content_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_7, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		NullCheck(L_9);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_9, NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(_content);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->____content_5;
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_m1DFB9F055F838E4CB32A471460AEA23D85DA8B57(L_10, NULL);
		// ScrollToChild(currentChild, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_0;
		CarouselView_ScrollToChild_mB0282AA8104AFC10E8992E108E77D823911A27B1(__this, L_11, (1.0f), NULL);
		goto IL_006f;
	}

IL_0061:
	{
		// _currentChildIndex--;
		int32_t L_12 = __this->____currentChildIndex_7;
		__this->____currentChildIndex_7 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_006f:
	{
		// _scrollVal = Time.time;
		float L_13;
		L_13 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____scrollVal_8 = L_13;
		// }
		return;
	}
}
// UnityEngine.RectTransform Oculus.Interaction.Samples.CarouselView::GetCurrentChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CarouselView_GetCurrentChild_mEF16FA56034EE866B1C0B8F38E89C3F0A370628B (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _content.GetChild(_currentChildIndex) as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____content_5;
		int32_t L_1 = __this->____currentChildIndex_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_1, NULL);
		return ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::ScrollToChild(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_ScrollToChild_mB0282AA8104AFC10E8992E108E77D823911A27B1 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___child0, float ___amount011, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// amount01 = Mathf.Clamp01(amount01);
		float L_0 = ___amount011;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___amount011 = L_1;
		// Vector3 viewportCenter = _viewport.TransformPoint(_viewport.rect.center);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->____viewport_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____viewport_4;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_2 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_6, NULL);
		V_0 = L_7;
		// Vector3 imageCenter = child.TransformPoint(child.rect.center);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ___child0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ___child0;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_2 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_8, L_12, NULL);
		// Vector3 offset = imageCenter - viewportCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_14, NULL);
		V_1 = L_15;
		// if (offset.sqrMagnitude > float.Epsilon)
		float L_16;
		L_16 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		if ((!(((float)L_16) > ((float)(1.40129846E-45f)))))
		{
			goto IL_009d;
		}
	}
	{
		// Vector3 targetPosition = _content.position - offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->____content_5;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_18, L_19, NULL);
		V_3 = L_20;
		// float lerp = Mathf.Clamp01(_easeCurve.Evaluate(amount01));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->____easeCurve_6;
		float L_22 = ___amount011;
		NullCheck(L_21);
		float L_23;
		L_23 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_21, L_22, NULL);
		float L_24;
		L_24 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_23, NULL);
		V_4 = L_24;
		// _content.position = Vector3.Lerp(_content.position, targetPosition, lerp);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->____content_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->____content_5;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		float L_29 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_27, L_28, L_29, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_30, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView_Update_mF582D2D45A1C82A8FBF725B34D34CFB68FB01BC0 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// RectTransform currentImage = _content.GetChild(_currentChildIndex) as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____content_5;
		int32_t L_1 = __this->____currentChildIndex_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_1, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// ScrollToChild(currentImage, Time.time - _scrollVal);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_5 = __this->____scrollVal_8;
		CarouselView_ScrollToChild_mB0282AA8104AFC10E8992E108E77D823911A27B1(__this, L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CarouselView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselView__ctor_m03725F8E27172E47C30D5D1C5CA1D9ACCE8110D9 (CarouselView_t51C137BEC2D16EC5D11F0AD63E62B3568A038F7F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.ColorChanger::NextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_NextColor_mDDEFD720EBBC9543D55290778FE531F2CCB0810D (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _lastHue = (_lastHue + 0.3f) % 1f;
		float L_0 = __this->____lastHue_7;
		__this->____lastHue_7 = (fmodf(((float)il2cpp_codegen_add(L_0, (0.300000012f))), (1.0f)));
		// Color newColor = Color.HSVToRGB(_lastHue, 0.8f, 0.8f);
		float L_1 = __this->____lastHue_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline(L_1, (0.800000012f), (0.800000012f), NULL);
		V_0 = L_2;
		// _targetMaterial.color = newColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____targetMaterial_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Save_mA21948C63AC4078393B4DF868DAE2039D613DB36 (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	{
		// _savedColor = _targetMaterial.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____targetMaterial_5;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_0, NULL);
		__this->____savedColor_6 = L_1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Revert_m88242EDED6EBA4525202472B8A578DC70694A2AC (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	{
		// _targetMaterial.color = _savedColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____targetMaterial_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____savedColor_6;
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Start_mE9CBA7140193392F0FB88B335A8408E659CAF5A9 (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	{
		// _targetMaterial = _target.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____target_4;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->____targetMaterial_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetMaterial_5), (void*)L_1);
		// _savedColor = _targetMaterial.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____targetMaterial_5;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_2, NULL);
		__this->____savedColor_6 = L_3;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_OnDestroy_m69589529B57BF9944DCBC5F8C03EA6FEB4ABC0B2 (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(_targetMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____targetMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_mFDFC4333858ED1FDEDB4FDCEB6B07F2CAC7950AF (ColorChanger_tE2A3162D143F4EC8DE89A1F4009E5E5348863482* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.Samples.CountdownTimer::get_CountdownOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountdownTimer_get_CountdownOn_m87574F2B86396A4366155B70319AF1CB029FFEC0 (CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47* __this, const RuntimeMethod* method) 
{
	{
		// get => _countdownOn;
		bool L_0 = __this->____countdownOn_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::set_CountdownOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_set_CountdownOn_m28623B302DCCD4A0B92F02FB001BD5FDBF2F6C1E (CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (!_countdownOn)
		bool L_1 = __this->____countdownOn_5;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// _countdownTimer = _countdownTime;
		float L_2 = __this->____countdownTime_4;
		__this->____countdownTimer_8 = L_2;
	}

IL_0017:
	{
		// _countdownOn = value;
		bool L_3 = ___value0;
		__this->____countdownOn_5 = L_3;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Awake_mB00B72DF39477EC085C04352F076680B9B4AC9F6 (CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Update_m42BD0FC843B1A18A7787682FBE9E755689DC30CC (CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_countdownOn || _countdownTimer < 0)
		bool L_0 = __this->____countdownOn_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = __this->____countdownTimer_8;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}

IL_0015:
	{
		// _progressCallback.Invoke(0);
		UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* L_2 = __this->____progressCallback_7;
		NullCheck(L_2);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_2, (0.0f), UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// return;
		return;
	}

IL_0026:
	{
		// _countdownTimer -= Time.deltaTime;
		float L_3 = __this->____countdownTimer_8;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____countdownTimer_8 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// if (_countdownTimer < 0f)
		float L_5 = __this->____countdownTimer_8;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// _countdownTimer = -1f;
		__this->____countdownTimer_8 = (-1.0f);
		// _callback.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->____callback_6;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// _progressCallback.Invoke(1);
		UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* L_7 = __this->____progressCallback_7;
		NullCheck(L_7);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_7, (1.0f), UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// return;
		return;
	}

IL_006c:
	{
		// _progressCallback.Invoke(1 - _countdownTimer / _countdownTime);
		UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* L_8 = __this->____progressCallback_7;
		float L_9 = __this->____countdownTimer_8;
		float L_10 = __this->____countdownTime_4;
		NullCheck(L_8);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_8, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_9/L_10)))), UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.CountdownTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer__ctor_m4FCBF108C4F4E2F9F0894485CEB19D5099BE6E0E (CountdownTimer_tE2A1F175A8A7D4DF598289443A5BA4011E4FDE47* __this, const RuntimeMethod* method) 
{
	{
		// private float _countdownTime = 1.0f;
		__this->____countdownTime_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.EnableTargetOnStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableTargetOnStart_Start_mE2ECF661EF16089078E6518FEBD33DB3ADAE4E55 (EnableTargetOnStart_t09E86E6C056419CDFAA6AB7BC1099FB4D447F709* __this, const RuntimeMethod* method) 
{
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* V_0 = NULL;
	int32_t V_1 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	{
		// if (_components != null)
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_0 = __this->____components_4;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// foreach (MonoBehaviour target in _components)
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_1 = __this->____components_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_0013:
	{
		// foreach (MonoBehaviour target in _components)
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// target.enabled = true;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		// foreach (MonoBehaviour target in _components)
		int32_t L_7 = V_1;
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0026:
	{
		// if (_gameObjects != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->____gameObjects_5;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// foreach (GameObject target in _gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->____gameObjects_5;
		V_2 = L_10;
		V_1 = 0;
		goto IL_0046;
	}

IL_0039:
	{
		// foreach (GameObject target in _gameObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_2;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// target.SetActive(true);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0046:
	{
		// foreach (GameObject target in _gameObjects)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0039;
		}
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.EnableTargetOnStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableTargetOnStart__ctor_m4E26B6C75388496CF689D613AA89E089B99365C2 (EnableTargetOnStart_t09E86E6C056419CDFAA6AB7BC1099FB4D447F709* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive_OnEnable_mF07ECBABE3B3FE7C39F596FF9175D17255F4535C (FadeTextAfterActive_t48518F07AB8C1C1982A329E41B77AAE1DA0D9C2A* __this, const RuntimeMethod* method) 
{
	{
		// _timeLeft = _fadeOutTime;
		float L_0 = __this->____fadeOutTime_4;
		__this->____timeLeft_6 = L_0;
		// _text.fontMaterial.color = new Color(_text.color.r, _text.color.g, _text.color.b, 255);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->____text_5;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_1, NULL);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->____text_5;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		float L_5 = L_4.___r_0;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_6 = __this->____text_5;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		float L_8 = L_7.___g_1;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_9 = __this->____text_5;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_5, L_8, L_11, (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_2, L_12, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive_Update_m63E6E20B9656F2390A4114AE14EB2A58BDEB9697 (FadeTextAfterActive_t48518F07AB8C1C1982A329E41B77AAE1DA0D9C2A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (_timeLeft <= 0)
		float L_0 = __this->____timeLeft_6;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// float percentDone = 1 - _timeLeft / _fadeOutTime;
		float L_1 = __this->____timeLeft_6;
		float L_2 = __this->____fadeOutTime_4;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_1/L_2))));
		// float alpha = Mathf.SmoothStep(1, 0, percentDone);
		float L_3 = V_0;
		float L_4;
		L_4 = Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline((1.0f), (0.0f), L_3, NULL);
		V_1 = L_4;
		// _text.color = new Color(_text.color.r, _text.color.g, _text.color.b, alpha);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = __this->____text_5;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_6 = __this->____text_5;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		float L_8 = L_7.___r_0;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_9 = __this->____text_5;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.___g_1;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12 = __this->____text_5;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___b_2;
		float L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), L_8, L_11, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_16);
		// _timeLeft -= Time.deltaTime;
		float L_17 = __this->____timeLeft_6;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____timeLeft_6 = ((float)il2cpp_codegen_subtract(L_17, L_18));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.FadeTextAfterActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTextAfterActive__ctor_m3DF376D08DA4FC7460E3BA219BC67827CE18FB84 (FadeTextAfterActive_t48518F07AB8C1C1982A329E41B77AAE1DA0D9C2A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_Start_m8223A804005B6D09868D6C8A9FF5AB30D8C1B750 (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_Update_mFF2BA26D83BFF1651755C9CC4526D8180F485AB3 (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225_m65E854CA9119C0647AA2970B4E1581826BD31329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m9AF31BA2401767028B0F2AF4ED4335972E16A610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_State_mB374F6767B81C1B0D67E0E15E497CF6CDED3935B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225* V_1 = NULL;
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* G_B3_0 = NULL;
	HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	{
		// GameObject shouldHideHandComponent = null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if (_handGrabInteractor.State == InteractorState.Select)
		HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* L_0 = __this->____handGrabInteractor_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Interactor_2_get_State_mB374F6767B81C1B0D67E0E15E497CF6CDED3935B_inline(L_0, Interactor_2_get_State_mB374F6767B81C1B0D67E0E15E497CF6CDED3935B_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// shouldHideHandComponent = _handGrabInteractor.SelectedInteractable?.gameObject;
		HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* L_2 = __this->____handGrabInteractor_4;
		NullCheck(L_2);
		HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* L_3;
		L_3 = Interactor_2_get_SelectedInteractable_m9AF31BA2401767028B0F2AF4ED4335972E16A610_inline(L_2, Interactor_2_get_SelectedInteractable_m9AF31BA2401767028B0F2AF4ED4335972E16A610_RuntimeMethod_var);
		HandGrabInteractable_tFC8AD4C83FE1A0BEB86FF5F8D39052FF7C0A0986* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		goto IL_0027;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(G_B3_0, NULL);
		G_B4_0 = L_5;
	}

IL_0027:
	{
		V_0 = G_B4_0;
	}

IL_0028:
	{
		// if (shouldHideHandComponent)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// if (shouldHideHandComponent.TryGetComponent(out ShouldHideHandOnGrab component))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_TryGetComponent_TisShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225_m65E854CA9119C0647AA2970B4E1581826BD31329(L_8, (&V_1), GameObject_TryGetComponent_TisShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225_m65E854CA9119C0647AA2970B4E1581826BD31329_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// _handVisual.ForceOffVisibility = true;
		HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* L_10 = __this->____handVisual_5;
		NullCheck(L_10);
		HandVisual_set_ForceOffVisibility_mA193E64D7A4E8F539BF02CD723D9DA870C90E5C7_inline(L_10, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// _handVisual.ForceOffVisibility = false;
		HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* L_11 = __this->____handVisual_5;
		NullCheck(L_11);
		HandVisual_set_ForceOffVisibility_mA193E64D7A4E8F539BF02CD723D9DA870C90E5C7_inline(L_11, (bool)0, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectAll(Oculus.Interaction.HandPosing.HandGrabInteractor,Oculus.Interaction.HandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectAll_m6EE8533E71F0758A7A57AA01639FA8DD7F1E0B6D (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* ___handGrabInteractor0, HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* ___handVisual1, const RuntimeMethod* method) 
{
	{
		// InjectHandGrabInteractor(handGrabInteractor);
		HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* L_0 = ___handGrabInteractor0;
		HideHandVisualOnGrab_InjectHandGrabInteractor_m3A2E71CE76E326E2CD2A0B838F3080D3A0BD88F1_inline(__this, L_0, NULL);
		// InjectHandVisual(handVisual);
		HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* L_1 = ___handVisual1;
		HideHandVisualOnGrab_InjectHandVisual_mFDCFBCD4EBAB52AEF2F5393943432F7F414F29BD_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandGrabInteractor(Oculus.Interaction.HandPosing.HandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandGrabInteractor_m3A2E71CE76E326E2CD2A0B838F3080D3A0BD88F1 (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* ___handGrabInteractor0, const RuntimeMethod* method) 
{
	{
		// _handGrabInteractor = handGrabInteractor;
		HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* L_0 = ___handGrabInteractor0;
		__this->____handGrabInteractor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabInteractor_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::InjectHandVisual(Oculus.Interaction.HandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandVisual_mFDCFBCD4EBAB52AEF2F5393943432F7F414F29BD (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* ___handVisual0, const RuntimeMethod* method) 
{
	{
		// _handVisual = handVisual;
		HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* L_0 = ___handVisual0;
		__this->____handVisual_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handVisual_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.HideHandVisualOnGrab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideHandVisualOnGrab__ctor_m91F0ABA4CE7C37AE5C063D769B167A5D1CC7D19D (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.LookAtTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget_Start_m6CC14B7CDC648A871E18A65619CE1DE8C88C9C99 (LookAtTarget_tB093B3119B1ADE3D1656211C079DAA2827A50DD1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.LookAtTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget_Update_mB34F3B86A64DF740ABF244E919FED1CF461E848E (LookAtTarget_tB093B3119B1ADE3D1656211C079DAA2827A50DD1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 dirToTarget = (_target.position - _toRotate.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____toRotate_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_5;
		// _toRotate.LookAt(_toRotate.position - dirToTarget, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____toRotate_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____toRotate_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		NullCheck(L_6);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_6, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.LookAtTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget__ctor_m22133A3BD5FFC9624C4B1FD9A92823463D366754 (LookAtTarget_tB093B3119B1ADE3D1656211C079DAA2827A50DD1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.PoseUseSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_Start_m0AA87CA2844819460313A644A6A2B68A5A7685E9 (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mBAFA1EFDA78758B4B85A530FB817AA0E4E8E9393_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m719B66DD4F7BB79144CF8B6836E8F8343895FE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_m570CABFBFDAE91A1E1EE1BE38BC293FEC425B6FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_m9C1F9C2282B55EC6517F73BDDC70DA8325DA267C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* V_1 = NULL;
	{
		// _poseActiveVisuals = new GameObject[_poses.Length];
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_0 = __this->____poses_4;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____poseActiveVisuals_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poseActiveVisuals_7), (void*)L_1);
		// for (int i = 0; i < _poses.Length; i++)
		V_0 = 0;
		goto IL_00be;
	}

IL_001a:
	{
		U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* L_2 = (U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass4_0__ctor_m635CE6FF2CF37C100DAB72A366D5C6C09FD182E6(L_2, NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* L_3 = V_1;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// _poseActiveVisuals[i] = Instantiate(_poseActiveVisualPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->____poseActiveVisuals_7;
		int32_t L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____poseActiveVisualPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_7);
		// _poseActiveVisuals[i].GetComponentInChildren<TextMeshPro>().text = _poses[i].name;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->____poseActiveVisuals_7;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12;
		L_12 = GameObject_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m719B66DD4F7BB79144CF8B6836E8F8343895FE28(L_11, GameObject_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m719B66DD4F7BB79144CF8B6836E8F8343895FE28_RuntimeMethod_var);
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_13 = __this->____poses_4;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// _poseActiveVisuals[i].GetComponentInChildren<ParticleSystemRenderer>().material = _onSelectIcons[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->____poseActiveVisuals_7;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_22;
		L_22 = GameObject_GetComponentInChildren_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mBAFA1EFDA78758B4B85A530FB817AA0E4E8E9393(L_21, GameObject_GetComponentInChildren_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mBAFA1EFDA78758B4B85A530FB817AA0E4E8E9393_RuntimeMethod_var);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_23 = __this->____onSelectIcons_5;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_22, L_26, NULL);
		// _poseActiveVisuals[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->____poseActiveVisuals_7;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// int poseNumber = i;
		U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* L_31 = V_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		L_31->___poseNumber_0 = L_32;
		// _poses[i].WhenSelected += () => ShowVisuals(poseNumber);
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_33 = __this->____poses_4;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* L_37 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_38, L_37, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_m570CABFBFDAE91A1E1EE1BE38BC293FEC425B6FD_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		ActiveStateSelector_add_WhenSelected_m8573112236A5E1BE9210411A43006A785D5C744B(L_36, L_38, NULL);
		// _poses[i].WhenUnselected += () => HideVisuals(poseNumber);
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_39 = __this->____poses_4;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* L_43 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_m9C1F9C2282B55EC6517F73BDDC70DA8325DA267C_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		ActiveStateSelector_add_WhenUnselected_m17BB61289D6B73D6074E3DC4973C17CCF21E8D57(L_42, L_44, NULL);
		// for (int i = 0; i < _poses.Length; i++)
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00be:
	{
		// for (int i = 0; i < _poses.Length; i++)
		int32_t L_46 = V_0;
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_47 = __this->____poses_4;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::ShowVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_ShowVisuals_m30BC84A4F1C83268B61B7FD8DA9662A77E88A710 (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, int32_t ___poseNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisHandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977_mA46B0153470667D040AD2552563EEE1829340A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* V_4 = NULL;
	int32_t V_5 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var centerEyePos = FindObjectOfType<OVRCameraRig>().centerEyeAnchor.position;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0;
		L_0 = Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B(Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 spawnSpot = centerEyePos + FindObjectOfType<OVRCameraRig>().centerEyeAnchor.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_4;
		L_4 = Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B(Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m51A2D83A70CE8B5423D0A8400EFB139CAF27A39B_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_6, NULL);
		V_1 = L_7;
		// _poseActiveVisuals[poseNumber].transform.position = spawnSpot;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->____poseActiveVisuals_7;
		int32_t L_9 = ___poseNumber0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// _poseActiveVisuals[poseNumber].transform.LookAt(2 * _poseActiveVisuals[poseNumber].transform.position - centerEyePos);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->____poseActiveVisuals_7;
		int32_t L_15 = ___poseNumber0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->____poseActiveVisuals_7;
		int32_t L_20 = ___poseNumber0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((2.0f), L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_25, L_26, NULL);
		NullCheck(L_18);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_18, L_27, NULL);
		// var hands = _poses[poseNumber].GetComponents<HandRef>();
		ActiveStateSelectorU5BU5D_tD51286990664F993867FEABD7022F36A2BB06F78* L_28 = __this->____poses_4;
		int32_t L_29 = ___poseNumber0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		ActiveStateSelector_t4E5C386E75A1AEAB9729304B0BFC06441CD92A56* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* L_32;
		L_32 = Component_GetComponents_TisHandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977_mA46B0153470667D040AD2552563EEE1829340A0F(L_31, Component_GetComponents_TisHandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977_mA46B0153470667D040AD2552563EEE1829340A0F_RuntimeMethod_var);
		V_2 = L_32;
		// Vector3 visualsPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_3 = L_33;
		// foreach (var hand in hands)
		HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* L_34 = V_2;
		V_4 = L_34;
		V_5 = 0;
		goto IL_00ee;
	}

IL_0089:
	{
		// foreach (var hand in hands)
		HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// hand.GetRootPose(out Pose wristPose);
		HandRef_tDC86BD52090CE4224141AC88C0D8CF7816573977* L_39 = L_38;
		NullCheck(L_39);
		bool L_40;
		L_40 = HandRef_GetRootPose_m04AFFB03A7F61F09E262F6123BB4F2252F9367F0(L_39, (&V_6), NULL);
		// Vector3 forward = hand.Handedness == Handedness.Left ? wristPose.right : -wristPose.right;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = HandRef_get_Handedness_mC78780570E5E479E0BA0022564C0FEE220649918(L_39, NULL);
		if (!L_41)
		{
			goto IL_00ac;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_42, NULL);
		G_B4_0 = L_43;
		goto IL_00b3;
	}

IL_00ac:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_6), NULL);
		G_B4_0 = L_44;
	}

IL_00b3:
	{
		V_7 = G_B4_0;
		// visualsPos += wristPose.position + forward * .15f + Vector3.up * .02f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, (0.150000006f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_47, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_51, (0.0199999996f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_50, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_45, L_53, NULL);
		V_3 = L_54;
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00ee:
	{
		// foreach (var hand in hands)
		int32_t L_56 = V_5;
		HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* L_57 = V_4;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		// _poseActiveVisuals[poseNumber].transform.position = visualsPos / hands.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_58 = __this->____poseActiveVisuals_7;
		int32_t L_59 = ___poseNumber0;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		HandRefU5BU5D_t7832B61A239ADBA4BE878E66BBB0B633A1C97342* L_64 = V_2;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_63, ((float)((int32_t)(((RuntimeArray*)L_64)->max_length))), NULL);
		NullCheck(L_62);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_62, L_65, NULL);
		// _poseActiveVisuals[poseNumber].gameObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_66 = __this->____poseActiveVisuals_7;
		int32_t L_67 = ___poseNumber0;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_69, NULL);
		NullCheck(L_70);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_70, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::HideVisuals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample_HideVisuals_mCEB8FD00C59B39F69B1D9554191F55C76ABE4650 (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, int32_t ___poseNumber0, const RuntimeMethod* method) 
{
	{
		// _poseActiveVisuals[poseNumber].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____poseActiveVisuals_7;
		int32_t L_1 = ___poseNumber0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUseSample__ctor_mCF438A4D2648F3D88C4DE6BDA02496D2AF01EE7A (PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m635CE6FF2CF37C100DAB72A366D5C6C09FD182E6 (U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__0_m570CABFBFDAE91A1E1EE1BE38BC293FEC425B6FD (U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* __this, const RuntimeMethod* method) 
{
	{
		// _poses[i].WhenSelected += () => ShowVisuals(poseNumber);
		PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___poseNumber_0;
		NullCheck(L_0);
		PoseUseSample_ShowVisuals_m30BC84A4F1C83268B61B7FD8DA9662A77E88A710(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass4_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CStartU3Eb__1_m9C1F9C2282B55EC6517F73BDDC70DA8325DA267C (U3CU3Ec__DisplayClass4_0_t482509500D9FEF5BA0E67B41AD12E51E887D626B* __this, const RuntimeMethod* method) 
{
	{
		// _poses[i].WhenUnselected += () => HideVisuals(poseNumber);
		PoseUseSample_tBA55177F63A3EF1260D1B1ADD2F66A8A765C2B07* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___poseNumber_0;
		NullCheck(L_0);
		PoseUseSample_HideVisuals_mCEB8FD00C59B39F69B1D9554191F55C76ABE4650(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RespawnOnDrop::get_WhenRespawned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* RespawnOnDrop_get_WhenRespawned_m2E0323D1C8D23BF36AF6EDD003106B9951F4A896 (RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenRespawned => _whenRespawned;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRespawned_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop_OnEnable_m4FF157B2BB257BEF61482E73EC3F970F3057C171 (RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisTwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344_m82ABD5D6E1B4F6522812E4785F07F62F505EEDAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _initialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->____initialPosition_6 = L_1;
		// _initialRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->____initialRotation_7 = L_3;
		// _initialScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		__this->____initialScale_8 = L_5;
		// _freeTransformers = GetComponents<TwoGrabFreeTransformer>();
		TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* L_6;
		L_6 = Component_GetComponents_TisTwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344_m82ABD5D6E1B4F6522812E4785F07F62F505EEDAF(__this, Component_GetComponents_TisTwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344_m82ABD5D6E1B4F6522812E4785F07F62F505EEDAF_RuntimeMethod_var);
		__this->____freeTransformers_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____freeTransformers_9), (void*)L_6);
		// _rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidBody_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidBody_10), (void*)L_7);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop_Update_m2BE56D6474988A8D01393F7770B842678E813E83 (RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (transform.position.y < _yThresholdForRespawn)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		float L_3 = __this->____yThresholdForRespawn_4;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_00a3;
		}
	}
	{
		// transform.position = _initialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____initialPosition_6;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// transform.rotation = _initialRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = __this->____initialRotation_7;
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		// transform.localScale = _initialScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->____initialScale_8;
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// if (_rigidBody)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->____rigidBody_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// _rigidBody.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->____rigidBody_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_13, NULL);
		// _rigidBody.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = __this->____rigidBody_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_14);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_14, L_15, NULL);
	}

IL_007b:
	{
		// foreach (var freeTransformer in _freeTransformers)
		TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* L_16 = __this->____freeTransformers_9;
		V_0 = L_16;
		V_1 = 0;
		goto IL_0092;
	}

IL_0086:
	{
		// foreach (var freeTransformer in _freeTransformers)
		TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TwoGrabFreeTransformer_t7D9C99C5A65190B2D195ADB3D9717BA6DC95C344* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// freeTransformer.MarkAsBaseScale();
		NullCheck(L_20);
		TwoGrabFreeTransformer_MarkAsBaseScale_m4B4C2BCB0D5D81DD50BE420226279EC4FBC76596(L_20, NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0092:
	{
		// foreach (var freeTransformer in _freeTransformers)
		int32_t L_22 = V_1;
		TwoGrabFreeTransformerU5BU5D_t6321E9D2A47A7569F7FC2841D60D6D54AE877F4A* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0086;
		}
	}
	{
		// _whenRespawned.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_24 = __this->____whenRespawned_5;
		NullCheck(L_24);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_24, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RespawnOnDrop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnOnDrop__ctor_m47101AEB21E60696F50B2C4522F1A385A7027E5C (RespawnOnDrop_tDA2EEBCEC4DB067F54616A6142CAEE71C83FD8FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UnityEvent _whenRespawned = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->____whenRespawned_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenRespawned_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* RotationAudioEvents_get_WhenRotationStarted_m5E2E6841118C3BB1AAB780E5497019FC02B236C2 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenRotationStarted => _whenRotationStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRotationStarted_9;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* RotationAudioEvents_get_WhenRotationEnded_mF17ECDBEB330F7CFC99E144C2A7EA146F41A6671 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenRotationEnded => _whenRotationEnded;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRotationEnded_10;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotatedOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* RotationAudioEvents_get_WhenRotatedOpen_m14F1E154E23EBFB4293C99154F36597D5766B901 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenRotatedOpen => _whenRotatedOpen;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRotatedOpen_11;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.RotationAudioEvents::get_WhenRotatedClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* RotationAudioEvents_get_WhenRotatedClosed_mEC044DB87C5EF85205B36CB4ECC779A8157B9BED (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenRotatedClosed => _whenRotatedClosed;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRotatedClosed_12;
		return L_0;
	}
}
// UnityEngine.Transform Oculus.Interaction.Samples.RotationAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RotationAudioEvents_get_TrackedTransform_mF4B368235C0B351474DCA312E5E8DE59F397D61B (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _trackedTransform == null ? transform : _trackedTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____trackedTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____trackedTransform_5;
		return L_2;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationStarted_m4B6FB0D1435F7D640275B03E3D0D3155981D7871 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// _baseDelta = GetTotalDelta();
		float L_0;
		L_0 = RotationAudioEvents_GetTotalDelta_m6E66F48DAF7AAEDFEEBE000A719E7D646622D666(__this, NULL);
		__this->____baseDelta_14 = L_0;
		// _lastCrossedDirection = Direction.None;
		__this->____lastCrossedDirection_16 = 0;
		// _whenRotationStarted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->____whenRotationStarted_9;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::RotationEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_RotationEnded_m1068B0E7336B53F4BACB84B1A0E7DE34D56A0451 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// _whenRotationEnded.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenRotationEnded_10;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Samples.RotationAudioEvents::GetCurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 RotationAudioEvents_GetCurrentRotation_m25D818176E4C177F8A53FEA857DCCB30AC25202C (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Inverse(_relativeTo.rotation) * TrackedTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_6;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = RotationAudioEvents_get_TrackedTransform_mF4B368235C0B351474DCA312E5E8DE59F397D61B(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_2, L_4, NULL);
		return L_5;
	}
}
// System.Single Oculus.Interaction.Samples.RotationAudioEvents::GetTotalDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotationAudioEvents_GetTotalDelta_m6E66F48DAF7AAEDFEEBE000A719E7D646622D666 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Angle(_relativeTo.rotation, GetCurrentRotation());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_6;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = RotationAudioEvents_GetCurrentRotation_m25D818176E4C177F8A53FEA857DCCB30AC25202C(__this, NULL);
		float L_3;
		L_3 = Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_UpdateRotation_mFB6E6D015072D45524704F2D24F494AB174417C0 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	{
		// float totalDelta = GetTotalDelta();
		float L_0;
		L_0 = RotationAudioEvents_GetTotalDelta_m6E66F48DAF7AAEDFEEBE000A719E7D646622D666(__this, NULL);
		V_0 = L_0;
		// if (totalDelta > _maxRangeDeg)
		float L_1 = V_0;
		float L_2 = __this->____maxRangeDeg_8;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (Mathf.Abs(totalDelta - _baseDelta) > _thresholdDeg)
		float L_3 = V_0;
		float L_4 = __this->____baseDelta_14;
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract(L_3, L_4)));
		float L_6 = __this->____thresholdDeg_7;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0066;
		}
	}
	{
		// var _direction = totalDelta - _baseDelta > 0 ?
		//                  Direction.Opening :
		//                  Direction.Closing;
		float L_7 = V_0;
		float L_8 = __this->____baseDelta_14;
		if ((((float)((float)il2cpp_codegen_subtract(L_7, L_8))) > ((float)(0.0f))))
		{
			goto IL_0038;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 1;
	}

IL_0039:
	{
		V_1 = G_B6_0;
		// if (_direction != _lastCrossedDirection)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____lastCrossedDirection_16;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		// _lastCrossedDirection = _direction;
		int32_t L_11 = V_1;
		__this->____lastCrossedDirection_16 = L_11;
		// if (_direction == Direction.Opening)
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		// _whenRotatedOpen.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = __this->____whenRotatedOpen_11;
		NullCheck(L_13);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_13, NULL);
		goto IL_0066;
	}

IL_005b:
	{
		// _whenRotatedClosed.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = __this->____whenRotatedClosed_12;
		NullCheck(L_14);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_14, NULL);
	}

IL_0066:
	{
		// if (_lastCrossedDirection == Direction.Opening)
		int32_t L_15 = __this->____lastCrossedDirection_16;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// _baseDelta = Mathf.Max(_baseDelta, totalDelta);
		float L_16 = __this->____baseDelta_14;
		float L_17 = V_0;
		float L_18;
		L_18 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_16, L_17, NULL);
		__this->____baseDelta_14 = L_18;
		return;
	}

IL_0082:
	{
		// else if (_lastCrossedDirection == Direction.Closing)
		int32_t L_19 = __this->____lastCrossedDirection_16;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		// _baseDelta = Mathf.Min(_baseDelta, totalDelta);
		float L_20 = __this->____baseDelta_14;
		float L_21 = V_0;
		float L_22;
		L_22 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_20, L_21, NULL);
		__this->____baseDelta_14 = L_22;
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Awake_m127C81AC484A112A443934FBD8FC7168FF0F908F (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InteractableView = _interactableView as IInteractableView;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____interactableView_4;
		__this->___InteractableView_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InteractableView_13), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Start_mABAC5211F38BA02E010501BB93AA9E5755F9A496 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_17);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_17);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents_Update_mAAC7C585EAD1D910E48A5763AD4391C9F490943D (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool wasRotating = _isRotating;
		bool L_0 = __this->____isRotating_15;
		V_0 = L_0;
		// _isRotating = InteractableView.State == InteractableState.Select;
		RuntimeObject* L_1 = __this->___InteractableView_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.InteractableState Oculus.Interaction.IInteractableView::get_State() */, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var, L_1);
		__this->____isRotating_15 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		// if (!_isRotating)
		bool L_3 = __this->____isRotating_15;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (wasRotating)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// RotationEnded();
		RotationAudioEvents_RotationEnded_m1068B0E7336B53F4BACB84B1A0E7DE34D56A0451(__this, NULL);
		return;
	}

IL_002d:
	{
		// if (!wasRotating)
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// RotationStarted();
		RotationAudioEvents_RotationStarted_m4B6FB0D1435F7D640275B03E3D0D3155981D7871(__this, NULL);
	}

IL_0036:
	{
		// UpdateRotation();
		RotationAudioEvents_UpdateRotation_mFB6E6D015072D45524704F2D24F494AB174417C0(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.RotationAudioEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAudioEvents__ctor_mA242A247D582BD7013D9F07E0D1047A5EF400802 (RotationAudioEvents_t88C7B3F7D25A3DAC07395F7BB12DD0DFAFB0D35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _thresholdDeg = 20f;
		__this->____thresholdDeg_7 = (20.0f);
		// private float _maxRangeDeg = 150f;
		__this->____maxRangeDeg_8 = (150.0f);
		// private UnityEvent _whenRotationStarted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->____whenRotationStarted_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenRotationStarted_9), (void*)L_0);
		// private UnityEvent _whenRotationEnded = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->____whenRotationEnded_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenRotationEnded_10), (void*)L_1);
		// private UnityEvent _whenRotatedOpen = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->____whenRotatedOpen_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenRotatedOpen_11), (void*)L_2);
		// private UnityEvent _whenRotatedClosed = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->____whenRotatedClosed_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenRotatedClosed_12), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ScaleAudioEvents_get_WhenScalingStarted_mB3C274BC751C48A4EBC115E19F27B488936CC6E2 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenScalingStarted => _whenScalingStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenScalingStarted_8;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ScaleAudioEvents_get_WhenScalingEnded_m3900328A09263D33102FC5627591441C126E5186 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenScalingEnded => _whenScalingEnded;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenScalingEnded_9;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScaledUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ScaleAudioEvents_get_WhenScaledUp_m77465D3A3272977D99FD909325B58EF537E8F64A (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenScaledUp => _whenScaledUp;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenScaledUp_10;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Oculus.Interaction.Samples.ScaleAudioEvents::get_WhenScaledDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ScaleAudioEvents_get_WhenScaledDown_m1574D537FFEC123DB5E61927C6934B6CF1B935A2 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent WhenScaledDown => _whenScaledDown;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenScaledDown_11;
		return L_0;
	}
}
// UnityEngine.Transform Oculus.Interaction.Samples.ScaleAudioEvents::get_TrackedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ScaleAudioEvents_get_TrackedTransform_m4F7A78F1D91FD82991E0636C773583944548E462 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _trackedTransform == null ? transform : _trackedTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____trackedTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____trackedTransform_5;
		return L_2;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingStarted_mAC45C31D04221EE5EE83DF8024D2BB26B3BA0C59 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// _lastStep = TrackedTransform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = ScaleAudioEvents_get_TrackedTransform_m4F7A78F1D91FD82991E0636C773583944548E462(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		__this->____lastStep_14 = L_1;
		// _whenScalingStarted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->____whenScalingStarted_8;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::ScalingEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_ScalingEnded_m22E19C9E78B9C104B08A769ED5767631605D2804 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// _whenScalingEnded.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____whenScalingEnded_9;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Samples.ScaleAudioEvents::GetTotalDelta(Oculus.Interaction.Samples.ScaleAudioEvents/Direction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleAudioEvents_GetTotalDelta_mF949B30F7774F1FA166BC4C99987F09A60C77D36 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, int32_t* ___direction0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t* G_B4_0 = 0;
	int32_t* G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t* G_B5_1 = 0;
	{
		// float prevMagnitude = _lastStep.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->____lastStep_14);
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_0, NULL);
		V_0 = L_1;
		// float newMagnitude = TrackedTransform.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = ScaleAudioEvents_get_TrackedTransform_m4F7A78F1D91FD82991E0636C773583944548E462(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		V_2 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_1 = L_4;
		// if (newMagnitude == prevMagnitude)
		float L_5 = V_1;
		float L_6 = V_0;
		if ((!(((float)L_5) == ((float)L_6))))
		{
			goto IL_0029;
		}
	}
	{
		// direction = Direction.None;
		int32_t* L_7 = ___direction0;
		*((int32_t*)L_7) = (int32_t)0;
		goto IL_0033;
	}

IL_0029:
	{
		// direction = newMagnitude > prevMagnitude ? Direction.ScaleUp : Direction.ScaleDown;
		int32_t* L_8 = ___direction0;
		float L_9 = V_1;
		float L_10 = V_0;
		G_B3_0 = L_8;
		if ((((float)L_9) > ((float)L_10)))
		{
			G_B4_0 = L_8;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0032:
	{
		*((int32_t*)G_B5_1) = (int32_t)G_B5_0;
	}

IL_0033:
	{
		// return direction == Direction.ScaleUp ?
		//        newMagnitude - prevMagnitude :
		//        prevMagnitude - newMagnitude;
		int32_t* L_11 = ___direction0;
		int32_t L_12 = *((int32_t*)L_11);
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = V_1;
		return ((float)il2cpp_codegen_subtract(L_13, L_14));
	}

IL_003c:
	{
		float L_15 = V_1;
		float L_16 = V_0;
		return ((float)il2cpp_codegen_subtract(L_15, L_16));
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::UpdateScaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_UpdateScaling_mD7A487C286EA70BFC5104304EF5D63FAF8F82E15 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (_stepSize <= 0 || _maxEventFreq <= 0)
		float L_0 = __this->____stepSize_6;
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->____maxEventFreq_7;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// float effectiveStepSize = _stepSize;
		float L_2 = __this->____stepSize_6;
		V_0 = L_2;
		// float totalDelta = GetTotalDelta(out _direction);
		int32_t* L_3 = (&__this->____direction_16);
		float L_4;
		L_4 = ScaleAudioEvents_GetTotalDelta_mF949B30F7774F1FA166BC4C99987F09A60C77D36(__this, L_3, NULL);
		// if (totalDelta > effectiveStepSize)
		float L_5 = V_0;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0084;
		}
	}
	{
		// _lastStep = TrackedTransform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = ScaleAudioEvents_get_TrackedTransform_m4F7A78F1D91FD82991E0636C773583944548E462(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		__this->____lastStep_14 = L_7;
		// float timeSince = Time.time - _lastEventTime;
		float L_8;
		L_8 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_9 = __this->____lastEventTime_15;
		// if (timeSince >= 1f / _maxEventFreq)
		int32_t L_10 = __this->____maxEventFreq_7;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_8, L_9))) >= ((float)((float)((1.0f)/((float)L_10)))))))
		{
			goto IL_0084;
		}
	}
	{
		// _lastEventTime = Time.time;
		float L_11;
		L_11 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastEventTime_15 = L_11;
		// if (_direction == Direction.ScaleUp)
		int32_t L_12 = __this->____direction_16;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// _whenScaledUp.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = __this->____whenScaledUp_10;
		NullCheck(L_13);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_13, NULL);
		return;
	}

IL_0079:
	{
		// _whenScaledDown.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = __this->____whenScaledDown_11;
		NullCheck(L_14);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_14, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Awake_m4A8C81C31396FDA3D91FE40EA027E0738CBC844B (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InteractableView = _interactableView as IInteractableView;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____interactableView_4;
		__this->___InteractableView_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InteractableView_12), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Start_mE71025214E69C9BC0DD49CF5098307AFBC30193D (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_17);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_17);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents_Update_m037C76B71472A12C357A0269DC922573194F700E (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool wasScaling = _isScaling;
		bool L_0 = __this->____isScaling_13;
		V_0 = L_0;
		// _isScaling = InteractableView.State == InteractableState.Select;
		RuntimeObject* L_1 = __this->___InteractableView_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.InteractableState Oculus.Interaction.IInteractableView::get_State() */, IInteractableView_t043883F31EB8B9D77ABD7A85BB70EF83FF13741F_il2cpp_TypeInfo_var, L_1);
		__this->____isScaling_13 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		// if (!_isScaling)
		bool L_3 = __this->____isScaling_13;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (wasScaling)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// ScalingEnded();
		ScaleAudioEvents_ScalingEnded_m22E19C9E78B9C104B08A769ED5767631605D2804(__this, NULL);
		return;
	}

IL_002d:
	{
		// if (!wasScaling)
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// ScalingStarted();
		ScaleAudioEvents_ScalingStarted_mAC45C31D04221EE5EE83DF8024D2BB26B3BA0C59(__this, NULL);
	}

IL_0036:
	{
		// UpdateScaling();
		ScaleAudioEvents_UpdateScaling_mD7A487C286EA70BFC5104304EF5D63FAF8F82E15(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleAudioEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleAudioEvents__ctor_m8C4FE059C80759768CC9DE25AB27855922DE9C37 (ScaleAudioEvents_t1331F26264E9B7CA5D1D9A0FFA59C79D1630B79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _stepSize = 0.4f;
		__this->____stepSize_6 = (0.400000006f);
		// private int _maxEventFreq = 20;
		__this->____maxEventFreq_7 = ((int32_t)20);
		// private UnityEvent _whenScalingStarted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->____whenScalingStarted_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenScalingStarted_8), (void*)L_0);
		// private UnityEvent _whenScalingEnded = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->____whenScalingEnded_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenScalingEnded_9), (void*)L_1);
		// private UnityEvent _whenScaledUp = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->____whenScaledUp_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenScaledUp_10), (void*)L_2);
		// private UnityEvent _whenScaledDown = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->____whenScaledDown_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whenScaledDown_11), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleX_mD0184062B6DD04E91C1A64D71206249330D6CF4C (ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector3(x, transform.localScale.y, transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = ___x0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleY_mEF8A723EEC41C61EB0FE945A6EFE02F9D82A6C9E (ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C* __this, float ___y0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector3(transform.localScale.x, y, transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = ___y0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::SetScaleZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier_SetScaleZ_m9B9C1B5DA616C64E2B7F7328594B3BE316553211 (ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C* __this, float ___z0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___z0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.ScaleModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleModifier__ctor_m07D84C1E3E787C7A3F87F4FBCE3C9D6156C0682B (ScaleModifier_tFC254218B36BF8F5CABCA654A37A904807A2635C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.SceneLoader::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m78D79F624C5BF7F79360F19801AC219CB0FD0FC4 (SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	{
		// if (_loading) return;
		bool L_0 = __this->____loading_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_loading) return;
		return;
	}

IL_0009:
	{
		// _loading = true;
		__this->____loading_4 = (bool)1;
		// StartCoroutine(LoadSceneAsync(sceneName));
		String_t* L_1 = ___sceneName0;
		RuntimeObject* L_2;
		L_2 = SceneLoader_LoadSceneAsync_m90E81AA3DE97DF5F6642AA05466B50EAE68BCC21(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.Samples.SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_m90E81AA3DE97DF5F6642AA05466B50EAE68BCC21 (SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* L_0 = (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9*)il2cpp_codegen_object_new(U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneAsyncU3Ed__2__ctor_m432ECE43BCAF427E1BC972FFF7C5BF0473643BCA(L_0, 0, NULL);
		U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* L_1 = L_0;
		String_t* L_2 = ___sceneName0;
		NullCheck(L_1);
		L_1->___sceneName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___sceneName_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_mB27D4CE97BC38445B675F4BCBA26EE62F554D6BD (SceneLoader_t4AA4E9B9DCFB244B9A7709872EF693F911726126* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m432ECE43BCAF427E1BC972FFF7C5BF0473643BCA (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_IDisposable_Dispose_m85D7F7FAFED79FE083574215D6FAF3A99767BA15 (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAsyncU3Ed__2_MoveNext_m19B5A0FD2AE9C29726AF625533E582855DAAE38A (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);
		String_t* L_3 = __this->___sceneName_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_3, NULL);
		__this->___U3CasyncLoadU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncLoadU3E5__2_3), (void*)L_4);
		goto IL_0041;
	}

IL_002a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0041:
	{
		// while (!asyncLoad.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CasyncLoadU3E5__2_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_5, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAsyncU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6F2E4C831ACEB4D59B33885ED88893A462CD7F0E (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_mED076EBEECE15EDFD8A011931A69BE5C9FC71D50 (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_mED076EBEECE15EDFD8A011931A69BE5C9FC71D50_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_get_Current_m2A5D999714C01C441C5D6EEB28E5AE5DE58F0EF3 (U3CLoadSceneAsyncU3Ed__2_t297E1CD1969E0D630CBA04040E0841A0FD684AE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.ShouldHideHandOnGrab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldHideHandOnGrab__ctor_m0E3E1B695CDC4CA0096E8B2CE7AD90D5685C8C52 (ShouldHideHandOnGrab_tD722C9006FFC7812E33374EBFCAED70393B45225* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Samples.StayInView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayInView_Update_m89864AE8B102BD06AB6E325CAC4DE718E2537BF0 (StayInView_tE8D2B7875C6FA1C3D1632647610427931746757A* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_1, NULL);
		// transform.position = _eyeCenter.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____eyeCenter_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// transform.Rotate(0, _eyeCenter.rotation.eulerAngles.y, 0, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____eyeCenter_4;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_9 = L_8.___y_3;
		NullCheck(L_5);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_5, (0.0f), L_9, (0.0f), 1, NULL);
		// transform.position = _eyeCenter.position + transform.forward.normalized * _extraDistanceForward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____eyeCenter_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		V_1 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_16 = __this->____extraDistanceForward_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_17, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_18, NULL);
		// if (_zeroOutEyeHeight)
		bool L_19 = __this->____zeroOutEyeHeight_6;
		if (!L_19)
		{
			goto IL_00ca;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, 0, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_23, (0.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_27, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Samples.StayInView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayInView__ctor_m435B954052EEF944F030C5A3943EB5EAF7884060 (StayInView_tE8D2B7875C6FA1C3D1632647610427931746757A* __this, const RuntimeMethod* method) 
{
	{
		// private bool _zeroOutEyeHeight = true;
		__this->____zeroOutEyeHeight_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_HardCollisionSound_mC8D0A5004464D909A2A438C752BC62E1B10C8039_inline (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) 
{
	{
		// public AudioTrigger HardCollisionSound => _hardCollisionSound;
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0 = __this->____hardCollisionSound_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* ImpactAudio_get_SoftCollisionSound_m1F65C7BEFC9DE8C6C2171242DBE51F6645B683F7_inline (ImpactAudio_tA0AF63D9BFC030A6635A44B38902893591CE7AF2* __this, const RuntimeMethod* method) 
{
	{
		// public AudioTrigger SoftCollisionSound => _softCollisionSound;
		AudioTrigger_t045CC4DD17FA02C609833CF7A0AC23CB4F76EEDF* L_0 = __this->____softCollisionSound_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MinMaxPair_get_UseRandomRange_mD77D9B56F805A3F1BAEBF0D8486277F7A030836F_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseRandomRange => _useRandomRange;
		bool L_0 = __this->____useRandomRange_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Min_mCE2897C0582771EB5578C0BECEA8FE6F4607D6B9_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public float Min => _min;
		float L_0 = __this->____min_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MinMaxPair_get_Max_m308BBF686DCF4B737BBE28A706107874DF250BEA_inline (MinMaxPair_t5FEBEDD7C92EC50246A87F84A1D1B1B9A93C8DC8* __this, const RuntimeMethod* method) 
{
	{
		// public float Max => _max;
		float L_0 = __this->____max_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_mD057CF0F1810C00D0F9E98A5CC5599213CF167DB_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_mE35BBC0ADCBAA2E71E90C080D7A8A4A19AABCC74(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		float L_2 = ___t2;
		float L_3 = ___t2;
		float L_4 = ___t2;
		float L_5 = ___t2;
		float L_6 = ___t2;
		___t2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___to1;
		float L_8 = ___t2;
		float L_9 = ___from0;
		float L_10 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandVisual_set_ForceOffVisibility_mA193E64D7A4E8F539BF02CD723D9DA870C90E5C7_inline (HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ForceOffVisibility { get; set; }
		bool L_0 = ___value0;
		__this->___U3CForceOffVisibilityU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandGrabInteractor_m3A2E71CE76E326E2CD2A0B838F3080D3A0BD88F1_inline (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* ___handGrabInteractor0, const RuntimeMethod* method) 
{
	{
		// _handGrabInteractor = handGrabInteractor;
		HandGrabInteractor_tE0AC4D104B9C86C75A4A8B4748C6041C8E9DC9A2* L_0 = ___handGrabInteractor0;
		__this->____handGrabInteractor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabInteractor_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HideHandVisualOnGrab_InjectHandVisual_mFDCFBCD4EBAB52AEF2F5393943432F7F414F29BD_inline (HideHandVisualOnGrab_t0A089F27E0391D0D4DED25457833C9A1D5511218* __this, HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* ___handVisual0, const RuntimeMethod* method) 
{
	{
		// _handVisual = handVisual;
		HandVisual_tB703F06CCD9890A6EB230074CF28EB7D7325DA80* L_0 = ___handVisual0;
		__this->____handVisual_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handVisual_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform centerEyeAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CcenterEyeAnchorU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Interactor_2_get_State_m6425C65DC9166A222ED2A4850455B4A377DA3FC8_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// return _state;
		int32_t L_0 = (int32_t)__this->____state_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// public TInteractable SelectedInteractable => _selectedInteractable;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____selectedInteractable_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
