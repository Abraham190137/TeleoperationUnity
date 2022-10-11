#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t6CAFC4ADB928A1CB6A1BAA66C12250FB6C841842;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
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
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// Unity.XR.Oculus.InputFocus
struct InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Unity.XR.Oculus.Stats
struct Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03;
IL2CPP_EXTERN_C String_t* _stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3;
IL2CPP_EXTERN_C String_t* _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D;
IL2CPP_EXTERN_C String_t* _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54;
IL2CPP_EXTERN_C String_t* _stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF;
IL2CPP_EXTERN_C String_t* _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991;
IL2CPP_EXTERN_C String_t* _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57;
IL2CPP_EXTERN_C String_t* _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904;
IL2CPP_EXTERN_C String_t* _stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8;
IL2CPP_EXTERN_C String_t* _stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75;
IL2CPP_EXTERN_C String_t* _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1;
IL2CPP_EXTERN_C String_t* _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312;
IL2CPP_EXTERN_C String_t* _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412;
IL2CPP_EXTERN_C String_t* _stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED;
IL2CPP_EXTERN_C String_t* _stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992;
IL2CPP_EXTERN_C String_t* _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45;
IL2CPP_EXTERN_C String_t* _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC74641CA8B52702019111B91E29821576E700BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26;
IL2CPP_EXTERN_C String_t* _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904;
IL2CPP_EXTERN_C String_t* _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mF302CEB5B3EFD7EFCB9FC2B54CF739543AB2CFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA6AE5FBEB9AFBE0E7510F9F15248AED6E602CA38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t58034802D4CFEFF188A9FAB3F39C67CD90CD8FD4 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.XR.Oculus.Boundary
struct Boundary_tC6E78E14EE1EB255CF7CA00C7138EDB83ECF1DAA  : public RuntimeObject
{
};

// Unity.XR.Oculus.Development
struct Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40  : public RuntimeObject
{
};

struct Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_StaticFields
{
	// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache Unity.XR.Oculus.Development::s_CachedMode
	int32_t ___s_CachedMode_0;
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

// Unity.XR.Oculus.InputFocus
struct InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE  : public RuntimeObject
{
};

struct InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields
{
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusAcquired_0;
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusLost_1;
	// System.Boolean Unity.XR.Oculus.InputFocus::hadInputFocus
	bool ___hadInputFocus_2;
};

// Unity.XR.Oculus.NativeMethods
struct NativeMethods_tC6375926AE4EE34672287439E197A37B086427EE  : public RuntimeObject
{
};

// Unity.XR.Oculus.Performance
struct Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777  : public RuntimeObject
{
};

struct Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields
{
	// System.Single[] Unity.XR.Oculus.Performance::cachedDisplayAvailableFrequencies
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___cachedDisplayAvailableFrequencies_0;
};

// Unity.XR.Oculus.RegisterUpdateCallback
struct RegisterUpdateCallback_t701583C89E70B1DCDEA6366E2DF87769BCE1C2CB  : public RuntimeObject
{
};

// Unity.XR.Oculus.Stats
struct Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB  : public RuntimeObject
{
};

struct Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields
{
	// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::m_Display
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___m_Display_0;
	// System.String Unity.XR.Oculus.Stats::m_PluginVersion
	String_t* ___m_PluginVersion_1;
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

// Unity.XR.Oculus.Utils
struct Utils_tD3A438448520D35DE3F6B3D5DDF2B0305141FCB2  : public RuntimeObject
{
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

// Unity.XR.Oculus.NativeMethods/Internal
struct Internal_tB52482155DCE77A052BD67C85767CBB3571BDE53  : public RuntimeObject
{
};

// Unity.XR.Oculus.Stats/AdaptivePerformance
struct AdaptivePerformance_t332F727125725046EAF94AE45817EBF7969EA93E  : public RuntimeObject
{
};

// Unity.XR.Oculus.Stats/AppMetrics
struct AppMetrics_t911B1EB58629B57319DEB999AFC9CF3DB889D03A  : public RuntimeObject
{
};

// Unity.XR.Oculus.Stats/PerfMetrics
struct PerfMetrics_tDDB5FFCB3FA9394077551671DC3994207428CE58  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ____current_3;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 
{
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lowOverheadMode
	uint16_t ___lowOverheadMode_4;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::optimizeBufferDiscards
	uint16_t ___optimizeBufferDiscards_5;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::phaseSync
	uint16_t ___phaseSync_6;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::symmetricProjection
	uint16_t ___symmetricProjection_7;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::subsampledLayout
	uint16_t ___subsampledLayout_8;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lateLatching
	uint16_t ___lateLatching_9;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lateLatchingDebug
	uint16_t ___lateLatchingDebug_10;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::spaceWarp
	uint16_t ___spaceWarp_11;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Unity.XR.Oculus.OculusUsages
struct OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196  : public RuntimeObject
{
};

struct OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::indexTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___indexTouch_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbTouch_2;
};

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C  : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D
{
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LowOverheadMode
	bool ___LowOverheadMode_8;
	// System.Boolean Unity.XR.Oculus.OculusSettings::OptimizeBufferDiscards
	bool ___OptimizeBufferDiscards_9;
	// System.Boolean Unity.XR.Oculus.OculusSettings::PhaseSync
	bool ___PhaseSync_10;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SymmetricProjection
	bool ___SymmetricProjection_11;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SubsampledLayout
	bool ___SubsampledLayout_12;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LateLatching
	bool ___LateLatching_13;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LateLatchingDebug
	bool ___LateLatchingDebug_14;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SpaceWarp
	bool ___SpaceWarp_15;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest
	bool ___TargetQuest_16;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest2
	bool ___TargetQuest2_17;
	// UnityEngine.Texture2D Unity.XR.Oculus.OculusSettings::SystemSplashScreen
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___SystemSplashScreen_18;
};

struct OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_StaticFields
{
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* ___s_Settings_19;
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A  : public IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C
{
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

struct OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___s_InputSubsystemDescriptors_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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


// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Byte>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___subsystems0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedSubsystem_1_get_SubsystemDescriptor_mC6FFC8B129C4D3146C76A9D0B2CE69811F0F5AB8_gshared (IntegratedSubsystem_1_t6CAFC4ADB928A1CB6A1BAA66C12250FB6C841842* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___usageName0, const RuntimeMethod* method) ;

// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_m1C8DF141B1784FA737E3AA5A62AEE0D3F3BC480E (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m1F08E1EB6CCD8D77726FA473328C3936C6A5800A (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m02F548DEC426D8D49F5E5997E77CF44DD323EC55 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_m2610D600FFCD16AAD67F58619F7B0DEB4A18BACD (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_m354B87BBBA193EE0F9207AA88B55651E30911445 (int32_t ___level0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_m0861F0D2D18A7514EE5A152403A54B473A5551EC (bool ___isDynamic0, const RuntimeMethod* method) ;
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_mFF9B2C5A8AD509F19919A2448A65AF2B9F9A81EB (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_m469FAFAF42C3F421244F4F9A09BDA10F79AECF43 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m8CB62D564201581EC234AC80FEA79DEF16E2C2F2 (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_mA46B7F80EB13EA0E683C6ECD401EBEBBE16D79F5 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m0BAE0666700C9FA278A3E767F216E46734FFF8F4 (int32_t ___boundaryType0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___dimensions1, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m01035E70C07620D93EFEA287310C2BD1F8922F83 (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_m36857FFC348678CB742169E1D270DA3CAC5C52E1 (bool ___boundaryVisible0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_m02A0EC7138B986A79917C05F817CF75DE804D058 (bool ___active0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mF9F435A347218EF642A3C7C770151F9A4758BBCB (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.OculusLoader::CheckUnityVersionCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_CheckUnityVersionCompatibility_mC211D3EFA35B0E509154B8F2993B08079A5C4413 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) ;
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_m1B465FD6B781F4EC026AE1591A09A437D451EDCE (const RuntimeMethod* method) ;
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* OculusLoader_GetSettings_m2FA61767F36A8CFB03124EB295A79C7A7F0A863B_inline (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mE9C6ABC56B9EDEB3BE5599B091BB6699429BB6BD (OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* __this, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m8F63140EA513FAC3AA59EF03F9BA7B8D76BAA70F (UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 ___settings0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* OculusLoader_get_displaySubsystem_mBF36D42BABD9D5DA3ECE4F2D25862BF35C29D4E3 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* OculusLoader_get_inputSubsystem_m3690AE48575D2196C79757CE5F21C96F1A0963B2 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m041B05AB55DFBFA8F93BF453AB89A68C5DD2FFE6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_m7F66F18ADB77A7AF047440A70AD8A49321C0CB04 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_m3E1041375863ADAB74ADA1D1CB273E1DECD72862 (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m8AE7F6714C9AA27ECAF8DF1C48B771DABBC292D4 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_mAD776BE0CE1A3C7FC318567179EC0D4F83AE3DCD (String_t* ___ovrpPath0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773 (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_m1FA232841B113C4513A510187B153C77C5E24A9D (int32_t ___cpuLevel0, const RuntimeMethod* method) ;
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m76F42DD51A3F0BB1833FF28956D0C496DB16D132 (int32_t ___gpuLevel0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m5CBDC394EDB259D1FCD2525AD4EDE1C546F1342B (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mED12872ADB0728AB4C518D76DB18964C4F3D4F7A (intptr_t ___source0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_mE671959DC912251A8114C9B2B96D3E6C0238427C (float ___refreshRate0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_mEA796C5C77BB7F2E317D52A9582A7B2D3446DA8E (float* ___refreshRate0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_m9339E90D18E151143160AA02069A532107A63083 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___version0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Byte>(T[],T)
inline int32_t Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, const RuntimeMethod*))Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38_gshared)(___array0, ___value1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA6AE5FBEB9AFBE0E7510F9F15248AED6E602CA38 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_inline (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TSubsystemDescriptor UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::get_SubsystemDescriptor()
inline XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A* IntegratedSubsystem_1_get_SubsystemDescriptor_mF302CEB5B3EFD7EFCB9FC2B54CF739543AB2CFF3 (IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848* __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A* (*) (IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848*, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_mC6FFC8B129C4D3146C76A9D0B2CE69811F0F5AB8_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15 (IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m17BABDCD1716475A2473143A47ECCFE64F17A766 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m9D8587317EBC9785C2AEAD86ACC3B939A497E82D (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_mEF734C48F96C17C3A63305B75988F1851298D3E6 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, float* ___motionToPhoton0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_mC92C72C1B54E33C4281B714483222D5CD11866BB (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, float* ___displayRefreshRate0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_m2492CAAFD94EB682B5F5EC9199941BAEBC7C672B (bool ___enable0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_m1E09D2B7FEA3C91CC269F8B2C2A3D1774BDA3587 (bool ___enable0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mAC28727FE6D4F2F3660EFDF7F50982F802C8CB64 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m5CDD31B7F5E522310170F5A8ACBE479E62DE0A10 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_m7530D527AEB2CE8A0F7B6F11238AC8FBF48C7BAF (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m3F6E66D68CD709C8F8745013B2D924078BF3BA77 (String_t* ___ovrpPath0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m69974222D7D37522D4AFB7FF0037EC6E52E7B3AD (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mC5F760CAF91842559E576F638FC31777B4BB909E (UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 ___settings0, const RuntimeMethod* method) ;
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_mE16D6B1120B73B881A87B3B8E82F91F4B4DC3F00 (int32_t ___cpuLevel0, const RuntimeMethod* method) ;
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_m81B4173CC0AA6E1CF71EE796F4D94732AE239353 (int32_t ___gpuLevel0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_mB754554431E4660FBF909672068E75CA35CC134D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___version0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m90D95D613CA9DFF5A025354FEE9605D82A149EAC (bool ___enable0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m37D2C8164A1F6D665A8B917935BC2600ECC2A6E3 (bool ___enable0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_mC178DAA59C11333268F6D2DD6D4BBEB6A28FD5F6 (bool ___active0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mC460DF4EFE848C75E477A0228E62C5955884A0BC (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m77C40D747EA6D194F0029B6597074794875775C9 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m5486CDCCE00FA1D4A3DE95CEBBC81D62797EA586 (int32_t ___boundaryType0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___dimensions1, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_m0C5B2309AD11933284B47229B990E760D7CD2904 (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m9D7D102E67AFF73DE524274DF5AB06ABC6B725B9 (bool ___boundaryVisible0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_mFE5F2F0047FE03890E797254F8F04E9D2FC169B2 (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mD87B2B99F82E2A7C8E948F4460DDD94FD1F5DA5A (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_mF380F22E7D7A1873F5E5D7B59B8C471BE8B40996 (float ___refreshRate0, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m06B03F1EBE989260CC9266D8ECC9E4BB6211C105 (float* ___refreshRate0, const RuntimeMethod* method) ;
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_m86982DAC1289E79F74B3A60F86CF03ACA1B4AA3D (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_m2638793145460B0A2EFAF01E25EDD8D14B92B037 (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_m7638F3D237E542D9E4A511F8A3404F839AA267C2 (int32_t ___level0, const RuntimeMethod* method) ;
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m3119A41A3BE276ED922F58E8C1FD5597A0C717C4 (const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m65F3A091532C0D2877789AF1D4E01F9B7D522302 (bool ___isDynamic0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m10ABDBFFB06BEA4E016EDE6AFBAF474986DF03EE (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m8E7F9777E8D9C69269A69D2429B8C32A24A52597 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mF5E717737BF081B1D05D01E9D2AC4D32564694F0 (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorScale(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorOffset(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetIsSupportedDevice();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL LoadOVRPlugin(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnloadOVRPlugin();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetCPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetGPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetOVRPVersion(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnablePerfMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableAppMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDeveloperModeStrict(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppHasInputFocus();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryConfigured();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryDimensions(int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryVisible();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundaryVisible(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppShouldQuit();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayAvailableFrequencies(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDisplayFrequency(float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayFrequency(float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemHeadsetType();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResSupported();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResLevel();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResDynamic(int32_t);
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
// System.Void Unity.XR.Oculus.Utils::SetColorScaleAndOffset(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScaleAndOffset_mBCF1B16AAE2A720788E10D75CB29AA3A097C48FE (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorScale0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorOffset1, const RuntimeMethod* method) 
{
	{
		// NativeMethods.SetColorScale(colorScale.x, colorScale.y, colorScale.z, colorScale.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___colorScale0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___colorScale0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___colorScale0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___colorScale0;
		float L_7 = L_6.___w_4;
		NativeMethods_SetColorScale_m1C8DF141B1784FA737E3AA5A62AEE0D3F3BC480E(L_1, L_3, L_5, L_7, NULL);
		// NativeMethods.SetColorOffset(colorOffset.x, colorOffset.y, colorOffset.z, colorOffset.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___colorOffset1;
		float L_9 = L_8.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___colorOffset1;
		float L_11 = L_10.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___colorOffset1;
		float L_13 = L_12.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___colorOffset1;
		float L_15 = L_14.___w_4;
		NativeMethods_SetColorOffset_m1F08E1EB6CCD8D77726FA473328C3936C6A5800A(L_9, L_11, L_13, L_15, NULL);
		// }
		return;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.Utils::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetSystemHeadsetType_m772BC674D52677149AB8AAE23F51CFA75ADA7FE2 (const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = NativeMethods_GetSystemHeadsetType_m02F548DEC426D8D49F5E5997E77CF44DD323EC55(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.Utils::SetFoveationLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_SetFoveationLevel_mE53287738F0CEB2FFDCA293687DF3A84F6D3FE6B (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_m2610D600FFCD16AAD67F58619F7B0DEB4A18BACD(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Can't set foveation level on current platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// NativeMethods.SetTiledMultiResLevel(level);
		int32_t L_1 = ___level0;
		NativeMethods_SetTiledMultiResLevel_m354B87BBBA193EE0F9207AA88B55651E30911445(L_1, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.Utils::EnableDynamicFFR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_EnableDynamicFFR_m347FDDB3406996E62E762263E5356325738AE045 (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_m2610D600FFCD16AAD67F58619F7B0DEB4A18BACD(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Can't enable dynamic FFR on current platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// NativeMethods.SetTiledMultiResDynamic(enable);
		bool L_1 = ___enable0;
		NativeMethods_SetTiledMultiResDynamic_m0861F0D2D18A7514EE5A152403A54B473A5551EC(L_1, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Int32 Unity.XR.Oculus.Utils::GetFoveationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFoveationLevel_m4AECAE33089FCE7AAE8ABCA224B63E3DA24A2E42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_m2610D600FFCD16AAD67F58619F7B0DEB4A18BACD(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Can't get foveation level on current platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3, NULL);
		// return -1;
		return (-1);
	}

IL_0013:
	{
		// return NativeMethods.GetTiledMultiResLevel();
		int32_t L_1;
		L_1 = NativeMethods_GetTiledMultiResLevel_mFF9B2C5A8AD509F19919A2448A65AF2B9F9A81EB(NULL);
		return L_1;
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
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusAcquired_m5CD36E7497F9CE17350C428950C12D91436E2CCD (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusAcquired_m0A73927172E614C9763DF0ADBD73298391177045 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusLost_m2B3440549F824156867619DA3180FBE76A8AE190 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusLost_m8520D908B784C5042A07F6B8797ABC988EE9C90B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m8CB62D564201581EC234AC80FEA79DEF16E2C2F2 (const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetHasInputFocus();
		bool L_0;
		L_0 = NativeMethods_GetHasInputFocus_m469FAFAF42C3F421244F4F9A09BDA10F79AECF43(NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mF5E717737BF081B1D05D01E9D2AC4D32564694F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B4_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B8_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	{
		// bool appHasInputFocus = hasInputFocus;
		bool L_0;
		L_0 = InputFocus_get_hasInputFocus_m8CB62D564201581EC234AC80FEA79DEF16E2C2F2(NULL);
		// if (!appHasInputFocus && hadInputFocus)
		bool L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_0020;
		}
	}
	{
		bool L_2 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___hadInputFocus_2;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B4_0 = G_B1_0;
			goto IL_0020;
		}
	}
	{
		// if (InputFocusLost != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1;
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B4_0 = G_B2_0;
			goto IL_0020;
		}
	}
	{
		// InputFocusLost();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusLost_1;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0020:
	{
		// if (appHasInputFocus && !hadInputFocus)
		bool L_5 = G_B4_0;
		G_B5_0 = L_5;
		if (!L_5)
		{
			G_B8_0 = L_5;
			goto IL_003b;
		}
	}
	{
		bool L_6 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___hadInputFocus_2;
		G_B6_0 = G_B5_0;
		if (L_6)
		{
			G_B8_0 = G_B5_0;
			goto IL_003b;
		}
	}
	{
		// if (InputFocusAcquired != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0;
		G_B7_0 = G_B6_0;
		if (!L_7)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		// InputFocusAcquired();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___InputFocusAcquired_0;
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
		G_B8_0 = G_B7_0;
	}

IL_003b:
	{
		// hadInputFocus = appHasInputFocus;
		((InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE_il2cpp_TypeInfo_var))->___hadInputFocus_2 = G_B8_0;
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__ctor_m3FDC5A5ECFC5247C91B39C8EE86F768A28CD1F0E (InputFocus_t76018DDD56BB288561D354B825D5929965DC38FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryConfigured_mFDFAC988DCAB99E021C5438D274A12D5C08553E9 (const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetBoundaryConfigured();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryConfigured_mA46B7F80EB13EA0E683C6ECD401EBEBBE16D79F5(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryDimensions_m81665C07EB3DBA51F14A23368958693EC592D2BA (int32_t ___boundaryType0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___dimensions1, const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___dimensions1;
		bool L_2;
		L_2 = NativeMethods_GetBoundaryDimensions_m0BAE0666700C9FA278A3E767F216E46734FFF8F4(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryVisible_m2066498A95DCDB13660F7DCE7A7EAD6DE1C781E1 (const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetBoundaryVisible();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryVisible_m01035E70C07620D93EFEA287310C2BD1F8922F83(NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Boundary::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_SetBoundaryVisible_m550F1A4DDE150D503DE9F7F9014E9070176BEB85 (bool ___boundaryVisible0, const RuntimeMethod* method) 
{
	{
		// NativeMethods.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		NativeMethods_SetBoundaryVisible_m36857FFC348678CB742169E1D270DA3CAC5C52E1(L_0, NULL);
		// }
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
// System.Void Unity.XR.Oculus.Development::TrySetDeveloperMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_TrySetDeveloperMode_m785765B0E2E5285B35FFF96800DFA606D2EF5E00 (bool ___active0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// s_CachedMode = active ? UserDeveloperModeSettingCache.UserSettingTrue : UserDeveloperModeSettingCache.UserSettingFalse;
		bool L_0 = ___active0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 2;
	}

IL_0007:
	{
		((Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_StaticFields*)il2cpp_codegen_static_fields_for(Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var))->___s_CachedMode_0 = G_B3_0;
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_m7F66F18ADB77A7AF047440A70AD8A49321C0CB04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool enable = true;
		V_0 = (bool)1;
		// bool shouldOverride = false;
		V_1 = (bool)0;
		// if (s_CachedMode != UserDeveloperModeSettingCache.NoUserSettingCached)
		int32_t L_0 = ((Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_StaticFields*)il2cpp_codegen_static_fields_for(Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var))->___s_CachedMode_0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
		// enable = (s_CachedMode == UserDeveloperModeSettingCache.UserSettingTrue);
		int32_t L_1 = ((Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_StaticFields*)il2cpp_codegen_static_fields_for(Development_t106B6EDC97423218186995B6FDF3EF5E6EE40C40_il2cpp_TypeInfo_var))->___s_CachedMode_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0021;
	}

IL_0018:
	{
		// else if (Debug.isDebugBuild)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0(NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
	}

IL_0021:
	{
		// if (shouldOverride && !NativeMethods.SetDeveloperModeStrict(enable))
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = V_0;
		bool L_5;
		L_5 = NativeMethods_SetDeveloperModeStrict_m02A0EC7138B986A79917C05F817CF75DE804D058(L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode on Start.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_m3E1041375863ADAB74ADA1D1CB273E1DECD72862 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.SetDeveloperModeStrict(false))
		bool L_0;
		L_0 = NativeMethods_SetDeveloperModeStrict_m02A0EC7138B986A79917C05F817CF75DE804D058((bool)0, NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode to false on Stop.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75, NULL);
	}

IL_0012:
	{
		// }
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
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_m1B465FD6B781F4EC026AE1591A09A437D451EDCE (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (NativeMethods.GetIsSupportedDevice())
			bool L_0;
			L_0 = NativeMethods_GetIsSupportedDevice_mF9F435A347218EF642A3C7C770151F9A4758BBCB(NULL);
			if (!L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			// return DeviceSupportedResult.Supported;
			V_0 = 0;
			goto IL_0014;
		}

IL_000b_1:
		{
			// return DeviceSupportedResult.ExitApplication;
			V_0 = 2;
			goto IL_0014;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000f;
		}
		throw e;
	}

CATCH_000f:
	{// begin catch(System.DllNotFoundException)
		// catch(DllNotFoundException)
		// return DeviceSupportedResult.NotSupported;
		V_0 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	}// end catch (depth: 1)

IL_0014:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* OculusLoader_get_displaySubsystem_mBF36D42BABD9D5DA3ECE4F2D25862BF35C29D4E3 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* OculusLoader_get_inputSubsystem_m3690AE48575D2196C79757CE5F21C96F1A0963B2 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_mDEFC017849247485E672462C30068D016613B08A (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* V_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B7_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B8_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B10_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B11_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B13_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B14_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B16_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B17_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B19_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B20_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B22_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B23_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B25_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B26_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B28_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B29_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B31_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B30_0 = NULL;
	int32_t G_B32_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B32_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B34_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B33_0 = NULL;
	int32_t G_B35_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B35_1 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B37_0 = NULL;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3* G_B38_1 = NULL;
	{
		// if (!CheckUnityVersionCompatibility())
		bool L_0;
		L_0 = OculusLoader_CheckUnityVersionCompatibility_mC211D3EFA35B0E509154B8F2993B08079A5C4413(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		//             if (IsDeviceSupported() != DeviceSupportedResult.Supported
		// #if UNITY_EDITOR_WIN
		//                 || SystemInfo.graphicsDeviceType != GraphicsDeviceType.Direct3D11
		// #endif
		//             )
		il2cpp_codegen_runtime_class_init_inline(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OculusLoader_IsDeviceSupported_m1B465FD6B781F4EC026AE1591A09A437D451EDCE(NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// OculusSettings settings = GetSettings();
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_2;
		L_2 = OculusLoader_GetSettings_m2FA61767F36A8CFB03124EB295A79C7A7F0A863B_inline(__this, NULL);
		V_0 = L_2;
		// if (settings != null)
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0115;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->___SharedDepthBuffer_6;
		G_B6_0 = (&V_1);
		if (L_6)
		{
			G_B7_0 = (&V_1);
			goto IL_0033;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0034:
	{
		G_B8_1->___sharedDepthBuffer_0 = (uint16_t)((int32_t)(uint16_t)G_B8_0);
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = L_7->___DashSupport_7;
		G_B9_0 = (&V_1);
		if (L_8)
		{
			G_B10_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0048:
	{
		G_B11_1->___dashSupport_1 = (uint16_t)((int32_t)(uint16_t)G_B11_0);
		// userDefinedSettings.stereoRenderingMode = (ushort)settings.GetStereoRenderingMode();
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_9 = V_0;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = OculusSettings_GetStereoRenderingMode_mE9C6ABC56B9EDEB3BE5599B091BB6699429BB6BD(L_9, NULL);
		(&V_1)->___stereoRenderingMode_2 = L_10;
		// userDefinedSettings.colorSpace = (ushort)((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_11;
		L_11 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		G_B12_0 = (&V_1);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			G_B13_0 = (&V_1);
			goto IL_0068;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
	}

IL_0069:
	{
		G_B14_1->___colorSpace_3 = (uint16_t)((int32_t)(uint16_t)G_B14_0);
		// userDefinedSettings.lowOverheadMode = (ushort)(settings.LowOverheadMode ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->___LowOverheadMode_8;
		G_B15_0 = (&V_1);
		if (L_13)
		{
			G_B16_0 = (&V_1);
			goto IL_007c;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		goto IL_007d;
	}

IL_007c:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
	}

IL_007d:
	{
		G_B17_1->___lowOverheadMode_4 = (uint16_t)((int32_t)(uint16_t)G_B17_0);
		// userDefinedSettings.optimizeBufferDiscards = (ushort)(settings.OptimizeBufferDiscards ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->___OptimizeBufferDiscards_9;
		G_B18_0 = (&V_1);
		if (L_15)
		{
			G_B19_0 = (&V_1);
			goto IL_0090;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		goto IL_0091;
	}

IL_0090:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
	}

IL_0091:
	{
		G_B20_1->___optimizeBufferDiscards_5 = (uint16_t)((int32_t)(uint16_t)G_B20_0);
		// userDefinedSettings.phaseSync = (ushort)(settings.PhaseSync ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___PhaseSync_10;
		G_B21_0 = (&V_1);
		if (L_17)
		{
			G_B22_0 = (&V_1);
			goto IL_00a4;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
	}

IL_00a5:
	{
		G_B23_1->___phaseSync_6 = (uint16_t)((int32_t)(uint16_t)G_B23_0);
		// userDefinedSettings.symmetricProjection = (ushort)(settings.SymmetricProjection ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = L_18->___SymmetricProjection_11;
		G_B24_0 = (&V_1);
		if (L_19)
		{
			G_B25_0 = (&V_1);
			goto IL_00b8;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B26_0 = 1;
		G_B26_1 = G_B25_0;
	}

IL_00b9:
	{
		G_B26_1->___symmetricProjection_7 = (uint16_t)((int32_t)(uint16_t)G_B26_0);
		// userDefinedSettings.subsampledLayout = (ushort)(settings.SubsampledLayout ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_20 = V_0;
		NullCheck(L_20);
		bool L_21 = L_20->___SubsampledLayout_12;
		G_B27_0 = (&V_1);
		if (L_21)
		{
			G_B28_0 = (&V_1);
			goto IL_00cc;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B27_0;
		goto IL_00cd;
	}

IL_00cc:
	{
		G_B29_0 = 1;
		G_B29_1 = G_B28_0;
	}

IL_00cd:
	{
		G_B29_1->___subsampledLayout_8 = (uint16_t)((int32_t)(uint16_t)G_B29_0);
		// userDefinedSettings.lateLatching = (ushort)(settings.LateLatching ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_22 = V_0;
		NullCheck(L_22);
		bool L_23 = L_22->___LateLatching_13;
		G_B30_0 = (&V_1);
		if (L_23)
		{
			G_B31_0 = (&V_1);
			goto IL_00e0;
		}
	}
	{
		G_B32_0 = 0;
		G_B32_1 = G_B30_0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B32_0 = 1;
		G_B32_1 = G_B31_0;
	}

IL_00e1:
	{
		G_B32_1->___lateLatching_9 = (uint16_t)((int32_t)(uint16_t)G_B32_0);
		// userDefinedSettings.lateLatchingDebug = (ushort)(settings.LateLatchingDebug ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = L_24->___LateLatchingDebug_14;
		G_B33_0 = (&V_1);
		if (L_25)
		{
			G_B34_0 = (&V_1);
			goto IL_00f4;
		}
	}
	{
		G_B35_0 = 0;
		G_B35_1 = G_B33_0;
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B35_0 = 1;
		G_B35_1 = G_B34_0;
	}

IL_00f5:
	{
		G_B35_1->___lateLatchingDebug_10 = (uint16_t)((int32_t)(uint16_t)G_B35_0);
		// userDefinedSettings.spaceWarp = (ushort)(settings.SpaceWarp ? 1 : 0);
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->___SpaceWarp_15;
		G_B36_0 = (&V_1);
		if (L_27)
		{
			G_B37_0 = (&V_1);
			goto IL_0108;
		}
	}
	{
		G_B38_0 = 0;
		G_B38_1 = G_B36_0;
		goto IL_0109;
	}

IL_0108:
	{
		G_B38_0 = 1;
		G_B38_1 = G_B37_0;
	}

IL_0109:
	{
		G_B38_1->___spaceWarp_11 = (uint16_t)((int32_t)(uint16_t)G_B38_0);
		// NativeMethods.SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 L_28 = V_1;
		NativeMethods_SetUserDefinedSettings_m8F63140EA513FAC3AA59EF03F9BA7B8D76BAA70F(L_28, NULL);
	}

IL_0115:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		il2cpp_codegen_runtime_class_init_inline(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_29 = ((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_5;
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A(__this, L_29, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_30 = ((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_6;
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C(__this, L_30, _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8, XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		// if (displaySubsystem == null && inputSubsystem == null)
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_31;
		L_31 = OculusLoader_get_displaySubsystem_mBF36D42BABD9D5DA3ECE4F2D25862BF35C29D4E3(__this, NULL);
		if (L_31)
		{
			goto IL_0151;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_32;
		L_32 = OculusLoader_get_inputSubsystem_m3690AE48575D2196C79757CE5F21C96F1A0963B2(__this, NULL);
		if (L_32)
		{
			goto IL_0151;
		}
	}
	{
		// Debug.LogWarning("Unable to start Oculus XR Plugin.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA, NULL);
		goto IL_017e;
	}

IL_0151:
	{
		// else if (displaySubsystem == null)
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_33;
		L_33 = OculusLoader_get_displaySubsystem_mBF36D42BABD9D5DA3ECE4F2D25862BF35C29D4E3(__this, NULL);
		if (L_33)
		{
			goto IL_0165;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load display subsystem.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85, NULL);
		goto IL_017e;
	}

IL_0165:
	{
		// else if (inputSubsystem == null)
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_34;
		L_34 = OculusLoader_get_inputSubsystem_m3690AE48575D2196C79757CE5F21C96F1A0963B2(__this, NULL);
		if (L_34)
		{
			goto IL_0179;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load input subsystem.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF, NULL);
		goto IL_017e;
	}

IL_0179:
	{
		// RegisterUpdateCallback.Initialize();
		RegisterUpdateCallback_Initialize_m041B05AB55DFBFA8F93BF453AB89A68C5DD2FFE6(NULL);
	}

IL_017e:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_35;
		L_35 = OculusLoader_get_displaySubsystem_mBF36D42BABD9D5DA3ECE4F2D25862BF35C29D4E3(__this, NULL);
		if (!L_35)
		{
			goto IL_0190;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_36;
		L_36 = OculusLoader_get_inputSubsystem_m3690AE48575D2196C79757CE5F21C96F1A0963B2(__this, NULL);
		return (bool)((!(((RuntimeObject*)(XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0190:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_m0FBB6E2DE04857565E8B5E09165D380E24DBCCBE (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962(__this, XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA(__this, XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStart();
		Development_OverrideDeveloperModeStart_m7F66F18ADB77A7AF047440A70AD8A49321C0CB04(NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_mD8C0412877AD12612ED916895FEB52EA4CADB30F (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24(__this, XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750(__this, XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStop();
		Development_OverrideDeveloperModeStop_m3E1041375863ADAB74ADA1D1CB273E1DECD72862(NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_mC164D18317DB38A780AD46B671CAD17830ED9930 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterUpdateCallback.Deinitialize();
		RegisterUpdateCallback_Deinitialize_m8AE7F6714C9AA27ECAF8DF1C48B771DABBC292D4(NULL);
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606(__this, XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F(__this, XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::RuntimeLoadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_RuntimeLoadOVRPlugin_mDE054BB0D71AC9027DDF4E185387D07B41314397 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// var supported = IsDeviceSupported();
		il2cpp_codegen_runtime_class_init_inline(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_m1B465FD6B781F4EC026AE1591A09A437D451EDCE(NULL);
		// if (supported == DeviceSupportedResult.ExitApplication)
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("\n\nExiting application:\n\nThis .apk was built with the Oculus XR Plugin loader enabled, but is attempting to run on a non-Oculus device.\nTo build for general Android devices, please disable the Oculus XR Plugin before building the Android player.\n\n\n");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// if (supported != DeviceSupportedResult.Supported)
		if (!G_B2_0)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (!NativeMethods.LoadOVRPlugin(""))
			bool L_2;
			L_2 = NativeMethods_LoadOVRPlugin_mAD776BE0CE1A3C7FC318567179EC0D4F83AE3DCD(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			if (L_2)
			{
				goto IL_0032_1;
			}
		}
		{
			// Debug.LogError("Failed to load libOVRPlugin.so");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03, NULL);
		}

IL_0032_1:
		{
			// }
			goto IL_0037;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	}// end catch (depth: 1)

IL_0037:
	{
		// }
		return;
	}
}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* OculusLoader_GetSettings_m2FA61767F36A8CFB03124EB295A79C7A7F0A863B (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_0 = ((OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var))->___s_Settings_19;
		// return settings;
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::CheckUnityVersionCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_CheckUnityVersionCompatibility_mC211D3EFA35B0E509154B8F2993B08079A5C4413 (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_m80DAEED59119B8AE0D9F39C2F410CED5AF61007F (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	{
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_m7363F3F6C91405E202624170D8F7323317735396 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_0 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*)il2cpp_codegen_object_new(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773(L_0, List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_5), (void*)L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_1 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_1, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_6), (void*)L_1);
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
// System.Boolean Unity.XR.Oculus.Performance::TrySetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetCPULevel_m1A67D6E53EB4896D1525018144EEECDECFDC386A (int32_t ___level0, const RuntimeMethod* method) 
{
	{
		// return (NativeMethods.SetCPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetCPULevel_m1FA232841B113C4513A510187B153C77C5E24A9D(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetGPULevel_m18A9540555E223D81388DFE70AABE1F22A8E6D12 (int32_t ___level0, const RuntimeMethod* method) 
{
	{
		// return (NativeMethods.SetGPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetGPULevel_m76F42DD51A3F0BB1833FF28956D0C496DB16D132(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetAvailableDisplayRefreshRates(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetAvailableDisplayRefreshRates_mDC13DE9810168FBA12B7C035FB47443FE517C112 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___refreshRates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (cachedDisplayAvailableFrequencies == null || cachedDisplayAvailableFrequencies.Length == 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0063;
		}
	}

IL_000f:
	{
		// cachedDisplayAvailableFrequencies = new float[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)0);
		((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0), (void*)L_2);
		// int numFrequencies = 0;
		V_0 = 0;
		// if (NativeMethods.GetDisplayAvailableFrequencies(IntPtr.Zero, ref numFrequencies) && numFrequencies > 0)
		bool L_3;
		L_3 = NativeMethods_GetDisplayAvailableFrequencies_m5CBDC394EDB259D1FCD2525AD4EDE1C546F1342B((0), (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// int size = sizeof(float) * numFrequencies;
		int32_t L_5 = V_0;
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(((int32_t)il2cpp_codegen_multiply(4, L_5)), NULL);
		V_1 = L_6;
		// if (NativeMethods.GetDisplayAvailableFrequencies(ptr, ref numFrequencies) && numFrequencies > 0)
		intptr_t L_7 = V_1;
		bool L_8;
		L_8 = NativeMethods_GetDisplayAvailableFrequencies_m5CBDC394EDB259D1FCD2525AD4EDE1C546F1342B(L_7, (&V_0), NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// cachedDisplayAvailableFrequencies = new float[numFrequencies];
		int32_t L_10 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0), (void*)L_11);
		// Marshal.Copy(ptr, cachedDisplayAvailableFrequencies, 0, numFrequencies);
		intptr_t L_12 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0;
		int32_t L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mED12872ADB0728AB4C518D76DB18964C4F3D4F7A(L_12, L_13, 0, L_14, NULL);
	}

IL_005d:
	{
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_15, NULL);
	}

IL_0063:
	{
		// refreshRates = cachedDisplayAvailableFrequencies;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_16 = ___refreshRates0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0;
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_17);
		// return (cachedDisplayAvailableFrequencies.Length > 0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ((Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tB1393E2318BEDFD1E01AF8B40C104A3C938D5777_il2cpp_TypeInfo_var))->___cachedDisplayAvailableFrequencies_0;
		NullCheck(L_18);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_18)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetDisplayRefreshRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetDisplayRefreshRate_mA986AF6C01393034B30522560FCB9F28319C5FA1 (float ___refreshRate0, const RuntimeMethod* method) 
{
	{
		// return NativeMethods.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_SetDisplayFrequency_mE671959DC912251A8114C9B2B96D3E6C0238427C(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetDisplayRefreshRate_m84EB392DE7AD3E0F3A2AD1C79820B44D663D65B2 (float* ___refreshRate0, const RuntimeMethod* method) 
{
	{
		// return NativeMethods.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_GetDisplayFrequency_mEA796C5C77BB7F2E317D52A9582A7B2D3446DA8E(L_0, NULL);
		return L_1;
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
// System.String Unity.XR.Oculus.Stats::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Stats_get_PluginVersion_mDE3803AC252EA1119F94F44FF7FF40A6C18EDBD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (string.Equals(string.Empty, m_PluginVersion))
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1;
		bool L_2;
		L_2 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// byte[] buf = new byte[256];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_3;
		// NativeMethods.GetOVRPVersion(buf);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NativeMethods_GetOVRPVersion_m9339E90D18E151143160AA02069A532107A63083(L_4, NULL);
		// var end = Array.IndexOf<byte>(buf, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6;
		L_6 = Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38(L_5, (uint8_t)0, Array_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m02F2060240F0C54171B066945E438BE2DA08DF38_RuntimeMethod_var);
		V_1 = L_6;
		// m_PluginVersion = System.Text.Encoding.ASCII.GetString(buf, 0, end);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1), (void*)L_10);
	}

IL_003c:
	{
		// return m_PluginVersion;
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1;
		return L_11;
	}
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1_get_SubsystemDescriptor_mF302CEB5B3EFD7EFCB9FC2B54CF739543AB2CFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA6AE5FBEB9AFBE0E7510F9F15248AED6E602CA38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* V_1 = NULL;
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_2 = NULL;
	{
		// if (m_Display != null)
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_Display;
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_1 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0;
		return L_1;
	}

IL_000d:
	{
		// List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_2 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*)il2cpp_codegen_object_new(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF(L_2, List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		// SubsystemManager.GetInstances(displays);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA6AE5FBEB9AFBE0E7510F9F15248AED6E602CA38(L_3, SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA6AE5FBEB9AFBE0E7510F9F15248AED6E602CA38_RuntimeMethod_var);
		// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
		NullCheck(L_3);
		Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 L_4;
		L_4 = List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423(L_3, List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D((&V_0), Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0020_1:
			{
				// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_5;
				L_5 = Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_inline((&V_0), Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
				V_1 = L_5;
				// if (xrDisplaySubsystem.SubsystemDescriptor.id == "oculus display" && xrDisplaySubsystem.running)
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_6 = V_1;
				NullCheck(L_6);
				XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A* L_7;
				L_7 = IntegratedSubsystem_1_get_SubsystemDescriptor_mF302CEB5B3EFD7EFCB9FC2B54CF739543AB2CFF3(L_6, IntegratedSubsystem_1_get_SubsystemDescriptor_mF302CEB5B3EFD7EFCB9FC2B54CF739543AB2CFF3_RuntimeMethod_var);
				NullCheck(L_7);
				String_t* L_8;
				L_8 = IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15(L_7, NULL);
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, NULL);
				if (!L_9)
				{
					goto IL_0055_1;
				}
			}
			{
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_10, NULL);
				if (!L_11)
				{
					goto IL_0055_1;
				}
			}
			{
				// m_Display = xrDisplaySubsystem;
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_12 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
				((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0), (void*)L_12);
				// return m_Display;
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_13 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0;
				V_2 = L_13;
				goto IL_007e;
			}

IL_0055_1:
			{
				// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
				bool L_14;
				L_14 = Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A((&V_0), Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// Debug.LogError("No active Oculus display subsystem was found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED, NULL);
		// return m_Display;
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_15 = ((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_Display_0;
		return L_15;
	}

IL_007e:
	{
		// }
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.Stats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__ctor_m8EE6D4544ED048D96A6679385FFF8EECEA33E08B (Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.Stats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__cctor_mB9016BAA912519CF0C75E95869592AAC5266A495 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_PluginVersion = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var))->___m_PluginVersion_1), (void*)L_0);
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
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUAppTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUAppTime_m3B2D5EC2B01BE289AB996982E1EB84F953E8D591 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetAppGPUTimeLastFrame(out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		NullCheck(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m17BABDCD1716475A2473143A47ECCFE64F17A766(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)), (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUCompositorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUCompositorTime_m6AF1B5D2C388C97CEFBEE4A782DB5B3C4F503416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetCompositorGPUTimeLastFrame(out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		NullCheck(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m9D8587317EBC9785C2AEAD86ACC3B939A497E82D(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)), (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_MotionToPhoton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_MotionToPhoton_mA1A3C54D12CC1ABB5B182A4BA6E515530097ADD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetMotionToPhoton(out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		NullCheck(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetMotionToPhoton_mEF734C48F96C17C3A63305B75988F1851298D3E6(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)), (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_RefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_RefreshRate_m5BB0DDF21E0BEFD8CC1A1EF43A3D53F841B04F7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetDisplayRefreshRate(out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		NullCheck(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetDisplayRefreshRate_mC92C72C1B54E33C4281B714483222D5CD11866BB(((XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_il2cpp_TypeInfo_var)), (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryTemp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryTemp_mF2742285E38C52383733A82A3BA84D51FF9475E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryTemperature", out batteryTemp);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8, (&V_0), NULL);
		// return batteryTemp;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryLevel_m617DF61FBE36A30C493DEAD5C3CA1C6752A96AB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryLevel", out batteryLevel);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54, (&V_0), NULL);
		// return batteryLevel;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Stats/AdaptivePerformance::get_PowerSavingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformance_get_PowerSavingMode_mC920BDC1E5A06CF98B93F984CC6FCEAACF0DBBDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "powerSavingMode", out powerSavingMode);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69, (&V_0), NULL);
		// return !(powerSavingMode == 0.0f);
		float L_2 = V_0;
		return (bool)((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_AdaptivePerformanceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_AdaptivePerformanceScale_m6529DDA8BCB8F44BD0AF7903263DCE5309EE0007 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DADF60B90978099A286AA09DF75E789888C9904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "adaptivePerformanceScale", out performanceScale);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904, (&V_0), NULL);
		// return performanceScale;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_CPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_CPULevel_m3DCD68ABD96FA9D9D39C8C3C7261BC999D626492 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "cpuLevel", out cpuLevel);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D, (&V_0), NULL);
		// return (int) cpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_GPULevel_m4BEAF12A43005F89BBFA697C089296D1077C815E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "gpuLevel", out gpuLevel);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45, (&V_0), NULL);
		// return (int) gpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
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
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppCPUTime_m28D85B7DFAD154064CBEF9DBA6099E9D702FD84D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appcputime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppGPUTime_m925EFF7AE44FE0166C5A7D2BDD4AA3AEBCBC1DCB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appgputime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorCPUTime_m5B7D7E122B01D222A23F4B3E887841707319EC65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorcputime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorGPUTime_mA94CF5C2D35786F1217F491BB54B028FFA997448 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorgputime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUUtilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUUtilization_m6D6CC3B06B287994F3D8205E56BDEFF6B2CC3C13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuutil", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationAverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationAverage_mCA26A4C31FF5C165D157BC4D590F00AAAB428A29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilavg", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationWorst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationWorst_mF4796A24D39DBD986678B15259609891A80E562F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilworst", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUClockFrequency_mB8BB203CB4B17190C6DC88A6E1D3352E1CB4DD47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuclockfreq", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUClockFrequency_m14A0CEA0F7A1977BBF671E1470320B4691362E0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuclockfreq", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/PerfMetrics::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerfMetrics_EnablePerfMetrics_mD249F962C4060F3899ED22233F95F72B2DF596A8 (bool ___enable0, const RuntimeMethod* method) 
{
	{
		// NativeMethods.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnablePerfMetrics_m2492CAAFD94EB682B5F5EC9199941BAEBC7C672B(L_0, NULL);
		// }
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
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppQueueAheadTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppQueueAheadTime_m58343959F0FE6388CC18CBC734C778006ED2B034 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.appqueueahead", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppCPUElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppCPUElapsedTime_mF167FA15C3C2D950654E4ECBAC5BB95E79315930 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC74641CA8B52702019111B91E29821576E700BB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.cpuelapsedtime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralDC74641CA8B52702019111B91E29821576E700BB, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorDroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorDroppedFrames_mD99E7780BFCF171326C754A31EBD2BC5AFBEE1C1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositordroppedframes", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorLatency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorLatency_mDC2952E3864F2BA367FC80466563B73D3DEF6181 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorlatency", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorCPUTime_m19EBA6AD7F096EA01331C106CA3F776468FB9DF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcputime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CPUStartToGPUEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CPUStartToGPUEnd_m656EF39126FA6DA1320C90792A946AAF4E00CE4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcpustartgpuendelapsedtime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_GPUEndToVsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_GPUEndToVsync_m25EA0C53CDA56685525D9786BD65E0E41D931F56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorgpuendtovsyncelapsedtime", out val);
		il2cpp_codegen_runtime_class_init_inline(Stats_t532BDF72F0CFA5121B447784EC03851E18A51BFB_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_m5A7F2E9A691742F9FCCE65D4482D06B029ABEB0B(NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_mE5DC460DAC6704AFBA185A8C0006C428563AC1A7(L_0, _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412, (&V_0), NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/AppMetrics::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetrics_EnableAppMetrics_mF7F5E280BECF6A354040E91DCC4B90D44708F8A6 (bool ___enable0, const RuntimeMethod* method) 
{
	{
		// NativeMethods.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnableAppMetrics_m1E09D2B7FEA3C91CC269F8B2C2A3D1774BDA3587(L_0, NULL);
		// }
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
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_m1C8DF141B1784FA737E3AA5A62AEE0D3F3BC480E (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// Internal.SetColorScale(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorScale_mAC28727FE6D4F2F3660EFDF7F50982F802C8CB64(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m1F08E1EB6CCD8D77726FA473328C3936C6A5800A (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// Internal.SetColorOffset(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorOffset_m5CDD31B7F5E522310170F5A8ACBE479E62DE0A10(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mF9F435A347218EF642A3C7C770151F9A4758BBCB (const RuntimeMethod* method) 
{
	{
		// return Internal.GetIsSupportedDevice();
		bool L_0;
		L_0 = Internal_GetIsSupportedDevice_m7530D527AEB2CE8A0F7B6F11238AC8FBF48C7BAF(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_mAD776BE0CE1A3C7FC318567179EC0D4F83AE3DCD (String_t* ___ovrpPath0, const RuntimeMethod* method) 
{
	{
		// return Internal.LoadOVRPlugin(ovrpPath);
		String_t* L_0 = ___ovrpPath0;
		bool L_1;
		L_1 = Internal_LoadOVRPlugin_m3F6E66D68CD709C8F8745013B2D924078BF3BA77(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_UnloadOVRPlugin_m76EDAB4F61FDEF92E545D4C3957FB7DA4D170512 (const RuntimeMethod* method) 
{
	{
		// Internal.UnloadOVRPlugin();
		Internal_UnloadOVRPlugin_m69974222D7D37522D4AFB7FF0037EC6E52E7B3AD(NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m8F63140EA513FAC3AA59EF03F9BA7B8D76BAA70F (UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 ___settings0, const RuntimeMethod* method) 
{
	{
		// Internal.SetUserDefinedSettings(settings);
		UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 L_0 = ___settings0;
		Internal_SetUserDefinedSettings_mC5F760CAF91842559E576F638FC31777B4BB909E(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_m1FA232841B113C4513A510187B153C77C5E24A9D (int32_t ___cpuLevel0, const RuntimeMethod* method) 
{
	{
		// return Internal.SetCPULevel(cpuLevel);
		int32_t L_0 = ___cpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetCPULevel_mE16D6B1120B73B881A87B3B8E82F91F4B4DC3F00(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m76F42DD51A3F0BB1833FF28956D0C496DB16D132 (int32_t ___gpuLevel0, const RuntimeMethod* method) 
{
	{
		// return Internal.SetGPULevel(gpuLevel);
		int32_t L_0 = ___gpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetGPULevel_m81B4173CC0AA6E1CF71EE796F4D94732AE239353(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_m9339E90D18E151143160AA02069A532107A63083 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___version0, const RuntimeMethod* method) 
{
	{
		// Internal.GetOVRPVersion(version);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___version0;
		Internal_GetOVRPVersion_mB754554431E4660FBF909672068E75CA35CC134D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_m2492CAAFD94EB682B5F5EC9199941BAEBC7C672B (bool ___enable0, const RuntimeMethod* method) 
{
	{
		// Internal.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnablePerfMetrics_m90D95D613CA9DFF5A025354FEE9605D82A149EAC(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_m1E09D2B7FEA3C91CC269F8B2C2A3D1774BDA3587 (bool ___enable0, const RuntimeMethod* method) 
{
	{
		// Internal.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnableAppMetrics_m37D2C8164A1F6D665A8B917935BC2600ECC2A6E3(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_m02A0EC7138B986A79917C05F817CF75DE804D058 (bool ___active0, const RuntimeMethod* method) 
{
	{
		// return Internal.SetDeveloperModeStrict(active);
		bool L_0 = ___active0;
		bool L_1;
		L_1 = Internal_SetDeveloperModeStrict_mC178DAA59C11333268F6D2DD6D4BBEB6A28FD5F6(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_m469FAFAF42C3F421244F4F9A09BDA10F79AECF43 (const RuntimeMethod* method) 
{
	{
		// return Internal.GetAppHasInputFocus();
		bool L_0;
		L_0 = Internal_GetAppHasInputFocus_mC460DF4EFE848C75E477A0228E62C5955884A0BC(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_mA46B7F80EB13EA0E683C6ECD401EBEBBE16D79F5 (const RuntimeMethod* method) 
{
	{
		// return Internal.GetBoundaryConfigured();
		bool L_0;
		L_0 = Internal_GetBoundaryConfigured_m77C40D747EA6D194F0029B6597074794875775C9(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m0BAE0666700C9FA278A3E767F216E46734FFF8F4 (int32_t ___boundaryType0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___dimensions1, const RuntimeMethod* method) 
{
	{
		// return Internal.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___dimensions1;
		bool L_2;
		L_2 = Internal_GetBoundaryDimensions_m5486CDCCE00FA1D4A3DE95CEBBC81D62797EA586(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m01035E70C07620D93EFEA287310C2BD1F8922F83 (const RuntimeMethod* method) 
{
	{
		// return Internal.GetBoundaryVisible();
		bool L_0;
		L_0 = Internal_GetBoundaryVisible_m0C5B2309AD11933284B47229B990E760D7CD2904(NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_m36857FFC348678CB742169E1D270DA3CAC5C52E1 (bool ___boundaryVisible0, const RuntimeMethod* method) 
{
	{
		// Internal.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		Internal_SetBoundaryVisible_m9D7D102E67AFF73DE524274DF5AB06ABC6B725B9(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_m8B8CE94E700636ED76D7E2A38B6B65E5EB77CAE9 (const RuntimeMethod* method) 
{
	{
		// return Internal.GetAppShouldQuit();
		bool L_0;
		L_0 = Internal_GetAppShouldQuit_mFE5F2F0047FE03890E797254F8F04E9D2FC169B2(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m5CBDC394EDB259D1FCD2525AD4EDE1C546F1342B (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method) 
{
	{
		// return Internal.GetDisplayAvailableFrequencies(ptr, ref numFrequencies);
		intptr_t L_0 = ___ptr0;
		int32_t* L_1 = ___numFrequencies1;
		bool L_2;
		L_2 = Internal_GetDisplayAvailableFrequencies_mD87B2B99F82E2A7C8E948F4460DDD94FD1F5DA5A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_mE671959DC912251A8114C9B2B96D3E6C0238427C (float ___refreshRate0, const RuntimeMethod* method) 
{
	{
		// return Internal.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_SetDisplayFrequency_mF380F22E7D7A1873F5E5D7B59B8C471BE8B40996(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_mEA796C5C77BB7F2E317D52A9582A7B2D3446DA8E (float* ___refreshRate0, const RuntimeMethod* method) 
{
	{
		// return Internal.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_GetDisplayFrequency_m06B03F1EBE989260CC9266D8ECC9E4BB6211C105(L_0, NULL);
		return L_1;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m02F548DEC426D8D49F5E5997E77CF44DD323EC55 (const RuntimeMethod* method) 
{
	{
		// return Internal.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = Internal_GetSystemHeadsetType_m86982DAC1289E79F74B3A60F86CF03ACA1B4AA3D(NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_m2610D600FFCD16AAD67F58619F7B0DEB4A18BACD (const RuntimeMethod* method) 
{
	{
		// return Internal.GetTiledMultiResSupported();
		bool L_0;
		L_0 = Internal_GetTiledMultiResSupported_m2638793145460B0A2EFAF01E25EDD8D14B92B037(NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_m354B87BBBA193EE0F9207AA88B55651E30911445 (int32_t ___level0, const RuntimeMethod* method) 
{
	{
		// Internal.SetTiledMultiResLevel(level);
		int32_t L_0 = ___level0;
		Internal_SetTiledMultiResLevel_m7638F3D237E542D9E4A511F8A3404F839AA267C2(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_mFF9B2C5A8AD509F19919A2448A65AF2B9F9A81EB (const RuntimeMethod* method) 
{
	{
		// return Internal.GetTiledMultiResLevel();
		int32_t L_0;
		L_0 = Internal_GetTiledMultiResLevel_m3119A41A3BE276ED922F58E8C1FD5597A0C717C4(NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_m0861F0D2D18A7514EE5A152403A54B473A5551EC (bool ___isDynamic0, const RuntimeMethod* method) 
{
	{
		// Internal.SetTiledMultiResDynamic(isDynamic);
		bool L_0 = ___isDynamic0;
		Internal_SetTiledMultiResDynamic_m65F3A091532C0D2877789AF1D4E01F9B7D522302(L_0, NULL);
		// }
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
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mAC28727FE6D4F2F3660EFDF7F50982F802C8CB64 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorScale", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorScale)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m5CDD31B7F5E522310170F5A8ACBE479E62DE0A10 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorOffset)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_m7530D527AEB2CE8A0F7B6F11238AC8FBF48C7BAF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetIsSupportedDevice", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetIsSupportedDevice)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m3F6E66D68CD709C8F8745013B2D924078BF3BA77 (String_t* ___ovrpPath0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "LoadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ovrpPath0' to native representation
	Il2CppChar* ____ovrpPath0_marshaled = NULL;
	if (___ovrpPath0 != NULL)
	{
		____ovrpPath0_marshaled = &___ovrpPath0->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(LoadOVRPlugin)(____ovrpPath0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____ovrpPath0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m69974222D7D37522D4AFB7FF0037EC6E52E7B3AD (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "UnloadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnloadOVRPlugin)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mC5F760CAF91842559E576F638FC31777B4BB909E (UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3 ___settings0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_tE823040D57E8C8C9D8A028F206230E1C7BAC8EE3);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_mE16D6B1120B73B881A87B3B8E82F91F4B4DC3F00 (int32_t ___cpuLevel0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetCPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetCPULevel)(___cpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cpuLevel0);
	#endif

	return returnValue;
}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_m81B4173CC0AA6E1CF71EE796F4D94732AE239353 (int32_t ___gpuLevel0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetGPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetGPULevel)(___gpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___gpuLevel0);
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_mB754554431E4660FBF909672068E75CA35CC134D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___version0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOVRPVersion", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetOVRPVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m90D95D613CA9DFF5A025354FEE9605D82A149EAC (bool ___enable0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnablePerfMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnablePerfMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m37D2C8164A1F6D665A8B917935BC2600ECC2A6E3 (bool ___enable0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnableAppMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableAppMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_mC178DAA59C11333268F6D2DD6D4BBEB6A28FD5F6 (bool ___active0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDeveloperModeStrict", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDeveloperModeStrict)(static_cast<int32_t>(___active0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___active0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mC460DF4EFE848C75E477A0228E62C5955884A0BC (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppHasInputFocus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppHasInputFocus)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m77C40D747EA6D194F0029B6597074794875775C9 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryConfigured", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryConfigured)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m5486CDCCE00FA1D4A3DE95CEBBC81D62797EA586 (int32_t ___boundaryType0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___dimensions1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryDimensions)(___boundaryType0, ___dimensions1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___boundaryType0, ___dimensions1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_m0C5B2309AD11933284B47229B990E760D7CD2904 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryVisible)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m9D7D102E67AFF73DE524274DF5AB06ABC6B725B9 (bool ___boundaryVisible0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundaryVisible)(static_cast<int32_t>(___boundaryVisible0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___boundaryVisible0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_mFE5F2F0047FE03890E797254F8F04E9D2FC169B2 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppShouldQuit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppShouldQuit)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mD87B2B99F82E2A7C8E948F4460DDD94FD1F5DA5A (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayAvailableFrequencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayAvailableFrequencies)(___ptr0, ___numFrequencies1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ___numFrequencies1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_mF380F22E7D7A1873F5E5D7B59B8C471BE8B40996 (float ___refreshRate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m06B03F1EBE989260CC9266D8ECC9E4BB6211C105 (float* ___refreshRate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_m86982DAC1289E79F74B3A60F86CF03ACA1B4AA3D (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetSystemHeadsetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemHeadsetType)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_m2638793145460B0A2EFAF01E25EDD8D14B92B037 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResSupported", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResSupported)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_m7638F3D237E542D9E4A511F8A3404F839AA267C2 (int32_t ___level0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResLevel)(___level0);
	#else
	il2cppPInvokeFunc(___level0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m3119A41A3BE276ED922F58E8C1FD5597A0C717C4 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResLevel)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m65F3A091532C0D2877789AF1D4E01F9B7D522302 (bool ___isDynamic0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResDynamic", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResDynamic)(static_cast<int32_t>(___isDynamic0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___isDynamic0));
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mE9C6ABC56B9EDEB3BE5599B091BB6699429BB6BD (OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* __this, const RuntimeMethod* method) 
{
	{
		// return (ushort)m_StereoRenderingModeAndroid;
		int32_t L_0 = __this->___m_StereoRenderingModeAndroid_5;
		return (uint16_t)((int32_t)(uint16_t)L_0);
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m6206BE150DEB602C65EEF7C255DE3BA17FB1452E (OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var))->___s_Settings_19 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var))->___s_Settings_19), (void*)__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_m2A441A38D66B2B4538A2CE744BCFD3283910F324 (OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* __this, const RuntimeMethod* method) 
{
	{
		// public StereoRenderingModeDesktop m_StereoRenderingModeDesktop = StereoRenderingModeDesktop.SinglePassInstanced;
		__this->___m_StereoRenderingModeDesktop_4 = 1;
		// public StereoRenderingModeAndroid m_StereoRenderingModeAndroid = StereoRenderingModeAndroid.Multiview;
		__this->___m_StereoRenderingModeAndroid_5 = 2;
		// public bool SharedDepthBuffer = true;
		__this->___SharedDepthBuffer_6 = (bool)1;
		// public bool DashSupport = true;
		__this->___DashSupport_7 = (bool)1;
		// public bool OptimizeBufferDiscards = true;
		__this->___OptimizeBufferDiscards_9 = (bool)1;
		// public bool SymmetricProjection = true;
		__this->___SymmetricProjection_11 = (bool)1;
		// public bool TargetQuest = true;
		__this->___TargetQuest_16 = (bool)1;
		// public bool TargetQuest2 = true;
		__this->___TargetQuest2_17 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Unity.XR.Oculus.OculusUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusUsages__cctor_m3BC2BDB6198C21AF208C5DD0C8A59C5A2D8E7129 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<bool> thumbrest = new InputFeatureUsage<bool>("Thumbrest");
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_0), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___thumbrest_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___thumbrest_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		// public static InputFeatureUsage<bool> indexTouch = new InputFeatureUsage<bool>("IndexTouch");
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_1), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___indexTouch_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___indexTouch_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		// public static InputFeatureUsage<bool> thumbTouch = new InputFeatureUsage<bool>("ThumbTouch");
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_2), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___thumbTouch_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t26394A1703082235CAC869B16DF3A491A7965196_il2cpp_TypeInfo_var))->___thumbTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
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
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m041B05AB55DFBFA8F93BF453AB89A68C5DD2FFE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += Update;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, NULL, (intptr_t)((void*)RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF_RuntimeMethod_var), NULL);
		Application_add_onBeforeRender_m10ABDBFFB06BEA4E016EDE6AFBAF474986DF03EE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m8AE7F6714C9AA27ECAF8DF1C48B771DABBC292D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender -= Update;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, NULL, (intptr_t)((void*)RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF_RuntimeMethod_var), NULL);
		Application_remove_onBeforeRender_m8E7F9777E8D9C69269A69D2429B8C32A24A52597(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Update_mD7B551FC22C28DA0808C540C95B2B401497D84CF (const RuntimeMethod* method) 
{
	{
		// InputFocus.Update();
		InputFocus_Update_mF5E717737BF081B1D05D01E9D2AC4D32564694F0(NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* OculusLoader_GetSettings_m2FA61767F36A8CFB03124EB295A79C7A7F0A863B_inline (OculusLoader_tA386B9AA0786D042EA272EDF385F96C0AD1A56BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321* L_0 = ((OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t0584FB71432B697479FD0BFC5B68C195F17CD321_il2cpp_TypeInfo_var))->___s_Settings_19;
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
