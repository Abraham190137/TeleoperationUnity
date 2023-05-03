#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Delegate>
struct KeyCollection_t29B1E367D95E46B2E45B4C33E1F3C5644F15EC98;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Delegate>
struct ValueCollection_t6C0A84D04F87D3A05857431804390724962C3F6F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Delegate>[]
struct EntryU5BU5D_tBACA0DA26A77797D416943C38A345F0E2F0BD9F4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Assimp.Configs.ACEvaluateSubdivisionConfig
struct ACEvaluateSubdivisionConfig_t4E313B45BC5CF57D84968E5E216C9AFC643E9DAA;
// Assimp.Configs.ACSeparateBackfaceCullConfig
struct ACSeparateBackfaceCullConfig_t2E9199D0240F4E3CFF2F05A3E801A70FDAF5FAE1;
// Assimp.Configs.ASEReconstructNormalsConfig
struct ASEReconstructNormalsConfig_t31CBE16A9B0B5C466282758D1E2140744048D20D;
// Assimp.Unmanaged.AiFileCloseProc
struct AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0;
// Assimp.Unmanaged.AiFileFlushProc
struct AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B;
// Assimp.Unmanaged.AiFileOpenProc
struct AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1;
// Assimp.Unmanaged.AiFileReadProc
struct AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E;
// Assimp.Unmanaged.AiFileSeek
struct AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B;
// Assimp.Unmanaged.AiFileTellProc
struct AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33;
// Assimp.Unmanaged.AiFileWriteProc
struct AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A;
// Assimp.Unmanaged.AiLogStreamCallback
struct AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4;
// Assimp.Configs.AnimationAccuracyConfig
struct AnimationAccuracyConfig_t95F0F2C28E56BFFAD1617EF266F4AC39FC01F813;
// Assimp.AssimpException
struct AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66;
// Assimp.Unmanaged.AssimpLibrary
struct AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Assimp.Configs.BooleanPropertyConfig
struct BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Assimp.Configs.ColladaIgnoreUpDirectionConfig
struct ColladaIgnoreUpDirectionConfig_t9327AE913A63D3F10E84E1C34BA67FA9EA2BFB82;
// Assimp.Configs.DeboneAllOrNoneConfig
struct DeboneAllOrNoneConfig_t125CBB4E3BC13C6D2E42608DCBF9A4F38B7275A8;
// Assimp.Configs.DeboneThresholdConfig
struct DeboneThresholdConfig_tD954AD1CE739E9B9F20EB98A909B492F416305A8;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Assimp.Configs.FBXImportAllGeometryLayersConfig
struct FBXImportAllGeometryLayersConfig_tB713EF24C3CDE50A2380F7B480E310F4F6B77038;
// Assimp.Configs.FBXImportAllMaterialsConfig
struct FBXImportAllMaterialsConfig_tEBA0D806301552AEAE255740F0943236C1FDC09E;
// Assimp.Configs.FBXImportAnimationsConfig
struct FBXImportAnimationsConfig_tF440AE2ADC70AF1296273E3ADE840887781805F7;
// Assimp.Configs.FBXImportCamerasConfig
struct FBXImportCamerasConfig_t2D5AD2CCB671E65B411400019FAD46591B7812D4;
// Assimp.Configs.FBXImportEmbeddedTexturesConfig
struct FBXImportEmbeddedTexturesConfig_tBDD879E1C5C40F303A11C29CC092205C0C1C1254;
// Assimp.Configs.FBXImportLightsConfig
struct FBXImportLightsConfig_t9FD5CEBFBEA3FCA56672B7BDC99BB4C6673347A1;
// Assimp.Configs.FBXImportMaterialsConfig
struct FBXImportMaterialsConfig_tF857231BC918097B64B36CB1D1F6C6FE7986D68E;
// Assimp.Configs.FBXImportSearchEmbeddedTexturesConfig
struct FBXImportSearchEmbeddedTexturesConfig_tDDBB1F54618CF4FDC36F9555C803E9C19C57B2B8;
// Assimp.Configs.FBXOptimizeEmptyAnimationCurvesConfig
struct FBXOptimizeEmptyAnimationCurvesConfig_tDB1B56CDB5FCDFF4CB9CB9E6E001213AA11A4A0D;
// Assimp.Configs.FBXPreservePivotsConfig
struct FBXPreservePivotsConfig_t22C5459853F44382B02AD6EE0AEC1FACD44D347D;
// Assimp.Configs.FBXStrictModeConfig
struct FBXStrictModeConfig_tAE8F7545860A42F9999BADD4981A81845805D68C;
// Assimp.Configs.FavorSpeedConfig
struct FavorSpeedConfig_t17E4872CE1E8E400D5FE9B68BA9CC65D729751C5;
// Assimp.Configs.FloatPropertyConfig
struct FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C;
// Assimp.Configs.GlobalKeyFrameImportConfig
struct GlobalKeyFrameImportConfig_tA2DF717F5C7685999CC3B78471CA548AAB04BB40;
// Assimp.Configs.GlobalScaleConfig
struct GlobalScaleConfig_t5F0A39EFE7266C6D1AECB8B3A609243F7EC45D06;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Assimp.Configs.IFCCylindricalTessellationConfig
struct IFCCylindricalTessellationConfig_t78D07DB482FF670FDE9C2C991F602101334402B5;
// Assimp.Configs.IFCSkipSpaceRepresentationsConfig
struct IFCSkipSpaceRepresentationsConfig_tEE1A17705F78B89F58E203590737CD6B1B7112C0;
// Assimp.Configs.IFCSmoothingAngleConfig
struct IFCSmoothingAngleConfig_t4C65EC9E0F9F6F372E6A9BF545EE039467E892F7;
// Assimp.Configs.IFCUseCustomTriangulationConfig
struct IFCUseCustomTriangulationConfig_tF6C7E3AB357143BB6BEC0C64A9BC15584035D7DC;
// Assimp.Configs.IRRAnimationFrameRateConfig
struct IRRAnimationFrameRateConfig_t2D4BC7DBEC07ACADC360A4E9BCCA8B503A96B154;
// Assimp.Configs.IntegerPropertyConfig
struct IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Assimp.Configs.KeepSceneHierarchyConfig
struct KeepSceneHierarchyConfig_t00FA767541AD5522AB1F4A2C54DFC143FC76640A;
// Assimp.Configs.LWOImportOneLayerConfig
struct LWOImportOneLayerConfig_t099329519D3A3EC101EC00F251B517E2F9129F39;
// Assimp.Configs.LWSAnimationEndConfig
struct LWSAnimationEndConfig_tFE7B74B5A9C46721073340E31CAC7C09F6BEF5BF;
// Assimp.Configs.LWSAnimationStartConfig
struct LWSAnimationStartConfig_tEEF195CCB32B6BCC7CA7BC114D79047B0A45C8A5;
// Assimp.Configs.MD2KeyFrameImportConfig
struct MD2KeyFrameImportConfig_tA5FE53D43475F744FC33C9B6B30CF9E1855BDCA4;
// Assimp.Configs.MD3HandleMultiPartConfig
struct MD3HandleMultiPartConfig_tEB43874AC6790669237890EDC67CCD70A459B588;
// Assimp.Configs.MD3KeyFrameImportConfig
struct MD3KeyFrameImportConfig_t80E5AFE5284C86855AD2365EC812CF9997432A82;
// Assimp.Configs.MD3ShaderSourceConfig
struct MD3ShaderSourceConfig_t89AA3EEB4F4A7EC9343DA9F060707AE87934ED1A;
// Assimp.Configs.MD3SkinNameConfig
struct MD3SkinNameConfig_t599AB7BA36641B6FBF7C776E9E00F362AF8D4406;
// Assimp.Configs.MD5NoAnimationAutoLoadConfig
struct MD5NoAnimationAutoLoadConfig_t965A0482BCCE200137F1FE0841DC04360DF5C1FE;
// Assimp.Configs.MDLColorMapConfig
struct MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285;
// Assimp.Configs.MDLKeyFrameImportConfig
struct MDLKeyFrameImportConfig_t8CE9C5985603300100208ACCC3BCC8227F103BCD;
// Assimp.Configs.MaterialExcludeListConfig
struct MaterialExcludeListConfig_tA527D209D6A05B3E751545CD40D28C630B21CDA2;
// Assimp.Configs.MatrixPropertyConfig
struct MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836;
// Assimp.Configs.MaxBoneCountConfig
struct MaxBoneCountConfig_t043E83CAE39BE13A6CE320DEC8422403E36F6E9C;
// Assimp.Configs.MeasureTimeConfig
struct MeasureTimeConfig_tCD93FDA353A6B989B61FFBDF16A0AB1EED9FDA37;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Assimp.Configs.MeshTriangleLimitConfig
struct MeshTriangleLimitConfig_tA7F2B3FD4E7442508F637A8A7C9892EA99CADCEB;
// Assimp.Configs.MeshVertexLimitConfig
struct MeshVertexLimitConfig_tD016B96D9D07327CCDF6D3378CD859782DFB022C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Assimp.Configs.MultithreadingConfig
struct MultithreadingConfig_t4F8CD4FC58C8A70A67AD527DCF02B1C8C3526F27;
// Assimp.Configs.NoSkeletonMeshesConfig
struct NoSkeletonMeshesConfig_tF9CC55B974C90270132324C064A016DEF0B20185;
// Assimp.Configs.NodeExcludeListConfig
struct NodeExcludeListConfig_t26F38B91E9C4B62C39A6633B5CFCB685B7438594;
// Assimp.Configs.NormalSmoothingAngleConfig
struct NormalSmoothingAngleConfig_t4FE224EAC5CB9461EE12DFF32B4D2D520FD1368B;
// Assimp.Configs.NormalizeVertexComponentsConfig
struct NormalizeVertexComponentsConfig_t0E7C308FC3E7CA42E6073B797748750BF0D889BD;
// Assimp.Configs.OgreMaterialFileConfig
struct OgreMaterialFileConfig_t6349FB3455B4E77FA979A6BA6082C67703A840DB;
// Assimp.Configs.OgreTextureTypeFromFilenameConfig
struct OgreTextureTypeFromFilenameConfig_t77FCBFD65818A42E6FAA1150682EEC81485D9262;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// Assimp.Configs.PropertyConfig
struct PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0;
// Assimp.Configs.RemoveComponentConfig
struct RemoveComponentConfig_t294CCB5CA33733CE7BB28AE6130B8544BA239E5A;
// Assimp.Configs.RemoveDegeneratePrimitivesCheckAreaConfig
struct RemoveDegeneratePrimitivesCheckAreaConfig_tBC41FEDD4E87C49D65ABB72A34AD499F7A57CF0A;
// Assimp.Configs.RemoveDegeneratePrimitivesConfig
struct RemoveDegeneratePrimitivesConfig_t3689391E195E89C3B10AA01A0F8F406ACC201ABF;
// Assimp.Configs.RootTransformationConfig
struct RootTransformationConfig_t7F50E5EB5A6DDF2217FE184DEE4CFC4E8384D2FE;
// Assimp.Configs.SMDKeyFrameImportConfig
struct SMDKeyFrameImportConfig_t60DD41B67F59A726DC7AB009518CA4A36A152BFB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Assimp.Configs.SortByPrimitiveTypeConfig
struct SortByPrimitiveTypeConfig_tF6D42A060349A92D98F40BC46BD0D7166CCB0D1C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Assimp.Configs.StringPropertyConfig
struct StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223;
// Assimp.Configs.TangentSmoothingAngleConfig
struct TangentSmoothingAngleConfig_t0ED728B7AE2DCD924BEDC91B934EA5B56B6161CC;
// Assimp.Configs.TangentTextureChannelIndexConfig
struct TangentTextureChannelIndexConfig_t3FDC69D84ECE03CF7A63DF434BC57842A4B15B11;
// Assimp.Configs.TerragenComputeTexCoordsConfig
struct TerragenComputeTexCoordsConfig_t31BA11AF7C84FFC4FA4860237BDC90F364F3D5B6;
// Assimp.Configs.TransformUVConfig
struct TransformUVConfig_tC2E379341C92BD3209F6EF90F4BDA5F1E89271A9;
// System.Type
struct Type_t;
// Assimp.Unmanaged.UnmanagedFunctionNameAttribute
struct UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3;
// Assimp.Unmanaged.UnmanagedLibrary
struct UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B;
// Assimp.Unmanaged.UnmanagedLibraryResolver
struct UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0;
// Assimp.Configs.UnrealHandleFlagsConfig
struct UnrealHandleFlagsConfig_tAEF1572EC9C0C95B7E5D925D15A4B3A5436D9AE9;
// Assimp.Configs.UnrealKeyFrameImportConfig
struct UnrealKeyFrameImportConfig_t986091639E2D388AAA85AD4B86C6E26FBAD03154;
// Assimp.Configs.VertexBoneWeightLimitConfig
struct VertexBoneWeightLimitConfig_t462FCC7A0166216F7D63440FDD0D1A3B3F7662B0;
// Assimp.Configs.VertexCacheSizeConfig
struct VertexCacheSizeConfig_t43287D1386A4C30AE8D04E884264ACC74BF0C23B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Assimp.Configs.XFileUseDoublesConfig
struct XFileUseDoublesConfig_t8FE3FB70D83056F7EB6838C03B3DCFD2D839C339;
// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation
struct UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787;
// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation
struct UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157;
// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation
struct UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163;
// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation
struct UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824;

IL2CPP_EXTERN_C RuntimeClass* AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Origin_tE9647DBDBE00F7956694FBA0A641C137FF967B49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral005157E3275F5BA407CA0F848223F02AA1C1DABB;
IL2CPP_EXTERN_C String_t* _stringLiteral020FEC3F246AC64C8893C861CFBF1755ECD79478;
IL2CPP_EXTERN_C String_t* _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0AF1CD66BA7238BB6CC8A2DE3F3287FBFF270B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5F43DC9B36D1AA73C977E365B7F525548C2ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral138F011E53CF5E5DF3FAC905EC7B652E9A145EFA;
IL2CPP_EXTERN_C String_t* _stringLiteral178DC02F4C47EA5521BD091C5F94E36A8B17273C;
IL2CPP_EXTERN_C String_t* _stringLiteral186D2EEB9709E8187F8D65D5F834099D83B75C64;
IL2CPP_EXTERN_C String_t* _stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1FF502E60BB66CE17C004B2E1B6654BB32B4B82E;
IL2CPP_EXTERN_C String_t* _stringLiteral29C08D11553F73580DECFBA5D2D368F8AD6FC20D;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD0B7B8984795BC508DF3CAEEE9CC88EB106926;
IL2CPP_EXTERN_C String_t* _stringLiteral2E088DB395BCC90437121AE55755D8E931AB12BB;
IL2CPP_EXTERN_C String_t* _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
IL2CPP_EXTERN_C String_t* _stringLiteral390496DE533E13A5E24DF8B4773BAD182260BA98;
IL2CPP_EXTERN_C String_t* _stringLiteral3912B758EFBFB0B480C46B1C426F1E8065432A5F;
IL2CPP_EXTERN_C String_t* _stringLiteral39D88DBD9E7789782A5DDED3B7AE323F515A9335;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF4A54F05B602791BBB1401F2711124F527811B;
IL2CPP_EXTERN_C String_t* _stringLiteral4051BD42005B95FD5931B0C9F575A73E06D40778;
IL2CPP_EXTERN_C String_t* _stringLiteral431AB320C807E668ADBD977AA60A27586E2B9C89;
IL2CPP_EXTERN_C String_t* _stringLiteral44D41FB40EFBF08CF7881EBE5DA263D579C50E5F;
IL2CPP_EXTERN_C String_t* _stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122;
IL2CPP_EXTERN_C String_t* _stringLiteral491A5C27D93C2B3D6F1F6609E0D1EE3BFA9C3299;
IL2CPP_EXTERN_C String_t* _stringLiteral4A76384DF64D00219FFAAFEAD6E301E7B9613660;
IL2CPP_EXTERN_C String_t* _stringLiteral4EEB4B6A9CFE7E31657EEC40881E4434E51CD725;
IL2CPP_EXTERN_C String_t* _stringLiteral550DFCAF1B87634DA24F71BF5897F8B6DDB16763;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5C36733F4CD20C5A83598695FC846136F40B7C;
IL2CPP_EXTERN_C String_t* _stringLiteral65D684C8748CA5C39AD28927CE22EEC4F43CC1D0;
IL2CPP_EXTERN_C String_t* _stringLiteral65E8F32CC0FB432888F81177732BA223324177B0;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC472B7E011C2EE951D560C86981A17D6B484B7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral7C045506AE7F231F2300C7DA86DF91C8D441C5EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7F085393E37599D9DE87B716299A4E9448BD2516;
IL2CPP_EXTERN_C String_t* _stringLiteral803866517AC73D4D8E9D827A24357DBBFB659B8D;
IL2CPP_EXTERN_C String_t* _stringLiteral822113580537A0DE87EA26210856E557C38F945B;
IL2CPP_EXTERN_C String_t* _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7;
IL2CPP_EXTERN_C String_t* _stringLiteral847DA1757A63F227219FC36129F4E28F5DE27725;
IL2CPP_EXTERN_C String_t* _stringLiteral8529CF4BDFB855B0066A805EC7D0392F8A5F26E0;
IL2CPP_EXTERN_C String_t* _stringLiteral85EFCBB75A7E4378AE29264B185738EEC8B062CE;
IL2CPP_EXTERN_C String_t* _stringLiteral89184934DE378DF8F27CB987E26B338717ED9666;
IL2CPP_EXTERN_C String_t* _stringLiteral8C277875F4F60D0278175249BB52B37CE28E43DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8CC4034453BE2EABCDE35B528FFF816C4D714C32;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6771FF20C417B7686E8F14B828F8569D572E1E;
IL2CPP_EXTERN_C String_t* _stringLiteral911CE202A35C8218A6BF20B4A20FCB5F942B9717;
IL2CPP_EXTERN_C String_t* _stringLiteral929581C7EFFC2D5F5827E1AC5480A196FEF117F9;
IL2CPP_EXTERN_C String_t* _stringLiteral92BFAB4D27CE95C93DECB4163820F9FFB72EA814;
IL2CPP_EXTERN_C String_t* _stringLiteral932A63B146076A6244C706714DEE28D849CFD561;
IL2CPP_EXTERN_C String_t* _stringLiteral94EDFC39FAABD7248586EC1C3BE676C1EC7C8DCF;
IL2CPP_EXTERN_C String_t* _stringLiteral983BC27A8BF777620A002766DCB92E7E89500917;
IL2CPP_EXTERN_C String_t* _stringLiteral99C826604CE55A7F56BA506D0C62AD8445AB39DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDD7E7F5FE9D778333C6C2AD046BA105D0C70C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9F01F6450A9A22F2F6F6C31BB1EAB46C99A2FACC;
IL2CPP_EXTERN_C String_t* _stringLiteralA0D59168A814C204C5FC454CD41AAE6BD09AC036;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EAD69A501E8C3C456989BC830A3B203AC3128D;
IL2CPP_EXTERN_C String_t* _stringLiteralA56C1F883728164C2B221EC784DD9533C0EC3C85;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E3E5F87C6116DBB5D5199AE48312CD0FB5D7EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA79F6FD98FCEE461B2E3AC376E12E7C9D65E2649;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD0B996F2F281F405BF3624AB7D71D4FBA20F3C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416;
IL2CPP_EXTERN_C String_t* _stringLiteralB7EBD735BE65E9535055D10F098AEC5FB6CB0541;
IL2CPP_EXTERN_C String_t* _stringLiteralB805D502729F61CD276150F442B6A7AF250FF2EF;
IL2CPP_EXTERN_C String_t* _stringLiteralBACE26EF1313662B3BC65A2DD9B88DF5B6831B99;
IL2CPP_EXTERN_C String_t* _stringLiteralCB3A00FD9F479C991E81D6FC3D4F4332FE273074;
IL2CPP_EXTERN_C String_t* _stringLiteralCF8DAB08B775BAA3835F16057F1BFF54C75B2DBF;
IL2CPP_EXTERN_C String_t* _stringLiteralD020F64F6ACE578CBC192FD6E66D7A42DDFCCEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD38C5BC7D1AB8685886D74635924E3C1FC433F6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD73150B9C1BBD1B9FE6CE9A5BEFCE9652E117F84;
IL2CPP_EXTERN_C String_t* _stringLiteralD9D4461749064F98B7E7F1633C9F95B4FCDF51DA;
IL2CPP_EXTERN_C String_t* _stringLiteralDB149D59C102433972B782A7BC10F5B98538E4F0;
IL2CPP_EXTERN_C String_t* _stringLiteralE16880C11DB57C2683658B57E128C0FF128CE111;
IL2CPP_EXTERN_C String_t* _stringLiteralE2819E0048EB7E46BAED38E68B06AC034E216E02;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DCCCCEFBBC75A18985E14A839FCC140B048040;
IL2CPP_EXTERN_C String_t* _stringLiteralE59E51C2F862C475A2B9B702C51681769BE5A570;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E3D620FFB00E5226321C416C5542FF1BD3A6B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE9637F5815BEA18ADBF91F42CC4FAB65C01CD487;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7825458F1D760CD96A958018679590897805DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE5811D8ABE63CCE0CF3F57F6E99C17E629F640;
IL2CPP_EXTERN_C String_t* _stringLiteralF116E5B6CD318D04460A2C85C4D54A5E122D088C;
IL2CPP_EXTERN_C String_t* _stringLiteralF1BE71E920B70B431E17F147C5CC565749839574;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FB53AA172062FBCCD526A03D1E312C3B9BBA82;
IL2CPP_EXTERN_C String_t* _stringLiteralF2FC69C7AEBBAF4CA27588B361E448D415BCA5AC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A498DF9B367A8EC3FE92A447F4F0C54C3BD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D1F3816359EC15F8A5AA25807448A362356074;
IL2CPP_EXTERN_C String_t* _stringLiteralFA9225C7C35006D46A134BE3D9E23A8C449D0578;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF8CCB341FEBB2CDDCAAC2EF8202E0BB8296E3;
IL2CPP_EXTERN_C String_t* _stringLiteralFC533574B651B54609D44077E9E17D277C96A94E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFC740DC4B588DEACABD94E8C79C0DD26C7065799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA5ED112FDE23E98A0E9A24339BF83DC1E0D2AB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEC9E9DC5A9A7DC8EC9D73564D35C0CEB7182ED6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC11B8D87D7D6237273D0616824847584DA85B003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary_CreateRuntimeImplementation_m7A24F3169E46C137C246ED63AB7DDF32725CB5A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary_GetPlatform_m06F8120DFE63A05DDE672F70E4E4F158E711F834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLinuxLibraryImplementation_NativeLoadLibrary_m1309155E9874623FA7CF83C7518311DD06FB9DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedMacLibraryImplementation_NativeLoadLibrary_mF53797F8DEE037EA28BEAC28F36EA0A532FC28AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedWindowsLibraryImplementation_NativeLoadLibrary_mF271E4E6679C59EB868301D76E1B7B46632E94FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBACA0DA26A77797D416943C38A345F0E2F0BD9F4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t29B1E367D95E46B2E45B4C33E1F3C5644F15EC98* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6C0A84D04F87D3A05857431804390724962C3F6F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Assimp.Configs.PropertyConfig
struct PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0  : public RuntimeObject
{
	// System.String Assimp.Configs.PropertyConfig::m_name
	String_t* ___m_name_0;
};

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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Assimp.Unmanaged.UnmanagedLibrary
struct UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B  : public RuntimeObject
{
	// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation Assimp.Unmanaged.UnmanagedLibrary::m_impl
	UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* ___m_impl_1;
	// Assimp.Unmanaged.UnmanagedLibraryResolver Assimp.Unmanaged.UnmanagedLibrary::m_resolver
	UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* ___m_resolver_2;
	// System.String Assimp.Unmanaged.UnmanagedLibrary::m_libraryPath
	String_t* ___m_libraryPath_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Assimp.Unmanaged.UnmanagedLibrary::m_checkNeedsLoading
	bool ___m_checkNeedsLoading_4;
	// System.EventHandler Assimp.Unmanaged.UnmanagedLibrary::LibraryLoaded
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___LibraryLoaded_5;
	// System.EventHandler Assimp.Unmanaged.UnmanagedLibrary::LibraryFreed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___LibraryFreed_6;
};

struct UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_StaticFields
{
	// System.Object Assimp.Unmanaged.UnmanagedLibrary::s_defaultLoadSync
	RuntimeObject* ___s_defaultLoadSync_0;
};

// Assimp.Unmanaged.UnmanagedLibraryResolver
struct UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0  : public RuntimeObject
{
	// System.String[] Assimp.Unmanaged.UnmanagedLibraryResolver::m_32BitLibNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_32BitLibNames_0;
	// System.String[] Assimp.Unmanaged.UnmanagedLibraryResolver::m_64BitLibNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_64BitLibNames_1;
	// System.String[] Assimp.Unmanaged.UnmanagedLibraryResolver::m_32BitProbingPaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_32BitProbingPaths_2;
	// System.String[] Assimp.Unmanaged.UnmanagedLibraryResolver::m_64BitProbingPaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_64BitProbingPaths_3;
	// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::m_override32BitName
	String_t* ___m_override32BitName_4;
	// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::m_override64BitName
	String_t* ___m_override64BitName_5;
	// Assimp.Unmanaged.Platform Assimp.Unmanaged.UnmanagedLibraryResolver::m_platform
	int32_t ___m_platform_6;
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

// Assimp.Unmanaged.AiMemoryInfo
struct AiMemoryInfo_t29769AA514A03D66DB8843B603073F8BA7FDBE72 
{
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Textures
	uint32_t ___Textures_0;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Materials
	uint32_t ___Materials_1;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Meshes
	uint32_t ___Meshes_2;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Nodes
	uint32_t ___Nodes_3;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Animations
	uint32_t ___Animations_4;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Cameras
	uint32_t ___Cameras_5;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Lights
	uint32_t ___Lights_6;
	// System.UInt32 Assimp.Unmanaged.AiMemoryInfo::Total
	uint32_t ___Total_7;
};

// Assimp.Unmanaged.AiMeshUVComponentArray
struct AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5 
{
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw0
	uint32_t ___m_uvw0_0;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw1
	uint32_t ___m_uvw1_1;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw2
	uint32_t ___m_uvw2_2;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw3
	uint32_t ___m_uvw3_3;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw4
	uint32_t ___m_uvw4_4;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw5
	uint32_t ___m_uvw5_5;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw6
	uint32_t ___m_uvw6_6;
	// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::m_uvw7
	uint32_t ___m_uvw7_7;
};

// Assimp.Unmanaged.AssimpLibrary
struct AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778  : public UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B
{
	// System.Boolean Assimp.Unmanaged.AssimpLibrary::m_enableVerboseLogging
	bool ___m_enableVerboseLogging_10;
};

struct AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_StaticFields
{
	// System.Object Assimp.Unmanaged.AssimpLibrary::s_sync
	RuntimeObject* ___s_sync_7;
	// Assimp.Unmanaged.AssimpLibrary Assimp.Unmanaged.AssimpLibrary::s_instance
	AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* ___s_instance_9;
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

// Assimp.Configs.BooleanPropertyConfig
struct BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303  : public PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0
{
	// System.Boolean Assimp.Configs.BooleanPropertyConfig::m_value
	bool ___m_value_1;
	// System.Boolean Assimp.Configs.BooleanPropertyConfig::m_defaultValue
	bool ___m_defaultValue_2;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Assimp.Color3D
struct Color3D_t89A26133A0FF16ED0304D150E6C1DA83A236FA16 
{
	// System.Single Assimp.Color3D::R
	float ___R_0;
	// System.Single Assimp.Color3D::G
	float ___G_1;
	// System.Single Assimp.Color3D::B
	float ___B_2;
};

// Assimp.Configs.FloatPropertyConfig
struct FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C  : public PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0
{
	// System.Single Assimp.Configs.FloatPropertyConfig::m_value
	float ___m_value_1;
	// System.Single Assimp.Configs.FloatPropertyConfig::m_defaultValue
	float ___m_defaultValue_2;
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

// Assimp.Configs.IntegerPropertyConfig
struct IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5  : public PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0
{
	// System.Int32 Assimp.Configs.IntegerPropertyConfig::m_value
	int32_t ___m_value_1;
	// System.Int32 Assimp.Configs.IntegerPropertyConfig::m_defaultValue
	int32_t ___m_defaultValue_2;
};

// Assimp.Matrix4x4
struct Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E 
{
	// System.Single Assimp.Matrix4x4::A1
	float ___A1_0;
	// System.Single Assimp.Matrix4x4::A2
	float ___A2_1;
	// System.Single Assimp.Matrix4x4::A3
	float ___A3_2;
	// System.Single Assimp.Matrix4x4::A4
	float ___A4_3;
	// System.Single Assimp.Matrix4x4::B1
	float ___B1_4;
	// System.Single Assimp.Matrix4x4::B2
	float ___B2_5;
	// System.Single Assimp.Matrix4x4::B3
	float ___B3_6;
	// System.Single Assimp.Matrix4x4::B4
	float ___B4_7;
	// System.Single Assimp.Matrix4x4::C1
	float ___C1_8;
	// System.Single Assimp.Matrix4x4::C2
	float ___C2_9;
	// System.Single Assimp.Matrix4x4::C3
	float ___C3_10;
	// System.Single Assimp.Matrix4x4::C4
	float ___C4_11;
	// System.Single Assimp.Matrix4x4::D1
	float ___D1_12;
	// System.Single Assimp.Matrix4x4::D2
	float ___D2_13;
	// System.Single Assimp.Matrix4x4::D3
	float ___D3_14;
	// System.Single Assimp.Matrix4x4::D4
	float ___D4_15;
};

struct Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_StaticFields
{
	// Assimp.Matrix4x4 Assimp.Matrix4x4::_identity
	Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ____identity_16;
};

// System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 
{
	// System.String System.Runtime.InteropServices.OSPlatform::_osPlatform
	String_t* ____osPlatform_0;
};

struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields
{
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<Linux>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3CLinuxU3Ek__BackingField_1;
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<OSX>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3COSXU3Ek__BackingField_2;
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<Windows>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3CWindowsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshaled_pinvoke
{
	char* ____osPlatform_0;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshaled_com
{
	Il2CppChar* ____osPlatform_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Assimp.Configs.StringPropertyConfig
struct StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223  : public PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0
{
	// System.String Assimp.Configs.StringPropertyConfig::m_value
	String_t* ___m_value_1;
	// System.String Assimp.Configs.StringPropertyConfig::m_defaultValue
	String_t* ___m_defaultValue_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// Assimp.Unmanaged.UnmanagedFunctionNameAttribute
struct UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Assimp.Unmanaged.UnmanagedFunctionNameAttribute::m_unmanagedFunctionName
	String_t* ___m_unmanagedFunctionName_0;
};

// Assimp.Vector2D
struct Vector2D_tA6ED5080774F7976B8A3096D229B52CB5F1096DB 
{
	// System.Single Assimp.Vector2D::X
	float ___X_0;
	// System.Single Assimp.Vector2D::Y
	float ___Y_1;
};

// Assimp.Vector3D
struct Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB 
{
	// System.Single Assimp.Vector3D::X
	float ___X_0;
	// System.Single Assimp.Vector3D::Y
	float ___Y_1;
	// System.Single Assimp.Vector3D::Z
	float ___Z_2;
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

// Assimp.Unmanaged.AiString/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD 
{
	union
	{
		struct
		{
			// System.Byte Assimp.Unmanaged.AiString/<Data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD__padding[1024];
	};
};

// Assimp.Unmanaged.AiTexture/<FormatHint>e__FixedBuffer
struct U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609 
{
	union
	{
		struct
		{
			// System.SByte Assimp.Unmanaged.AiTexture/<FormatHint>e__FixedBuffer::FixedElementField
			int8_t ___FixedElementField_0;
		};
		uint8_t U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609__padding[9];
	};
};

// Assimp.Configs.ACEvaluateSubdivisionConfig
struct ACEvaluateSubdivisionConfig_t4E313B45BC5CF57D84968E5E216C9AFC643E9DAA  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.ACSeparateBackfaceCullConfig
struct ACSeparateBackfaceCullConfig_t2E9199D0240F4E3CFF2F05A3E801A70FDAF5FAE1  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.ASEReconstructNormalsConfig
struct ASEReconstructNormalsConfig_t31CBE16A9B0B5C466282758D1E2140744048D20D  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Unmanaged.AiExportFormatDesc
struct AiExportFormatDesc_t791087F19B99E14744A132A920F30C564B6C9F03 
{
	// System.IntPtr Assimp.Unmanaged.AiExportFormatDesc::FormatId
	intptr_t ___FormatId_0;
	// System.IntPtr Assimp.Unmanaged.AiExportFormatDesc::Description
	intptr_t ___Description_1;
	// System.IntPtr Assimp.Unmanaged.AiExportFormatDesc::FileExtension
	intptr_t ___FileExtension_2;
};

// Assimp.Unmanaged.AiFace
struct AiFace_t433AF4F3B107F24FC584ACB7DE0B35591C82FF08 
{
	// System.UInt32 Assimp.Unmanaged.AiFace::NumIndices
	uint32_t ___NumIndices_0;
	// System.IntPtr Assimp.Unmanaged.AiFace::Indices
	intptr_t ___Indices_1;
};

// Assimp.Unmanaged.AiFile
struct AiFile_tAA67456A4B1FDF6BB2F25467541BF4FF59B41536 
{
	// System.IntPtr Assimp.Unmanaged.AiFile::ReadProc
	intptr_t ___ReadProc_0;
	// System.IntPtr Assimp.Unmanaged.AiFile::WriteProc
	intptr_t ___WriteProc_1;
	// System.IntPtr Assimp.Unmanaged.AiFile::TellProc
	intptr_t ___TellProc_2;
	// System.IntPtr Assimp.Unmanaged.AiFile::FileSizeProc
	intptr_t ___FileSizeProc_3;
	// System.IntPtr Assimp.Unmanaged.AiFile::SeekProc
	intptr_t ___SeekProc_4;
	// System.IntPtr Assimp.Unmanaged.AiFile::FlushProc
	intptr_t ___FlushProc_5;
	// System.IntPtr Assimp.Unmanaged.AiFile::UserData
	intptr_t ___UserData_6;
};

// Assimp.Unmanaged.AiFileIO
struct AiFileIO_tDEF5DEA387C5FE737AF262C592D233C13AFBA92F 
{
	// System.IntPtr Assimp.Unmanaged.AiFileIO::OpenProc
	intptr_t ___OpenProc_0;
	// System.IntPtr Assimp.Unmanaged.AiFileIO::CloseProc
	intptr_t ___CloseProc_1;
	// System.IntPtr Assimp.Unmanaged.AiFileIO::UserData
	intptr_t ___UserData_2;
};

// Assimp.Unmanaged.AiImporterDesc
struct AiImporterDesc_tBB0B151F30B7743711AD991A69BCB9E062A7FBE3 
{
	// System.IntPtr Assimp.Unmanaged.AiImporterDesc::Name
	intptr_t ___Name_0;
	// System.IntPtr Assimp.Unmanaged.AiImporterDesc::Author
	intptr_t ___Author_1;
	// System.IntPtr Assimp.Unmanaged.AiImporterDesc::Maintainer
	intptr_t ___Maintainer_2;
	// System.IntPtr Assimp.Unmanaged.AiImporterDesc::Comments
	intptr_t ___Comments_3;
	// Assimp.ImporterFeatureFlags Assimp.Unmanaged.AiImporterDesc::Flags
	int32_t ___Flags_4;
	// System.UInt32 Assimp.Unmanaged.AiImporterDesc::MinMajor
	uint32_t ___MinMajor_5;
	// System.UInt32 Assimp.Unmanaged.AiImporterDesc::MinMinor
	uint32_t ___MinMinor_6;
	// System.UInt32 Assimp.Unmanaged.AiImporterDesc::MaxMajor
	uint32_t ___MaxMajor_7;
	// System.UInt32 Assimp.Unmanaged.AiImporterDesc::MaxMinor
	uint32_t ___MaxMinor_8;
	// System.IntPtr Assimp.Unmanaged.AiImporterDesc::FileExtensions
	intptr_t ___FileExtensions_9;
};

// Assimp.Unmanaged.AiLogStream
struct AiLogStream_t532980A8A53C992B6A26F4ACA3BAAA566835EAE0 
{
	// System.IntPtr Assimp.Unmanaged.AiLogStream::Callback
	intptr_t ___Callback_0;
	// System.IntPtr Assimp.Unmanaged.AiLogStream::UserData
	intptr_t ___UserData_1;
};

// Assimp.Unmanaged.AiMaterial
struct AiMaterial_t9AB0697F64D30A09DF0D9878202A5892344AC6F6 
{
	// System.IntPtr Assimp.Unmanaged.AiMaterial::Properties
	intptr_t ___Properties_0;
	// System.UInt32 Assimp.Unmanaged.AiMaterial::NumProperties
	uint32_t ___NumProperties_1;
	// System.UInt32 Assimp.Unmanaged.AiMaterial::NumAllocated
	uint32_t ___NumAllocated_2;
};

// Assimp.Unmanaged.AiMeshColorArray
struct AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80 
{
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr0
	intptr_t ___m_ptr0_0;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr1
	intptr_t ___m_ptr1_1;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr2
	intptr_t ___m_ptr2_2;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr3
	intptr_t ___m_ptr3_3;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr4
	intptr_t ___m_ptr4_4;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr5
	intptr_t ___m_ptr5_5;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr6
	intptr_t ___m_ptr6_6;
	// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::m_ptr7
	intptr_t ___m_ptr7_7;
};

// Assimp.Unmanaged.AiMeshMorphKey
struct AiMeshMorphKey_t9EAC4AD794CBBE5E1FD1053A893DBE0265DB0189 
{
	// System.Double Assimp.Unmanaged.AiMeshMorphKey::Time
	double ___Time_0;
	// System.IntPtr Assimp.Unmanaged.AiMeshMorphKey::Values
	intptr_t ___Values_1;
	// System.IntPtr Assimp.Unmanaged.AiMeshMorphKey::Weights
	intptr_t ___Weights_2;
	// System.UInt32 Assimp.Unmanaged.AiMeshMorphKey::NumValuesAndWeights
	uint32_t ___NumValuesAndWeights_3;
};

// Assimp.Unmanaged.AiMeshTextureCoordinateArray
struct AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF 
{
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr0
	intptr_t ___m_ptr0_0;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr1
	intptr_t ___m_ptr1_1;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr2
	intptr_t ___m_ptr2_2;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr3
	intptr_t ___m_ptr3_3;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr4
	intptr_t ___m_ptr4_4;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr5
	intptr_t ___m_ptr5_5;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr6
	intptr_t ___m_ptr6_6;
	// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::m_ptr7
	intptr_t ___m_ptr7_7;
};

// Assimp.Unmanaged.AiMetadata
struct AiMetadata_t1221AB597BD3670DA1AA965F34BB7295F2FBC85B 
{
	// System.UInt32 Assimp.Unmanaged.AiMetadata::NumProperties
	uint32_t ___NumProperties_0;
	// System.IntPtr Assimp.Unmanaged.AiMetadata::keys
	intptr_t ___keys_1;
	// System.IntPtr Assimp.Unmanaged.AiMetadata::Values
	intptr_t ___Values_2;
};

// Assimp.Unmanaged.AiMetadataEntry
struct AiMetadataEntry_tE605FB7A5E7C44B98DE3AA93C4854D63A1EFB1BA 
{
	// Assimp.MetaDataType Assimp.Unmanaged.AiMetadataEntry::DataType
	int32_t ___DataType_0;
	// System.IntPtr Assimp.Unmanaged.AiMetadataEntry::Data
	intptr_t ___Data_1;
};

// Assimp.Unmanaged.AiScene
struct AiScene_tC95760EA8479CCDCE5783F1C4D07A9421009F1BC 
{
	// Assimp.SceneFlags Assimp.Unmanaged.AiScene::Flags
	int32_t ___Flags_0;
	// System.IntPtr Assimp.Unmanaged.AiScene::RootNode
	intptr_t ___RootNode_1;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumMeshes
	uint32_t ___NumMeshes_2;
	// System.IntPtr Assimp.Unmanaged.AiScene::Meshes
	intptr_t ___Meshes_3;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumMaterials
	uint32_t ___NumMaterials_4;
	// System.IntPtr Assimp.Unmanaged.AiScene::Materials
	intptr_t ___Materials_5;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumAnimations
	uint32_t ___NumAnimations_6;
	// System.IntPtr Assimp.Unmanaged.AiScene::Animations
	intptr_t ___Animations_7;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumTextures
	uint32_t ___NumTextures_8;
	// System.IntPtr Assimp.Unmanaged.AiScene::Textures
	intptr_t ___Textures_9;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumLights
	uint32_t ___NumLights_10;
	// System.IntPtr Assimp.Unmanaged.AiScene::Lights
	intptr_t ___Lights_11;
	// System.UInt32 Assimp.Unmanaged.AiScene::NumCameras
	uint32_t ___NumCameras_12;
	// System.IntPtr Assimp.Unmanaged.AiScene::Cameras
	intptr_t ___Cameras_13;
	// System.IntPtr Assimp.Unmanaged.AiScene::PrivateData
	intptr_t ___PrivateData_14;
};

// Assimp.Unmanaged.AiString
struct AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 
{
	// System.UIntPtr Assimp.Unmanaged.AiString::Length
	uintptr_t ___Length_0;
	// Assimp.Unmanaged.AiString/<Data>e__FixedBuffer Assimp.Unmanaged.AiString::Data
	U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD ___Data_1;
};

// Assimp.Unmanaged.AiTexture
struct AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D 
{
	// System.UInt32 Assimp.Unmanaged.AiTexture::Width
	uint32_t ___Width_1;
	// System.UInt32 Assimp.Unmanaged.AiTexture::Height
	uint32_t ___Height_2;
	// Assimp.Unmanaged.AiTexture/<FormatHint>e__FixedBuffer Assimp.Unmanaged.AiTexture::FormatHint
	U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609 ___FormatHint_3;
	// System.IntPtr Assimp.Unmanaged.AiTexture::Data
	intptr_t ___Data_4;
};

struct AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields
{
	// System.Char[] Assimp.Unmanaged.AiTexture::s_nullFormat
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_nullFormat_0;
};

// Assimp.Configs.AnimationAccuracyConfig
struct AnimationAccuracyConfig_t95F0F2C28E56BFFAD1617EF266F4AC39FC01F813  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
};

// Assimp.Configs.ColladaIgnoreUpDirectionConfig
struct ColladaIgnoreUpDirectionConfig_t9327AE913A63D3F10E84E1C34BA67FA9EA2BFB82  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.DeboneAllOrNoneConfig
struct DeboneAllOrNoneConfig_t125CBB4E3BC13C6D2E42608DCBF9A4F38B7275A8  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.DeboneThresholdConfig
struct DeboneThresholdConfig_tD954AD1CE739E9B9F20EB98A909B492F416305A8  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
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

// Assimp.Configs.FBXImportAllGeometryLayersConfig
struct FBXImportAllGeometryLayersConfig_tB713EF24C3CDE50A2380F7B480E310F4F6B77038  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportAllMaterialsConfig
struct FBXImportAllMaterialsConfig_tEBA0D806301552AEAE255740F0943236C1FDC09E  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportAnimationsConfig
struct FBXImportAnimationsConfig_tF440AE2ADC70AF1296273E3ADE840887781805F7  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportCamerasConfig
struct FBXImportCamerasConfig_t2D5AD2CCB671E65B411400019FAD46591B7812D4  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportEmbeddedTexturesConfig
struct FBXImportEmbeddedTexturesConfig_tBDD879E1C5C40F303A11C29CC092205C0C1C1254  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportLightsConfig
struct FBXImportLightsConfig_t9FD5CEBFBEA3FCA56672B7BDC99BB4C6673347A1  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportMaterialsConfig
struct FBXImportMaterialsConfig_tF857231BC918097B64B36CB1D1F6C6FE7986D68E  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXImportSearchEmbeddedTexturesConfig
struct FBXImportSearchEmbeddedTexturesConfig_tDDBB1F54618CF4FDC36F9555C803E9C19C57B2B8  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXOptimizeEmptyAnimationCurvesConfig
struct FBXOptimizeEmptyAnimationCurvesConfig_tDB1B56CDB5FCDFF4CB9CB9E6E001213AA11A4A0D  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXPreservePivotsConfig
struct FBXPreservePivotsConfig_t22C5459853F44382B02AD6EE0AEC1FACD44D347D  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FBXStrictModeConfig
struct FBXStrictModeConfig_tAE8F7545860A42F9999BADD4981A81845805D68C  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.FavorSpeedConfig
struct FavorSpeedConfig_t17E4872CE1E8E400D5FE9B68BA9CC65D729751C5  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.GlobalKeyFrameImportConfig
struct GlobalKeyFrameImportConfig_tA2DF717F5C7685999CC3B78471CA548AAB04BB40  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.GlobalScaleConfig
struct GlobalScaleConfig_t5F0A39EFE7266C6D1AECB8B3A609243F7EC45D06  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
};

// Assimp.Configs.IFCCylindricalTessellationConfig
struct IFCCylindricalTessellationConfig_t78D07DB482FF670FDE9C2C991F602101334402B5  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.IFCSkipSpaceRepresentationsConfig
struct IFCSkipSpaceRepresentationsConfig_tEE1A17705F78B89F58E203590737CD6B1B7112C0  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.IFCSmoothingAngleConfig
struct IFCSmoothingAngleConfig_t4C65EC9E0F9F6F372E6A9BF545EE039467E892F7  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
};

// Assimp.Configs.IFCUseCustomTriangulationConfig
struct IFCUseCustomTriangulationConfig_tF6C7E3AB357143BB6BEC0C64A9BC15584035D7DC  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.IRRAnimationFrameRateConfig
struct IRRAnimationFrameRateConfig_t2D4BC7DBEC07ACADC360A4E9BCCA8B503A96B154  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.KeepSceneHierarchyConfig
struct KeepSceneHierarchyConfig_t00FA767541AD5522AB1F4A2C54DFC143FC76640A  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.LWOImportOneLayerConfig
struct LWOImportOneLayerConfig_t099329519D3A3EC101EC00F251B517E2F9129F39  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.LWSAnimationEndConfig
struct LWSAnimationEndConfig_tFE7B74B5A9C46721073340E31CAC7C09F6BEF5BF  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.LWSAnimationStartConfig
struct LWSAnimationStartConfig_tEEF195CCB32B6BCC7CA7BC114D79047B0A45C8A5  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MD2KeyFrameImportConfig
struct MD2KeyFrameImportConfig_tA5FE53D43475F744FC33C9B6B30CF9E1855BDCA4  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MD3HandleMultiPartConfig
struct MD3HandleMultiPartConfig_tEB43874AC6790669237890EDC67CCD70A459B588  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.MD3KeyFrameImportConfig
struct MD3KeyFrameImportConfig_t80E5AFE5284C86855AD2365EC812CF9997432A82  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MD3ShaderSourceConfig
struct MD3ShaderSourceConfig_t89AA3EEB4F4A7EC9343DA9F060707AE87934ED1A  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.MD3SkinNameConfig
struct MD3SkinNameConfig_t599AB7BA36641B6FBF7C776E9E00F362AF8D4406  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.MD5NoAnimationAutoLoadConfig
struct MD5NoAnimationAutoLoadConfig_t965A0482BCCE200137F1FE0841DC04360DF5C1FE  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.MDLColorMapConfig
struct MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.MDLKeyFrameImportConfig
struct MDLKeyFrameImportConfig_t8CE9C5985603300100208ACCC3BCC8227F103BCD  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MaterialExcludeListConfig
struct MaterialExcludeListConfig_tA527D209D6A05B3E751545CD40D28C630B21CDA2  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.MatrixPropertyConfig
struct MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836  : public PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0
{
	// Assimp.Matrix4x4 Assimp.Configs.MatrixPropertyConfig::m_value
	Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___m_value_1;
	// Assimp.Matrix4x4 Assimp.Configs.MatrixPropertyConfig::m_defaultValue
	Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___m_defaultValue_2;
};

// Assimp.Configs.MaxBoneCountConfig
struct MaxBoneCountConfig_t043E83CAE39BE13A6CE320DEC8422403E36F6E9C  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MeasureTimeConfig
struct MeasureTimeConfig_tCD93FDA353A6B989B61FFBDF16A0AB1EED9FDA37  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.MeshTriangleLimitConfig
struct MeshTriangleLimitConfig_tA7F2B3FD4E7442508F637A8A7C9892EA99CADCEB  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MeshVertexLimitConfig
struct MeshVertexLimitConfig_tD016B96D9D07327CCDF6D3378CD859782DFB022C  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.MultithreadingConfig
struct MultithreadingConfig_t4F8CD4FC58C8A70A67AD527DCF02B1C8C3526F27  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.NoSkeletonMeshesConfig
struct NoSkeletonMeshesConfig_tF9CC55B974C90270132324C064A016DEF0B20185  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.NodeExcludeListConfig
struct NodeExcludeListConfig_t26F38B91E9C4B62C39A6633B5CFCB685B7438594  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.NormalSmoothingAngleConfig
struct NormalSmoothingAngleConfig_t4FE224EAC5CB9461EE12DFF32B4D2D520FD1368B  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
};

// Assimp.Configs.NormalizeVertexComponentsConfig
struct NormalizeVertexComponentsConfig_t0E7C308FC3E7CA42E6073B797748750BF0D889BD  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.OgreMaterialFileConfig
struct OgreMaterialFileConfig_t6349FB3455B4E77FA979A6BA6082C67703A840DB  : public StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223
{
};

// Assimp.Configs.OgreTextureTypeFromFilenameConfig
struct OgreTextureTypeFromFilenameConfig_t77FCBFD65818A42E6FAA1150682EEC81485D9262  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.RemoveComponentConfig
struct RemoveComponentConfig_t294CCB5CA33733CE7BB28AE6130B8544BA239E5A  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.RemoveDegeneratePrimitivesCheckAreaConfig
struct RemoveDegeneratePrimitivesCheckAreaConfig_tBC41FEDD4E87C49D65ABB72A34AD499F7A57CF0A  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.RemoveDegeneratePrimitivesConfig
struct RemoveDegeneratePrimitivesConfig_t3689391E195E89C3B10AA01A0F8F406ACC201ABF  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// System.Runtime.InteropServices.RuntimeInformation
struct RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF  : public RuntimeObject
{
};

struct RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_StaticFields
{
	// System.Runtime.InteropServices.Architecture System.Runtime.InteropServices.RuntimeInformation::_osArchitecture
	int32_t ____osArchitecture_0;
	// System.Runtime.InteropServices.Architecture System.Runtime.InteropServices.RuntimeInformation::_processArchitecture
	int32_t ____processArchitecture_1;
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.RuntimeInformation::_osPlatform
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ____osPlatform_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Assimp.Configs.SMDKeyFrameImportConfig
struct SMDKeyFrameImportConfig_t60DD41B67F59A726DC7AB009518CA4A36A152BFB  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.SortByPrimitiveTypeConfig
struct SortByPrimitiveTypeConfig_tF6D42A060349A92D98F40BC46BD0D7166CCB0D1C  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.TangentSmoothingAngleConfig
struct TangentSmoothingAngleConfig_t0ED728B7AE2DCD924BEDC91B934EA5B56B6161CC  : public FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C
{
};

// Assimp.Configs.TangentTextureChannelIndexConfig
struct TangentTextureChannelIndexConfig_t3FDC69D84ECE03CF7A63DF434BC57842A4B15B11  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.TerragenComputeTexCoordsConfig
struct TerragenComputeTexCoordsConfig_t31BA11AF7C84FFC4FA4860237BDC90F364F3D5B6  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.TransformUVConfig
struct TransformUVConfig_tC2E379341C92BD3209F6EF90F4BDA5F1E89271A9  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.UnrealHandleFlagsConfig
struct UnrealHandleFlagsConfig_tAEF1572EC9C0C95B7E5D925D15A4B3A5436D9AE9  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Configs.UnrealKeyFrameImportConfig
struct UnrealKeyFrameImportConfig_t986091639E2D388AAA85AD4B86C6E26FBAD03154  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.VertexBoneWeightLimitConfig
struct VertexBoneWeightLimitConfig_t462FCC7A0166216F7D63440FDD0D1A3B3F7662B0  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.VertexCacheSizeConfig
struct VertexCacheSizeConfig_t43287D1386A4C30AE8D04E884264ACC74BF0C23B  : public IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5
{
};

// Assimp.Configs.XFileUseDoublesConfig
struct XFileUseDoublesConfig_t8FE3FB70D83056F7EB6838C03B3DCFD2D839C339  : public BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303
{
};

// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation
struct UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787  : public RuntimeObject
{
	// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_defaultLibName
	String_t* ___m_defaultLibName_0;
	// System.Type[] Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_unmanagedFunctionDelegateTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_unmanagedFunctionDelegateTypes_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Delegate> Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_nameToUnmanagedFunction
	Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* ___m_nameToUnmanagedFunction_2;
	// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_libraryHandle
	intptr_t ___m_libraryHandle_3;
	// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_isDisposed
	bool ___m_isDisposed_4;
	// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::m_throwOnLoadFailure
	bool ___m_throwOnLoadFailure_5;
};

// Assimp.Unmanaged.AiAnimMesh
struct AiAnimMesh_tDEBCCE1A17F3A798991A7E0578458A80F318402F 
{
	// System.IntPtr Assimp.Unmanaged.AiAnimMesh::Vertices
	intptr_t ___Vertices_0;
	// System.IntPtr Assimp.Unmanaged.AiAnimMesh::Normals
	intptr_t ___Normals_1;
	// System.IntPtr Assimp.Unmanaged.AiAnimMesh::Tangents
	intptr_t ___Tangents_2;
	// System.IntPtr Assimp.Unmanaged.AiAnimMesh::BiTangents
	intptr_t ___BiTangents_3;
	// Assimp.Unmanaged.AiMeshColorArray Assimp.Unmanaged.AiAnimMesh::Colors
	AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80 ___Colors_4;
	// Assimp.Unmanaged.AiMeshTextureCoordinateArray Assimp.Unmanaged.AiAnimMesh::TextureCoords
	AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF ___TextureCoords_5;
	// System.UInt32 Assimp.Unmanaged.AiAnimMesh::NumVertices
	uint32_t ___NumVertices_6;
	// System.Single Assimp.Unmanaged.AiAnimMesh::Weight
	float ___Weight_7;
};

// Assimp.Unmanaged.AiAnimation
struct AiAnimation_tEECF8DB257245E5F968CDB41CF2901410B5407AD 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiAnimation::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// System.Double Assimp.Unmanaged.AiAnimation::Duration
	double ___Duration_1;
	// System.Double Assimp.Unmanaged.AiAnimation::TicksPerSecond
	double ___TicksPerSecond_2;
	// System.UInt32 Assimp.Unmanaged.AiAnimation::NumChannels
	uint32_t ___NumChannels_3;
	// System.IntPtr Assimp.Unmanaged.AiAnimation::Channels
	intptr_t ___Channels_4;
	// System.UInt32 Assimp.Unmanaged.AiAnimation::NumMeshChannels
	uint32_t ___NumMeshChannels_5;
	// System.IntPtr Assimp.Unmanaged.AiAnimation::MeshChannels
	intptr_t ___MeshChannels_6;
	// System.UInt32 Assimp.Unmanaged.AiAnimation::NumMeshMorphChannels
	uint32_t ___NumMeshMorphChannels_7;
	// System.IntPtr Assimp.Unmanaged.AiAnimation::MeshMorphChannels
	intptr_t ___MeshMorphChannels_8;
};

// Assimp.Unmanaged.AiBone
struct AiBone_tBD14892548D55C582D566684B1E78B2FC0F4F07A 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiBone::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// System.UInt32 Assimp.Unmanaged.AiBone::NumWeights
	uint32_t ___NumWeights_1;
	// System.IntPtr Assimp.Unmanaged.AiBone::Weights
	intptr_t ___Weights_2;
	// Assimp.Matrix4x4 Assimp.Unmanaged.AiBone::OffsetMatrix
	Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___OffsetMatrix_3;
};

// Assimp.Unmanaged.AiCamera
struct AiCamera_t539D6AECBA249F1C21855B89D95776F6DFD29E65 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiCamera::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// Assimp.Vector3D Assimp.Unmanaged.AiCamera::Position
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___Position_1;
	// Assimp.Vector3D Assimp.Unmanaged.AiCamera::Up
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___Up_2;
	// Assimp.Vector3D Assimp.Unmanaged.AiCamera::LookAt
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___LookAt_3;
	// System.Single Assimp.Unmanaged.AiCamera::HorizontalFOV
	float ___HorizontalFOV_4;
	// System.Single Assimp.Unmanaged.AiCamera::ClipPlaneNear
	float ___ClipPlaneNear_5;
	// System.Single Assimp.Unmanaged.AiCamera::ClipPlaneFar
	float ___ClipPlaneFar_6;
	// System.Single Assimp.Unmanaged.AiCamera::Aspect
	float ___Aspect_7;
};

// Assimp.Unmanaged.AiExportDataBlob
struct AiExportDataBlob_tB37E6D0AD7B938B6C22DFA48FE2F6FD70F3DC238 
{
	// System.UIntPtr Assimp.Unmanaged.AiExportDataBlob::Size
	uintptr_t ___Size_0;
	// System.IntPtr Assimp.Unmanaged.AiExportDataBlob::Data
	intptr_t ___Data_1;
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiExportDataBlob::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_2;
	// System.IntPtr Assimp.Unmanaged.AiExportDataBlob::NextBlob
	intptr_t ___NextBlob_3;
};

// Assimp.Unmanaged.AiLight
struct AiLight_t28CA4F4F6643E0D6B1BE77B9679F632B0AB5F467 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiLight::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// Assimp.LightSourceType Assimp.Unmanaged.AiLight::Type
	int32_t ___Type_1;
	// Assimp.Vector3D Assimp.Unmanaged.AiLight::Position
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___Position_2;
	// Assimp.Vector3D Assimp.Unmanaged.AiLight::Direction
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___Direction_3;
	// Assimp.Vector3D Assimp.Unmanaged.AiLight::Up
	Vector3D_t58B910FA97A34DC5FF64A7D5AE773E2F0067E1BB ___Up_4;
	// System.Single Assimp.Unmanaged.AiLight::AttenuationConstant
	float ___AttenuationConstant_5;
	// System.Single Assimp.Unmanaged.AiLight::AttenuationLinear
	float ___AttenuationLinear_6;
	// System.Single Assimp.Unmanaged.AiLight::AttenuationQuadratic
	float ___AttenuationQuadratic_7;
	// Assimp.Color3D Assimp.Unmanaged.AiLight::ColorDiffuse
	Color3D_t89A26133A0FF16ED0304D150E6C1DA83A236FA16 ___ColorDiffuse_8;
	// Assimp.Color3D Assimp.Unmanaged.AiLight::ColorSpecular
	Color3D_t89A26133A0FF16ED0304D150E6C1DA83A236FA16 ___ColorSpecular_9;
	// Assimp.Color3D Assimp.Unmanaged.AiLight::ColorAmbient
	Color3D_t89A26133A0FF16ED0304D150E6C1DA83A236FA16 ___ColorAmbient_10;
	// System.Single Assimp.Unmanaged.AiLight::AngleInnerCone
	float ___AngleInnerCone_11;
	// System.Single Assimp.Unmanaged.AiLight::AngleOuterCone
	float ___AngleOuterCone_12;
	// Assimp.Vector2D Assimp.Unmanaged.AiLight::AreaSize
	Vector2D_tA6ED5080774F7976B8A3096D229B52CB5F1096DB ___AreaSize_13;
};

// Assimp.Unmanaged.AiMaterialProperty
struct AiMaterialProperty_tD161CB8DA4ADAE918D8D414A64B0B5F847B1B414 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiMaterialProperty::Key
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Key_0;
	// Assimp.TextureType Assimp.Unmanaged.AiMaterialProperty::Semantic
	int32_t ___Semantic_1;
	// System.UInt32 Assimp.Unmanaged.AiMaterialProperty::Index
	uint32_t ___Index_2;
	// System.UInt32 Assimp.Unmanaged.AiMaterialProperty::DataLength
	uint32_t ___DataLength_3;
	// Assimp.PropertyType Assimp.Unmanaged.AiMaterialProperty::Type
	int32_t ___Type_4;
	// System.IntPtr Assimp.Unmanaged.AiMaterialProperty::Data
	intptr_t ___Data_5;
};

// Assimp.Unmanaged.AiMesh
struct AiMesh_t31D6DD93631F041CD706673FB94F7C2B554A49D1 
{
	// Assimp.PrimitiveType Assimp.Unmanaged.AiMesh::PrimitiveTypes
	int32_t ___PrimitiveTypes_0;
	// System.UInt32 Assimp.Unmanaged.AiMesh::NumVertices
	uint32_t ___NumVertices_1;
	// System.UInt32 Assimp.Unmanaged.AiMesh::NumFaces
	uint32_t ___NumFaces_2;
	// System.IntPtr Assimp.Unmanaged.AiMesh::Vertices
	intptr_t ___Vertices_3;
	// System.IntPtr Assimp.Unmanaged.AiMesh::Normals
	intptr_t ___Normals_4;
	// System.IntPtr Assimp.Unmanaged.AiMesh::Tangents
	intptr_t ___Tangents_5;
	// System.IntPtr Assimp.Unmanaged.AiMesh::BiTangents
	intptr_t ___BiTangents_6;
	// Assimp.Unmanaged.AiMeshColorArray Assimp.Unmanaged.AiMesh::Colors
	AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80 ___Colors_7;
	// Assimp.Unmanaged.AiMeshTextureCoordinateArray Assimp.Unmanaged.AiMesh::TextureCoords
	AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF ___TextureCoords_8;
	// Assimp.Unmanaged.AiMeshUVComponentArray Assimp.Unmanaged.AiMesh::NumUVComponents
	AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5 ___NumUVComponents_9;
	// System.IntPtr Assimp.Unmanaged.AiMesh::Faces
	intptr_t ___Faces_10;
	// System.UInt32 Assimp.Unmanaged.AiMesh::NumBones
	uint32_t ___NumBones_11;
	// System.IntPtr Assimp.Unmanaged.AiMesh::Bones
	intptr_t ___Bones_12;
	// System.UInt32 Assimp.Unmanaged.AiMesh::MaterialIndex
	uint32_t ___MaterialIndex_13;
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiMesh::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_14;
	// System.UInt32 Assimp.Unmanaged.AiMesh::NumAnimMeshes
	uint32_t ___NumAnimMeshes_15;
	// System.IntPtr Assimp.Unmanaged.AiMesh::AnimMeshes
	intptr_t ___AnimMeshes_16;
	// Assimp.MeshMorphingMethod Assimp.Unmanaged.AiMesh::MorphMethod
	int32_t ___MorphMethod_17;
};

// Assimp.Unmanaged.AiMeshAnim
struct AiMeshAnim_t7030996C32CD8C75BC590CD6B4315BFF196D4C3B 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiMeshAnim::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// System.UInt32 Assimp.Unmanaged.AiMeshAnim::NumKeys
	uint32_t ___NumKeys_1;
	// System.IntPtr Assimp.Unmanaged.AiMeshAnim::Keys
	intptr_t ___Keys_2;
};

// Assimp.Unmanaged.AiMeshMorphAnim
struct AiMeshMorphAnim_tBB4D5B613787ABF08D4E5660976FD11ED585D333 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiMeshMorphAnim::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// System.UInt32 Assimp.Unmanaged.AiMeshMorphAnim::NumKeys
	uint32_t ___NumKeys_1;
	// System.IntPtr Assimp.Unmanaged.AiMeshMorphAnim::Keys
	intptr_t ___Keys_2;
};

// Assimp.Unmanaged.AiNode
struct AiNode_t39D81ED5E7A775CFA2407BCDFDBAF1125F35935D 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiNode::Name
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___Name_0;
	// Assimp.Matrix4x4 Assimp.Unmanaged.AiNode::Transformation
	Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___Transformation_1;
	// System.IntPtr Assimp.Unmanaged.AiNode::Parent
	intptr_t ___Parent_2;
	// System.UInt32 Assimp.Unmanaged.AiNode::NumChildren
	uint32_t ___NumChildren_3;
	// System.IntPtr Assimp.Unmanaged.AiNode::Children
	intptr_t ___Children_4;
	// System.UInt32 Assimp.Unmanaged.AiNode::NumMeshes
	uint32_t ___NumMeshes_5;
	// System.IntPtr Assimp.Unmanaged.AiNode::Meshes
	intptr_t ___Meshes_6;
	// System.IntPtr Assimp.Unmanaged.AiNode::MetaData
	intptr_t ___MetaData_7;
};

// Assimp.Unmanaged.AiNodeAnim
struct AiNodeAnim_t69E2AA958C228A9D6BEBD4C8782159BB69743521 
{
	// Assimp.Unmanaged.AiString Assimp.Unmanaged.AiNodeAnim::NodeName
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6 ___NodeName_0;
	// System.UInt32 Assimp.Unmanaged.AiNodeAnim::NumPositionKeys
	uint32_t ___NumPositionKeys_1;
	// System.IntPtr Assimp.Unmanaged.AiNodeAnim::PositionKeys
	intptr_t ___PositionKeys_2;
	// System.UInt32 Assimp.Unmanaged.AiNodeAnim::NumRotationKeys
	uint32_t ___NumRotationKeys_3;
	// System.IntPtr Assimp.Unmanaged.AiNodeAnim::RotationKeys
	intptr_t ___RotationKeys_4;
	// System.UInt32 Assimp.Unmanaged.AiNodeAnim::NumScalingKeys
	uint32_t ___NumScalingKeys_5;
	// System.IntPtr Assimp.Unmanaged.AiNodeAnim::ScalingKeys
	intptr_t ___ScalingKeys_6;
	// Assimp.AnimationBehaviour Assimp.Unmanaged.AiNodeAnim::Prestate
	int32_t ___Prestate_7;
	// Assimp.AnimationBehaviour Assimp.Unmanaged.AiNodeAnim::PostState
	int32_t ___PostState_8;
};

// Assimp.AssimpException
struct AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66  : public Exception_t
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

// Assimp.Configs.RootTransformationConfig
struct RootTransformationConfig_t7F50E5EB5A6DDF2217FE184DEE4CFC4E8384D2FE  : public MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation
struct UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157  : public UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787
{
};

// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation
struct UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163  : public UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787
{
};

// Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation
struct UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824  : public UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787
{
};

// Assimp.Unmanaged.AiFileCloseProc
struct AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileFlushProc
struct AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileOpenProc
struct AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileReadProc
struct AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileSeek
struct AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileTellProc
struct AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiFileWriteProc
struct AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A  : public MulticastDelegate_t
{
};

// Assimp.Unmanaged.AiLogStreamCallback
struct AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Assimp.MemoryHelper::Read<System.Byte>(System.IntPtr,T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0_gshared (intptr_t ___pSrc0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___startIndexInArray2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void Assimp.MemoryHelper::Write<System.Byte>(System.IntPtr,T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E_gshared (intptr_t ___pDest0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___startIndexInArray2, int32_t ___count3, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_IsLibraryLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_IsLibraryLoaded_mA4B7F31B0B79FDDCA3FFE77EE817CC733D214819 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DefaultLibraryName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_get_DefaultLibraryName_m222B962A91B387906B8A5B1B6E575DEDF4B070FC_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_ThrowOnLoadFailure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::set_ThrowOnLoadFailure(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_set_ThrowOnLoadFailure_mA57F432EA98351DD810A3BB9696A261001A949D0_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary::CreateRuntimeImplementation(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_CreateRuntimeImplementation_m7A24F3169E46C137C246ED63AB7DDF32725CB5A2 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::get_Windows()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Windows_m00A214D125D1B401A93AFE2662E1CA74B2C9F40F_inline (const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.RuntimeInformation::IsOSPlatform(System.Runtime.InteropServices.OSPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeInformation_IsOSPlatform_mEB7431DF81116F04B6842AB9C3F271074E4A5917 (OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___osPlatform0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::get_Linux()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Linux_m81065A4E8C3755CB70743CDFFCCAD4408A101DA7_inline (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::get_OSX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_OSX_mEE3843A7E47E67B8EF8FB0D5A9D4829509245D85_inline (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibrary::get_DefaultLibraryName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibrary_get_DefaultLibraryName_m8F315720407357EC1EF3091035DAE4818D167EBF (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::ResolveLibraryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_ResolveLibraryPath_m248CD0D91024B0DA6E9EAEC28B49D9C3F5FD3BE1 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___libName0, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_LoadLibrary_m8D7374B976C78700C8442EED8B83CA4AA2F7E2BB (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___libPath0, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::get_Is64Bit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_get_Is64Bit_mF48AD6048F65F0F101B87CF8E4C96AF3EEC8631B (const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::get_IsLibraryLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_get_IsLibraryLoaded_m377C90F0821ADA1AE2A0DA577EA107F887940AF2 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::HasExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_HasExtension_m8844A836C72841952891282B1F0792A1B16DB7FC (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::ChangeExtension(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_ChangeExtension_m8137B6ADAA7685301AE571D88C0DDA9F2A9D9EEA (String_t* ___path0, String_t* ___extension1, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_LoadLibrary_m22B748157A9DDA649C9A6C35A36CFD61AAD025B6 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::FreeLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_FreeLibrary_m2F9627FB8EF5B2F05EAECB7063929DD819DFC9FF (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::LoadLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_LoadLibrary_mDCBB8B64842EBCB0FFE3ACC1693C40FCEDC34795 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// Assimp.Unmanaged.Platform Assimp.Unmanaged.UnmanagedLibrary::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedLibrary_GetPlatform_m06F8120DFE63A05DDE672F70E4E4F158E711F834 (const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::.ctor(Assimp.Unmanaged.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver__ctor_mFB37927F00989CAD1C69A13430E0B737850E47AD (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, int32_t ___platformHint0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedWindowsLibraryImplementation__ctor_m55558F11D3E80A9B6EAC5B68578B94C7D2D4DDDF (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLinuxLibraryImplementation__ctor_m94931F19E16CEB898220CF1AE2542315BECBDB21 (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMacLibraryImplementation__ctor_mD40A6F7C8718C71DCBEC2983BE14CEBECEC905D7 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::.ctor()
inline void Dictionary_2__ctor_mC11B8D87D7D6237273D0616824847584DA85B003 (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::FreeLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_FreeLibrary_m949FFB219666CBA6461C613E045DBFA92933336C (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___clearFunctions0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::LoadFunctions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_LoadFunctions_m3FA06940A047383CAB38F2ED8769640F07B331BA (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Clear()
inline void Dictionary_2_Clear_mA5ED112FDE23E98A0E9A24339BF83DC1E0D2AB04 (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::GetUnmanagedName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_GetUnmanagedName_m81B230750BE83EE4EFFCBD486302EC70C178481D (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, Type_t* ___funcType0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mEC9E9DC5A9A7DC8EC9D73564D35C0CEB7182ED6B (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* __this, String_t* ___key0, Delegate_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*, String_t*, Delegate_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Delegate Assimp.Unmanaged.PlatformHelper::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* PlatformHelper_GetDelegateForFunctionPointer_m5A5EA0BFF9EFC28F99ED9B3CA83D50457FE4D648 (intptr_t ___procAddress0, Type_t* ___delegateType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFC740DC4B588DEACABD94E8C79C0DD26C7065799 (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* __this, String_t* ___key0, Delegate_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*, String_t*, Delegate_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object[] Assimp.Unmanaged.PlatformHelper::GetCustomAttributes(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* PlatformHelper_GetCustomAttributes_m26DC2576F130C578715C89DECBC2AABEA488FEF9 (Type_t* ___type0, Type_t* ___attributeType1, bool ___inherit2, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedFunctionNameAttribute::get_UnmanagedFunctionName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnmanagedFunctionNameAttribute_get_UnmanagedFunctionName_mDBEDAC936EAF19BD69BBE63D0559FBD7139AD154_inline (UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation__ctor_mF802F6E6ED7F8D546897E675D77F0770577BC90A (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::WinLoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_WinLoadLibrary_mE3E98BD0D73F7BD529D3DB09EB4E8A624A495C13 (String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedWindowsLibraryImplementation_GetHRForLastWin32Error_m430C0ED6C9B60A83855892D10EFD68F3DE829E75 (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, const RuntimeMethod* method) ;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Marshal_GetExceptionForHR_m2ECA1A5AF0AA00557154D76095905282ECDD965A (int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Assimp.AssimpException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpException__ctor_m5E41DAC890D962A9FAFE6C9D73C1C1FD31BFD5F5 (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* __this, String_t* ___msg0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Assimp.AssimpException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788 (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_GetProcAddress_m31774309DDB0EBF2345943D38BEC832FFA0D4172 (intptr_t ___hModule0, String_t* ___procName1, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedWindowsLibraryImplementation_FreeLibrary_m22C9BF701D5943C39C430B7A0555A64938E1C7C5 (intptr_t ___hModule0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43 (const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlopen_mBB6A29A9699E728983494F5D2E5CAF6F9CA67643 (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlerror_mE958C08247C3FDA20F0A0D6C96B24C83BFF2642E (const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlsym_m9045574EC7B9EBB92BE6B4E15456D8A51562DBD0 (intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedLinuxLibraryImplementation_dlclose_mCFA7366CD011B5E7D24C54E5A8C42C1B62A30E93 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlopen_m892BE341A62FF0DC2E2DCB6BE7C5DF6AEDCF88ED (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlerror_mFD11E7239DFA8B91DD6513D527EBDD11239E6B14 (const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlsym_m2B10C0D00AA3C90CC1480801664548B0A8349FDB (intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedMacLibraryImplementation_dlclose_mB68D4B976350BA35A6B0BC8AF7E45C3BA3CF6841 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRuntimeIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRuntimeIdentifier_m813CE2CEE4C9DCFD999866D2B7D2C7E07509AAAC (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::ResolveLibraryPathInternal(System.String,System.String,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_ResolveLibraryPathInternal_m51D8CA4D394A55A1D8D1B2600DAD86870F051E1C (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___libName0, String_t* ___rid1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___probingPaths3, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::TryGetExistingFile(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___basePath0, String_t* ___libName1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackNames2, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.PlatformHelper::GetAppBaseDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformHelper_GetAppBaseDirectory_m01DA0C2F167EB1749CD3CFDAC59B0AEFB6F9280B (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetNugetPackagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetNugetPackagePath_m1F24F6A658D46B97374991EC74B5AD40B94015AB (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetPackageRuntimeFolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetPackageRuntimeFolder_m73CC9BC55224B51268C165D07D4E7FE68E0CFEF6 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___packagePath0, String_t* ___rid1, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.PlatformHelper::GetAssemblyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformHelper_GetAssemblyName_m812BCB444937C57775B77A45DA2EED1EF87B441E (const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.PlatformHelper::GetInformationalVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformHelper_GetInformationalVersion_m37FB5E9581E7DEA47664A2DE766840BF980E50F8 (const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8 (String_t* ___variable0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRIDOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRIDOS_m4B673AFCBF26302A360C3673D5B2B0E086872A97 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRIDArch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRIDArch_m67E17DD7E1C351B900DF91F2CE981D212435BCD4 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.Architecture System.Runtime.InteropServices.RuntimeInformation::get_ProcessArchitecture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RuntimeInformation_get_ProcessArchitecture_m9CAB856AF92AB4A2881C605E1897EA6F6F7F75E9_inline (const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AiTexture::SetFormatHint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiTexture_SetFormatHint_m11BA5809FAF495F100EC86C782C06BFF16D57CB1 (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* __this, String_t* ___formatHint0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.AiTexture::GetFormatHint(Assimp.Unmanaged.AiTexture&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiTexture_GetFormatHint_m1833CD49D3398E656519400E947BB20613720CBF (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* ___aiTex0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.AiTexture::GetFormatHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiTexture_GetFormatHint_m01B61910CF2B045F83460FAF9ACBE513E5CFE324 (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.String System.Text.Encoding::GetString(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, uint8_t* ___bytes0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Boolean Assimp.Unmanaged.AiString::SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AiString_SetString_m9B0AC8090A999BD8645B8DABBA97E0A9F439EA65 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AiString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiString__ctor_m268E922FE11757D416AA120EBEDB397303F0DFA3 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void Assimp.MemoryHelper::Read<System.Byte>(System.IntPtr,T[],System.Int32,System.Int32)
inline void MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0 (intptr_t ___pSrc0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___startIndexInArray2, int32_t ___count3, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0_gshared)(___pSrc0, ___data1, ___startIndexInArray2, ___count3, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.AiString::GetString(Assimp.Unmanaged.AiString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_GetString_m6FD5E9B57E001F69A59331EDDF25471E754C0428 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* ___aiStr0, const RuntimeMethod* method) ;
// System.String Assimp.Unmanaged.AiString::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_GetString_mB082B14B3F8187A8FF1952E7EE7C348A07CE88A0 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, const RuntimeMethod* method) ;
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assimp.MemoryHelper::ClearMemory(System.IntPtr,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelper_ClearMemory_m060A5CCCD58AAD880DD304E95EDA536DA22CFB86 (intptr_t ___memoryPtr0, uint8_t ___clearValue1, int32_t ___sizeInBytesToClear2, const RuntimeMethod* method) ;
// System.Void Assimp.MemoryHelper::Write<System.Byte>(System.IntPtr,T[],System.Int32,System.Int32)
inline void MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E (intptr_t ___pDest0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___startIndexInArray2, int32_t ___count3, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E_gshared)(___pDest0, ___data1, ___startIndexInArray2, ___count3, method);
}
// System.String Assimp.Unmanaged.AiString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_ToString_m931C795160B1308901F3B074177E517AC900674C (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.AiMeshColorArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshColorArray_get_Length_m67901F5D99482866435AAC54E7173028913018CD (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiMeshColorArray_get_Item_mCFC3B3025E2C75D3003D67F89313097635515659 (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AiMeshColorArray::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshColorArray_set_Item_m68D30BBB873610CAF72F9C9DF2175C08D4D53DD9 (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.AiMeshTextureCoordinateArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshTextureCoordinateArray_get_Length_m4DF532276C61ACC88A6C05B42AD44F514A4A6895 (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, const RuntimeMethod* method) ;
// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiMeshTextureCoordinateArray_get_Item_mB9BEE49737461153C88016994505AE5DB8B009FB (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AiMeshTextureCoordinateArray::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshTextureCoordinateArray_set_Item_m5577690BB66108FC95766BE3C140AE88D855C1D8 (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Assimp.Unmanaged.AiMeshUVComponentArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshUVComponentArray_get_Length_mA9C717D6E43AE16FB651D71F2D4C016EF132B288 (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, const RuntimeMethod* method) ;
// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AiMeshUVComponentArray_get_Item_mEE9AC8432D930A43C049D235D56E1038E88903DD (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AiMeshUVComponentArray::set_Item(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshUVComponentArray_set_Item_mDD3AA5ADA43196B46A7AB40C7CC9B7194EF03835 (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, int32_t ___index0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void Assimp.Configs.IntegerPropertyConfig::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, String_t* ___name0, int32_t ___value1, int32_t ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Assimp.Configs.PropertyConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947 (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, String_t* ___name0, const RuntimeMethod* method) ;
// Assimp.Unmanaged.AssimpLibrary Assimp.Unmanaged.AssimpLibrary::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D (const RuntimeMethod* method) ;
// System.String Assimp.Configs.PropertyConfig::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AssimpLibrary::SetImportPropertyInteger(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpLibrary_SetImportPropertyInteger_m81C1837FFBAD3FAA8850A0DA96BF814E660821C5 (AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* __this, intptr_t ___propertyStore0, String_t* ___name1, int32_t ___value2, const RuntimeMethod* method) ;
// System.Void Assimp.Configs.FloatPropertyConfig::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, String_t* ___name0, float ___value1, float ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AssimpLibrary::SetImportPropertyFloat(System.IntPtr,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpLibrary_SetImportPropertyFloat_m382B8D4274454FE3B9E6FE1F6F6AC90915F5EDEC (AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* __this, intptr_t ___propertyStore0, String_t* ___name1, float ___value2, const RuntimeMethod* method) ;
// Assimp.Matrix4x4 Assimp.Matrix4x4::get_Identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E Matrix4x4_get_Identity_m401FEA9D21173E151AAE89372502290D6C894151_inline (const RuntimeMethod* method) ;
// System.Void Assimp.Configs.MatrixPropertyConfig::.ctor(System.String,Assimp.Matrix4x4,Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig__ctor_mBD9EDF6CC0FC05E26038EE624C337EB856190ED7 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, String_t* ___name0, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___value1, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AssimpLibrary::SetImportPropertyMatrix(System.IntPtr,System.String,Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpLibrary_SetImportPropertyMatrix_m4BF5A9B4345C94BAA8EE540DA2CC6BB2378834AB (AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* __this, intptr_t ___propertyStore0, String_t* ___name1, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___value2, const RuntimeMethod* method) ;
// System.Void Assimp.Configs.BooleanPropertyConfig::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828 (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, String_t* ___name0, bool ___value1, bool ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Assimp.Configs.StringPropertyConfig::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, String_t* ___name0, String_t* ___value1, String_t* ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Assimp.Unmanaged.AssimpLibrary::SetImportPropertyString(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssimpLibrary_SetImportPropertyString_mDFF27C94B99544B0C1980362A0CDCAAA304F6FF6 (AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* __this, intptr_t ___propertyStore0, String_t* ___name1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String Assimp.Configs.MeasureTimeConfig::get_MeasureTimeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeasureTimeConfig_get_MeasureTimeConfigName_mF65CA70C011212EDCF1F8CA7B2EB5C4AC2DB65CA (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MultithreadingConfig::get_MultithreadingConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultithreadingConfig_get_MultithreadingConfigName_m9FD1B6B3A43094D28AF4CB15E48AE45A9054F036 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.NoSkeletonMeshesConfig::get_NoSkeletonMeshesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoSkeletonMeshesConfig_get_NoSkeletonMeshesConfigName_m066BD5987C533D8D29CF4127E414955B118E1D59 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.TangentSmoothingAngleConfig::get_TangentSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TangentSmoothingAngleConfig_get_TangentSmoothingAngleConfigName_m01C26D1A94CAB9E9D8B53DAEA70FB66203674B5D (const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.String Assimp.Configs.NormalSmoothingAngleConfig::get_NormalSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NormalSmoothingAngleConfig_get_NormalSmoothingAngleConfigName_m7BAADA032A7FA1F3A28FF3A0095D34A16261C291 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MDLColorMapConfig::get_MDLColorMapConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MDLColorMapConfig_get_MDLColorMapConfigName_m04B6BC69C7E104B8FF60CBD74DA785263DB4A640 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MaterialExcludeListConfig::get_MaterialExcludeListConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MaterialExcludeListConfig_get_MaterialExcludeListConfigName_m6414255ED80720A2200CFFD9F3EDA8C03A915D26 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.StringPropertyConfig::ProcessNames(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPropertyConfig_ProcessNames_mC91E7E39A2E7318967BDFBA25BB8C7B5EE9EE6DF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names0, const RuntimeMethod* method) ;
// System.String Assimp.Configs.KeepSceneHierarchyConfig::get_KeepSceneHierarchyConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeepSceneHierarchyConfig_get_KeepSceneHierarchyConfigName_mD99D6ABBD330F593B6262C778C0EF5D3191D656E (const RuntimeMethod* method) ;
// System.String Assimp.Configs.NormalizeVertexComponentsConfig::get_NormalizeVertexComponentsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NormalizeVertexComponentsConfig_get_NormalizeVertexComponentsConfigName_m615789DC36CBBC2A53AE1751C84DEDE27BF41550 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.RemoveDegeneratePrimitivesConfig::get_RemoveDegeneratePrimitivesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveDegeneratePrimitivesConfig_get_RemoveDegeneratePrimitivesConfigName_m7808DCD1C44FB170ABDBEC6A7C58DB834318DEDA (const RuntimeMethod* method) ;
// System.String Assimp.Configs.RemoveDegeneratePrimitivesCheckAreaConfig::get_RemoveDegeneratePrimitivesCheckAreaConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveDegeneratePrimitivesCheckAreaConfig_get_RemoveDegeneratePrimitivesCheckAreaConfigName_m46D1106FEBD00C2F7B07139C020D8E43279F886D (const RuntimeMethod* method) ;
// System.String Assimp.Configs.NodeExcludeListConfig::get_NodeExcludeListConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeExcludeListConfig_get_NodeExcludeListConfigName_m2830BE5E98F18A49373FCCCBD6B88723324078B3 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MeshTriangleLimitConfig::get_MeshTriangleLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshTriangleLimitConfig_get_MeshTriangleLimitConfigName_m2C5B4744CCA09383CB97ED598BFC06EB1F5CC24E (const RuntimeMethod* method) ;
// System.Int32 Assimp.Configs.MeshTriangleLimitConfig::get_MeshTriangleLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshTriangleLimitConfig_get_MeshTriangleLimitConfigDefaultValue_m9E8FF55113B9622D78E9005CF1BCF3AD490DE408 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MeshVertexLimitConfig::get_MeshVertexLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshVertexLimitConfig_get_MeshVertexLimitConfigName_m7445D7081FF294CC825EF9B52B451863CA5DC159 (const RuntimeMethod* method) ;
// System.Int32 Assimp.Configs.MeshVertexLimitConfig::get_MeshVertexLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshVertexLimitConfig_get_MeshVertexLimitConfigDefaultValue_m62849E8E69E7ABBCB9FFEF5A1372B3DDC3B2BE91 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.VertexBoneWeightLimitConfig::get_VertexBoneWeightLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigName_m5AD08238121854C653DED2DE2C66ABAF7810E13E (const RuntimeMethod* method) ;
// System.Int32 Assimp.Configs.VertexBoneWeightLimitConfig::get_VertexBoneWeightLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigDefaultValue_m66117557C240EF79B89F58AAA81D89625675CE1F (const RuntimeMethod* method) ;
// System.String Assimp.Configs.VertexCacheSizeConfig::get_VertexCacheSizeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexCacheSizeConfig_get_VertexCacheSizeConfigName_mF912A9F06FE50660FAC20F1ED49B6FDF8E4004C0 (const RuntimeMethod* method) ;
// System.Int32 Assimp.Configs.VertexCacheSizeConfig::get_VertexCacheSizeConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexCacheSizeConfig_get_VertexCacheSizeConfigDefaultValue_mEF96E320B65E3F84771BDD5292E857BEFD6628FB (const RuntimeMethod* method) ;
// System.String Assimp.Configs.RemoveComponentConfig::get_RemoveComponentConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveComponentConfig_get_RemoveComponentConfigName_m0040C24ADCA039CB69F8BAE76223B1441B6519AC (const RuntimeMethod* method) ;
// System.String Assimp.Configs.SortByPrimitiveTypeConfig::get_SortByPrimitiveTypeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SortByPrimitiveTypeConfig_get_SortByPrimitiveTypeConfigName_m5C961E3DA20DA3DB6CFBB19C2196E54E00023B22 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.AnimationAccuracyConfig::get_AnimationAccuracyConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationAccuracyConfig_get_AnimationAccuracyConfigName_m07F6E78FDA8BB8B7B0596DADFDC5340D17F25287 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.TransformUVConfig::get_TransformUVConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformUVConfig_get_TransformUVConfigName_m337E567C486D23CC3106803AA93414B7C65DA525 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FavorSpeedConfig::get_FavorSpeedConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FavorSpeedConfig_get_FavorSpeedConfigName_mC5A29B893EFBA94BE3D819381431C06B3F6A824D (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MaxBoneCountConfig::get_MaxBoneCountConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MaxBoneCountConfig_get_MaxBoneCountConfigName_mB8C5E4AAA8C4AC5E802B353DE69C14F7D43B06D3 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.TangentTextureChannelIndexConfig::get_TangentTextureChannelIndexConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TangentTextureChannelIndexConfig_get_TangentTextureChannelIndexConfigName_m0293EE904FEFCCEFE0054C984359D5BE2870F7EA (const RuntimeMethod* method) ;
// System.String Assimp.Configs.DeboneThresholdConfig::get_DeboneThresholdConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeboneThresholdConfig_get_DeboneThresholdConfigName_mFB370D8DBCBBAA4B99563FF1622340C5A27392D8 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.DeboneAllOrNoneConfig::get_DeboneAllOrNoneConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeboneAllOrNoneConfig_get_DeboneAllOrNoneConfigName_mEEE214470DC66BA7A39C0D8F1BE4A7C6845130DF (const RuntimeMethod* method) ;
// System.String Assimp.Configs.RootTransformationConfig::get_RootTransformationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RootTransformationConfig_get_RootTransformationConfigName_m15EC60C722474681B12572079A5585CED0141B7B (const RuntimeMethod* method) ;
// Assimp.Matrix4x4 Assimp.Configs.MatrixPropertyConfig::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E MatrixPropertyConfig_get_Value_mC31D0D75F4F4C2BFE77701CB2D39AB15A786F86E_inline (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, const RuntimeMethod* method) ;
// System.String Assimp.Configs.GlobalScaleConfig::get_GlobalScaleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalScaleConfig_get_GlobalScaleConfigName_m9B7663E21BCB22AABE0B936DCF351709A0B7D7F7 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.GlobalKeyFrameImportConfig::get_GlobalKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalKeyFrameImportConfig_get_GlobalKeyFrameImportConfigName_m571375440109801731F988EFC517E80D98CCE9B7 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD3KeyFrameImportConfig::get_MD3KeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3KeyFrameImportConfig_get_MD3KeyFrameImportConfigName_m65DC42A5C1AA73DAC0C15BE6F6A124055F0430F7 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD2KeyFrameImportConfig::get_MD2KeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD2KeyFrameImportConfig_get_MD2KeyFrameImportConfigName_m7DE018A8FC1587CAC8904233CE270C445846DD2E (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MDLKeyFrameImportConfig::get_MDLKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MDLKeyFrameImportConfig_get_MDLKeyFrameImportConfigName_mCEEB28FF47CB7AFEBF22B7B15F337CE7DD2C2984 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.SMDKeyFrameImportConfig::get_SMDKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SMDKeyFrameImportConfig_get_SMDKeyFrameImportConfigName_mA130D1385C9BEDCE912AF9FAC9745AAD5DFC7684 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.UnrealKeyFrameImportConfig::get_UnrealKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnrealKeyFrameImportConfig_get_UnrealKeyFrameImportConfigName_mAFD54682ED778503B889C69249430459F4C62F4C (const RuntimeMethod* method) ;
// System.String Assimp.Configs.ACSeparateBackfaceCullConfig::get_ACSeparateBackfaceCullConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ACSeparateBackfaceCullConfig_get_ACSeparateBackfaceCullConfigName_m08FA48FF431F7503756E328125F2126F97C58B63 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.ACEvaluateSubdivisionConfig::get_ACEvaluateSubdivisionConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ACEvaluateSubdivisionConfig_get_ACEvaluateSubdivisionConfigName_mCF68A0E6A70FE92843D23FDCEFF65F1EA2C16CF1 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.UnrealHandleFlagsConfig::get_UnrealHandleFlagsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnrealHandleFlagsConfig_get_UnrealHandleFlagsConfigName_m6E03F7221AA80F0B41A5E67DEF20E00DFAD74E32 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.TerragenComputeTexCoordsConfig::get_TerragenComputeTexCoordsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerragenComputeTexCoordsConfig_get_TerragenComputeTexCoordsConfigName_m408AE959F98076114AA68797B2289213111C6DD3 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.ASEReconstructNormalsConfig::get_ASEReconstructNormalsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASEReconstructNormalsConfig_get_ASEReconstructNormalsConfigName_mB0464BF000A1BAEE6331AE868DEE9EFA0EA0C23F (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD3HandleMultiPartConfig::get_MD3HandleMultiPartConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3HandleMultiPartConfig_get_MD3HandleMultiPartConfigName_mA15C6E819D3955973B6AD7C6CFDE9087820AB544 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD3SkinNameConfig::get_MD3SkinNameConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3SkinNameConfig_get_MD3SkinNameConfigName_m1EC57A54A30AA2DDDE95E77BB5759D024AF184E9 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD3ShaderSourceConfig::get_MD3ShaderSourceConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3ShaderSourceConfig_get_MD3ShaderSourceConfigName_m709DD72309A9DC10FF18B000E6F13840EBA6D408 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.LWOImportOneLayerConfig::get_LWOImportOneLayerConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWOImportOneLayerConfig_get_LWOImportOneLayerConfigName_mF6E2CD23F011A7834FE03CD3FDCBF5287E85E200 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.MD5NoAnimationAutoLoadConfig::get_MD5NoAnimationAutoLoadConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5NoAnimationAutoLoadConfig_get_MD5NoAnimationAutoLoadConfigName_m3C560DE424C4A6B5E6141A3D851F4C52D9107C58 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.LWSAnimationStartConfig::get_LWSAnimationStartConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWSAnimationStartConfig_get_LWSAnimationStartConfigName_mBCF65A6CCF83D1BDED3DE2AB6016F37EB18D7864 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.LWSAnimationEndConfig::get_LWSAnimationEndConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWSAnimationEndConfig_get_LWSAnimationEndConfigName_mA76FE1E6E4008D5E1D41CD24230058278C77A140 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.IRRAnimationFrameRateConfig::get_IRRAnimationFrameRateConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRRAnimationFrameRateConfig_get_IRRAnimationFrameRateConfigName_m4B4F3737EA8E11F296E264620E7D98162A140639 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.OgreMaterialFileConfig::get_OgreMaterialFileConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OgreMaterialFileConfig_get_OgreMaterialFileConfigName_m3F29E85AF2B740B6936AFA18E3D9A931E467BCAD (const RuntimeMethod* method) ;
// System.String Assimp.Configs.OgreTextureTypeFromFilenameConfig::get_OgreTextureTypeFromFilenameConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OgreTextureTypeFromFilenameConfig_get_OgreTextureTypeFromFilenameConfigName_mD1988261EE12743421C48BD677D44F580903D2E1 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.IFCSkipSpaceRepresentationsConfig::get_IFCSkipSpaceRepresentationsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCSkipSpaceRepresentationsConfig_get_IFCSkipSpaceRepresentationsConfigName_mF981BBB054BA17435E6B75EAA65CADD3BE305705 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.IFCUseCustomTriangulationConfig::get_IFCUseCustomTriangulationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCUseCustomTriangulationConfig_get_IFCUseCustomTriangulationConfigName_mE4A1581B070886F03A58B0F9499AD95757FC3118 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.IFCSmoothingAngleConfig::get_IFCSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCSmoothingAngleConfig_get_IFCSmoothingAngleConfigName_mCBAE9A2E8809647435DBEE3B5C296309004A64F2 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.IFCCylindricalTessellationConfig::get_IFCCylindricalTessellationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCCylindricalTessellationConfig_get_IFCCylindricalTessellationConfigName_m9B22ED128A0ABC144161F77A4546C99B95203918 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.ColladaIgnoreUpDirectionConfig::get_ColladaIgnoreUpDirectionConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColladaIgnoreUpDirectionConfig_get_ColladaIgnoreUpDirectionConfigName_m59C105EC8C7AA7C50D3AAA71FB94B0F843804D02 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportAllGeometryLayersConfig::get_FBXImportAllGeometryLayersConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAllGeometryLayersConfig_get_FBXImportAllGeometryLayersConfigName_m821CAA5D47EA5ABDA99E351038071BB77F6FCF98 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportAllMaterialsConfig::get_FBXImportAllMaterialsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAllMaterialsConfig_get_FBXImportAllMaterialsConfigName_mB7C56195DA0FC9AD9142E0C443D04E8781059FA2 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportMaterialsConfig::get_FBXImportMaterialsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportMaterialsConfig_get_FBXImportMaterialsConfigName_mE8C44C3DDBAF7097F007023953EDD5E92FC924CF (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportEmbeddedTexturesConfig::get_FBXImportEmbeddedTexturesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportEmbeddedTexturesConfig_get_FBXImportEmbeddedTexturesConfigName_mF6B7F0BE7B77230174B918360869076CC53DD892 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportSearchEmbeddedTexturesConfig::get_FBXImportSearchEmbeddedTexturesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportSearchEmbeddedTexturesConfig_get_FBXImportSearchEmbeddedTexturesConfigName_mB6EAD66E5C539DB59271D4A69CE2B4D299A9B083 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportCamerasConfig::get_FBXImportCamerasConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportCamerasConfig_get_FBXImportCamerasConfigName_mADB02F027E412EED082D30DCA66D47952B8A8577 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportLightsConfig::get_FBXImportLightsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportLightsConfig_get_FBXImportLightsConfigName_m73A95CECC773434C45D2CC89209390DDE55C1B50 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXImportAnimationsConfig::get_FBXImportAnimationsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAnimationsConfig_get_FBXImportAnimationsConfigName_mBF614A4D812EE112E305286A7DF800B08E7D5A1D (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXStrictModeConfig::get_FBXStrictModeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXStrictModeConfig_get_FBXStrictModeConfigName_mEABA02F840438C7138CE92EB878520299549E31A (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXPreservePivotsConfig::get_FBXPreservePivotsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXPreservePivotsConfig_get_FBXPreservePivotsConfigName_mCF9ED43E46D1A0034FAB69D40F0060BEB69C2F78 (const RuntimeMethod* method) ;
// System.String Assimp.Configs.FBXOptimizeEmptyAnimationCurvesConfig::get_FBXOptimizeEmptyAnimationCurvesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXOptimizeEmptyAnimationCurvesConfig_get_FBXOptimizeEmptyAnimationCurvesConfigName_m6D8333A644B252BD3122E18902D91B8A74536D2C (const RuntimeMethod* method) ;
// System.String Assimp.Configs.XFileUseDoublesConfig::get_XFileUseDoublesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XFileUseDoublesConfig_get_XFileUseDoublesConfigName_mBF165C9138F99E365312EDD561BFF054E6B6BCFA (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibrary(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlsym(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL dlclose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlerror();
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Assimp.Unmanaged.UnmanagedFunctionNameAttribute::get_UnmanagedFunctionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedFunctionNameAttribute_get_UnmanagedFunctionName_mDBEDAC936EAF19BD69BBE63D0559FBD7139AD154 (UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_unmanagedFunctionName_0;
		return L_0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedFunctionNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedFunctionNameAttribute__ctor_mFE833E4928C2DC0BA892E9254A56EE36676B6E93 (UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3* __this, String_t* ___unmanagedFunctionName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___unmanagedFunctionName0;
		__this->___m_unmanagedFunctionName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_unmanagedFunctionName_0), (void*)L_0);
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
// System.Void Assimp.Unmanaged.UnmanagedLibrary::add_LibraryLoaded(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_add_LibraryLoaded_mA8A7BE5BA25931548660A891FD7BBF56A365D5E5 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryLoaded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___LibraryLoaded_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::remove_LibraryLoaded(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_remove_LibraryLoaded_mE9F6AF10E41A89AE9AC5E24F8ECBFEE1865386B1 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryLoaded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___LibraryLoaded_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::add_LibraryFreed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_add_LibraryFreed_m8358C67A7E1E3290E9154375C83051D7FB54E871 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryFreed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___LibraryFreed_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::remove_LibraryFreed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_remove_LibraryFreed_mEAD4771B0A9D3DADB073C5176C113D1D8C9A8D8A (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryFreed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___LibraryFreed_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::get_IsLibraryLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_get_IsLibraryLoaded_m377C90F0821ADA1AE2A0DA577EA107F887940AF2 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_0 = __this->___m_impl_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnmanagedLibraryImplementation_get_IsLibraryLoaded_mA4B7F31B0B79FDDCA3FFE77EE817CC733D214819(L_0, NULL);
		return L_1;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary::get_DefaultLibraryName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibrary_get_DefaultLibraryName_m8F315720407357EC1EF3091035DAE4818D167EBF (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_0 = __this->___m_impl_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnmanagedLibraryImplementation_get_DefaultLibraryName_m222B962A91B387906B8A5B1B6E575DEDF4B070FC_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary::get_LibraryPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibrary_get_LibraryPath_m08697AED84D09CD38A63DA19E5662FA4D7C30205 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_libraryPath_3;
		return L_0;
	}
}
// Assimp.Unmanaged.UnmanagedLibraryResolver Assimp.Unmanaged.UnmanagedLibrary::get_Resolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* UnmanagedLibrary_get_Resolver_mF66A83F204191EBAE75146A925807FCAB1E5B493 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* L_0 = __this->___m_resolver_2;
		return L_0;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::get_ThrowOnLoadFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_get_ThrowOnLoadFailure_mEE19A0D2A61D2983888DD5D56B92B947DB8AB4C7 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_0 = __this->___m_impl_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::set_ThrowOnLoadFailure(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_set_ThrowOnLoadFailure_m6577CC5D86CB48564CE410DDC525890F51FF4DD7 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_0 = __this->___m_impl_1;
		bool L_1 = ___value0;
		NullCheck(L_0);
		UnmanagedLibraryImplementation_set_ThrowOnLoadFailure_mA57F432EA98351DD810A3BB9696A261001A949D0_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::get_Is64Bit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_get_Is64Bit_mF48AD6048F65F0F101B87CF8E4C96AF3EEC8631B (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary__ctor_m3693EF16EC56F2137E102AF047CD277DE8F00E46 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___defaultName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_libraryPath_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_libraryPath_3), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->___m_checkNeedsLoading_4 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___defaultName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedLibrary_CreateRuntimeImplementation_m7A24F3169E46C137C246ED63AB7DDF32725CB5A2(__this, L_1, L_2, NULL);
		return;
	}
}
// Assimp.Unmanaged.Platform Assimp.Unmanaged.UnmanagedLibrary::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedLibrary_GetPlatform_m06F8120DFE63A05DDE672F70E4E4F158E711F834 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0;
		L_0 = OSPlatform_get_Windows_m00A214D125D1B401A93AFE2662E1CA74B2C9F40F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RuntimeInformation_IsOSPlatform_mEB7431DF81116F04B6842AB9C3F271074E4A5917(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_2;
		L_2 = OSPlatform_get_Linux_m81065A4E8C3755CB70743CDFFCCAD4408A101DA7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RuntimeInformation_IsOSPlatform_mEB7431DF81116F04B6842AB9C3F271074E4A5917(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_4;
		L_4 = OSPlatform_get_OSX_mEE3843A7E47E67B8EF8FB0D5A9D4829509245D85_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RuntimeInformation_IsOSPlatform_mEB7431DF81116F04B6842AB9C3F271074E4A5917(L_4, NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002a:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD73150B9C1BBD1B9FE6CE9A5BEFCE9652E117F84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary_GetPlatform_m06F8120DFE63A05DDE672F70E4E4F158E711F834_RuntimeMethod_var)));
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::LoadLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_LoadLibrary_mDCBB8B64842EBCB0FFE3ACC1693C40FCEDC34795 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* L_0 = __this->___m_resolver_2;
		String_t* L_1;
		L_1 = UnmanagedLibrary_get_DefaultLibraryName_m8F315720407357EC1EF3091035DAE4818D167EBF(__this, NULL);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = UnmanagedLibraryResolver_ResolveLibraryPath_m248CD0D91024B0DA6E9EAEC28B49D9C3F5FD3BE1(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = UnmanagedLibrary_LoadLibrary_m8D7374B976C78700C8442EED8B83CA4AA2F7E2BB(__this, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::LoadLibrary(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_LoadLibrary_m1397CDA04DFAF54F44B06D090D9A63E429185AB5 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___lib32Path0, String_t* ___lib64Path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* G_B2_0 = NULL;
	UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UnmanagedLibrary_get_Is64Bit_mF48AD6048F65F0F101B87CF8E4C96AF3EEC8631B(NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___lib32Path0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_000b:
	{
		String_t* L_2 = ___lib64Path1;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		NullCheck(G_B3_1);
		bool L_3;
		L_3 = UnmanagedLibrary_LoadLibrary_m8D7374B976C78700C8442EED8B83CA4AA2F7E2BB(G_B3_1, G_B3_0, NULL);
		return L_3;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_LoadLibrary_m8D7374B976C78700C8442EED8B83CA4AA2F7E2BB (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___libPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = UnmanagedLibrary_get_IsLibraryLoaded_m377C90F0821ADA1AE2A0DA577EA107F887940AF2(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		String_t* L_1 = ___libPath0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = ___libPath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Path_HasExtension_m8844A836C72841952891282B1F0792A1B16DB7FC(L_3, NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_5 = ___libPath0;
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_6 = __this->___m_impl_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DllExtension() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Path_ChangeExtension_m8137B6ADAA7685301AE571D88C0DDA9F2A9D9EEA(L_5, L_7, NULL);
		___libPath0 = L_8;
	}

IL_002d:
	{
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_9 = __this->___m_impl_1;
		String_t* L_10 = ___libPath0;
		NullCheck(L_9);
		bool L_11;
		L_11 = UnmanagedLibraryImplementation_LoadLibrary_m22B748157A9DDA649C9A6C35A36CFD61AAD025B6(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_12 = ___libPath0;
		__this->___m_libraryPath_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_libraryPath_3), (void*)L_12);
		VirtualActionInvoker0::Invoke(4 /* System.Void Assimp.Unmanaged.UnmanagedLibrary::OnLibraryLoaded() */, __this);
		return (bool)1;
	}

IL_004a:
	{
		return (bool)0;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary::FreeLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibrary_FreeLibrary_m1F3C79C6638CA796554096B1EF7908A373BA6FBE (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = UnmanagedLibrary_get_IsLibraryLoaded_m377C90F0821ADA1AE2A0DA577EA107F887940AF2(__this, NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Assimp.Unmanaged.UnmanagedLibrary::OnLibraryFreed() */, __this);
		UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* L_1 = __this->___m_impl_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = UnmanagedLibraryImplementation_FreeLibrary_m2F9627FB8EF5B2F05EAECB7063929DD819DFC9FF(L_1, NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_libraryPath_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_libraryPath_3), (void*)L_3);
		il2cpp_codegen_memory_barrier();
		__this->___m_checkNeedsLoading_4 = (bool)1;
		return (bool)1;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::LoadIfNotLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_LoadIfNotLoaded_mEF302255EF543EFD95301274E7449F43C19EE6A6 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_checkNeedsLoading_4;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var))->___s_defaultLoadSync_0;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				bool L_5;
				L_5 = UnmanagedLibrary_get_IsLibraryLoaded_m377C90F0821ADA1AE2A0DA577EA107F887940AF2(__this, NULL);
				if (L_5)
				{
					goto IL_002a_1;
				}
			}
			{
				bool L_6;
				L_6 = UnmanagedLibrary_LoadLibrary_mDCBB8B64842EBCB0FFE3ACC1693C40FCEDC34795(__this, NULL);
			}

IL_002a_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->___m_checkNeedsLoading_4 = (bool)0;
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::OnLibraryLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_OnLibraryLoaded_mFB45409638014B7C506ADF6E83A01F17F1A3782D (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryLoaded_5;
		V_0 = L_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_2, __this, L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::OnLibraryFreed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_OnLibraryFreed_mD7543B28E3CA6FC89EAADEE743E5D9E05C617593 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___LibraryFreed_6;
		V_0 = L_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_2, __this, L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::CreateRuntimeImplementation(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary_CreateRuntimeImplementation_m7A24F3169E46C137C246ED63AB7DDF32725CB5A2 (UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnmanagedLibrary_GetPlatform_m06F8120DFE63A05DDE672F70E4E4F158E711F834(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* L_2 = (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0*)il2cpp_codegen_object_new(UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnmanagedLibraryResolver__ctor_mFB37927F00989CAD1C69A13430E0B737850E47AD(L_2, L_1, NULL);
		__this->___m_resolver_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_resolver_2), (void*)L_2);
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		String_t* L_4 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* L_6 = (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824*)il2cpp_codegen_object_new(UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedWindowsLibraryImplementation__ctor_m55558F11D3E80A9B6EAC5B68578B94C7D2D4DDDF(L_6, L_4, L_5, NULL);
		__this->___m_impl_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_impl_1), (void*)L_6);
		return;
	}

IL_0034:
	{
		String_t* L_7 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* L_9 = (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157*)il2cpp_codegen_object_new(UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnmanagedLinuxLibraryImplementation__ctor_m94931F19E16CEB898220CF1AE2542315BECBDB21(L_9, L_7, L_8, NULL);
		__this->___m_impl_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_impl_1), (void*)L_9);
		return;
	}

IL_0042:
	{
		String_t* L_10 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* L_12 = (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163*)il2cpp_codegen_object_new(UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnmanagedMacLibraryImplementation__ctor_mD40A6F7C8718C71DCBEC2983BE14CEBECEC905D7(L_12, L_10, L_11, NULL);
		__this->___m_impl_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_impl_1), (void*)L_12);
		return;
	}

IL_0050:
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_13 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary_CreateRuntimeImplementation_m7A24F3169E46C137C246ED63AB7DDF32725CB5A2_RuntimeMethod_var)));
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary__cctor_m8C730C5FC006890C0725EFFA93DF0BDDCB449FD5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var))->___s_defaultLoadSync_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var))->___s_defaultLoadSync_0), (void*)L_0);
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
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_IsLibraryLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_IsLibraryLoaded_mA4B7F31B0B79FDDCA3FFE77EE817CC733D214819 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_libraryHandle_3;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_IsDisposed_mFEEDCA44134BFB84646C1CE9350E7CE7DAD80C03 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_isDisposed_4;
		return L_0;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DefaultLibraryName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_get_DefaultLibraryName_m222B962A91B387906B8A5B1B6E575DEDF4B070FC (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_defaultLibName_0;
		return L_0;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_ThrowOnLoadFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_throwOnLoadFailure_5;
		return L_0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::set_ThrowOnLoadFailure(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_set_ThrowOnLoadFailure_mA57F432EA98351DD810A3BB9696A261001A949D0 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_throwOnLoadFailure_5 = L_0;
		return;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DllPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_get_DllPrefix_m104437C969B550EA0DB7780C1FFE70879909088C (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation__ctor_mF802F6E6ED7F8D546897E675D77F0770577BC90A (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC11B8D87D7D6237273D0616824847584DA85B003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DllPrefix() */, __this);
		String_t* L_1 = ___defaultLibName0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::get_DllExtension() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_ChangeExtension_m8137B6ADAA7685301AE571D88C0DDA9F2A9D9EEA(L_1, L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_3, NULL);
		__this->___m_defaultLibName_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_defaultLibName_0), (void*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___unmanagedFunctionDelegateTypes1;
		__this->___m_unmanagedFunctionDelegateTypes_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_unmanagedFunctionDelegateTypes_1), (void*)L_5);
		Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* L_6 = (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*)il2cpp_codegen_object_new(Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mC11B8D87D7D6237273D0616824847584DA85B003(L_6, Dictionary_2__ctor_mC11B8D87D7D6237273D0616824847584DA85B003_RuntimeMethod_var);
		__this->___m_nameToUnmanagedFunction_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_nameToUnmanagedFunction_2), (void*)L_6);
		__this->___m_isDisposed_4 = (bool)0;
		__this->___m_libraryHandle_3 = (0);
		__this->___m_throwOnLoadFailure_5 = (bool)1;
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_Finalize_m860F416D4E24807CB36CCD483562FBEE96D1C9A5 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(10 /* System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_LoadLibrary_m22B748157A9DDA649C9A6C35A36CFD61AAD025B6 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = UnmanagedLibraryImplementation_FreeLibrary_m949FFB219666CBA6461C613E045DBFA92933336C(__this, (bool)1, NULL);
		String_t* L_1 = ___path0;
		intptr_t L_2;
		L_2 = VirtualFuncInvoker1< intptr_t, String_t* >::Invoke(7 /* System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::NativeLoadLibrary(System.String) */, __this, L_1);
		__this->___m_libraryHandle_3 = L_2;
		intptr_t L_3 = __this->___m_libraryHandle_3;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		UnmanagedLibraryImplementation_LoadFunctions_m3FA06940A047383CAB38F2ED8769640F07B331BA(__this, NULL);
	}

IL_002d:
	{
		intptr_t L_5 = __this->___m_libraryHandle_3;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_5, (0), NULL);
		return L_6;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::FreeLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_FreeLibrary_m2F9627FB8EF5B2F05EAECB7063929DD819DFC9FF (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnmanagedLibraryImplementation_FreeLibrary_m949FFB219666CBA6461C613E045DBFA92933336C(__this, (bool)1, NULL);
		return L_0;
	}
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::FreeLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_FreeLibrary_m949FFB219666CBA6461C613E045DBFA92933336C (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___clearFunctions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA5ED112FDE23E98A0E9A24339BF83DC1E0D2AB04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_libraryHandle_3;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_2 = __this->___m_libraryHandle_3;
		VirtualActionInvoker1< intptr_t >::Invoke(8 /* System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::NativeFreeLibrary(System.IntPtr) */, __this, L_2);
		__this->___m_libraryHandle_3 = (0);
		bool L_3 = ___clearFunctions0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* L_4 = __this->___m_nameToUnmanagedFunction_2;
		NullCheck(L_4);
		Dictionary_2_Clear_mA5ED112FDE23E98A0E9A24339BF83DC1E0D2AB04(L_4, Dictionary_2_Clear_mA5ED112FDE23E98A0E9A24339BF83DC1E0D2AB04_RuntimeMethod_var);
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::LoadFunctions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_LoadFunctions_m3FA06940A047383CAB38F2ED8769640F07B331BA (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC740DC4B588DEACABD94E8C79C0DD26C7065799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEC9E9DC5A9A7DC8EC9D73564D35C0CEB7182ED6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	String_t* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Delegate_t* V_5 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___m_unmanagedFunctionDelegateTypes_1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Type_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		Type_t* L_5 = V_2;
		String_t* L_6;
		L_6 = UnmanagedLibraryImplementation_GetUnmanagedName_m81B230750BE83EE4EFFCBD486302EC70C178481D(__this, L_5, NULL);
		V_3 = L_6;
		String_t* L_7 = V_3;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_9 = __this->___m_libraryHandle_3;
		String_t* L_10 = V_3;
		intptr_t L_11;
		L_11 = VirtualFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(9 /* System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::NativeGetProcAddress(System.IntPtr,System.String) */, __this, L_9, L_10);
		V_4 = L_11;
		intptr_t L_12 = V_4;
		bool L_13;
		L_13 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_12, (0), NULL);
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* L_14 = __this->___m_nameToUnmanagedFunction_2;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_TryGetValue_mEC9E9DC5A9A7DC8EC9D73564D35C0CEB7182ED6B(L_14, L_15, (&V_5), Dictionary_2_TryGetValue_mEC9E9DC5A9A7DC8EC9D73564D35C0CEB7182ED6B_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_17 = V_4;
		Type_t* L_18 = V_2;
		Delegate_t* L_19;
		L_19 = PlatformHelper_GetDelegateForFunctionPointer_m5A5EA0BFF9EFC28F99ED9B3CA83D50457FE4D648(L_17, L_18, NULL);
		V_5 = L_19;
		Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* L_20 = __this->___m_nameToUnmanagedFunction_2;
		String_t* L_21 = V_3;
		Delegate_t* L_22 = V_5;
		NullCheck(L_20);
		Dictionary_2_Add_mFC740DC4B588DEACABD94E8C79C0DD26C7065799(L_20, L_21, L_22, Dictionary_2_Add_mFC740DC4B588DEACABD94E8C79C0DD26C7065799_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0068:
	{
		int32_t L_24 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::GetUnmanagedName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_GetUnmanagedName_m81B230750BE83EE4EFFCBD486302EC70C178481D (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, Type_t* ___funcType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		Type_t* L_0 = ___funcType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = PlatformHelper_GetCustomAttributes_m26DC2576F130C578715C89DECBC2AABEA488FEF9(L_0, L_2, (bool)0, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0032;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!((UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3*)IsInstClass((RuntimeObject*)L_8, UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		NullCheck(((UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3*)IsInstClass((RuntimeObject*)L_9, UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_il2cpp_TypeInfo_var)));
		String_t* L_10;
		L_10 = UnmanagedFunctionNameAttribute_get_UnmanagedFunctionName_mDBEDAC936EAF19BD69BBE63D0559FBD7139AD154_inline(((UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3*)IsInstClass((RuntimeObject*)L_9, UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_Dispose_m37A1F23094AE16E3515A4008C1B7E97FADFBE698 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(10 /* System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLibraryImplementation::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_Dispose_m3D952017AADA9435B9CE3660B2653C9EC7BC23D6 (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___isDisposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_isDisposed_4;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = ___isDisposing0;
		bool L_2;
		L_2 = UnmanagedLibraryImplementation_FreeLibrary_m949FFB219666CBA6461C613E045DBFA92933336C(__this, L_1, NULL);
		__this->___m_isDisposed_4 = (bool)1;
	}

IL_0017:
	{
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
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::get_DllExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedWindowsLibraryImplementation_get_DllExtension_mE4185DE87900C2F834C7AC93EAD75DB77F736160 (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedWindowsLibraryImplementation__ctor_m55558F11D3E80A9B6EAC5B68578B94C7D2D4DDDF (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedLibraryImplementation__ctor_mF802F6E6ED7F8D546897E675D77F0770577BC90A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::NativeLoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_NativeLoadLibrary_mF271E4E6679C59EB868301D76E1B7B46632E94FB (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___path0;
		intptr_t L_1;
		L_1 = UnmanagedWindowsLibraryImplementation_WinLoadLibrary_mE3E98BD0D73F7BD529D3DB09EB4E8A624A495C13(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		bool L_4;
		L_4 = UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		V_1 = (Exception_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		int32_t L_5;
		L_5 = UnmanagedWindowsLibraryImplementation_GetHRForLastWin32Error_m430C0ED6C9B60A83855892D10EFD68F3DE829E75(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = Marshal_GetExceptionForHR_m2ECA1A5AF0AA00557154D76095905282ECDD965A(L_5, NULL);
		V_1 = L_6;
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		Exception_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___path0;
		Exception_t* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D6771FF20C417B7686E8F14B828F8569D572E1E)), L_8, L_10, NULL);
		Exception_t* L_12 = V_1;
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_13 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		AssimpException__ctor_m5E41DAC890D962A9FAFE6C9D73C1C1FD31BFD5F5(L_13, L_11, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedWindowsLibraryImplementation_NativeLoadLibrary_mF271E4E6679C59EB868301D76E1B7B46632E94FB_RuntimeMethod_var)));
	}

IL_004a:
	{
		String_t* L_14 = ___path0;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral550DFCAF1B87634DA24F71BF5897F8B6DDB16763)), L_14, NULL);
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_16 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedWindowsLibraryImplementation_NativeLoadLibrary_mF271E4E6679C59EB868301D76E1B7B46632E94FB_RuntimeMethod_var)));
	}

IL_005b:
	{
		intptr_t L_17 = V_0;
		return L_17;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::NativeGetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_NativeGetProcAddress_mC1544C958B04F30EB6BD5DA359CECCBB967449DC (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2;
		L_2 = UnmanagedWindowsLibraryImplementation_GetProcAddress_m31774309DDB0EBF2345943D38BEC832FFA0D4172(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::NativeFreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedWindowsLibraryImplementation_NativeFreeLibrary_m14B3FED8C76421A29869E4FD917679F5B297B7C1 (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		bool L_1;
		L_1 = UnmanagedWindowsLibraryImplementation_FreeLibrary_m22C9BF701D5943C39C430B7A0555A64938E1C7C5(L_0, NULL);
		return;
	}
}
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedWindowsLibraryImplementation_GetHRForLastWin32Error_m430C0ED6C9B60A83855892D10EFD68F3DE829E75 (UnmanagedWindowsLibraryImplementation_t9CCEE695148A2D346B08B2E18830860A28881824* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint64_t)((int64_t)(((int64_t)L_1)&((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL)))))) == ((uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL)))))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		return ((int32_t)(((int32_t)(L_3&((int32_t)65535)))|((int32_t)-2147024896)));
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::WinLoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_WinLoadLibrary_mE3E98BD0D73F7BD529D3DB09EB4E8A624A495C13 (String_t* ___fileName0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibrary", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	char* ____fileName0_marshaled = NULL;
	____fileName0_marshaled = il2cpp_codegen_marshal_string(___fileName0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibrary)(____fileName0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___fileName0' native representation
	il2cpp_codegen_marshal_free(____fileName0_marshaled);
	____fileName0_marshaled = NULL;

	return returnValue;
}
// System.Boolean Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedWindowsLibraryImplementation_FreeLibrary_m22C9BF701D5943C39C430B7A0555A64938E1C7C5 (intptr_t ___hModule0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___hModule0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hModule0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedWindowsLibraryImplementation::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedWindowsLibraryImplementation_GetProcAddress_m31774309DDB0EBF2345943D38BEC832FFA0D4172 (intptr_t ___hModule0, String_t* ___procName1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___procName1' to native representation
	char* ____procName1_marshaled = NULL;
	____procName1_marshaled = il2cpp_codegen_marshal_string(___procName1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___hModule0, ____procName1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___hModule0, ____procName1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___procName1' native representation
	il2cpp_codegen_marshal_free(____procName1_marshaled);
	____procName1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::get_DllExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLinuxLibraryImplementation_get_DllExtension_m7D32B10A600D29F253004ACA9120024BCE9E5EF3 (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::get_DllPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLinuxLibraryImplementation_get_DllPrefix_m7CF20C8B61BB65EC21372EE72C9D22756D9FEB2C (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLinuxLibraryImplementation__ctor_m94931F19E16CEB898220CF1AE2542315BECBDB21 (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedLibraryImplementation__ctor_mF802F6E6ED7F8D546897E675D77F0770577BC90A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::NativeLoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_NativeLoadLibrary_m1309155E9874623FA7CF83C7518311DD06FB9DD8 (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___path0;
		intptr_t L_1;
		L_1 = UnmanagedLinuxLibraryImplementation_dlopen_mBB6A29A9699E728983494F5D2E5CAF6F9CA67643(L_0, 2, NULL);
		intptr_t L_2 = L_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B5_0 = L_2;
			goto IL_0052;
		}
	}
	{
		bool L_4;
		L_4 = UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline(__this, NULL);
		G_B2_0 = G_B1_0;
		if (!L_4)
		{
			G_B5_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		intptr_t L_5;
		L_5 = UnmanagedLinuxLibraryImplementation_dlerror_mE958C08247C3FDA20F0A0D6C96B24C83BFF2642E(NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		G_B3_0 = G_B2_0;
		if (L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0041;
		}
	}
	{
		String_t* L_9 = ___path0;
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D6771FF20C417B7686E8F14B828F8569D572E1E)), L_9, L_10, NULL);
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_12 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLinuxLibraryImplementation_NativeLoadLibrary_m1309155E9874623FA7CF83C7518311DD06FB9DD8_RuntimeMethod_var)));
	}

IL_0041:
	{
		String_t* L_13 = ___path0;
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral550DFCAF1B87634DA24F71BF5897F8B6DDB16763)), L_13, NULL);
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_15 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLinuxLibraryImplementation_NativeLoadLibrary_m1309155E9874623FA7CF83C7518311DD06FB9DD8_RuntimeMethod_var)));
	}

IL_0052:
	{
		return G_B5_0;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::NativeGetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_NativeGetProcAddress_mEA775C853F799D1169CCF221745F8C30A6527795 (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2;
		L_2 = UnmanagedLinuxLibraryImplementation_dlsym_m9045574EC7B9EBB92BE6B4E15456D8A51562DBD0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::NativeFreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLinuxLibraryImplementation_NativeFreeLibrary_m411D9FAE81346002AFD5F3FB1DDF9F593219F2FC (UnmanagedLinuxLibraryImplementation_t5225222E30F6BD6D65FAEF2FC9C9A9036A8C0157* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		int32_t L_1;
		L_1 = UnmanagedLinuxLibraryImplementation_dlclose_mCFA7366CD011B5E7D24C54E5A8C42C1B62A30E93(L_0, NULL);
		return;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlopen_mBB6A29A9699E728983494F5D2E5CAF6F9CA67643 (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	char* ____fileName0_marshaled = NULL;
	____fileName0_marshaled = il2cpp_codegen_marshal_string(___fileName0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____fileName0_marshaled, ___flags1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___flags1);
	#endif

	// Marshaling cleanup of parameter '___fileName0' native representation
	il2cpp_codegen_marshal_free(____fileName0_marshaled);
	____fileName0_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlsym_m9045574EC7B9EBB92BE6B4E15456D8A51562DBD0 (intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___handle0, ____functionName1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___handle0, ____functionName1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedLinuxLibraryImplementation_dlclose_mCFA7366CD011B5E7D24C54E5A8C42C1B62A30E93 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedLinuxLibraryImplementation::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLinuxLibraryImplementation_dlerror_mE958C08247C3FDA20F0A0D6C96B24C83BFF2642E (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlerror", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlerror)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::get_DllExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedMacLibraryImplementation_get_DllExtension_mBAC3594DBB450815C47E80B2124C4DE538F7F440 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BE71E920B70B431E17F147C5CC565749839574);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF1BE71E920B70B431E17F147C5CC565749839574;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::get_DllPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedMacLibraryImplementation_get_DllPrefix_mE5C6F603C00A123EF27806236DECC64A582C6385 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMacLibraryImplementation__ctor_mD40A6F7C8718C71DCBEC2983BE14CEBECEC905D7 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, String_t* ___defaultLibName0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___unmanagedFunctionDelegateTypes1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___defaultLibName0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___unmanagedFunctionDelegateTypes1;
		UnmanagedLibraryImplementation__ctor_mF802F6E6ED7F8D546897E675D77F0770577BC90A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::NativeLoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_NativeLoadLibrary_mF53797F8DEE037EA28BEAC28F36EA0A532FC28AD (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___path0;
		intptr_t L_1;
		L_1 = UnmanagedMacLibraryImplementation_dlopen_m892BE341A62FF0DC2E2DCB6BE7C5DF6AEDCF88ED(L_0, 2, NULL);
		intptr_t L_2 = L_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B5_0 = L_2;
			goto IL_0052;
		}
	}
	{
		bool L_4;
		L_4 = UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline(__this, NULL);
		G_B2_0 = G_B1_0;
		if (!L_4)
		{
			G_B5_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		intptr_t L_5;
		L_5 = UnmanagedMacLibraryImplementation_dlerror_mFD11E7239DFA8B91DD6513D527EBDD11239E6B14(NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		G_B3_0 = G_B2_0;
		if (L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0041;
		}
	}
	{
		String_t* L_9 = ___path0;
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D6771FF20C417B7686E8F14B828F8569D572E1E)), L_9, L_10, NULL);
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_12 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedMacLibraryImplementation_NativeLoadLibrary_mF53797F8DEE037EA28BEAC28F36EA0A532FC28AD_RuntimeMethod_var)));
	}

IL_0041:
	{
		String_t* L_13 = ___path0;
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral550DFCAF1B87634DA24F71BF5897F8B6DDB16763)), L_13, NULL);
		AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66* L_15 = (AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssimpException_t39113833298276948D0C9BBA2C3BE2B3CFFFFC66_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		AssimpException__ctor_m52B944F5EF78131EC0BED85E40A2BE4BADC19788(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedMacLibraryImplementation_NativeLoadLibrary_mF53797F8DEE037EA28BEAC28F36EA0A532FC28AD_RuntimeMethod_var)));
	}

IL_0052:
	{
		return G_B5_0;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::NativeGetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_NativeGetProcAddress_m238A72DFA94D56581B28894E8452E73A18F38D17 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2;
		L_2 = UnmanagedMacLibraryImplementation_dlsym_m2B10C0D00AA3C90CC1480801664548B0A8349FDB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::NativeFreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMacLibraryImplementation_NativeFreeLibrary_mF30879284D8983AF1D9441A1FBE1EA412C4F47A3 (UnmanagedMacLibraryImplementation_tA19AA5FA7A03139959137E4BE5D0CBE3C68EB163* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		int32_t L_1;
		L_1 = UnmanagedMacLibraryImplementation_dlclose_mB68D4B976350BA35A6B0BC8AF7E45C3BA3CF6841(L_0, NULL);
		return;
	}
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlopen_m892BE341A62FF0DC2E2DCB6BE7C5DF6AEDCF88ED (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_B_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.B.dylib"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	char* ____fileName0_marshaled = NULL;
	____fileName0_marshaled = il2cpp_codegen_marshal_string(___fileName0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_B_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____fileName0_marshaled, ___flags1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___flags1);
	#endif

	// Marshaling cleanup of parameter '___fileName0' native representation
	il2cpp_codegen_marshal_free(____fileName0_marshaled);
	____fileName0_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlsym_m2B10C0D00AA3C90CC1480801664548B0A8349FDB (intptr_t ___handle0, String_t* ___functionName1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_B_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.B.dylib"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_B_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___handle0, ____functionName1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___handle0, ____functionName1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
// System.Int32 Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedMacLibraryImplementation_dlclose_mB68D4B976350BA35A6B0BC8AF7E45C3BA3CF6841 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_B_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.B.dylib"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_B_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// System.IntPtr Assimp.Unmanaged.UnmanagedLibrary/UnmanagedMacLibraryImplementation::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedMacLibraryImplementation_dlerror_mFD11E7239DFA8B91DD6513D527EBDD11239E6B14 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_B_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.B.dylib"), "dlerror", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_B_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlerror)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Assimp.Unmanaged.Platform Assimp.Unmanaged.UnmanagedLibraryResolver::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedLibraryResolver_get_Platform_m053275092C9F53A3F8EC5799E5ABBDC6A1DDA3F8 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_platform_6;
		return L_0;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::.ctor(Assimp.Unmanaged.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver__ctor_mFB37927F00989CAD1C69A13430E0B737850E47AD (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, int32_t ___platformHint0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___platformHint0;
		__this->___m_platform_6 = L_0;
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetFallbackLibraryNames32(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetFallbackLibraryNames32_m9C54B812EB80DA489264B928BAECDFD6C8BC8D55 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackLibNames0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___fallbackLibNames0;
		__this->___m_32BitLibNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_32BitLibNames_0), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetFallbackLibraryNames64(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetFallbackLibraryNames64_m8BE31F006EF044DA325D51230AE7A690411BF566 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackLibNames0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___fallbackLibNames0;
		__this->___m_64BitLibNames_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_64BitLibNames_1), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetFallbackLibraryNames(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetFallbackLibraryNames_mC7379470756A06B98003D6365413F6A1C9E68940 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackLibNames0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___fallbackLibNames0;
		__this->___m_32BitLibNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_32BitLibNames_0), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___fallbackLibNames0;
		__this->___m_64BitLibNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_64BitLibNames_1), (void*)L_1);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetProbingPaths32(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetProbingPaths32_m38501C59BA895D1B333A74FD8AB0595FFAF04AAC (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___probingPaths0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___probingPaths0;
		__this->___m_32BitProbingPaths_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_32BitProbingPaths_2), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetProbingPaths64(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetProbingPaths64_mDDD7006B68ABEAB248988164164E2669535E5AED (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___probingPaths0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___probingPaths0;
		__this->___m_64BitProbingPaths_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_64BitProbingPaths_3), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetProbingPaths(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetProbingPaths_m2F382E9C6BC6121D1F175A6DC39A2FD644158B53 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___probingPaths0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___probingPaths0;
		__this->___m_32BitProbingPaths_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_32BitProbingPaths_2), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___probingPaths0;
		__this->___m_64BitProbingPaths_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_64BitProbingPaths_3), (void*)L_1);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetOverrideLibraryName32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetOverrideLibraryName32_m9CAC631AF3143CE57C3F9C018E639481C0A33FCF (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___overrideName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___overrideName0;
		__this->___m_override32BitName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_override32BitName_4), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetOverrideLibraryName64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetOverrideLibraryName64_m1A8B6EA4EF1A021340B9D5079776083831A654EC (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___overrideName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___overrideName0;
		__this->___m_override64BitName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_override64BitName_5), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Unmanaged.UnmanagedLibraryResolver::SetOverrideLibraryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibraryResolver_SetOverrideLibraryName_m4A394555DA1C3C1008F030719922B917FACBA2E3 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___overrideName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___overrideName0;
		__this->___m_override32BitName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_override32BitName_4), (void*)L_0);
		String_t* L_1 = ___overrideName0;
		__this->___m_override64BitName_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_override64BitName_5), (void*)L_1);
		return;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::ResolveLibraryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_ResolveLibraryPath_m248CD0D91024B0DA6E9EAEC28B49D9C3F5FD3BE1 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___libName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnmanagedLibrary_tC95FFCB2706EE9DEB932EA5DC6CA07893236FB8B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UnmanagedLibrary_get_Is64Bit_mF48AD6048F65F0F101B87CF8E4C96AF3EEC8631B(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = __this->___m_override32BitName_4;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = __this->___m_override64BitName_5;
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_1 = G_B3_0;
		String_t* L_4 = V_1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_6 = V_1;
		___libName0 = L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___libName0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_9 = ___libName0;
		return L_9;
	}

IL_002d:
	{
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___m_32BitLibNames_0;
		G_B10_0 = L_11;
		goto IL_003e;
	}

IL_0038:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___m_64BitLibNames_1;
		G_B10_0 = L_12;
	}

IL_003e:
	{
		V_2 = G_B10_0;
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_004a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___m_32BitProbingPaths_2;
		G_B13_0 = L_14;
		goto IL_0050;
	}

IL_004a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___m_64BitProbingPaths_3;
		G_B13_0 = L_15;
	}

IL_0050:
	{
		V_3 = G_B13_0;
		String_t* L_16;
		L_16 = UnmanagedLibraryResolver_GetRuntimeIdentifier_m813CE2CEE4C9DCFD999866D2B7D2C7E07509AAAC(__this, NULL);
		V_4 = L_16;
		String_t* L_17 = ___libName0;
		String_t* L_18 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_3;
		String_t* L_21;
		L_21 = UnmanagedLibraryResolver_ResolveLibraryPathInternal_m51D8CA4D394A55A1D8D1B2600DAD86870F051E1C(__this, L_17, L_18, L_19, L_20, NULL);
		return L_21;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::ResolveLibraryPathInternal(System.String,System.String,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_ResolveLibraryPathInternal_m51D8CA4D394A55A1D8D1B2600DAD86870F051E1C (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___libName0, String_t* ___rid1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___probingPaths3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138F011E53CF5E5DF3FAC905EC7B652E9A145EFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB805D502729F61CD276150F442B6A7AF250FF2EF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___probingPaths3;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___probingPaths3;
		V_4 = L_1;
		V_5 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_4;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		String_t* L_6 = V_6;
		String_t* L_7 = ___libName0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___fallbackNames2;
		String_t* L_9;
		L_9 = UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0(__this, L_6, L_7, L_8, NULL);
		V_7 = L_9;
		String_t* L_10 = V_7;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_10, NULL);
		if (L_11)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_12 = V_7;
		return L_12;
	}

IL_002c:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0032:
	{
		int32_t L_14 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_003a:
	{
		String_t* L_16;
		L_16 = PlatformHelper_GetAppBaseDirectory_m01DA0C2F167EB1749CD3CFDAC59B0AEFB6F9280B(NULL);
		String_t* L_17 = ___rid1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_17, _stringLiteral138F011E53CF5E5DF3FAC905EC7B652E9A145EFA, NULL);
		String_t* L_19;
		L_19 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(_stringLiteralB805D502729F61CD276150F442B6A7AF250FF2EF, L_18, NULL);
		String_t* L_20;
		L_20 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_16, L_19, NULL);
		V_0 = L_20;
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_21, NULL);
		if (!L_22)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_23 = V_0;
		String_t* L_24 = ___libName0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = ___fallbackNames2;
		String_t* L_26;
		L_26 = UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0(__this, L_23, L_24, L_25, NULL);
		V_8 = L_26;
		String_t* L_27 = V_8;
		bool L_28;
		L_28 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_27, NULL);
		if (L_28)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_29 = V_8;
		return L_29;
	}

IL_0079:
	{
		String_t* L_30;
		L_30 = PlatformHelper_GetAppBaseDirectory_m01DA0C2F167EB1749CD3CFDAC59B0AEFB6F9280B(NULL);
		String_t* L_31 = ___libName0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = ___fallbackNames2;
		String_t* L_33;
		L_33 = UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0(__this, L_30, L_31, L_32, NULL);
		V_1 = L_33;
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_34, NULL);
		if (L_35)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_36 = V_1;
		return L_36;
	}

IL_0091:
	{
		String_t* L_37;
		L_37 = UnmanagedLibraryResolver_GetNugetPackagePath_m1F24F6A658D46B97374991EC74B5AD40B94015AB(__this, NULL);
		String_t* L_38 = ___rid1;
		String_t* L_39;
		L_39 = UnmanagedLibraryResolver_GetPackageRuntimeFolder_m73CC9BC55224B51268C165D07D4E7FE68E0CFEF6(__this, L_37, L_38, NULL);
		V_2 = L_39;
		String_t* L_40 = V_2;
		String_t* L_41 = ___libName0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = ___fallbackNames2;
		String_t* L_43;
		L_43 = UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0(__this, L_40, L_41, L_42, NULL);
		V_3 = L_43;
		String_t* L_44 = V_3;
		bool L_45;
		L_45 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_44, NULL);
		if (L_45)
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_46 = V_3;
		return L_46;
	}

IL_00b3:
	{
		String_t* L_47 = ___libName0;
		return L_47;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetPackageRuntimeFolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetPackageRuntimeFolder_m73CC9BC55224B51268C165D07D4E7FE68E0CFEF6 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___packagePath0, String_t* ___rid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138F011E53CF5E5DF3FAC905EC7B652E9A145EFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB805D502729F61CD276150F442B6A7AF250FF2EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___packagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		String_t* L_2 = ___packagePath0;
		String_t* L_3 = ___rid1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_3, _stringLiteral138F011E53CF5E5DF3FAC905EC7B652E9A145EFA, NULL);
		String_t* L_5;
		L_5 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(_stringLiteralB805D502729F61CD276150F442B6A7AF250FF2EF, L_4, NULL);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_2, L_5, NULL);
		return L_6;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetNugetPackagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetNugetPackagePath_m1F24F6A658D46B97374991EC74B5AD40B94015AB (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D41FB40EFBF08CF7881EBE5DA263D579C50E5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5C36733F4CD20C5A83598695FC846136F40B7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E8F32CC0FB432888F81177732BA223324177B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		String_t* L_0;
		L_0 = PlatformHelper_GetAssemblyName_m812BCB444937C57775B77A45DA2EED1EF87B441E(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = PlatformHelper_GetInformationalVersion_m37FB5E9581E7DEA47664A2DE766840BF980E50F8(NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (String_t*)NULL;
	}

IL_0023:
	{
		String_t* L_7 = V_0;
		String_t* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_7, L_8, NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteral5A5C36733F4CD20C5A83598695FC846136F40B7C, NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		if (L_12)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_13, NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_15 = V_3;
		String_t* L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_15, L_16, NULL);
		return L_17;
	}

IL_004e:
	{
		int32_t L_18 = __this->___m_platform_6;
		if (L_18)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_19;
		L_19 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteral65E8F32CC0FB432888F81177732BA223324177B0, NULL);
		V_3 = L_19;
		goto IL_006e;
	}

IL_0063:
	{
		String_t* L_20;
		L_20 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB, NULL);
		V_3 = L_20;
	}

IL_006e:
	{
		String_t* L_21 = V_3;
		bool L_22;
		L_22 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_21, NULL);
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(_stringLiteral44D41FB40EFBF08CF7881EBE5DA263D579C50E5F, _stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B, NULL);
		String_t* L_25 = V_2;
		String_t* L_26;
		L_26 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_24, L_25, NULL);
		String_t* L_27;
		L_27 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_23, L_26, NULL);
		return L_27;
	}

IL_0092:
	{
		return (String_t*)NULL;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::TryGetExistingFile(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_TryGetExistingFile_mC8E211E463F4F2AF0163DCC56870A453A79586D0 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, String_t* ___basePath0, String_t* ___libName1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallbackNames2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ___basePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___basePath0;
		bool L_3;
		L_3 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (String_t*)NULL;
	}

IL_0012:
	{
		String_t* L_4 = ___basePath0;
		String_t* L_5 = ___libName1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_4, L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_9 = V_0;
		return L_9;
	}

IL_0024:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___fallbackNames2;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___fallbackNames2;
		V_1 = L_11;
		V_2 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		String_t* L_16 = ___basePath0;
		String_t* L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_16, L_17, NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_19, NULL);
		if (!L_20)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_21 = V_0;
		return L_21;
	}

IL_0043:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0047:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_002d;
		}
	}

IL_004d:
	{
		return (String_t*)NULL;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRuntimeIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRuntimeIdentifier_m813CE2CEE4C9DCFD999866D2B7D2C7E07509AAAC (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = UnmanagedLibraryResolver_GetRIDOS_m4B673AFCBF26302A360C3673D5B2B0E086872A97(__this, NULL);
		String_t* L_1;
		L_1 = UnmanagedLibraryResolver_GetRIDArch_m67E17DD7E1C351B900DF91F2CE981D212435BCD4(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRIDOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRIDOS_m4B673AFCBF26302A360C3673D5B2B0E086872A97 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C277875F4F60D0278175249BB52B37CE28E43DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C826604CE55A7F56BA506D0C62AD8445AB39DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_platform_6;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001b:
	{
		return _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
	}

IL_0021:
	{
		return _stringLiteral8C277875F4F60D0278175249BB52B37CE28E43DD;
	}

IL_0027:
	{
		return _stringLiteral99C826604CE55A7F56BA506D0C62AD8445AB39DD;
	}

IL_002d:
	{
		return _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
	}
}
// System.String Assimp.Unmanaged.UnmanagedLibraryResolver::GetRIDArch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryResolver_GetRIDArch_m67E17DD7E1C351B900DF91F2CE981D212435BCD4 (UnmanagedLibraryResolver_t3FB005201C7DD76ACB9691DA5E9021A0B425BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EFCBB75A7E4378AE29264B185738EEC8B062CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = RuntimeInformation_get_ProcessArchitecture_m9CAB856AF92AB4A2881C605E1897EA6F6F7F75E9_inline(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_001e;
			}
			case 3:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_001e:
	{
		return _stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519;
	}

IL_0024:
	{
		return _stringLiteral85EFCBB75A7E4378AE29264B185738EEC8B062CE;
	}

IL_002a:
	{
		return _stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122;
	}

IL_0030:
	{
		return _stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assimp.Unmanaged.AiTexture::SetFormatHint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiTexture_SetFormatHint_m11BA5809FAF495F100EC86C782C06BFF16D57CB1 (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* __this, String_t* ___formatHint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_0 = NULL;
	int8_t* G_B6_0 = NULL;
	int8_t* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	int8_t* G_B7_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields*)il2cpp_codegen_static_fields_for(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var))->___s_nullFormat_0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		String_t* L_1 = ___formatHint0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___formatHint0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_3, NULL);
		NullCheck(L_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
		L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0022;
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ((AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields*)il2cpp_codegen_static_fields_for(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var))->___s_nullFormat_0;
		G_B3_0 = L_6;
	}

IL_0022:
	{
		V_1 = G_B3_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_1;
		NullCheck(L_7);
		V_2 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609* L_8 = (&__this->___FormatHint_3);
		int8_t* L_9 = (&L_8->___FixedElementField_0);
		V_4 = L_9;
		int8_t* L_10 = V_4;
		V_3 = (int8_t*)((uintptr_t)L_10);
		V_5 = 0;
		goto IL_0055;
	}

IL_003d:
	{
		int8_t* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = V_2;
		int32_t L_14 = V_5;
		G_B5_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12));
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			G_B6_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12));
			goto IL_0049;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_004d;
	}

IL_0049:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_1;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B7_0 = ((int32_t)(L_18));
		G_B7_1 = G_B6_0;
	}

IL_004d:
	{
		*((int8_t*)G_B7_1) = (int8_t)((int8_t)G_B7_0);
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0055:
	{
		int32_t L_20 = V_5;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003d;
		}
	}
	{
		V_4 = (int8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void AiTexture_SetFormatHint_m11BA5809FAF495F100EC86C782C06BFF16D57CB1_AdjustorThunk (RuntimeObject* __this, String_t* ___formatHint0, const RuntimeMethod* method)
{
	AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D*>(__this + _offset);
	AiTexture_SetFormatHint_m11BA5809FAF495F100EC86C782C06BFF16D57CB1(_thisAdjusted, ___formatHint0, method);
}
// System.String Assimp.Unmanaged.AiTexture::GetFormatHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiTexture_GetFormatHint_m01B61910CF2B045F83460FAF9ACBE513E5CFE324 (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AiTexture_GetFormatHint_m1833CD49D3398E656519400E947BB20613720CBF(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AiTexture_GetFormatHint_m01B61910CF2B045F83460FAF9ACBE513E5CFE324_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AiTexture_GetFormatHint_m01B61910CF2B045F83460FAF9ACBE513E5CFE324(_thisAdjusted, method);
	return _returnValue;
}
// System.String Assimp.Unmanaged.AiTexture::GetFormatHint(Assimp.Unmanaged.AiTexture&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiTexture_GetFormatHint_m1833CD49D3398E656519400E947BB20613720CBF (AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* ___aiTex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* L_0 = ___aiTex0;
		U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609* L_1 = (&L_0->___FormatHint_3);
		int8_t* L_2 = (&L_1->___FixedElementField_0);
		V_1 = L_2;
		int8_t* L_3 = V_1;
		V_0 = (int8_t*)((uintptr_t)L_3);
		il2cpp_codegen_runtime_class_init_inline(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields*)il2cpp_codegen_static_fields_for(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var))->___s_nullFormat_0;
		NullCheck(L_4);
		V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		V_3 = 0;
		V_4 = 0;
		goto IL_0039;
	}

IL_001e:
	{
		AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D* L_5 = ___aiTex0;
		U3CFormatHintU3Ee__FixedBuffer_t2F12CF353B2BFAC7C322710D0F223C99E6E8E609* L_6 = (&L_5->___FormatHint_3);
		int8_t* L_7 = (&L_6->___FixedElementField_0);
		int32_t L_8 = V_4;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_4;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001e;
		}
	}

IL_003e:
	{
		int32_t L_14 = V_3;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_15;
	}

IL_0047:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16;
		L_16 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		int8_t* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		String_t* L_19;
		L_19 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_16, (uint8_t*)L_17, L_18, NULL);
		return L_19;
	}
}
// System.Void Assimp.Unmanaged.AiTexture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiTexture__cctor_m96E8DEC899D5638B2B94C4E92CC15CEE147D0042 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		((AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields*)il2cpp_codegen_static_fields_for(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var))->___s_nullFormat_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_StaticFields*)il2cpp_codegen_static_fields_for(AiTexture_tF6CEC66114D42BC7347A94D9F253216A70E1603D_il2cpp_TypeInfo_var))->___s_nullFormat_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Assimp.Unmanaged.AiString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiString__ctor_m268E922FE11757D416AA120EBEDB397303F0DFA3 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		__this->___Length_0 = (0);
		String_t* L_0 = ___data0;
		bool L_1;
		L_1 = AiString_SetString_m9B0AC8090A999BD8645B8DABBA97E0A9F439EA65(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AiString__ctor_m268E922FE11757D416AA120EBEDB397303F0DFA3_AdjustorThunk (RuntimeObject* __this, String_t* ___data0, const RuntimeMethod* method)
{
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6*>(__this + _offset);
	AiString__ctor_m268E922FE11757D416AA120EBEDB397303F0DFA3(_thisAdjusted, ___data0, method);
}
// System.String Assimp.Unmanaged.AiString::GetString(Assimp.Unmanaged.AiString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_GetString_m6FD5E9B57E001F69A59331EDDF25471E754C0428 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* ___aiStr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* L_0 = ___aiStr0;
		uintptr_t L_1 = L_0->___Length_0;
		V_1 = L_1;
		uint32_t L_2;
		L_2 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_1), NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* L_6 = ___aiStr0;
		U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD* L_7 = (&L_6->___Data_1);
		uint8_t* L_8 = (&L_7->___FixedElementField_0);
		V_3 = L_8;
		uint8_t* L_9 = V_3;
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_10), (void*)((uintptr_t)L_9), /*hidden argument*/NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var);
		MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0(L_10, L_11, 0, L_12, MemoryHelper_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m377685C28A6357459522EBAAB74E38F8E80617D0_RuntimeMethod_var);
		V_3 = (uint8_t*)((uintptr_t)0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		return L_16;
	}

IL_0046:
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_17;
	}
}
// System.String Assimp.Unmanaged.AiString::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_GetString_mB082B14B3F8187A8FF1952E7EE7C348A07CE88A0 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = AiString_GetString_m6FD5E9B57E001F69A59331EDDF25471E754C0428(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AiString_GetString_mB082B14B3F8187A8FF1952E7EE7C348A07CE88A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AiString_GetString_mB082B14B3F8187A8FF1952E7EE7C348A07CE88A0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Assimp.Unmanaged.AiString::SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AiString_SetString_m9B0AC8090A999BD8645B8DABBA97E0A9F439EA65 (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		String_t* L_0 = ___data0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		uintptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_2), 0, /*hidden argument*/NULL);
		__this->___Length_0 = L_2;
		U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD* L_3 = (&__this->___Data_1);
		uint8_t* L_4 = (&L_3->___FixedElementField_0);
		V_0 = L_4;
		uint8_t* L_5 = V_0;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), (void*)((uintptr_t)L_5), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var);
		MemoryHelper_ClearMemory_m060A5CCCD58AAD880DD304E95EDA536DA22CFB86(L_6, (uint8_t)0, ((int32_t)1024), NULL);
		V_0 = (uint8_t*)((uintptr_t)0);
		return (bool)1;
	}

IL_0037:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_8 = ___data0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_7, L_8);
		if ((((int32_t)L_9) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0089;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_11 = ___data0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		V_1 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_0079;
		}
	}
	{
		U3CDataU3Ee__FixedBuffer_tBB0745ABF97F3FCBF75833DAF9073C726CDC5FDD* L_14 = (&__this->___Data_1);
		uint8_t* L_15 = (&L_14->___FixedElementField_0);
		V_0 = L_15;
		uint8_t* L_16 = V_0;
		intptr_t L_17;
		memset((&L_17), 0, sizeof(L_17));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_17), (void*)((uintptr_t)L_16), /*hidden argument*/NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		NullCheck(L_19);
		il2cpp_codegen_runtime_class_init_inline(MemoryHelper_t09DDA3294840987E30A199C2C40C2EB4153F4188_il2cpp_TypeInfo_var);
		MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E(L_17, L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), MemoryHelper_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9E7AA11209F2E1A50A8234C646F624BB116F330E_RuntimeMethod_var);
		V_0 = (uint8_t*)((uintptr_t)0);
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		NullCheck(L_20);
		uintptr_t L_21;
		memset((&L_21), 0, sizeof(L_21));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_21), ((int32_t)(((RuntimeArray*)L_20)->max_length)), /*hidden argument*/NULL);
		__this->___Length_0 = L_21;
		return (bool)1;
	}

IL_0089:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AiString_SetString_m9B0AC8090A999BD8645B8DABBA97E0A9F439EA65_AdjustorThunk (RuntimeObject* __this, String_t* ___data0, const RuntimeMethod* method)
{
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6*>(__this + _offset);
	bool _returnValue;
	_returnValue = AiString_SetString_m9B0AC8090A999BD8645B8DABBA97E0A9F439EA65(_thisAdjusted, ___data0, method);
	return _returnValue;
}
// System.String Assimp.Unmanaged.AiString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AiString_ToString_m931C795160B1308901F3B074177E517AC900674C (AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = AiString_GetString_mB082B14B3F8187A8FF1952E7EE7C348A07CE88A0(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AiString_ToString_m931C795160B1308901F3B074177E517AC900674C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiString_t465BAF605D69D92B7AAF7BE90FA85BF4448AC6F6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AiString_ToString_m931C795160B1308901F3B074177E517AC900674C(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_Multicast(AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* currentDelegate = reinterpret_cast<AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___msg0, ___userData1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_Open(AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___msg0, ___userData1, method);
}
void AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_OpenStaticInvoker(AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___msg0, ___userData1);
}
void AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_ClosedStaticInvoker(AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___msg0, ___userData1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4 (AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	il2cppPInvokeFunc(____msg0_marshaled, ___userData1);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
// System.Void Assimp.Unmanaged.AiLogStreamCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiLogStreamCallback__ctor_mB09D084A833F2B348A089AC01D49AC5170E049B8 (AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE_Multicast;
}
// System.Void Assimp.Unmanaged.AiLogStreamCallback::Invoke(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiLogStreamCallback_Invoke_m6DC503B42360EB649216D578017EDDA2C70FB7EE (AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___msg0, ___userData1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiLogStreamCallback::BeginInvoke(System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiLogStreamCallback_BeginInvoke_m4103CD7333A92AF46CCA069A8D02E2E8F48EA19E (AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, String_t* ___msg0, intptr_t ___userData1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___msg0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Assimp.Unmanaged.AiLogStreamCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiLogStreamCallback_EndInvoke_m215318F8C89D170A0CB51945EE26606FCCE1B423 (AiLogStreamCallback_tC0015DF915AC894827BBE259BFEB1FB217442AF4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uintptr_t AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_Multicast(AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* currentDelegate = reinterpret_cast<AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_Open(AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3, method);
}
uintptr_t AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_OpenStaticInvoker(AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uintptr_t, intptr_t, intptr_t, uintptr_t, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3);
}
uintptr_t AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_ClosedStaticInvoker(AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uintptr_t, RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A (AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	typedef uintptr_t (CDECL *PInvokeFunc)(intptr_t, intptr_t, uintptr_t, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3);

	return returnValue;
}
// System.Void Assimp.Unmanaged.AiFileWriteProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileWriteProc__ctor_m4A2378C2C5B028BBDACAE25B1F09BD74D294F1F6 (AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250_Multicast;
}
// System.UIntPtr Assimp.Unmanaged.AiFileWriteProc::Invoke(System.IntPtr,System.IntPtr,System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileWriteProc_Invoke_m5211CC9C9DDE246FAB1484354601AE23A558C250 (AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___file0, ___dataToWrite1, ___sizeOfElemInBytes2, ___numElements3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileWriteProc::BeginInvoke(System.IntPtr,System.IntPtr,System.UIntPtr,System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileWriteProc_BeginInvoke_m9DCE77A8DD2F5CD466613CB1168DE4DB6C4EC1D4 (AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, intptr_t ___file0, intptr_t ___dataToWrite1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataToWrite1);
	__d_args[2] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___sizeOfElemInBytes2);
	__d_args[3] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___numElements3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.UIntPtr Assimp.Unmanaged.AiFileWriteProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileWriteProc_EndInvoke_mE1C3288DB993FC0956D6934F9DEB7E3DBA01F484 (AiFileWriteProc_t412A4640FF358E2F32C0DBDF5C42E496012D776A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uintptr_t AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_Multicast(AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* currentDelegate = reinterpret_cast<AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_Open(AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3, method);
}
uintptr_t AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_OpenStaticInvoker(AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uintptr_t, intptr_t, intptr_t, uintptr_t, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3);
}
uintptr_t AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_ClosedStaticInvoker(AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uintptr_t, RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E (AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method)
{
	typedef uintptr_t (CDECL *PInvokeFunc)(intptr_t, intptr_t, uintptr_t, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3);

	return returnValue;
}
// System.Void Assimp.Unmanaged.AiFileReadProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileReadProc__ctor_m96FBF8D264BE82BB09F6D6AFDA5DC7C9C9F6EC1B (AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD_Multicast;
}
// System.UIntPtr Assimp.Unmanaged.AiFileReadProc::Invoke(System.IntPtr,System.IntPtr,System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileReadProc_Invoke_m4735263FC0553FC1532A8C56E053D4F14FED7AFD (AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uintptr_t, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___file0, ___dataToRead1, ___sizeOfElemInBytes2, ___numElements3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileReadProc::BeginInvoke(System.IntPtr,System.IntPtr,System.UIntPtr,System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileReadProc_BeginInvoke_m1D892E10F693541B436302401801CA0E69F9C12A (AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, intptr_t ___file0, intptr_t ___dataToRead1, uintptr_t ___sizeOfElemInBytes2, uintptr_t ___numElements3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataToRead1);
	__d_args[2] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___sizeOfElemInBytes2);
	__d_args[3] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___numElements3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.UIntPtr Assimp.Unmanaged.AiFileReadProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileReadProc_EndInvoke_mDDBA287BE3DAE560BE1602975D3558DD7EA6ABD4 (AiFileReadProc_t00ECBB4EA9B19BA3E3C67A5119FC5E106790472E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uintptr_t AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_Multicast(AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* currentDelegate = reinterpret_cast<AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___file0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_Open(AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___file0, method);
}
uintptr_t AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_OpenStaticInvoker(AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uintptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___file0);
}
uintptr_t AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_ClosedStaticInvoker(AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___file0);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33 (AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	typedef uintptr_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(___file0);

	return returnValue;
}
// System.Void Assimp.Unmanaged.AiFileTellProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileTellProc__ctor_m7445548DEDAABFA396B53345A7F6E33DE59A6DC2 (AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15_Multicast;
}
// System.UIntPtr Assimp.Unmanaged.AiFileTellProc::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileTellProc_Invoke_m448F6751DDD95D6E74BD8559FB0ED51AE4298E15 (AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___file0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileTellProc::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileTellProc_BeginInvoke_m5D85104AE2F63DD91A667E5398A2C97B46C0BB1F (AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, intptr_t ___file0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.UIntPtr Assimp.Unmanaged.AiFileTellProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t AiFileTellProc_EndInvoke_mEE438AE7D534BB71857C9EEE0FEBD0ACB588CACB (AiFileTellProc_tF86BD0422639FA5F9A16DA6196B61F583CCC0F33* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_Multicast(AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* currentDelegate = reinterpret_cast<AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___file0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_Open(AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___file0, method);
}
void AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_OpenStaticInvoker(AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___file0);
}
void AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_ClosedStaticInvoker(AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___file0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B (AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___file0);

}
// System.Void Assimp.Unmanaged.AiFileFlushProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileFlushProc__ctor_mA31871B614785552DE4B91040601D1E890E2975F (AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0_Multicast;
}
// System.Void Assimp.Unmanaged.AiFileFlushProc::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileFlushProc_Invoke_m5BA3E50103244CCC9952E9AA96B7C463932E66D0 (AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___file0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileFlushProc::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileFlushProc_BeginInvoke_m318AC88282F47F78D960462D971F13EC1DF978FA (AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, intptr_t ___file0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Assimp.Unmanaged.AiFileFlushProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileFlushProc_EndInvoke_m92C4F42DC5DC2D8125657F40497A3D878BF2D203 (AiFileFlushProc_t02ECA3B072E787AB9E36BF71708BA343D32C3F5B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_Multicast(AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* currentDelegate = reinterpret_cast<AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___file0, ___offset1, ___seekOrigin2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_Open(AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___file0, ___offset1, ___seekOrigin2, method);
}
int32_t AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_OpenStaticInvoker(AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uintptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___file0, ___offset1, ___seekOrigin2);
}
int32_t AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_ClosedStaticInvoker(AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uintptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___file0, ___offset1, ___seekOrigin2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B (AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uintptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___file0, ___offset1, ___seekOrigin2);

	return returnValue;
}
// System.Void Assimp.Unmanaged.AiFileSeek::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileSeek__ctor_mA127DC7CCBD6260B6568DAD11757B7F90E16A817 (AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D_Multicast;
}
// Assimp.ReturnCode Assimp.Unmanaged.AiFileSeek::Invoke(System.IntPtr,System.UIntPtr,Assimp.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiFileSeek_Invoke_mD9ED617E8237F57F2290A8AF7309AD4531663D5D (AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___file0, ___offset1, ___seekOrigin2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileSeek::BeginInvoke(System.IntPtr,System.UIntPtr,Assimp.Origin,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileSeek_BeginInvoke_mEF7120B3A526418BAD657E98DDEE1D396DF22382 (AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, intptr_t ___file0, uintptr_t ___offset1, int32_t ___seekOrigin2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Origin_tE9647DBDBE00F7956694FBA0A641C137FF967B49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file0);
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Origin_tE9647DBDBE00F7956694FBA0A641C137FF967B49_il2cpp_TypeInfo_var, &___seekOrigin2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// Assimp.ReturnCode Assimp.Unmanaged.AiFileSeek::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiFileSeek_EndInvoke_m671338D86A73FF95F795A863D430AB8183449242 (AiFileSeek_t9028DA3697587AC1DCEAEF115FDD4131022BB80B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_Multicast(AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* currentDelegate = reinterpret_cast<AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___fileIO0, ___pathToFile1, ___mode2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_Open(AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___fileIO0, ___pathToFile1, ___mode2, method);
}
intptr_t AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_OpenStaticInvoker(AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___fileIO0, ___pathToFile1, ___mode2);
}
intptr_t AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_ClosedStaticInvoker(AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, intptr_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___fileIO0, ___pathToFile1, ___mode2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1 (AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pathToFile1' to native representation
	char* ____pathToFile1_marshaled = NULL;
	____pathToFile1_marshaled = il2cpp_codegen_marshal_string(___pathToFile1);

	// Marshaling of parameter '___mode2' to native representation
	char* ____mode2_marshaled = NULL;
	____mode2_marshaled = il2cpp_codegen_marshal_string(___mode2);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___fileIO0, ____pathToFile1_marshaled, ____mode2_marshaled);

	// Marshaling cleanup of parameter '___pathToFile1' native representation
	il2cpp_codegen_marshal_free(____pathToFile1_marshaled);
	____pathToFile1_marshaled = NULL;

	// Marshaling cleanup of parameter '___mode2' native representation
	il2cpp_codegen_marshal_free(____mode2_marshaled);
	____mode2_marshaled = NULL;

	return returnValue;
}
// System.Void Assimp.Unmanaged.AiFileOpenProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileOpenProc__ctor_m2044FD5221D8E9A0E5F0FAE883C1A0E97BC663A5 (AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D_Multicast;
}
// System.IntPtr Assimp.Unmanaged.AiFileOpenProc::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiFileOpenProc_Invoke_mE1E187A667ABF179C70C61B98435E6B91E273F9D (AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___fileIO0, ___pathToFile1, ___mode2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileOpenProc::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileOpenProc_BeginInvoke_mE61DF8E678D861DFF2B4712C7430F7389AE27BD8 (AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, intptr_t ___fileIO0, String_t* ___pathToFile1, String_t* ___mode2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___fileIO0);
	__d_args[1] = ___pathToFile1;
	__d_args[2] = ___mode2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Assimp.Unmanaged.AiFileOpenProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiFileOpenProc_EndInvoke_mFF059D56137221D381E4D68D2731F65A4F356DEF (AiFileOpenProc_tC25B682DC953724339E2C63E80C2E474832CFAB1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_Multicast(AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* currentDelegate = reinterpret_cast<AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___fileIO0, ___file1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_Open(AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___fileIO0, ___file1, method);
}
void AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_OpenStaticInvoker(AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___fileIO0, ___file1);
}
void AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_ClosedStaticInvoker(AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___fileIO0, ___file1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0 (AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___fileIO0, ___file1);

}
// System.Void Assimp.Unmanaged.AiFileCloseProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileCloseProc__ctor_m0539DF840FB28CBE4426244F212C500B7DD3C480 (AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276_Multicast;
}
// System.Void Assimp.Unmanaged.AiFileCloseProc::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileCloseProc_Invoke_mD8F541E52B218337E47F7EE589B27EF392D3C276 (AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___fileIO0, ___file1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assimp.Unmanaged.AiFileCloseProc::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AiFileCloseProc_BeginInvoke_m15C438D8E70E41BE8CBC4EBF51E931D205C318F5 (AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, intptr_t ___fileIO0, intptr_t ___file1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___fileIO0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___file1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Assimp.Unmanaged.AiFileCloseProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiFileCloseProc_EndInvoke_mBC3546077D6B5772A8C55A5B467AE6766A2190EA (AiFileCloseProc_tD3A747EA8086F67349C20D33954FE81A264239F0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Assimp.Unmanaged.AiMeshColorArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshColorArray_get_Length_m67901F5D99482866435AAC54E7173028913018CD (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
IL2CPP_EXTERN_C  int32_t AiMeshColorArray_get_Length_m67901F5D99482866435AAC54E7173028913018CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AiMeshColorArray_get_Length_m67901F5D99482866435AAC54E7173028913018CD(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr Assimp.Unmanaged.AiMeshColorArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiMeshColorArray_get_Item_mCFC3B3025E2C75D3003D67F89313097635515659 (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		intptr_t L_1 = __this->___m_ptr0_0;
		return L_1;
	}

IL_002f:
	{
		intptr_t L_2 = __this->___m_ptr1_1;
		return L_2;
	}

IL_0036:
	{
		intptr_t L_3 = __this->___m_ptr2_2;
		return L_3;
	}

IL_003d:
	{
		intptr_t L_4 = __this->___m_ptr3_3;
		return L_4;
	}

IL_0044:
	{
		intptr_t L_5 = __this->___m_ptr4_4;
		return L_5;
	}

IL_004b:
	{
		intptr_t L_6 = __this->___m_ptr5_5;
		return L_6;
	}

IL_0052:
	{
		intptr_t L_7 = __this->___m_ptr6_6;
		return L_7;
	}

IL_0059:
	{
		intptr_t L_8 = __this->___m_ptr7_7;
		return L_8;
	}

IL_0060:
	{
		return (0);
	}
}
IL2CPP_EXTERN_C  intptr_t AiMeshColorArray_get_Item_mCFC3B3025E2C75D3003D67F89313097635515659_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = AiMeshColorArray_get_Item_mCFC3B3025E2C75D3003D67F89313097635515659(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Assimp.Unmanaged.AiMeshColorArray::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshColorArray_set_Item_m68D30BBB873610CAF72F9C9DF2175C08D4D53DD9 (AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004f;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005f;
			}
		}
	}
	{
		return;
	}

IL_0027:
	{
		intptr_t L_1 = ___value1;
		__this->___m_ptr0_0 = L_1;
		return;
	}

IL_002f:
	{
		intptr_t L_2 = ___value1;
		__this->___m_ptr1_1 = L_2;
		return;
	}

IL_0037:
	{
		intptr_t L_3 = ___value1;
		__this->___m_ptr2_2 = L_3;
		return;
	}

IL_003f:
	{
		intptr_t L_4 = ___value1;
		__this->___m_ptr3_3 = L_4;
		return;
	}

IL_0047:
	{
		intptr_t L_5 = ___value1;
		__this->___m_ptr4_4 = L_5;
		return;
	}

IL_004f:
	{
		intptr_t L_6 = ___value1;
		__this->___m_ptr5_5 = L_6;
		return;
	}

IL_0057:
	{
		intptr_t L_7 = ___value1;
		__this->___m_ptr6_6 = L_7;
		return;
	}

IL_005f:
	{
		intptr_t L_8 = ___value1;
		__this->___m_ptr7_7 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void AiMeshColorArray_set_Item_m68D30BBB873610CAF72F9C9DF2175C08D4D53DD9_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method)
{
	AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshColorArray_t91839A30396A7F7445898F71D2FA6CF9E9183D80*>(__this + _offset);
	AiMeshColorArray_set_Item_m68D30BBB873610CAF72F9C9DF2175C08D4D53DD9(_thisAdjusted, ___index0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Assimp.Unmanaged.AiMeshTextureCoordinateArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshTextureCoordinateArray_get_Length_m4DF532276C61ACC88A6C05B42AD44F514A4A6895 (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
IL2CPP_EXTERN_C  int32_t AiMeshTextureCoordinateArray_get_Length_m4DF532276C61ACC88A6C05B42AD44F514A4A6895_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AiMeshTextureCoordinateArray_get_Length_m4DF532276C61ACC88A6C05B42AD44F514A4A6895(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr Assimp.Unmanaged.AiMeshTextureCoordinateArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AiMeshTextureCoordinateArray_get_Item_mB9BEE49737461153C88016994505AE5DB8B009FB (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		intptr_t L_1 = __this->___m_ptr0_0;
		return L_1;
	}

IL_002f:
	{
		intptr_t L_2 = __this->___m_ptr1_1;
		return L_2;
	}

IL_0036:
	{
		intptr_t L_3 = __this->___m_ptr2_2;
		return L_3;
	}

IL_003d:
	{
		intptr_t L_4 = __this->___m_ptr3_3;
		return L_4;
	}

IL_0044:
	{
		intptr_t L_5 = __this->___m_ptr4_4;
		return L_5;
	}

IL_004b:
	{
		intptr_t L_6 = __this->___m_ptr5_5;
		return L_6;
	}

IL_0052:
	{
		intptr_t L_7 = __this->___m_ptr6_6;
		return L_7;
	}

IL_0059:
	{
		intptr_t L_8 = __this->___m_ptr7_7;
		return L_8;
	}

IL_0060:
	{
		return (0);
	}
}
IL2CPP_EXTERN_C  intptr_t AiMeshTextureCoordinateArray_get_Item_mB9BEE49737461153C88016994505AE5DB8B009FB_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = AiMeshTextureCoordinateArray_get_Item_mB9BEE49737461153C88016994505AE5DB8B009FB(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Assimp.Unmanaged.AiMeshTextureCoordinateArray::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshTextureCoordinateArray_set_Item_m5577690BB66108FC95766BE3C140AE88D855C1D8 (AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004f;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005f;
			}
		}
	}
	{
		return;
	}

IL_0027:
	{
		intptr_t L_1 = ___value1;
		__this->___m_ptr0_0 = L_1;
		return;
	}

IL_002f:
	{
		intptr_t L_2 = ___value1;
		__this->___m_ptr1_1 = L_2;
		return;
	}

IL_0037:
	{
		intptr_t L_3 = ___value1;
		__this->___m_ptr2_2 = L_3;
		return;
	}

IL_003f:
	{
		intptr_t L_4 = ___value1;
		__this->___m_ptr3_3 = L_4;
		return;
	}

IL_0047:
	{
		intptr_t L_5 = ___value1;
		__this->___m_ptr4_4 = L_5;
		return;
	}

IL_004f:
	{
		intptr_t L_6 = ___value1;
		__this->___m_ptr5_5 = L_6;
		return;
	}

IL_0057:
	{
		intptr_t L_7 = ___value1;
		__this->___m_ptr6_6 = L_7;
		return;
	}

IL_005f:
	{
		intptr_t L_8 = ___value1;
		__this->___m_ptr7_7 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void AiMeshTextureCoordinateArray_set_Item_m5577690BB66108FC95766BE3C140AE88D855C1D8_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, intptr_t ___value1, const RuntimeMethod* method)
{
	AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshTextureCoordinateArray_tE8CD7935727400BAD055B5A3DDD088A749B305AF*>(__this + _offset);
	AiMeshTextureCoordinateArray_set_Item_m5577690BB66108FC95766BE3C140AE88D855C1D8(_thisAdjusted, ___index0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Assimp.Unmanaged.AiMeshUVComponentArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AiMeshUVComponentArray_get_Length_mA9C717D6E43AE16FB651D71F2D4C016EF132B288 (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
IL2CPP_EXTERN_C  int32_t AiMeshUVComponentArray_get_Length_mA9C717D6E43AE16FB651D71F2D4C016EF132B288_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AiMeshUVComponentArray_get_Length_mA9C717D6E43AE16FB651D71F2D4C016EF132B288(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Assimp.Unmanaged.AiMeshUVComponentArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AiMeshUVComponentArray_get_Item_mEE9AC8432D930A43C049D235D56E1038E88903DD (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint32_t L_1 = __this->___m_uvw0_0;
		return L_1;
	}

IL_002f:
	{
		uint32_t L_2 = __this->___m_uvw1_1;
		return L_2;
	}

IL_0036:
	{
		uint32_t L_3 = __this->___m_uvw2_2;
		return L_3;
	}

IL_003d:
	{
		uint32_t L_4 = __this->___m_uvw3_3;
		return L_4;
	}

IL_0044:
	{
		uint32_t L_5 = __this->___m_uvw4_4;
		return L_5;
	}

IL_004b:
	{
		uint32_t L_6 = __this->___m_uvw5_5;
		return L_6;
	}

IL_0052:
	{
		uint32_t L_7 = __this->___m_uvw6_6;
		return L_7;
	}

IL_0059:
	{
		uint32_t L_8 = __this->___m_uvw7_7;
		return L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  uint32_t AiMeshUVComponentArray_get_Item_mEE9AC8432D930A43C049D235D56E1038E88903DD_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = AiMeshUVComponentArray_get_Item_mEE9AC8432D930A43C049D235D56E1038E88903DD(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Assimp.Unmanaged.AiMeshUVComponentArray::set_Item(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiMeshUVComponentArray_set_Item_mDD3AA5ADA43196B46A7AB40C7CC9B7194EF03835 (AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* __this, int32_t ___index0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004f;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005f;
			}
		}
	}
	{
		return;
	}

IL_0027:
	{
		uint32_t L_1 = ___value1;
		__this->___m_uvw0_0 = L_1;
		return;
	}

IL_002f:
	{
		uint32_t L_2 = ___value1;
		__this->___m_uvw1_1 = L_2;
		return;
	}

IL_0037:
	{
		uint32_t L_3 = ___value1;
		__this->___m_uvw2_2 = L_3;
		return;
	}

IL_003f:
	{
		uint32_t L_4 = ___value1;
		__this->___m_uvw3_3 = L_4;
		return;
	}

IL_0047:
	{
		uint32_t L_5 = ___value1;
		__this->___m_uvw4_4 = L_5;
		return;
	}

IL_004f:
	{
		uint32_t L_6 = ___value1;
		__this->___m_uvw5_5 = L_6;
		return;
	}

IL_0057:
	{
		uint32_t L_7 = ___value1;
		__this->___m_uvw6_6 = L_7;
		return;
	}

IL_005f:
	{
		uint32_t L_8 = ___value1;
		__this->___m_uvw7_7 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void AiMeshUVComponentArray_set_Item_mDD3AA5ADA43196B46A7AB40C7CC9B7194EF03835_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, uint32_t ___value1, const RuntimeMethod* method)
{
	AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AiMeshUVComponentArray_t08FAF72A11ED138DA88CA446EC5A5568B897C0D5*>(__this + _offset);
	AiMeshUVComponentArray_set_Item_mDD3AA5ADA43196B46A7AB40C7CC9B7194EF03835(_thisAdjusted, ___index0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Assimp.Configs.PropertyConfig::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_name_0;
		return L_0;
	}
}
// System.Void Assimp.Configs.PropertyConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947 (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___m_name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_name_0), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Configs.PropertyConfig::ApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfig_ApplyValue_m4D3CC2104840A339E5FBD87448EA78CFBC34ADAE (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___propStore0;
		VirtualActionInvoker1< intptr_t >::Invoke(5 /* System.Void Assimp.Configs.PropertyConfig::OnApplyValue(System.IntPtr) */, __this, L_0);
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
// System.Int32 Assimp.Configs.IntegerPropertyConfig::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerPropertyConfig_get_Value_mC716BC2E37FEEC74C2222117BD06AD9A3E1D747D (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_value_1;
		return L_0;
	}
}
// System.Void Assimp.Configs.IntegerPropertyConfig::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig_set_Value_mC31AF71A77EA4F9342DD2B13E1E815F5C340DB26 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Int32 Assimp.Configs.IntegerPropertyConfig::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerPropertyConfig_get_DefaultValue_m3204786CB59DB755204AEE75626FD6CECAF76CF3 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_defaultValue_2;
		return L_0;
	}
}
// System.Void Assimp.Configs.IntegerPropertyConfig::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig__ctor_m7FDF42AAEDC07D42453527612F2A5AA534858643 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
		return;
	}
}
// System.Void Assimp.Configs.IntegerPropertyConfig::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, String_t* ___name0, int32_t ___value1, int32_t ___defaultValue2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947(__this, L_0, NULL);
		int32_t L_1 = ___value1;
		__this->___m_value_1 = L_1;
		int32_t L_2 = ___defaultValue2;
		__this->___m_defaultValue_2 = L_2;
		return;
	}
}
// System.Void Assimp.Configs.IntegerPropertyConfig::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig_SetDefaultValue_mD7BE48C49CD3BA1273C34186D58034F6116D112B (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_defaultValue_2;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Void Assimp.Configs.IntegerPropertyConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerPropertyConfig_OnApplyValue_m105E4FCC4D46E5011CA7C24D8EBCCF522A9E0836 (IntegerPropertyConfig_tC2139CD9093465B69D924AC3E0E9570E3B35BDA5* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_2;
		L_2 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_3 = ___propStore0;
		String_t* L_4;
		L_4 = PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline(__this, NULL);
		int32_t L_5 = __this->___m_value_1;
		NullCheck(L_2);
		AssimpLibrary_SetImportPropertyInteger_m81C1837FFBAD3FAA8850A0DA96BF814E660821C5(L_2, L_3, L_4, L_5, NULL);
	}

IL_0024:
	{
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
// System.Single Assimp.Configs.FloatPropertyConfig::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatPropertyConfig_get_Value_m718048960C0BE4A1FD03B137A80F28BD1E767E9B (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_value_1;
		return L_0;
	}
}
// System.Void Assimp.Configs.FloatPropertyConfig::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig_set_Value_m757A919931389063756655C23781BF9289F73484 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Single Assimp.Configs.FloatPropertyConfig::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatPropertyConfig_get_DefaultValue_mE89302D8ECD70D679643742EB2EC18E38167D3C4 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_defaultValue_2;
		return L_0;
	}
}
// System.Void Assimp.Configs.FloatPropertyConfig::.ctor(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig__ctor_mEE6B904F8090EF3BF4EF28D69FDA0880E13FB7AF (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_1, (0.0f), NULL);
		return;
	}
}
// System.Void Assimp.Configs.FloatPropertyConfig::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, String_t* ___name0, float ___value1, float ___defaultValue2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947(__this, L_0, NULL);
		float L_1 = ___value1;
		__this->___m_value_1 = L_1;
		float L_2 = ___defaultValue2;
		__this->___m_defaultValue_2 = L_2;
		return;
	}
}
// System.Void Assimp.Configs.FloatPropertyConfig::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig_SetDefaultValue_m5D20868150AA211295B2DB1298311A713E16F8C2 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_defaultValue_2;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Void Assimp.Configs.FloatPropertyConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertyConfig_OnApplyValue_mD6B2F0DBC0EA9261C2A4D2025770D51E33F65D60 (FloatPropertyConfig_t0AAE106AD778CC6A3B506E802D0381A320FA351C* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_2;
		L_2 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_3 = ___propStore0;
		String_t* L_4;
		L_4 = PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline(__this, NULL);
		float L_5 = __this->___m_value_1;
		NullCheck(L_2);
		AssimpLibrary_SetImportPropertyFloat_m382B8D4274454FE3B9E6FE1F6F6AC90915F5EDEC(L_2, L_3, L_4, L_5, NULL);
	}

IL_0024:
	{
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
// Assimp.Matrix4x4 Assimp.Configs.MatrixPropertyConfig::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E MatrixPropertyConfig_get_Value_mC31D0D75F4F4C2BFE77701CB2D39AB15A786F86E (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = __this->___m_value_1;
		return L_0;
	}
}
// System.Void Assimp.Configs.MatrixPropertyConfig::set_Value(Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig_set_Value_mE02DB99CC61101D377553A5D38A2DFB5CB588EE9 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = ___value0;
		__this->___m_value_1 = L_0;
		return;
	}
}
// Assimp.Matrix4x4 Assimp.Configs.MatrixPropertyConfig::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E MatrixPropertyConfig_get_DefaultValue_mB90E9737F8593779FDCA7D4196434B67A5497CC3 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = __this->___m_defaultValue_2;
		return L_0;
	}
}
// System.Void Assimp.Configs.MatrixPropertyConfig::.ctor(System.String,Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig__ctor_mA5B7C4F4D09F67985633F5CCD3A85E2A9C892EF8 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, String_t* ___name0, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_2;
		L_2 = Matrix4x4_get_Identity_m401FEA9D21173E151AAE89372502290D6C894151_inline(NULL);
		MatrixPropertyConfig__ctor_mBD9EDF6CC0FC05E26038EE624C337EB856190ED7(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Assimp.Configs.MatrixPropertyConfig::.ctor(System.String,Assimp.Matrix4x4,Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig__ctor_mBD9EDF6CC0FC05E26038EE624C337EB856190ED7 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, String_t* ___name0, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___value1, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___defaultValue2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947(__this, L_0, NULL);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_1 = ___value1;
		__this->___m_value_1 = L_1;
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_2 = ___defaultValue2;
		__this->___m_defaultValue_2 = L_2;
		return;
	}
}
// System.Void Assimp.Configs.MatrixPropertyConfig::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig_SetDefaultValue_m65CC6856A15540368D56BC14797E45A30C982C4D (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = __this->___m_defaultValue_2;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Void Assimp.Configs.MatrixPropertyConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixPropertyConfig_OnApplyValue_m63C326CE68A394B9EDDD45317BF3B0B844E84AA8 (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_2;
		L_2 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_3 = ___propStore0;
		String_t* L_4;
		L_4 = PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline(__this, NULL);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_5 = __this->___m_value_1;
		NullCheck(L_2);
		AssimpLibrary_SetImportPropertyMatrix_m4BF5A9B4345C94BAA8EE540DA2CC6BB2378834AB(L_2, L_3, L_4, L_5, NULL);
	}

IL_0024:
	{
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
// System.Boolean Assimp.Configs.BooleanPropertyConfig::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BooleanPropertyConfig_get_Value_m141A7C37FF27DA2288F66BD34D8AE4D6B4A32116 (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_value_1;
		return L_0;
	}
}
// System.Void Assimp.Configs.BooleanPropertyConfig::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig_set_Value_mB42507488416CEE463A2CEF2F5476FB9BECC599A (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Boolean Assimp.Configs.BooleanPropertyConfig::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BooleanPropertyConfig_get_DefaultValue_m00EE65371F5A849FF52672C2143AEE9261DA3ADF (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_defaultValue_2;
		return L_0;
	}
}
// System.Void Assimp.Configs.BooleanPropertyConfig::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig__ctor_mB278E41ED60CD8FBBC1E47C2B35BF2569C9E233A (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Assimp.Configs.BooleanPropertyConfig::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828 (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, String_t* ___name0, bool ___value1, bool ___defaultValue2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947(__this, L_0, NULL);
		bool L_1 = ___value1;
		__this->___m_value_1 = L_1;
		bool L_2 = ___defaultValue2;
		__this->___m_defaultValue_2 = L_2;
		return;
	}
}
// System.Void Assimp.Configs.BooleanPropertyConfig::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig_SetDefaultValue_m5D5359033ECB75AB6C5F80CF20E99B551718B8D1 (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_defaultValue_2;
		__this->___m_value_1 = L_0;
		return;
	}
}
// System.Void Assimp.Configs.BooleanPropertyConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanPropertyConfig_OnApplyValue_mBDF86D835FFC8C08C7DB8A7C54C7A2DF40D1312E (BooleanPropertyConfig_t22B861542D58D6775903EABC384E85F15EEE8303* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		bool L_2 = __this->___m_value_1;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = G_B4_0;
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_3;
		L_3 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_4 = ___propStore0;
		String_t* L_5;
		L_5 = PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_3);
		AssimpLibrary_SetImportPropertyInteger_m81C1837FFBAD3FAA8850A0DA96BF814E660821C5(L_3, L_4, L_5, L_6, NULL);
	}

IL_002c:
	{
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
// System.String Assimp.Configs.StringPropertyConfig::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPropertyConfig_get_Value_mBB7FAE7D13D975FEC78EC03775EF99398E7578AC (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_value_1;
		return L_0;
	}
}
// System.Void Assimp.Configs.StringPropertyConfig::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig_set_Value_m178FA36106DC4A19911BFC185D1C2E0BCCAA4701 (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_value_1), (void*)L_0);
		return;
	}
}
// System.String Assimp.Configs.StringPropertyConfig::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPropertyConfig_get_DefaultValue_mC0DBB7E6F420871B4F3E0490A47ACA6E0A218EF9 (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_defaultValue_2;
		return L_0;
	}
}
// System.Void Assimp.Configs.StringPropertyConfig::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig__ctor_mF0B25892ABDF2670370D28B2B9A05615F67594EE (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Assimp.Configs.StringPropertyConfig::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, String_t* ___name0, String_t* ___value1, String_t* ___defaultValue2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		PropertyConfig__ctor_mC83680DE241A04D25E35D115613BB97346F1D947(__this, L_0, NULL);
		String_t* L_1 = ___value1;
		__this->___m_value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_value_1), (void*)L_1);
		String_t* L_2 = ___defaultValue2;
		__this->___m_defaultValue_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_defaultValue_2), (void*)L_2);
		return;
	}
}
// System.Void Assimp.Configs.StringPropertyConfig::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig_SetDefaultValue_m80489A8A283AE4AE5E43BB669832974AE83E0A37 (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_defaultValue_2;
		__this->___m_value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_value_1), (void*)L_0);
		return;
	}
}
// System.Void Assimp.Configs.StringPropertyConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPropertyConfig_OnApplyValue_m37BFCE6210D5806FAC498D34E4FE612C6D7A4CF4 (StringPropertyConfig_tA8D77B941708AEBA919EDCDB9FBDA67CCF3E3223* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_2;
		L_2 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_3 = ___propStore0;
		String_t* L_4;
		L_4 = PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline(__this, NULL);
		String_t* L_5 = __this->___m_value_1;
		NullCheck(L_2);
		AssimpLibrary_SetImportPropertyString_mDFF27C94B99544B0C1980362A0CDCAAA304F6FF6(L_2, L_3, L_4, L_5, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.String Assimp.Configs.StringPropertyConfig::ProcessNames(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPropertyConfig_ProcessNames_mC91E7E39A2E7318967BDFBA25BB8C7B5EE9EE6DF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___names0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___names0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000d:
	{
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___names0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_003a;
	}

IL_0019:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		String_t* L_9 = V_3;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (L_10)
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_11 = V_0;
		String_t* L_12 = V_3;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_14, ((int32_t)32), NULL);
	}

IL_0036:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003a:
	{
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
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
// System.String Assimp.Configs.MeasureTimeConfig::get_MeasureTimeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeasureTimeConfig_get_MeasureTimeConfigName_mF65CA70C011212EDCF1F8CA7B2EB5C4AC2DB65CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912B758EFBFB0B480C46B1C426F1E8065432A5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3912B758EFBFB0B480C46B1C426F1E8065432A5F;
	}
}
// System.Void Assimp.Configs.MeasureTimeConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureTimeConfig__ctor_m276263F0060FD19B60019517FC7ADB31EA7D76D1 (MeasureTimeConfig_tCD93FDA353A6B989B61FFBDF16A0AB1EED9FDA37* __this, bool ___measureTime0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MeasureTimeConfig_get_MeasureTimeConfigName_mF65CA70C011212EDCF1F8CA7B2EB5C4AC2DB65CA(NULL);
		bool L_1 = ___measureTime0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.MultithreadingConfig::get_MultithreadingConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultithreadingConfig_get_MultithreadingConfigName_m9FD1B6B3A43094D28AF4CB15E48AE45A9054F036 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A76384DF64D00219FFAAFEAD6E301E7B9613660);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4A76384DF64D00219FFAAFEAD6E301E7B9613660;
	}
}
// System.Void Assimp.Configs.MultithreadingConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultithreadingConfig__ctor_m4965002AADFC11EE641DE61BF3FCE1FE40956186 (MultithreadingConfig_t4F8CD4FC58C8A70A67AD527DCF02B1C8C3526F27* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MultithreadingConfig_get_MultithreadingConfigName_m9FD1B6B3A43094D28AF4CB15E48AE45A9054F036(NULL);
		int32_t L_1 = ___value0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, (-1), NULL);
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
// System.String Assimp.Configs.NoSkeletonMeshesConfig::get_NoSkeletonMeshesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoSkeletonMeshesConfig_get_NoSkeletonMeshesConfigName_m066BD5987C533D8D29CF4127E414955B118E1D59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65D684C8748CA5C39AD28927CE22EEC4F43CC1D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral65D684C8748CA5C39AD28927CE22EEC4F43CC1D0;
	}
}
// System.Void Assimp.Configs.NoSkeletonMeshesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoSkeletonMeshesConfig__ctor_m354B05B20C54248E402CC576D781BB74D4FB4F65 (NoSkeletonMeshesConfig_tF9CC55B974C90270132324C064A016DEF0B20185* __this, bool ___disableDummySkeletonMeshes0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = NoSkeletonMeshesConfig_get_NoSkeletonMeshesConfigName_m066BD5987C533D8D29CF4127E414955B118E1D59(NULL);
		bool L_1 = ___disableDummySkeletonMeshes0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.TangentSmoothingAngleConfig::get_TangentSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TangentSmoothingAngleConfig_get_TangentSmoothingAngleConfigName_m01C26D1A94CAB9E9D8B53DAEA70FB66203674B5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral020FEC3F246AC64C8893C861CFBF1755ECD79478);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral020FEC3F246AC64C8893C861CFBF1755ECD79478;
	}
}
// System.Void Assimp.Configs.TangentSmoothingAngleConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TangentSmoothingAngleConfig__ctor_mFF7FC20D53C36781CA78E6F3ECE2DABA197CFA50 (TangentSmoothingAngleConfig_t0ED728B7AE2DCD924BEDC91B934EA5B56B6161CC* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = TangentSmoothingAngleConfig_get_TangentSmoothingAngleConfigName_m01C26D1A94CAB9E9D8B53DAEA70FB66203674B5D(NULL);
		float L_1 = ___angle0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC(L_1, (175.0f), NULL);
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_2, (45.0f), NULL);
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
// System.String Assimp.Configs.NormalSmoothingAngleConfig::get_NormalSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NormalSmoothingAngleConfig_get_NormalSmoothingAngleConfigName_m7BAADA032A7FA1F3A28FF3A0095D34A16261C291 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431AB320C807E668ADBD977AA60A27586E2B9C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral431AB320C807E668ADBD977AA60A27586E2B9C89;
	}
}
// System.Void Assimp.Configs.NormalSmoothingAngleConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormalSmoothingAngleConfig__ctor_m722C1B6868E4EA1860E5F2D0C18F381C4212A890 (NormalSmoothingAngleConfig_t4FE224EAC5CB9461EE12DFF32B4D2D520FD1368B* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = NormalSmoothingAngleConfig_get_NormalSmoothingAngleConfigName_m7BAADA032A7FA1F3A28FF3A0095D34A16261C291(NULL);
		float L_1 = ___angle0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC(L_1, (175.0f), NULL);
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_2, (175.0f), NULL);
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
// System.String Assimp.Configs.MDLColorMapConfig::get_MDLColorMapConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MDLColorMapConfig_get_MDLColorMapConfigName_m04B6BC69C7E104B8FF60CBD74DA785263DB4A640 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF116E5B6CD318D04460A2C85C4D54A5E122D088C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF116E5B6CD318D04460A2C85C4D54A5E122D088C;
	}
}
// System.Void Assimp.Configs.MDLColorMapConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MDLColorMapConfig__ctor_m4E84191CEA1538FDBCD37F243099BC37A189101F (MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79F6FD98FCEE461B2E3AC376E12E7C9D65E2649);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	MDLColorMapConfig_tF9E873A31F0C9BC2E929916E069E838FAA2AB285* G_B3_2 = NULL;
	{
		String_t* L_0;
		L_0 = MDLColorMapConfig_get_MDLColorMapConfigName_m04B6BC69C7E104B8FF60CBD74DA785263DB4A640(NULL);
		String_t* L_1 = ___fileName0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ___fileName0;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteralA79F6FD98FCEE461B2E3AC376E12E7C9D65E2649;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0016:
	{
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(G_B3_2, G_B3_1, G_B3_0, _stringLiteralA79F6FD98FCEE461B2E3AC376E12E7C9D65E2649, NULL);
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
// System.String Assimp.Configs.MaterialExcludeListConfig::get_MaterialExcludeListConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MaterialExcludeListConfig_get_MaterialExcludeListConfigName_m6414255ED80720A2200CFFD9F3EDA8C03A915D26 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AF1CD66BA7238BB6CC8A2DE3F3287FBFF270B0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0AF1CD66BA7238BB6CC8A2DE3F3287FBFF270B0C;
	}
}
// System.Void Assimp.Configs.MaterialExcludeListConfig::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExcludeListConfig__ctor_mABDC064DF99BF6A7A56B17F888D286C35D2503D0 (MaterialExcludeListConfig_tA527D209D6A05B3E751545CD40D28C630B21CDA2* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___materialNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = MaterialExcludeListConfig_get_MaterialExcludeListConfigName_m6414255ED80720A2200CFFD9F3EDA8C03A915D26(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___materialNames0;
		String_t* L_2;
		L_2 = StringPropertyConfig_ProcessNames_mC91E7E39A2E7318967BDFBA25BB8C7B5EE9EE6DF(L_1, NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_2, L_3, NULL);
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
// System.String Assimp.Configs.KeepSceneHierarchyConfig::get_KeepSceneHierarchyConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeepSceneHierarchyConfig_get_KeepSceneHierarchyConfigName_mD99D6ABBD330F593B6262C778C0EF5D3191D656E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186D2EEB9709E8187F8D65D5F834099D83B75C64);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral186D2EEB9709E8187F8D65D5F834099D83B75C64;
	}
}
// System.Void Assimp.Configs.KeepSceneHierarchyConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepSceneHierarchyConfig__ctor_m688805E5531F58EFAD560A06200B8538608030E2 (KeepSceneHierarchyConfig_t00FA767541AD5522AB1F4A2C54DFC143FC76640A* __this, bool ___keepHierarchy0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = KeepSceneHierarchyConfig_get_KeepSceneHierarchyConfigName_mD99D6ABBD330F593B6262C778C0EF5D3191D656E(NULL);
		bool L_1 = ___keepHierarchy0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.NormalizeVertexComponentsConfig::get_NormalizeVertexComponentsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NormalizeVertexComponentsConfig_get_NormalizeVertexComponentsConfigName_m615789DC36CBBC2A53AE1751C84DEDE27BF41550 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92BFAB4D27CE95C93DECB4163820F9FFB72EA814);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral92BFAB4D27CE95C93DECB4163820F9FFB72EA814;
	}
}
// System.Void Assimp.Configs.NormalizeVertexComponentsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormalizeVertexComponentsConfig__ctor_mFCE4B4792D4FA62831B96F598A4511C046ACF5DB (NormalizeVertexComponentsConfig_t0E7C308FC3E7CA42E6073B797748750BF0D889BD* __this, bool ___normalizeVertexComponents0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = NormalizeVertexComponentsConfig_get_NormalizeVertexComponentsConfigName_m615789DC36CBBC2A53AE1751C84DEDE27BF41550(NULL);
		bool L_1 = ___normalizeVertexComponents0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.RemoveDegeneratePrimitivesConfig::get_RemoveDegeneratePrimitivesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveDegeneratePrimitivesConfig_get_RemoveDegeneratePrimitivesConfigName_m7808DCD1C44FB170ABDBEC6A7C58DB834318DEDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB3A00FD9F479C991E81D6FC3D4F4332FE273074);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCB3A00FD9F479C991E81D6FC3D4F4332FE273074;
	}
}
// System.Void Assimp.Configs.RemoveDegeneratePrimitivesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveDegeneratePrimitivesConfig__ctor_m03A02E569058D2BB051FA4CCF690E9B57A435B7A (RemoveDegeneratePrimitivesConfig_t3689391E195E89C3B10AA01A0F8F406ACC201ABF* __this, bool ___removeDegenerates0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RemoveDegeneratePrimitivesConfig_get_RemoveDegeneratePrimitivesConfigName_m7808DCD1C44FB170ABDBEC6A7C58DB834318DEDA(NULL);
		bool L_1 = ___removeDegenerates0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.RemoveDegeneratePrimitivesCheckAreaConfig::get_RemoveDegeneratePrimitivesCheckAreaConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveDegeneratePrimitivesCheckAreaConfig_get_RemoveDegeneratePrimitivesCheckAreaConfigName_m46D1106FEBD00C2F7B07139C020D8E43279F886D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491A5C27D93C2B3D6F1F6609E0D1EE3BFA9C3299);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral491A5C27D93C2B3D6F1F6609E0D1EE3BFA9C3299;
	}
}
// System.Void Assimp.Configs.RemoveDegeneratePrimitivesCheckAreaConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveDegeneratePrimitivesCheckAreaConfig__ctor_m5A63C5529CF9248CE51E0A597FA8B85EE1689621 (RemoveDegeneratePrimitivesCheckAreaConfig_tBC41FEDD4E87C49D65ABB72A34AD499F7A57CF0A* __this, bool ___checkArea0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RemoveDegeneratePrimitivesCheckAreaConfig_get_RemoveDegeneratePrimitivesCheckAreaConfigName_m46D1106FEBD00C2F7B07139C020D8E43279F886D(NULL);
		bool L_1 = ___checkArea0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.NodeExcludeListConfig::get_NodeExcludeListConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeExcludeListConfig_get_NodeExcludeListConfigName_m2830BE5E98F18A49373FCCCBD6B88723324078B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C045506AE7F231F2300C7DA86DF91C8D441C5EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7C045506AE7F231F2300C7DA86DF91C8D441C5EB;
	}
}
// System.Void Assimp.Configs.NodeExcludeListConfig::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeExcludeListConfig__ctor_m3BE87B093801DA4180FFB92749AA8046163224B8 (NodeExcludeListConfig_t26F38B91E9C4B62C39A6633B5CFCB685B7438594* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nodeNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = NodeExcludeListConfig_get_NodeExcludeListConfigName_m2830BE5E98F18A49373FCCCBD6B88723324078B3(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___nodeNames0;
		String_t* L_2;
		L_2 = StringPropertyConfig_ProcessNames_mC91E7E39A2E7318967BDFBA25BB8C7B5EE9EE6DF(L_1, NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_2, L_3, NULL);
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
// System.String Assimp.Configs.MeshTriangleLimitConfig::get_MeshTriangleLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshTriangleLimitConfig_get_MeshTriangleLimitConfigName_m2C5B4744CCA09383CB97ED598BFC06EB1F5CC24E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9637F5815BEA18ADBF91F42CC4FAB65C01CD487);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE9637F5815BEA18ADBF91F42CC4FAB65C01CD487;
	}
}
// System.Int32 Assimp.Configs.MeshTriangleLimitConfig::get_MeshTriangleLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshTriangleLimitConfig_get_MeshTriangleLimitConfigDefaultValue_m9E8FF55113B9622D78E9005CF1BCF3AD490DE408 (const RuntimeMethod* method) 
{
	{
		return ((int32_t)1000000);
	}
}
// System.Void Assimp.Configs.MeshTriangleLimitConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTriangleLimitConfig__ctor_m35D6B229E36B70013527BA3B0AB70C908A8F6D8E (MeshTriangleLimitConfig_tA7F2B3FD4E7442508F637A8A7C9892EA99CADCEB* __this, int32_t ___maxTriangleLimit0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MeshTriangleLimitConfig_get_MeshTriangleLimitConfigName_m2C5B4744CCA09383CB97ED598BFC06EB1F5CC24E(NULL);
		int32_t L_1 = ___maxTriangleLimit0;
		int32_t L_2;
		L_2 = MeshTriangleLimitConfig_get_MeshTriangleLimitConfigDefaultValue_m9E8FF55113B9622D78E9005CF1BCF3AD490DE408(NULL);
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, L_2, NULL);
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
// System.String Assimp.Configs.MeshVertexLimitConfig::get_MeshVertexLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshVertexLimitConfig_get_MeshVertexLimitConfigName_m7445D7081FF294CC825EF9B52B451863CA5DC159 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE59E51C2F862C475A2B9B702C51681769BE5A570);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE59E51C2F862C475A2B9B702C51681769BE5A570;
	}
}
// System.Int32 Assimp.Configs.MeshVertexLimitConfig::get_MeshVertexLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshVertexLimitConfig_get_MeshVertexLimitConfigDefaultValue_m62849E8E69E7ABBCB9FFEF5A1372B3DDC3B2BE91 (const RuntimeMethod* method) 
{
	{
		return ((int32_t)1000000);
	}
}
// System.Void Assimp.Configs.MeshVertexLimitConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshVertexLimitConfig__ctor_m669EA0540827EA6EA7A3CEBA9A9A06A98E406291 (MeshVertexLimitConfig_tD016B96D9D07327CCDF6D3378CD859782DFB022C* __this, int32_t ___maxVertexLimit0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MeshVertexLimitConfig_get_MeshVertexLimitConfigName_m7445D7081FF294CC825EF9B52B451863CA5DC159(NULL);
		int32_t L_1 = ___maxVertexLimit0;
		int32_t L_2;
		L_2 = MeshVertexLimitConfig_get_MeshVertexLimitConfigDefaultValue_m62849E8E69E7ABBCB9FFEF5A1372B3DDC3B2BE91(NULL);
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, L_2, NULL);
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
// System.String Assimp.Configs.VertexBoneWeightLimitConfig::get_VertexBoneWeightLimitConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigName_m5AD08238121854C653DED2DE2C66ABAF7810E13E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803866517AC73D4D8E9D827A24357DBBFB659B8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral803866517AC73D4D8E9D827A24357DBBFB659B8D;
	}
}
// System.Int32 Assimp.Configs.VertexBoneWeightLimitConfig::get_VertexBoneWeightLimitConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigDefaultValue_m66117557C240EF79B89F58AAA81D89625675CE1F (const RuntimeMethod* method) 
{
	{
		return 4;
	}
}
// System.Void Assimp.Configs.VertexBoneWeightLimitConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBoneWeightLimitConfig__ctor_mAD86F1BEE1680F9B0538FCA73A5F8BD9402E9AAD (VertexBoneWeightLimitConfig_t462FCC7A0166216F7D63440FDD0D1A3B3F7662B0* __this, int32_t ___maxBoneWeights0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigName_m5AD08238121854C653DED2DE2C66ABAF7810E13E(NULL);
		int32_t L_1 = ___maxBoneWeights0;
		int32_t L_2;
		L_2 = VertexBoneWeightLimitConfig_get_VertexBoneWeightLimitConfigDefaultValue_m66117557C240EF79B89F58AAA81D89625675CE1F(NULL);
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, L_2, NULL);
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
// System.String Assimp.Configs.VertexCacheSizeConfig::get_VertexCacheSizeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexCacheSizeConfig_get_VertexCacheSizeConfigName_mF912A9F06FE50660FAC20F1ED49B6FDF8E4004C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1FB53AA172062FBCCD526A03D1E312C3B9BBA82);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF1FB53AA172062FBCCD526A03D1E312C3B9BBA82;
	}
}
// System.Int32 Assimp.Configs.VertexCacheSizeConfig::get_VertexCacheSizeConfigDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexCacheSizeConfig_get_VertexCacheSizeConfigDefaultValue_mEF96E320B65E3F84771BDD5292E857BEFD6628FB (const RuntimeMethod* method) 
{
	{
		return ((int32_t)12);
	}
}
// System.Void Assimp.Configs.VertexCacheSizeConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexCacheSizeConfig__ctor_mEA393E37B72C43CB5B25088A1CE4BE5A2FB0D937 (VertexCacheSizeConfig_t43287D1386A4C30AE8D04E884264ACC74BF0C23B* __this, int32_t ___vertexCacheSize0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VertexCacheSizeConfig_get_VertexCacheSizeConfigName_mF912A9F06FE50660FAC20F1ED49B6FDF8E4004C0(NULL);
		int32_t L_1 = ___vertexCacheSize0;
		int32_t L_2;
		L_2 = VertexCacheSizeConfig_get_VertexCacheSizeConfigDefaultValue_mEF96E320B65E3F84771BDD5292E857BEFD6628FB(NULL);
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, L_2, NULL);
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
// System.String Assimp.Configs.RemoveComponentConfig::get_RemoveComponentConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoveComponentConfig_get_RemoveComponentConfigName_m0040C24ADCA039CB69F8BAE76223B1441B6519AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F085393E37599D9DE87B716299A4E9448BD2516);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7F085393E37599D9DE87B716299A4E9448BD2516;
	}
}
// System.Void Assimp.Configs.RemoveComponentConfig::.ctor(Assimp.ExcludeComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveComponentConfig__ctor_mF4FC7965DD877816060A0A373E21493ABF4BE1D2 (RemoveComponentConfig_t294CCB5CA33733CE7BB28AE6130B8544BA239E5A* __this, int32_t ___componentsToExclude0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RemoveComponentConfig_get_RemoveComponentConfigName_m0040C24ADCA039CB69F8BAE76223B1441B6519AC(NULL);
		int32_t L_1 = ___componentsToExclude0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.SortByPrimitiveTypeConfig::get_SortByPrimitiveTypeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SortByPrimitiveTypeConfig_get_SortByPrimitiveTypeConfigName_m5C961E3DA20DA3DB6CFBB19C2196E54E00023B22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0D59168A814C204C5FC454CD41AAE6BD09AC036);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA0D59168A814C204C5FC454CD41AAE6BD09AC036;
	}
}
// System.Void Assimp.Configs.SortByPrimitiveTypeConfig::.ctor(Assimp.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortByPrimitiveTypeConfig__ctor_m47D3134F486238CCF9B437D7B38DC42475946427 (SortByPrimitiveTypeConfig_tF6D42A060349A92D98F40BC46BD0D7166CCB0D1C* __this, int32_t ___typesToRemove0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SortByPrimitiveTypeConfig_get_SortByPrimitiveTypeConfigName_m5C961E3DA20DA3DB6CFBB19C2196E54E00023B22(NULL);
		int32_t L_1 = ___typesToRemove0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.AnimationAccuracyConfig::get_AnimationAccuracyConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationAccuracyConfig_get_AnimationAccuracyConfigName_m07F6E78FDA8BB8B7B0596DADFDC5340D17F25287 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC533574B651B54609D44077E9E17D277C96A94E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralFC533574B651B54609D44077E9E17D277C96A94E;
	}
}
// System.Void Assimp.Configs.AnimationAccuracyConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationAccuracyConfig__ctor_m5ACF5D0C225D3DBA59CC31AF8CDBC86DAB84800A (AnimationAccuracyConfig_t95F0F2C28E56BFFAD1617EF266F4AC39FC01F813* __this, float ___episilon0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = AnimationAccuracyConfig_get_AnimationAccuracyConfigName_m07F6E78FDA8BB8B7B0596DADFDC5340D17F25287(NULL);
		float L_1 = ___episilon0;
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_1, (0.0f), NULL);
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
// System.String Assimp.Configs.TransformUVConfig::get_TransformUVConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformUVConfig_get_TransformUVConfigName_m337E567C486D23CC3106803AA93414B7C65DA525 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A498DF9B367A8EC3FE92A447F4F0C54C3BD4AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF3A498DF9B367A8EC3FE92A447F4F0C54C3BD4AA;
	}
}
// System.Void Assimp.Configs.TransformUVConfig::.ctor(Assimp.UVTransformFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUVConfig__ctor_m8FBB3F8D677F1492EE7D9177D7D12FD39B079F93 (TransformUVConfig_tC2E379341C92BD3209F6EF90F4BDA5F1E89271A9* __this, int32_t ___transformFlags0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TransformUVConfig_get_TransformUVConfigName_m337E567C486D23CC3106803AA93414B7C65DA525(NULL);
		int32_t L_1 = ___transformFlags0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 7, NULL);
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
// System.String Assimp.Configs.FavorSpeedConfig::get_FavorSpeedConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FavorSpeedConfig_get_FavorSpeedConfigName_mC5A29B893EFBA94BE3D819381431C06B3F6A824D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD38C5BC7D1AB8685886D74635924E3C1FC433F6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD38C5BC7D1AB8685886D74635924E3C1FC433F6C;
	}
}
// System.Void Assimp.Configs.FavorSpeedConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FavorSpeedConfig__ctor_m2ABAC626FB901AB323174EF966A56FD2A48134A9 (FavorSpeedConfig_t17E4872CE1E8E400D5FE9B68BA9CC65D729751C5* __this, bool ___favorSpeed0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FavorSpeedConfig_get_FavorSpeedConfigName_mC5A29B893EFBA94BE3D819381431C06B3F6A824D(NULL);
		bool L_1 = ___favorSpeed0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.MaxBoneCountConfig::get_MaxBoneCountConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MaxBoneCountConfig_get_MaxBoneCountConfigName_mB8C5E4AAA8C4AC5E802B353DE69C14F7D43B06D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9D4461749064F98B7E7F1633C9F95B4FCDF51DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD9D4461749064F98B7E7F1633C9F95B4FCDF51DA;
	}
}
// System.Void Assimp.Configs.MaxBoneCountConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxBoneCountConfig__ctor_mE69D317EC6EBA60BF61BDECCA93395BF6D64B3CC (MaxBoneCountConfig_t043E83CAE39BE13A6CE320DEC8422403E36F6E9C* __this, int32_t ___maxBones0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MaxBoneCountConfig_get_MaxBoneCountConfigName_mB8C5E4AAA8C4AC5E802B353DE69C14F7D43B06D3(NULL);
		int32_t L_1 = ___maxBones0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, ((int32_t)60), NULL);
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
// System.String Assimp.Configs.TangentTextureChannelIndexConfig::get_TangentTextureChannelIndexConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TangentTextureChannelIndexConfig_get_TangentTextureChannelIndexConfigName_m0293EE904FEFCCEFE0054C984359D5BE2870F7EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89184934DE378DF8F27CB987E26B338717ED9666);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral89184934DE378DF8F27CB987E26B338717ED9666;
	}
}
// System.Void Assimp.Configs.TangentTextureChannelIndexConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TangentTextureChannelIndexConfig__ctor_m4F623BE04D66DD801BBD2996413430E0C8EF9581 (TangentTextureChannelIndexConfig_t3FDC69D84ECE03CF7A63DF434BC57842A4B15B11* __this, int32_t ___textureChannelIndex0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TangentTextureChannelIndexConfig_get_TangentTextureChannelIndexConfigName_m0293EE904FEFCCEFE0054C984359D5BE2870F7EA(NULL);
		int32_t L_1 = ___textureChannelIndex0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.DeboneThresholdConfig::get_DeboneThresholdConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeboneThresholdConfig_get_DeboneThresholdConfigName_mFB370D8DBCBBAA4B99563FF1622340C5A27392D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29C08D11553F73580DECFBA5D2D368F8AD6FC20D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral29C08D11553F73580DECFBA5D2D368F8AD6FC20D;
	}
}
// System.Void Assimp.Configs.DeboneThresholdConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeboneThresholdConfig__ctor_mDDB460584A331FEE5870DBCFD7A50318CE1E9087 (DeboneThresholdConfig_tD954AD1CE739E9B9F20EB98A909B492F416305A8* __this, float ___threshold0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DeboneThresholdConfig_get_DeboneThresholdConfigName_mFB370D8DBCBBAA4B99563FF1622340C5A27392D8(NULL);
		float L_1 = ___threshold0;
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_1, (1.0f), NULL);
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
// System.String Assimp.Configs.DeboneAllOrNoneConfig::get_DeboneAllOrNoneConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeboneAllOrNoneConfig_get_DeboneAllOrNoneConfigName_mEEE214470DC66BA7A39C0D8F1BE4A7C6845130DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16880C11DB57C2683658B57E128C0FF128CE111);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE16880C11DB57C2683658B57E128C0FF128CE111;
	}
}
// System.Void Assimp.Configs.DeboneAllOrNoneConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeboneAllOrNoneConfig__ctor_mB43409C3366CEA01370276212523B78AE45EE587 (DeboneAllOrNoneConfig_t125CBB4E3BC13C6D2E42608DCBF9A4F38B7275A8* __this, bool ___allOrNone0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DeboneAllOrNoneConfig_get_DeboneAllOrNoneConfigName_mEEE214470DC66BA7A39C0D8F1BE4A7C6845130DF(NULL);
		bool L_1 = ___allOrNone0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.RootTransformationConfig::get_RootTransformationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RootTransformationConfig_get_RootTransformationConfigName_m15EC60C722474681B12572079A5585CED0141B7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6E3E5F87C6116DBB5D5199AE48312CD0FB5D7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA6E3E5F87C6116DBB5D5199AE48312CD0FB5D7EA;
	}
}
// System.Void Assimp.Configs.RootTransformationConfig::.ctor(Assimp.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootTransformationConfig__ctor_m359FE119EAE53A923202215345CFEFEF21BEA341 (RootTransformationConfig_t7F50E5EB5A6DDF2217FE184DEE4CFC4E8384D2FE* __this, Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E ___rootTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RootTransformationConfig_get_RootTransformationConfigName_m15EC60C722474681B12572079A5585CED0141B7B(NULL);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_1 = ___rootTransform0;
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_2;
		L_2 = Matrix4x4_get_Identity_m401FEA9D21173E151AAE89372502290D6C894151_inline(NULL);
		MatrixPropertyConfig__ctor_mBD9EDF6CC0FC05E26038EE624C337EB856190ED7(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Assimp.Configs.RootTransformationConfig::OnApplyValue(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootTransformationConfig_OnApplyValue_mD04146270D3989BA45C30F2E11A4CBBBB051DCAA (RootTransformationConfig_t7F50E5EB5A6DDF2217FE184DEE4CFC4E8384D2FE* __this, intptr_t ___propStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7825458F1D760CD96A958018679590897805DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___propStore0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778_il2cpp_TypeInfo_var);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_2;
		L_2 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_3 = ___propStore0;
		NullCheck(L_2);
		AssimpLibrary_SetImportPropertyInteger_m81C1837FFBAD3FAA8850A0DA96BF814E660821C5(L_2, L_3, _stringLiteralEA7825458F1D760CD96A958018679590897805DF, 1, NULL);
		AssimpLibrary_t10457C4164E694838B207B058F868697D7B8A778* L_4;
		L_4 = AssimpLibrary_get_Instance_m9CEB0D1DC55A116D3A16E34F871E88F652992F5D(NULL);
		intptr_t L_5 = ___propStore0;
		String_t* L_6;
		L_6 = RootTransformationConfig_get_RootTransformationConfigName_m15EC60C722474681B12572079A5585CED0141B7B(NULL);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_7;
		L_7 = MatrixPropertyConfig_get_Value_mC31D0D75F4F4C2BFE77701CB2D39AB15A786F86E_inline(__this, NULL);
		NullCheck(L_4);
		AssimpLibrary_SetImportPropertyMatrix_m4BF5A9B4345C94BAA8EE540DA2CC6BB2378834AB(L_4, L_5, L_6, L_7, NULL);
	}

IL_0034:
	{
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
// System.String Assimp.Configs.GlobalScaleConfig::get_GlobalScaleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalScaleConfig_get_GlobalScaleConfigName_m9B7663E21BCB22AABE0B936DCF351709A0B7D7F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4051BD42005B95FD5931B0C9F575A73E06D40778);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4051BD42005B95FD5931B0C9F575A73E06D40778;
	}
}
// System.Void Assimp.Configs.GlobalScaleConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScaleConfig__ctor_mDAD2B6DA6010916B8BEAF749E4716CB8679F58AA (GlobalScaleConfig_t5F0A39EFE7266C6D1AECB8B3A609243F7EC45D06* __this, float ___globalScale0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = GlobalScaleConfig_get_GlobalScaleConfigName_m9B7663E21BCB22AABE0B936DCF351709A0B7D7F7(NULL);
		float L_1 = ___globalScale0;
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_1, (1.0f), NULL);
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
// System.String Assimp.Configs.GlobalKeyFrameImportConfig::get_GlobalKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GlobalKeyFrameImportConfig_get_GlobalKeyFrameImportConfigName_m571375440109801731F988EFC517E80D98CCE9B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral932A63B146076A6244C706714DEE28D849CFD561);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral932A63B146076A6244C706714DEE28D849CFD561;
	}
}
// System.Void Assimp.Configs.GlobalKeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalKeyFrameImportConfig__ctor_m472060C73CC7F265C80E84A387856AB7E24AF114 (GlobalKeyFrameImportConfig_tA2DF717F5C7685999CC3B78471CA548AAB04BB40* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = GlobalKeyFrameImportConfig_get_GlobalKeyFrameImportConfigName_m571375440109801731F988EFC517E80D98CCE9B7(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.MD3KeyFrameImportConfig::get_MD3KeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3KeyFrameImportConfig_get_MD3KeyFrameImportConfigName_m65DC42A5C1AA73DAC0C15BE6F6A124055F0430F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D1F3816359EC15F8A5AA25807448A362356074);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF6D1F3816359EC15F8A5AA25807448A362356074;
	}
}
// System.Void Assimp.Configs.MD3KeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD3KeyFrameImportConfig__ctor_m5FE3A3A5D19BA4C9C77C0EF26B97347C57089966 (MD3KeyFrameImportConfig_t80E5AFE5284C86855AD2365EC812CF9997432A82* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MD3KeyFrameImportConfig_get_MD3KeyFrameImportConfigName_m65DC42A5C1AA73DAC0C15BE6F6A124055F0430F7(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.MD2KeyFrameImportConfig::get_MD2KeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD2KeyFrameImportConfig_get_MD2KeyFrameImportConfigName_m7DE018A8FC1587CAC8904233CE270C445846DD2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D1F3816359EC15F8A5AA25807448A362356074);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF6D1F3816359EC15F8A5AA25807448A362356074;
	}
}
// System.Void Assimp.Configs.MD2KeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2KeyFrameImportConfig__ctor_mEBCF24650DFC0E7BD9AC599867FA4F5BF8161D47 (MD2KeyFrameImportConfig_tA5FE53D43475F744FC33C9B6B30CF9E1855BDCA4* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MD2KeyFrameImportConfig_get_MD2KeyFrameImportConfigName_m7DE018A8FC1587CAC8904233CE270C445846DD2E(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.MDLKeyFrameImportConfig::get_MDLKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MDLKeyFrameImportConfig_get_MDLKeyFrameImportConfigName_mCEEB28FF47CB7AFEBF22B7B15F337CE7DD2C2984 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral005157E3275F5BA407CA0F848223F02AA1C1DABB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral005157E3275F5BA407CA0F848223F02AA1C1DABB;
	}
}
// System.Void Assimp.Configs.MDLKeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MDLKeyFrameImportConfig__ctor_m2E9F7F691B97CC12569990E654ECC9CBCA08BF05 (MDLKeyFrameImportConfig_t8CE9C5985603300100208ACCC3BCC8227F103BCD* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MDLKeyFrameImportConfig_get_MDLKeyFrameImportConfigName_mCEEB28FF47CB7AFEBF22B7B15F337CE7DD2C2984(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.SMDKeyFrameImportConfig::get_SMDKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SMDKeyFrameImportConfig_get_SMDKeyFrameImportConfigName_mA130D1385C9BEDCE912AF9FAC9745AAD5DFC7684 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F01F6450A9A22F2F6F6C31BB1EAB46C99A2FACC);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral9F01F6450A9A22F2F6F6C31BB1EAB46C99A2FACC;
	}
}
// System.Void Assimp.Configs.SMDKeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMDKeyFrameImportConfig__ctor_m543213645A3CEE48D629C8AB5404CD9CC6212768 (SMDKeyFrameImportConfig_t60DD41B67F59A726DC7AB009518CA4A36A152BFB* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SMDKeyFrameImportConfig_get_SMDKeyFrameImportConfigName_mA130D1385C9BEDCE912AF9FAC9745AAD5DFC7684(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.UnrealKeyFrameImportConfig::get_UnrealKeyFrameImportConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnrealKeyFrameImportConfig_get_UnrealKeyFrameImportConfigName_mAFD54682ED778503B889C69249430459F4C62F4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF8DAB08B775BAA3835F16057F1BFF54C75B2DBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCF8DAB08B775BAA3835F16057F1BFF54C75B2DBF;
	}
}
// System.Void Assimp.Configs.UnrealKeyFrameImportConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnrealKeyFrameImportConfig__ctor_mADC3C0AE8AD7DF51D8135F4240B93A1C17DC0F46 (UnrealKeyFrameImportConfig_t986091639E2D388AAA85AD4B86C6E26FBAD03154* __this, int32_t ___keyFrame0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = UnrealKeyFrameImportConfig_get_UnrealKeyFrameImportConfigName_mAFD54682ED778503B889C69249430459F4C62F4C(NULL);
		int32_t L_1 = ___keyFrame0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, 0, NULL);
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
// System.String Assimp.Configs.ACSeparateBackfaceCullConfig::get_ACSeparateBackfaceCullConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ACSeparateBackfaceCullConfig_get_ACSeparateBackfaceCullConfigName_m08FA48FF431F7503756E328125F2126F97C58B63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD0B996F2F281F405BF3624AB7D71D4FBA20F3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralAFD0B996F2F281F405BF3624AB7D71D4FBA20F3C;
	}
}
// System.Void Assimp.Configs.ACSeparateBackfaceCullConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ACSeparateBackfaceCullConfig__ctor_m9CDDCC5AEAFFDF427AC48DF6BC90BACC163F5A54 (ACSeparateBackfaceCullConfig_t2E9199D0240F4E3CFF2F05A3E801A70FDAF5FAE1* __this, bool ___separateBackfaces0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = ACSeparateBackfaceCullConfig_get_ACSeparateBackfaceCullConfigName_m08FA48FF431F7503756E328125F2126F97C58B63(NULL);
		bool L_1 = ___separateBackfaces0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.ACEvaluateSubdivisionConfig::get_ACEvaluateSubdivisionConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ACEvaluateSubdivisionConfig_get_ACEvaluateSubdivisionConfigName_mCF68A0E6A70FE92843D23FDCEFF65F1EA2C16CF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2819E0048EB7E46BAED38E68B06AC034E216E02);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE2819E0048EB7E46BAED38E68B06AC034E216E02;
	}
}
// System.Void Assimp.Configs.ACEvaluateSubdivisionConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ACEvaluateSubdivisionConfig__ctor_mE4877FBD7AA1E0C6319FE44B32EB204ABDC5115C (ACEvaluateSubdivisionConfig_t4E313B45BC5CF57D84968E5E216C9AFC643E9DAA* __this, bool ___evaluateSubdivision0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = ACEvaluateSubdivisionConfig_get_ACEvaluateSubdivisionConfigName_mCF68A0E6A70FE92843D23FDCEFF65F1EA2C16CF1(NULL);
		bool L_1 = ___evaluateSubdivision0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.UnrealHandleFlagsConfig::get_UnrealHandleFlagsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnrealHandleFlagsConfig_get_UnrealHandleFlagsConfigName_m6E03F7221AA80F0B41A5E67DEF20E00DFAD74E32 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF8CCB341FEBB2CDDCAAC2EF8202E0BB8296E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralFBAF8CCB341FEBB2CDDCAAC2EF8202E0BB8296E3;
	}
}
// System.Void Assimp.Configs.UnrealHandleFlagsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnrealHandleFlagsConfig__ctor_m3544F45D5A508ADCC919193524A07B69A4B63BD6 (UnrealHandleFlagsConfig_tAEF1572EC9C0C95B7E5D925D15A4B3A5436D9AE9* __this, bool ___handleFlags0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = UnrealHandleFlagsConfig_get_UnrealHandleFlagsConfigName_m6E03F7221AA80F0B41A5E67DEF20E00DFAD74E32(NULL);
		bool L_1 = ___handleFlags0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.TerragenComputeTexCoordsConfig::get_TerragenComputeTexCoordsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerragenComputeTexCoordsConfig_get_TerragenComputeTexCoordsConfigName_m408AE959F98076114AA68797B2289213111C6DD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178DC02F4C47EA5521BD091C5F94E36A8B17273C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral178DC02F4C47EA5521BD091C5F94E36A8B17273C;
	}
}
// System.Void Assimp.Configs.TerragenComputeTexCoordsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerragenComputeTexCoordsConfig__ctor_m7BBA8060144ACCCB03985C49AF2214A250198380 (TerragenComputeTexCoordsConfig_t31BA11AF7C84FFC4FA4860237BDC90F364F3D5B6* __this, bool ___computeTexCoords0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TerragenComputeTexCoordsConfig_get_TerragenComputeTexCoordsConfigName_m408AE959F98076114AA68797B2289213111C6DD3(NULL);
		bool L_1 = ___computeTexCoords0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.ASEReconstructNormalsConfig::get_ASEReconstructNormalsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASEReconstructNormalsConfig_get_ASEReconstructNormalsConfigName_mB0464BF000A1BAEE6331AE868DEE9EFA0EA0C23F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DCCCCEFBBC75A18985E14A839FCC140B048040);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE4DCCCCEFBBC75A18985E14A839FCC140B048040;
	}
}
// System.Void Assimp.Configs.ASEReconstructNormalsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASEReconstructNormalsConfig__ctor_mAF369A6D1AEDAC3E18AAE5559C6F2D6B57227930 (ASEReconstructNormalsConfig_t31CBE16A9B0B5C466282758D1E2140744048D20D* __this, bool ___reconstructNormals0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = ASEReconstructNormalsConfig_get_ASEReconstructNormalsConfigName_mB0464BF000A1BAEE6331AE868DEE9EFA0EA0C23F(NULL);
		bool L_1 = ___reconstructNormals0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.MD3HandleMultiPartConfig::get_MD3HandleMultiPartConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3HandleMultiPartConfig_get_MD3HandleMultiPartConfigName_mA15C6E819D3955973B6AD7C6CFDE9087820AB544 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929581C7EFFC2D5F5827E1AC5480A196FEF117F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral929581C7EFFC2D5F5827E1AC5480A196FEF117F9;
	}
}
// System.Void Assimp.Configs.MD3HandleMultiPartConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD3HandleMultiPartConfig__ctor_mA9908B462827404FD08BC53E8BA8957E2B6D5E98 (MD3HandleMultiPartConfig_tEB43874AC6790669237890EDC67CCD70A459B588* __this, bool ___handleMultiParts0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MD3HandleMultiPartConfig_get_MD3HandleMultiPartConfigName_mA15C6E819D3955973B6AD7C6CFDE9087820AB544(NULL);
		bool L_1 = ___handleMultiParts0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.MD3SkinNameConfig::get_MD3SkinNameConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3SkinNameConfig_get_MD3SkinNameConfigName_m1EC57A54A30AA2DDDE95E77BB5759D024AF184E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EEB4B6A9CFE7E31657EEC40881E4434E51CD725);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4EEB4B6A9CFE7E31657EEC40881E4434E51CD725;
	}
}
// System.Void Assimp.Configs.MD3SkinNameConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD3SkinNameConfig__ctor_mA63D631EC05F5C92ED54B87F714BE03F7FDD8B4B (MD3SkinNameConfig_t599AB7BA36641B6FBF7C776E9E00F362AF8D4406* __this, String_t* ___skinName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = MD3SkinNameConfig_get_MD3SkinNameConfigName_m1EC57A54A30AA2DDDE95E77BB5759D024AF184E9(NULL);
		String_t* L_1 = ___skinName0;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_1, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, NULL);
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
// System.String Assimp.Configs.MD3ShaderSourceConfig::get_MD3ShaderSourceConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD3ShaderSourceConfig_get_MD3ShaderSourceConfigName_m709DD72309A9DC10FF18B000E6F13840EBA6D408 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral847DA1757A63F227219FC36129F4E28F5DE27725);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral847DA1757A63F227219FC36129F4E28F5DE27725;
	}
}
// System.Void Assimp.Configs.MD3ShaderSourceConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD3ShaderSourceConfig__ctor_m425444A22AD4B1EF821577459F94C3919C3982DD (MD3ShaderSourceConfig_t89AA3EEB4F4A7EC9343DA9F060707AE87934ED1A* __this, String_t* ___shaderFile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = MD3ShaderSourceConfig_get_MD3ShaderSourceConfigName_m709DD72309A9DC10FF18B000E6F13840EBA6D408(NULL);
		String_t* L_1 = ___shaderFile0;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_1, L_2, NULL);
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
// System.String Assimp.Configs.LWOImportOneLayerConfig::get_LWOImportOneLayerConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWOImportOneLayerConfig_get_LWOImportOneLayerConfigName_mF6E2CD23F011A7834FE03CD3FDCBF5287E85E200 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7EBD735BE65E9535055D10F098AEC5FB6CB0541);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralB7EBD735BE65E9535055D10F098AEC5FB6CB0541;
	}
}
// System.Void Assimp.Configs.LWOImportOneLayerConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LWOImportOneLayerConfig__ctor_m2A42A6D8B2855EE6B7D17866048FE59FEC0E7231 (LWOImportOneLayerConfig_t099329519D3A3EC101EC00F251B517E2F9129F39* __this, bool ___importOneLayerOnly0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = LWOImportOneLayerConfig_get_LWOImportOneLayerConfigName_mF6E2CD23F011A7834FE03CD3FDCBF5287E85E200(NULL);
		bool L_1 = ___importOneLayerOnly0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.MD5NoAnimationAutoLoadConfig::get_MD5NoAnimationAutoLoadConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5NoAnimationAutoLoadConfig_get_MD5NoAnimationAutoLoadConfigName_m3C560DE424C4A6B5E6141A3D851F4C52D9107C58 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB149D59C102433972B782A7BC10F5B98538E4F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDB149D59C102433972B782A7BC10F5B98538E4F0;
	}
}
// System.Void Assimp.Configs.MD5NoAnimationAutoLoadConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5NoAnimationAutoLoadConfig__ctor_mD03A2A13C4AFE4710ACB66C35F09158B60FDE644 (MD5NoAnimationAutoLoadConfig_t965A0482BCCE200137F1FE0841DC04360DF5C1FE* __this, bool ___noAutoLoadAnim0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MD5NoAnimationAutoLoadConfig_get_MD5NoAnimationAutoLoadConfigName_m3C560DE424C4A6B5E6141A3D851F4C52D9107C58(NULL);
		bool L_1 = ___noAutoLoadAnim0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.LWSAnimationStartConfig::get_LWSAnimationStartConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWSAnimationStartConfig_get_LWSAnimationStartConfigName_mBCF65A6CCF83D1BDED3DE2AB6016F37EB18D7864 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983BC27A8BF777620A002766DCB92E7E89500917);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral983BC27A8BF777620A002766DCB92E7E89500917;
	}
}
// System.Void Assimp.Configs.LWSAnimationStartConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LWSAnimationStartConfig__ctor_m1C19E97C61720ABCE057E029D16DEDFA7A47B0D4 (LWSAnimationStartConfig_tEEF195CCB32B6BCC7CA7BC114D79047B0A45C8A5* __this, int32_t ___animStart0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = LWSAnimationStartConfig_get_LWSAnimationStartConfigName_mBCF65A6CCF83D1BDED3DE2AB6016F37EB18D7864(NULL);
		int32_t L_1 = ___animStart0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, (-1), NULL);
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
// System.String Assimp.Configs.LWSAnimationEndConfig::get_LWSAnimationEndConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LWSAnimationEndConfig_get_LWSAnimationEndConfigName_mA76FE1E6E4008D5E1D41CD24230058278C77A140 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral390496DE533E13A5E24DF8B4773BAD182260BA98);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral390496DE533E13A5E24DF8B4773BAD182260BA98;
	}
}
// System.Void Assimp.Configs.LWSAnimationEndConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LWSAnimationEndConfig__ctor_m60644147E774038953EEC4793098B399FB68D977 (LWSAnimationEndConfig_tFE7B74B5A9C46721073340E31CAC7C09F6BEF5BF* __this, int32_t ___animEnd0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = LWSAnimationEndConfig_get_LWSAnimationEndConfigName_mA76FE1E6E4008D5E1D41CD24230058278C77A140(NULL);
		int32_t L_1 = ___animEnd0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, (-1), NULL);
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
// System.String Assimp.Configs.IRRAnimationFrameRateConfig::get_IRRAnimationFrameRateConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRRAnimationFrameRateConfig_get_IRRAnimationFrameRateConfigName_m4B4F3737EA8E11F296E264620E7D98162A140639 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EAD69A501E8C3C456989BC830A3B203AC3128D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA4EAD69A501E8C3C456989BC830A3B203AC3128D;
	}
}
// System.Void Assimp.Configs.IRRAnimationFrameRateConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRRAnimationFrameRateConfig__ctor_m26E8E1D882644C49E67FAE8D65B738BE6E308D26 (IRRAnimationFrameRateConfig_t2D4BC7DBEC07ACADC360A4E9BCCA8B503A96B154* __this, int32_t ___frameRate0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IRRAnimationFrameRateConfig_get_IRRAnimationFrameRateConfigName_m4B4F3737EA8E11F296E264620E7D98162A140639(NULL);
		int32_t L_1 = ___frameRate0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, ((int32_t)100), NULL);
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
// System.String Assimp.Configs.OgreMaterialFileConfig::get_OgreMaterialFileConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OgreMaterialFileConfig_get_OgreMaterialFileConfigName_m3F29E85AF2B740B6936AFA18E3D9A931E467BCAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACE26EF1313662B3BC65A2DD9B88DF5B6831B99);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBACE26EF1313662B3BC65A2DD9B88DF5B6831B99;
	}
}
// System.Void Assimp.Configs.OgreMaterialFileConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreMaterialFileConfig__ctor_m51BC616EA17B8149506437BDAF3D3E9C7C4FEFF1 (OgreMaterialFileConfig_t6349FB3455B4E77FA979A6BA6082C67703A840DB* __this, String_t* ___materialFileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822113580537A0DE87EA26210856E557C38F945B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = OgreMaterialFileConfig_get_OgreMaterialFileConfigName_m3F29E85AF2B740B6936AFA18E3D9A931E467BCAD(NULL);
		String_t* L_1 = ___materialFileName0;
		StringPropertyConfig__ctor_mE5983A70BFA329AB7B4FB4B4FFF212965BCBE6FC(__this, L_0, L_1, _stringLiteral822113580537A0DE87EA26210856E557C38F945B, NULL);
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
// System.String Assimp.Configs.OgreTextureTypeFromFilenameConfig::get_OgreTextureTypeFromFilenameConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OgreTextureTypeFromFilenameConfig_get_OgreTextureTypeFromFilenameConfigName_mD1988261EE12743421C48BD677D44F580903D2E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94EDFC39FAABD7248586EC1C3BE676C1EC7C8DCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral94EDFC39FAABD7248586EC1C3BE676C1EC7C8DCF;
	}
}
// System.Void Assimp.Configs.OgreTextureTypeFromFilenameConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreTextureTypeFromFilenameConfig__ctor_m9C15B2FC70DC616B39FE31E065DC41C380634355 (OgreTextureTypeFromFilenameConfig_t77FCBFD65818A42E6FAA1150682EEC81485D9262* __this, bool ___fileNameDefinesTextureUsage0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = OgreTextureTypeFromFilenameConfig_get_OgreTextureTypeFromFilenameConfigName_mD1988261EE12743421C48BD677D44F580903D2E1(NULL);
		bool L_1 = ___fileNameDefinesTextureUsage0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.IFCSkipSpaceRepresentationsConfig::get_IFCSkipSpaceRepresentationsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCSkipSpaceRepresentationsConfig_get_IFCSkipSpaceRepresentationsConfigName_mF981BBB054BA17435E6B75EAA65CADD3BE305705 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF4A54F05B602791BBB1401F2711124F527811B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3BF4A54F05B602791BBB1401F2711124F527811B;
	}
}
// System.Void Assimp.Configs.IFCSkipSpaceRepresentationsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFCSkipSpaceRepresentationsConfig__ctor_mF136E611F6F441B6E3A159AAB3310CB54DBA5F39 (IFCSkipSpaceRepresentationsConfig_tEE1A17705F78B89F58E203590737CD6B1B7112C0* __this, bool ___skipSpaceRepresentations0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IFCSkipSpaceRepresentationsConfig_get_IFCSkipSpaceRepresentationsConfigName_mF981BBB054BA17435E6B75EAA65CADD3BE305705(NULL);
		bool L_1 = ___skipSpaceRepresentations0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.IFCUseCustomTriangulationConfig::get_IFCUseCustomTriangulationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCUseCustomTriangulationConfig_get_IFCUseCustomTriangulationConfigName_mE4A1581B070886F03A58B0F9499AD95757FC3118 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8529CF4BDFB855B0066A805EC7D0392F8A5F26E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8529CF4BDFB855B0066A805EC7D0392F8A5F26E0;
	}
}
// System.Void Assimp.Configs.IFCUseCustomTriangulationConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFCUseCustomTriangulationConfig__ctor_mDD3A6DCAF93C6F27264DAE072C21E84F0A86020C (IFCUseCustomTriangulationConfig_tF6C7E3AB357143BB6BEC0C64A9BC15584035D7DC* __this, bool ___useCustomTriangulation0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IFCUseCustomTriangulationConfig_get_IFCUseCustomTriangulationConfigName_mE4A1581B070886F03A58B0F9499AD95757FC3118(NULL);
		bool L_1 = ___useCustomTriangulation0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.IFCSmoothingAngleConfig::get_IFCSmoothingAngleConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCSmoothingAngleConfig_get_IFCSmoothingAngleConfigName_mCBAE9A2E8809647435DBEE3B5C296309004A64F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39D88DBD9E7789782A5DDED3B7AE323F515A9335);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral39D88DBD9E7789782A5DDED3B7AE323F515A9335;
	}
}
// System.Void Assimp.Configs.IFCSmoothingAngleConfig::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFCSmoothingAngleConfig__ctor_m8735A88140D643B69E69B41AAE388AB01D85BEAD (IFCSmoothingAngleConfig_t4C65EC9E0F9F6F372E6A9BF545EE039467E892F7* __this, float ___angle0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IFCSmoothingAngleConfig_get_IFCSmoothingAngleConfigName_mCBAE9A2E8809647435DBEE3B5C296309004A64F2(NULL);
		float L_1 = ___angle0;
		FloatPropertyConfig__ctor_m2147AE73EEE2D9B6E7E0F35717757E28F99BA250(__this, L_0, L_1, (10.0f), NULL);
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
// System.String Assimp.Configs.IFCCylindricalTessellationConfig::get_IFCCylindricalTessellationConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IFCCylindricalTessellationConfig_get_IFCCylindricalTessellationConfigName_m9B22ED128A0ABC144161F77A4546C99B95203918 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDD7E7F5FE9D778333C6C2AD046BA105D0C70C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral9CDD7E7F5FE9D778333C6C2AD046BA105D0C70C1;
	}
}
// System.Void Assimp.Configs.IFCCylindricalTessellationConfig::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFCCylindricalTessellationConfig__ctor_m82C426D50A010BD8AEFEE19D9F40E5DDDB6E04D3 (IFCCylindricalTessellationConfig_t78D07DB482FF670FDE9C2C991F602101334402B5* __this, int32_t ___tessellation0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IFCCylindricalTessellationConfig_get_IFCCylindricalTessellationConfigName_m9B22ED128A0ABC144161F77A4546C99B95203918(NULL);
		int32_t L_1 = ___tessellation0;
		IntegerPropertyConfig__ctor_m21DD349BFB6C0B477FFC15856C323919CDCA3148(__this, L_0, L_1, ((int32_t)32), NULL);
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
// System.String Assimp.Configs.ColladaIgnoreUpDirectionConfig::get_ColladaIgnoreUpDirectionConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColladaIgnoreUpDirectionConfig_get_ColladaIgnoreUpDirectionConfigName_m59C105EC8C7AA7C50D3AAA71FB94B0F843804D02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DC472B7E011C2EE951D560C86981A17D6B484B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6DC472B7E011C2EE951D560C86981A17D6B484B7;
	}
}
// System.Void Assimp.Configs.ColladaIgnoreUpDirectionConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColladaIgnoreUpDirectionConfig__ctor_m5AFA75B11FA33A73D201DD0C2AC836489ECC81F5 (ColladaIgnoreUpDirectionConfig_t9327AE913A63D3F10E84E1C34BA67FA9EA2BFB82* __this, bool ___ignoreUpDirection0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = ColladaIgnoreUpDirectionConfig_get_ColladaIgnoreUpDirectionConfigName_m59C105EC8C7AA7C50D3AAA71FB94B0F843804D02(NULL);
		bool L_1 = ___ignoreUpDirection0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.FBXImportAllGeometryLayersConfig::get_FBXImportAllGeometryLayersConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAllGeometryLayersConfig_get_FBXImportAllGeometryLayersConfigName_m821CAA5D47EA5ABDA99E351038071BB77F6FCF98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA9225C7C35006D46A134BE3D9E23A8C449D0578);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralFA9225C7C35006D46A134BE3D9E23A8C449D0578;
	}
}
// System.Void Assimp.Configs.FBXImportAllGeometryLayersConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportAllGeometryLayersConfig__ctor_mD090EF6736F47569E4222B87E2E5309D35DAE0B0 (FBXImportAllGeometryLayersConfig_tB713EF24C3CDE50A2380F7B480E310F4F6B77038* __this, bool ___importAllGeometryLayers0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportAllGeometryLayersConfig_get_FBXImportAllGeometryLayersConfigName_m821CAA5D47EA5ABDA99E351038071BB77F6FCF98(NULL);
		bool L_1 = ___importAllGeometryLayers0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXImportAllMaterialsConfig::get_FBXImportAllMaterialsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAllMaterialsConfig_get_FBXImportAllMaterialsConfigName_mB7C56195DA0FC9AD9142E0C443D04E8781059FA2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FC69C7AEBBAF4CA27588B361E448D415BCA5AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF2FC69C7AEBBAF4CA27588B361E448D415BCA5AC;
	}
}
// System.Void Assimp.Configs.FBXImportAllMaterialsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportAllMaterialsConfig__ctor_m615D3A2E4ED8199788444CBC7548A6AA9CF5A93D (FBXImportAllMaterialsConfig_tEBA0D806301552AEAE255740F0943236C1FDC09E* __this, bool ___importAllMaterials0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportAllMaterialsConfig_get_FBXImportAllMaterialsConfigName_mB7C56195DA0FC9AD9142E0C443D04E8781059FA2(NULL);
		bool L_1 = ___importAllMaterials0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.FBXImportMaterialsConfig::get_FBXImportMaterialsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportMaterialsConfig_get_FBXImportMaterialsConfigName_mE8C44C3DDBAF7097F007023953EDD5E92FC924CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911CE202A35C8218A6BF20B4A20FCB5F942B9717);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral911CE202A35C8218A6BF20B4A20FCB5F942B9717;
	}
}
// System.Void Assimp.Configs.FBXImportMaterialsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportMaterialsConfig__ctor_mA7E1274D602CE70A01E42704C21E5BD81B861580 (FBXImportMaterialsConfig_tF857231BC918097B64B36CB1D1F6C6FE7986D68E* __this, bool ___importMaterials0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportMaterialsConfig_get_FBXImportMaterialsConfigName_mE8C44C3DDBAF7097F007023953EDD5E92FC924CF(NULL);
		bool L_1 = ___importMaterials0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXImportEmbeddedTexturesConfig::get_FBXImportEmbeddedTexturesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportEmbeddedTexturesConfig_get_FBXImportEmbeddedTexturesConfigName_mF6B7F0BE7B77230174B918360869076CC53DD892 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FF502E60BB66CE17C004B2E1B6654BB32B4B82E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1FF502E60BB66CE17C004B2E1B6654BB32B4B82E;
	}
}
// System.Void Assimp.Configs.FBXImportEmbeddedTexturesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportEmbeddedTexturesConfig__ctor_m37A7FC85D662479C39AAC5A4959DF881C433478D (FBXImportEmbeddedTexturesConfig_tBDD879E1C5C40F303A11C29CC092205C0C1C1254* __this, bool ___importTextures0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportEmbeddedTexturesConfig_get_FBXImportEmbeddedTexturesConfigName_mF6B7F0BE7B77230174B918360869076CC53DD892(NULL);
		bool L_1 = ___importTextures0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXImportSearchEmbeddedTexturesConfig::get_FBXImportSearchEmbeddedTexturesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportSearchEmbeddedTexturesConfig_get_FBXImportSearchEmbeddedTexturesConfigName_mB6EAD66E5C539DB59271D4A69CE2B4D299A9B083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56C1F883728164C2B221EC784DD9533C0EC3C85);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA56C1F883728164C2B221EC784DD9533C0EC3C85;
	}
}
// System.Void Assimp.Configs.FBXImportSearchEmbeddedTexturesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportSearchEmbeddedTexturesConfig__ctor_mF2B6052593CE8793D2F5CA8B75BA11618161CB85 (FBXImportSearchEmbeddedTexturesConfig_tDDBB1F54618CF4FDC36F9555C803E9C19C57B2B8* __this, bool ___searchEmbeddedTextures0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportSearchEmbeddedTexturesConfig_get_FBXImportSearchEmbeddedTexturesConfigName_mB6EAD66E5C539DB59271D4A69CE2B4D299A9B083(NULL);
		bool L_1 = ___searchEmbeddedTextures0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.FBXImportCamerasConfig::get_FBXImportCamerasConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportCamerasConfig_get_FBXImportCamerasConfigName_mADB02F027E412EED082D30DCA66D47952B8A8577 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEE5811D8ABE63CCE0CF3F57F6E99C17E629F640);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralEEE5811D8ABE63CCE0CF3F57F6E99C17E629F640;
	}
}
// System.Void Assimp.Configs.FBXImportCamerasConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportCamerasConfig__ctor_mC84212BCFFA227D7CD8CDE533865AB3F504B56E7 (FBXImportCamerasConfig_t2D5AD2CCB671E65B411400019FAD46591B7812D4* __this, bool ___importCameras0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportCamerasConfig_get_FBXImportCamerasConfigName_mADB02F027E412EED082D30DCA66D47952B8A8577(NULL);
		bool L_1 = ___importCameras0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXImportLightsConfig::get_FBXImportLightsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportLightsConfig_get_FBXImportLightsConfigName_m73A95CECC773434C45D2CC89209390DDE55C1B50 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8E3D620FFB00E5226321C416C5542FF1BD3A6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE8E3D620FFB00E5226321C416C5542FF1BD3A6B3;
	}
}
// System.Void Assimp.Configs.FBXImportLightsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportLightsConfig__ctor_m164F8AE0E73CED142C4FE9B3200EA8CD1D983803 (FBXImportLightsConfig_t9FD5CEBFBEA3FCA56672B7BDC99BB4C6673347A1* __this, bool ___importLights0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportLightsConfig_get_FBXImportLightsConfigName_m73A95CECC773434C45D2CC89209390DDE55C1B50(NULL);
		bool L_1 = ___importLights0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXImportAnimationsConfig::get_FBXImportAnimationsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXImportAnimationsConfig_get_FBXImportAnimationsConfigName_mBF614A4D812EE112E305286A7DF800B08E7D5A1D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD0B7B8984795BC508DF3CAEEE9CC88EB106926);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2CD0B7B8984795BC508DF3CAEEE9CC88EB106926;
	}
}
// System.Void Assimp.Configs.FBXImportAnimationsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXImportAnimationsConfig__ctor_m6E596D05ABC6DA0EC8D1E79AE3C35C3830BB3241 (FBXImportAnimationsConfig_tF440AE2ADC70AF1296273E3ADE840887781805F7* __this, bool ___importAnimations0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXImportAnimationsConfig_get_FBXImportAnimationsConfigName_mBF614A4D812EE112E305286A7DF800B08E7D5A1D(NULL);
		bool L_1 = ___importAnimations0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXStrictModeConfig::get_FBXStrictModeConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXStrictModeConfig_get_FBXStrictModeConfigName_mEABA02F840438C7138CE92EB878520299549E31A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E088DB395BCC90437121AE55755D8E931AB12BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2E088DB395BCC90437121AE55755D8E931AB12BB;
	}
}
// System.Void Assimp.Configs.FBXStrictModeConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXStrictModeConfig__ctor_mEF2354BD8F807327CDEEE597264E8598D3F7285C (FBXStrictModeConfig_tAE8F7545860A42F9999BADD4981A81845805D68C* __this, bool ___useStrictMode0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXStrictModeConfig_get_FBXStrictModeConfigName_mEABA02F840438C7138CE92EB878520299549E31A(NULL);
		bool L_1 = ___useStrictMode0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
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
// System.String Assimp.Configs.FBXPreservePivotsConfig::get_FBXPreservePivotsConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXPreservePivotsConfig_get_FBXPreservePivotsConfigName_mCF9ED43E46D1A0034FAB69D40F0060BEB69C2F78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5F43DC9B36D1AA73C977E365B7F525548C2ABA);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5F43DC9B36D1AA73C977E365B7F525548C2ABA;
	}
}
// System.Void Assimp.Configs.FBXPreservePivotsConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXPreservePivotsConfig__ctor_mBB3E0F0C0E554AC3F7CCC6F59D4D485C682452AC (FBXPreservePivotsConfig_t22C5459853F44382B02AD6EE0AEC1FACD44D347D* __this, bool ___preservePivots0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXPreservePivotsConfig_get_FBXPreservePivotsConfigName_mCF9ED43E46D1A0034FAB69D40F0060BEB69C2F78(NULL);
		bool L_1 = ___preservePivots0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.FBXOptimizeEmptyAnimationCurvesConfig::get_FBXOptimizeEmptyAnimationCurvesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXOptimizeEmptyAnimationCurvesConfig_get_FBXOptimizeEmptyAnimationCurvesConfigName_m6D8333A644B252BD3122E18902D91B8A74536D2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD020F64F6ACE578CBC192FD6E66D7A42DDFCCEF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD020F64F6ACE578CBC192FD6E66D7A42DDFCCEF6;
	}
}
// System.Void Assimp.Configs.FBXOptimizeEmptyAnimationCurvesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXOptimizeEmptyAnimationCurvesConfig__ctor_mD226024273D79F4A21C8EC3F15F3EDE63B45AE85 (FBXOptimizeEmptyAnimationCurvesConfig_tDB1B56CDB5FCDFF4CB9CB9E6E001213AA11A4A0D* __this, bool ___optimizeEmptyAnimations0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FBXOptimizeEmptyAnimationCurvesConfig_get_FBXOptimizeEmptyAnimationCurvesConfigName_m6D8333A644B252BD3122E18902D91B8A74536D2C(NULL);
		bool L_1 = ___optimizeEmptyAnimations0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)1, NULL);
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
// System.String Assimp.Configs.XFileUseDoublesConfig::get_XFileUseDoublesConfigName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XFileUseDoublesConfig_get_XFileUseDoublesConfigName_mBF165C9138F99E365312EDD561BFF054E6B6BCFA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC4034453BE2EABCDE35B528FFF816C4D714C32);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8CC4034453BE2EABCDE35B528FFF816C4D714C32;
	}
}
// System.Void Assimp.Configs.XFileUseDoublesConfig::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XFileUseDoublesConfig__ctor_m1D4BF14850CA3FD9949D87ED1E9054CD07EC1AF6 (XFileUseDoublesConfig_t8FE3FB70D83056F7EB6838C03B3DCFD2D839C339* __this, bool ___useDoubles0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = XFileUseDoublesConfig_get_XFileUseDoublesConfigName_mBF165C9138F99E365312EDD561BFF054E6B6BCFA(NULL);
		bool L_1 = ___useDoubles0;
		BooleanPropertyConfig__ctor_mD05C1C1E49CFBE336392A77870204DADC41BA828(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnmanagedLibraryImplementation_get_DefaultLibraryName_m222B962A91B387906B8A5B1B6E575DEDF4B070FC_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_defaultLibName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnmanagedLibraryImplementation_get_ThrowOnLoadFailure_m51A2651E57099BB937CE3DF75801ACF99218299A_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_throwOnLoadFailure_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnmanagedLibraryImplementation_set_ThrowOnLoadFailure_mA57F432EA98351DD810A3BB9696A261001A949D0_inline (UnmanagedLibraryImplementation_tD61EE23294D9C41791CA139C45D7B873963F7787* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_throwOnLoadFailure_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Windows_m00A214D125D1B401A93AFE2662E1CA74B2C9F40F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0 = ((OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields*)il2cpp_codegen_static_fields_for(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var))->___U3CWindowsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Linux_m81065A4E8C3755CB70743CDFFCCAD4408A101DA7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0 = ((OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields*)il2cpp_codegen_static_fields_for(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var))->___U3CLinuxU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_OSX_mEE3843A7E47E67B8EF8FB0D5A9D4829509245D85_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0 = ((OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields*)il2cpp_codegen_static_fields_for(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var))->___U3COSXU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnmanagedFunctionNameAttribute_get_UnmanagedFunctionName_mDBEDAC936EAF19BD69BBE63D0559FBD7139AD154_inline (UnmanagedFunctionNameAttribute_tBCA3EDD01B6895D15D559AA09945A0DF4D2545B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_unmanagedFunctionName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RuntimeInformation_get_ProcessArchitecture_m9CAB856AF92AB4A2881C605E1897EA6F6F7F75E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var))->____processArchitecture_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PropertyConfig_get_Name_m100ECE14BEE932C4C57C237B9487B33DFDAA052B_inline (PropertyConfig_t165D6A76765DACFBB71BEC65CFB6A6F340E99FD0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E Matrix4x4_get_Identity_m401FEA9D21173E151AAE89372502290D6C894151_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var);
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = ((Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E_il2cpp_TypeInfo_var))->____identity_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E MatrixPropertyConfig_get_Value_mC31D0D75F4F4C2BFE77701CB2D39AB15A786F86E_inline (MatrixPropertyConfig_t53226A3DA7AE6FB8DEA36BF830539562A5CE4836* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_t1D7366A7689051736EB643684FA23F304EE9CD1E L_0 = __this->___m_value_1;
		return L_0;
	}
}
