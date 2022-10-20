#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>
struct BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>
struct HashSet_1_t05C66B3C71225BB9F149321F152E048585DE60C9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA;
// Facebook.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Facebook.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_t2848AE42A61CD9D1D010E8CF40845C489A9A6CB1;
// Facebook.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_tD191E243729C2B08C9EAD9445673C3A683DBF29C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Facebook.WitAi.Data.Entities.WitEntity[]
struct WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65;
// Facebook.WitAi.Data.Intents.WitIntent[]
struct WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB;
// Facebook.WitAi.Data.Traits.WitTrait[]
struct WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31;
// Facebook.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_t89F4808C20AC370F031313E4A00DEBC463777C2F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB;
// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928;
// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// Facebook.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD;
// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_t517E6F2EE8F9893031C1FC89D0ABE3D932C5F372;
// Oculus.Voice.Interfaces.IPlatformVoiceService
struct IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52;
// Facebook.WitAi.IRequest
struct IRequest_t3FB23B07DF1272182F8CE6F930ADF8B1C474D28D;
// Facebook.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_t1D62933B45B8422A8DCC294482F856B6663827D4;
// Facebook.WitAi.IVoiceService
struct IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5;
// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1;
// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB;
// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A;
// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4;
// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Facebook.WitAi.Wit
struct Wit_t7582060C53BB0428697BD46A2E58C7A814907503;
// Facebook.WitAi.Data.Configuration.WitApplication
struct WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD;
// Facebook.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0;
// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34;
// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C;
// Facebook.WitAi.WitRequest
struct WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6;
// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4;
// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49;
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB;
// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E;
// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t01DAE8B02F237838AD642DC0F83C1B6E33E5E0DB;
// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t1C0E46775EA7FBE85F5C2EFECD08B65EFA336DC4;
// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t8DAF536AB45C30AE57A5BEE4701E62E6B5878E0B;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wit_t7582060C53BB0428697BD46A2E58C7A814907503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F;
IL2CPP_EXTERN_C String_t* _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29;
IL2CPP_EXTERN_C String_t* _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
IL2CPP_EXTERN_C String_t* _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A;
IL2CPP_EXTERN_C String_t* _stringLiteral2246735173FD8FC0191B3D1EBB41CE5659B71DF0;
IL2CPP_EXTERN_C String_t* _stringLiteral2C00B8845F78EF9AAEA64DBD7D11989A4F3E10B7;
IL2CPP_EXTERN_C String_t* _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral32A52ACC7E14914EF6FB8A46DFEC78E35E23CC27;
IL2CPP_EXTERN_C String_t* _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659;
IL2CPP_EXTERN_C String_t* _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E;
IL2CPP_EXTERN_C String_t* _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4;
IL2CPP_EXTERN_C String_t* _stringLiteral50BBF15DA29111BB3C382C9D12F9178147D75DF1;
IL2CPP_EXTERN_C String_t* _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025;
IL2CPP_EXTERN_C String_t* _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD;
IL2CPP_EXTERN_C String_t* _stringLiteral591184A69213A4D299171C75373FEABB89BF8937;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51;
IL2CPP_EXTERN_C String_t* _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102;
IL2CPP_EXTERN_C String_t* _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014;
IL2CPP_EXTERN_C String_t* _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F;
IL2CPP_EXTERN_C String_t* _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66;
IL2CPP_EXTERN_C String_t* _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551;
IL2CPP_EXTERN_C String_t* _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7;
IL2CPP_EXTERN_C String_t* _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A;
IL2CPP_EXTERN_C String_t* _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6;
IL2CPP_EXTERN_C String_t* _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76;
IL2CPP_EXTERN_C String_t* _stringLiteralB1CE592A302F5E21B6755D287B31734F1E56DA58;
IL2CPP_EXTERN_C String_t* _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE;
IL2CPP_EXTERN_C String_t* _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC04CC788232484E918569E326AD3839934507B;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA;
IL2CPP_EXTERN_C String_t* _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
IL2CPP_EXTERN_C String_t* _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207;
IL2CPP_EXTERN_C String_t* _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
IL2CPP_EXTERN_C String_t* _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965;
IL2CPP_EXTERN_C String_t* _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC140051BF200AB88497170B5004988B2DA52192;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_m28DC00CC8E9365E1A1673B6E48666AF21F947BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_mCAA84480D202470721075085BCDAE6AE538066BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m3EFA705FA21918CEB5E6451B5CD2092894C5655F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mF0C82AA7629611920EF105131F8849B61974E9EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0884DB74AEEEC7E1EEC72A76654867EE7EDE408C 
{
};

// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF  : public RuntimeObject
{
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* ___serviceConnection_2;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095* ____entries_1;
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
	KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Oculus.Voice.AppBuiltIns
struct AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E  : public RuntimeObject
{
};

struct AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields
{
	// System.String Oculus.Voice.AppBuiltIns::builtInPrefix
	String_t* ___builtInPrefix_0;
	// System.String Oculus.Voice.AppBuiltIns::modelName
	String_t* ___modelName_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Voice.AppBuiltIns::apps
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___apps_2;
};
struct Il2CppArrayBounds;

// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___binding_0;
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

// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5  : public RuntimeObject
{
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* ___OnResponse_0;
	// Facebook.WitAi.Events.WitErrorEvent Facebook.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* ___OnError_1;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborted_2;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRequestCompleted_3;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___OnMicLevelChanged_4;
	// Facebook.WitAi.Events.WitRequestCreatedEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* ___OnRequestCreated_5;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStartListening_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListening_7;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToInactivity_8;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToTimeout_9;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToDeactivation_10;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMicDataSent_11;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMinimumWakeThresholdHit_12;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::OnPartialTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___OnPartialTranscription_13;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::OnFullTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___OnFullTranscription_14;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataReady_15;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataSent_16;
};

// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB  : public RuntimeObject
{
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::configuration
	WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___configuration_0;
};

// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49  : public RuntimeObject
{
	// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider Facebook.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_0;
	// System.Int32 Facebook.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_1;
	// System.String Facebook.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_2;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19* ___onResponse_3;
};

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB  : public RuntimeObject
{
};

// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3  : public RuntimeObject
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___witConfiguration_0;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_8;
	// Facebook.WitAi.Interfaces.CustomTranscriptionProvider Facebook.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* ___customTranscriptionProvider_9;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_10;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1  : public BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01
{
};

// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A  : public BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF
{
	// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding Oculus.Voice.Bindings.Android.VoiceSDKImpl::eventBinding
	VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___eventBinding_3;
	// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::<TranscriptionProvider>k__BackingField
	RuntimeObject* ___U3CTranscriptionProviderU3Ek__BackingField_4;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34  : public UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50
{
};

// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Facebook.WitAi.WitRequest
struct WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6  : public RuntimeObject
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.WitRequest::configuration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration_19;
	// System.String Facebook.WitAi.WitRequest::command
	String_t* ___command_20;
	// System.String Facebook.WitAi.WitRequest::path
	String_t* ___path_21;
	// Facebook.WitAi.WitRequest/QueryParam[] Facebook.WitAi.WitRequest::queryParams
	QueryParamU5BU5D_t89F4808C20AC370F031313E4A00DEBC463777C2F* ___queryParams_22;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::_request
	RuntimeObject* ____request_23;
	// System.Net.HttpWebResponse Facebook.WitAi.WitRequest::response
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___response_24;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.WitRequest::responseData
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseData_25;
	// System.Boolean Facebook.WitAi.WitRequest::isActive
	bool ___isActive_26;
	// System.Boolean Facebook.WitAi.WitRequest::responseStarted
	bool ___responseStarted_27;
	// System.Byte[] Facebook.WitAi.WitRequest::postData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___postData_28;
	// System.String Facebook.WitAi.WitRequest::postContentType
	String_t* ___postContentType_29;
	// System.Object Facebook.WitAi.WitRequest::streamLock
	RuntimeObject* ___streamLock_30;
	// System.Int32 Facebook.WitAi.WitRequest::bytesWritten
	int32_t ___bytesWritten_31;
	// System.Boolean Facebook.WitAi.WitRequest::requestRequiresBody
	bool ___requestRequiresBody_32;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onResponse
	Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19* ___onResponse_33;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onInputStreamReady
	Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19* ___onInputStreamReady_34;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onRawResponse
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onRawResponse_35;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onPartialTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPartialTranscription_36;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onFullTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFullTranscription_37;
	// Facebook.WitAi.WitRequest/OnCustomizeUriEvent Facebook.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_t01DAE8B02F237838AD642DC0F83C1B6E33E5E0DB* ___onCustomizeUri_39;
	// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent Facebook.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_t1C0E46775EA7FBE85F5C2EFECD08B65EFA336DC4* ___onProvideCustomHeaders_40;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.WitRequest::audioEncoding
	AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* ___audioEncoding_41;
	// System.Int32 Facebook.WitAi.WitRequest::statusCode
	int32_t ___statusCode_42;
	// System.String Facebook.WitAi.WitRequest::statusDescription
	String_t* ___statusDescription_43;
	// System.Boolean Facebook.WitAi.WitRequest::isRequestStreamActive
	bool ___isRequestStreamActive_44;
	// System.Boolean Facebook.WitAi.WitRequest::isServerAuthRequired
	bool ___isServerAuthRequired_45;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::<RequestProvider>k__BackingField
	RuntimeObject* ___U3CRequestProviderU3Ek__BackingField_46;
	// System.Boolean Facebook.WitAi.WitRequest::configurationRequired
	bool ___configurationRequired_51;
	// System.String Facebook.WitAi.WitRequest::serverToken
	String_t* ___serverToken_52;
	// System.String Facebook.WitAi.WitRequest::callingStackTrace
	String_t* ___callingStackTrace_53;
	// System.DateTime Facebook.WitAi.WitRequest::requestStartTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___requestStartTime_54;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Facebook.WitAi.WitRequest::writeBuffer
	ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0* ___writeBuffer_55;
	// System.Boolean Facebook.WitAi.WitRequest::_performing
	bool ____performing_56;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Facebook.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ____mainThreadCallbacks_57;
};

struct WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6_StaticFields
{
	// Facebook.WitAi.WitRequest/PreSendRequestDelegate Facebook.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t8DAF536AB45C30AE57A5BEE4701E62E6B5878E0B* ___onPreSendRequest_38;
	// System.String Facebook.WitAi.WitRequest::operatingSystem
	String_t* ___operatingSystem_47;
	// System.String Facebook.WitAi.WitRequest::deviceModel
	String_t* ___deviceModel_48;
	// System.String Facebook.WitAi.WitRequest::deviceName
	String_t* ___deviceName_49;
	// System.String Facebook.WitAi.WitRequest::appIdentifier
	String_t* ___appIdentifier_50;
};

// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4  : public UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F
{
};

// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD  : public UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366
{
};

// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::voiceEvents
	VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___voiceEvents_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Facebook.WitAi.Data.Configuration.WitApplication Facebook.WitAi.Data.Configuration.WitConfiguration::application
	WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* ___application_4;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::configId
	String_t* ___configId_5;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::clientAccessToken
	String_t* ___clientAccessToken_6;
	// System.Int32 Facebook.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* ___endpointConfiguration_8;
	// Facebook.WitAi.Data.Entities.WitEntity[] Facebook.WitAi.Data.Configuration.WitConfiguration::entities
	WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65* ___entities_9;
	// Facebook.WitAi.Data.Intents.WitIntent[] Facebook.WitAi.Data.Configuration.WitConfiguration::intents
	WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB* ___intents_10;
	// Facebook.WitAi.Data.Traits.WitTrait[] Facebook.WitAi.Data.Configuration.WitConfiguration::traits
	WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31* ___traits_11;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_12;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::events
	VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___events_4;
};

// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF  : public VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99
{
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::witRuntimeConfiguration
	WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___witRuntimeConfiguration_5;
	// Oculus.Voice.Interfaces.IPlatformVoiceService Oculus.Voice.AppVoiceExperience::platformService
	RuntimeObject* ___platformService_6;
	// Facebook.WitAi.IVoiceService Oculus.Voice.AppVoiceExperience::voiceServiceImpl
	RuntimeObject* ___voiceServiceImpl_7;
};

// Facebook.WitAi.Wit
struct Wit_t7582060C53BB0428697BD46A2E58C7A814907503  : public VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99
{
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Facebook.WitAi.Wit::_runtimeConfiguration
	WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ____runtimeConfiguration_5;
	// Facebook.WitAi.Interfaces.IAudioInputSource Facebook.WitAi.Wit::_micInput
	RuntimeObject* ____micInput_6;
	// Facebook.WitAi.Configuration.WitRequestOptions Facebook.WitAi.Wit::_currentRequestOptions
	WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ____currentRequestOptions_7;
	// System.Single Facebook.WitAi.Wit::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_8;
	// Facebook.WitAi.WitRequest Facebook.WitAi.Wit::_recordingRequest
	WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6* ____recordingRequest_9;
	// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest> Facebook.WitAi.Wit::_transmitRequests
	HashSet_1_t05C66B3C71225BB9F149321F152E048585DE60C9* ____transmitRequests_10;
	// System.Boolean Facebook.WitAi.Wit::_isSoundWakeActive
	bool ____isSoundWakeActive_11;
	// Facebook.WitAi.Data.RingBuffer`1<System.Byte> Facebook.WitAi.Wit::_micDataBuffer
	RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* ____micDataBuffer_12;
	// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.Wit::_lastSampleMarker
	Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ____lastSampleMarker_13;
	// System.Byte[] Facebook.WitAi.Wit::_writeBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____writeBuffer_14;
	// System.Boolean Facebook.WitAi.Wit::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_15;
	// System.Boolean Facebook.WitAi.Wit::_isActive
	bool ____isActive_16;
	// System.Byte[] Facebook.WitAi.Wit::_byteDataBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteDataBuffer_17;
	// Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.Wit::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_18;
	// UnityEngine.Coroutine Facebook.WitAi.Wit::_timeLimitCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____timeLimitCoroutine_19;
	// System.Boolean Facebook.WitAi.Wit::_receivedTranscription
	bool ____receivedTranscription_20;
	// System.Single Facebook.WitAi.Wit::_lastWordTime
	float ____lastWordTime_21;
	// Facebook.WitAi.Events.IWitByteDataReadyHandler[] Facebook.WitAi.Wit::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_t2848AE42A61CD9D1D010E8CF40845C489A9A6CB1* ____dataReadyHandlers_22;
	// Facebook.WitAi.Events.IWitByteDataSentHandler[] Facebook.WitAi.Wit::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_tD191E243729C2B08C9EAD9445673C3A683DBF29C* ____dataSentHandlers_23;
	// UnityEngine.Coroutine Facebook.WitAi.Wit::_micInitCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____micInitCoroutine_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, RuntimeObject* ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1__ctor_m5CFBE8EB62AD96BE0AA2420148E2E1A9E36DFE80_gshared (BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;

// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Keys()
inline KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Count()
inline int32_t KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::CopyTo(TKey[],System.Int32)
inline void KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50 (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t, const RuntimeMethod*))KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared)(__this, ___array0, ___index1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_m5CA7C982FE92504CE6387F61D7F5942E0FAE4C2E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Wit::set_RuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wit_set_RuntimeConfiguration_m1A5350CFD57C6598E99C034CC77994B07952DDAA (Wit_t7582060C53BB0428697BD46A2E58C7A814907503* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___value0, const RuntimeMethod* method) ;
// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::get_VoiceEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceService_get_VoiceEvents_m1EF25EC82AED7FA30940ECDAB3C862526DD30188_inline (VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Facebook.WitAi.Wit>()
inline Wit_t7582060C53BB0428697BD46A2E58C7A814907503* Component_GetComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_m28DC00CC8E9365E1A1673B6E48666AF21F947BDA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Wit_t7582060C53BB0428697BD46A2E58C7A814907503* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Facebook.WitAi.Wit>()
inline Wit_t7582060C53BB0428697BD46A2E58C7A814907503* GameObject_AddComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_mCAA84480D202470721075085BCDAE6AE538066BB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Wit_t7582060C53BB0428697BD46A2E58C7A814907503* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Facebook.WitAi.VoiceService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService__ctor_m2BF0D5D8F2123B0921676DC30B533F0F2AE3994C (VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding__ctor_m22F1D7EDB34C2C3349D5678957D925793DAB1D20 (BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sdkInstance0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_m32A41B2A486F2E0315E1BDC636B53782723E8E66 (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___config0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, String_t* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, float, const RuntimeMethod*))AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, int32_t, const RuntimeMethod*))AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, bool, const RuntimeMethod*))AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::.ctor(System.String)
inline void BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80 (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF* __this, String_t* ___className0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1__ctor_m5CFBE8EB62AD96BE0AA2420148E2E1A9E36DFE80_gshared)(__this, ___className0, method);
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_m2E5B706733A4D5A33D3167E388D7FC68B95565AF (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___configuration0, const RuntimeMethod* method) ;
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceSDKListenerBinding_get_VoiceEvents_m71FCB3CCE85DC611F18E05D1CB21FC8CD828B329_inline (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Facebook.WitAi.Events.VoiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_m54EECBAC61AA5F8008D11A66FECD43A8E5464B41 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___voiceEvents0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___listener0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m74E00EC0B16B2996422598D015FF4A929B59850C (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_mCEF14E1BA843825751801970A35069ED94B34216 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_mA000DD248AF9DB80AB7E5A0132FB9C1ED16B07D6 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m4683EC76B9A56D993E540774768B88FD8E79A84A (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m80767C9BF3CEF14CA6CF9D8FF06092379DDF37B1 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m473FE539750900CED4AC7999E13FD4FBFC67D90F (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResponseNode_Parse_m6FFC3E76C1C075E46BC04079BB9AB16693D85E3C (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::Invoke(T0)
inline void UnityEvent_1_Invoke_m3EFA705FA21918CEB5E6451B5CD2092894C5655F (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645 (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, String_t* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, String_t*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>::Invoke(T0)
inline void UnityEvent_1_Invoke_mF0C82AA7629611920EF105131F8849B61974E9EA (UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F* __this, WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F*, WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
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
// System.String[] Oculus.Voice.AppBuiltIns::get_appNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AppBuiltIns_get_appNames_mA443E21286A090816AB6AF8653541F77C9D8B45D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// string[] keys = new string[apps.Keys.Count];
		il2cpp_codegen_runtime_class_init_inline(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2;
		NullCheck(L_0);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_1;
		L_1 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_0, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD(L_1, KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// apps.Keys.CopyTo(keys, 0);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_4 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2;
		NullCheck(L_4);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_5;
		L_5 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_4, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_5);
		KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50(L_5, L_6, 0, KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var);
		// return keys;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		return L_7;
	}
}
// System.Void Oculus.Voice.AppBuiltIns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBuiltIns__cctor_mC1E17E9F9DFAA46895BB50163EF8341F044C6A1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C45DB50527FCFAD456E74EB416B617329505309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591184A69213A4D299171C75373FEABB89BF8937);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC04CC788232484E918569E326AD3839934507B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC140051BF200AB88497170B5004988B2DA52192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string builtInPrefix = "builtin:";
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___builtInPrefix_0 = _stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___builtInPrefix_0), (void*)_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		// private static string modelName = "Built-in Models";
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1 = _stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1), (void*)_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		// public static readonly Dictionary<string, Dictionary<string, string>>
		//     apps = new Dictionary<string, Dictionary<string, string>>
		//     {
		//         {
		//             "Chinese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_zh"},
		//                 {"name", modelName},
		//                 {"lang", "zh"},
		//                 {"clientToken", "3KQH33637TAT7WD4TG7T65SDRO73WZGY"},
		//             }
		//         },
		//         {
		//             "Dutch", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_nl"},
		//                 {"name", modelName},
		//                 {"lang", "nl"},
		//                 {"clientToken", "ZCD6HCNCL6GTJKZ3QKWNKQVEDI4GUL7C"},
		//             }
		//         },
		//         {
		//             "English", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_en"},
		//                 {"name", modelName},
		//                 {"lang", "en"},
		//                 {"clientToken", "HOKEABS7HPIQVSRSVWRPTTV75TQJ5QBP"},
		//             }
		//         },
		//         {
		//             "French", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_fr"},
		//                 {"name", modelName},
		//                 {"lang", "fr"},
		//                 {"clientToken", "7PP7NK2QAH67MREGZV6SB6RIEWAYDNRY"},
		//             }
		//         },
		//         {
		//             "German", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_de"},
		//                 {"name", modelName},
		//                 {"lang", "de"},
		//                 {"clientToken", "7LXOOB4JC7MXPUTTGQHDVQMHGEEJT6LE"},
		//             }
		//         },
		//         {
		//             "Italian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_it"},
		//                 {"name", modelName},
		//                 {"lang", "it"},
		//                 {"clientToken", "KELCNR4DCCPPOCF2RDFS4M6JOCWWIFII"},
		//             }
		//         },
		//         {
		//             "Japanese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ja"},
		//                 {"name", modelName},
		//                 {"lang", "ja"},
		//                 {"clientToken", "TPJGLBBCHJ5F7BVVN5XLEGP6YDQRUE3P"},
		//             }
		//         },
		//         {
		//             "Korean", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ko"},
		//                 {"name", modelName},
		//                 {"lang", "ko"},
		//                 {"clientToken", "NT4WJLL7ACMFBXS4B7W5GRLTKDZQ36R4"},
		//             }
		//         },
		//         {
		//             "Polish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pl"},
		//                 {"name", modelName},
		//                 {"lang", "pl"},
		//                 {"clientToken", "DMDRHGYDYN33D3IKCX5BG5R57EL2IIC4"},
		//             }
		//         },
		//         {
		//             "Portuguese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pt"},
		//                 {"name", modelName},
		//                 {"lang", "pt"},
		//                 {"clientToken", "W4W3BSKL72HZC5MXLILONJUCG732SQQN"},
		//             }
		//         },
		//         {
		//             "Russian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ru"},
		//                 {"name", modelName},
		//                 {"lang", "ru"},
		//                 {"clientToken", "W67HLUWA3MBYVEKRW3VVWUKSNZGAOFBI"},
		//             }
		//         },
		//         {
		//             "Spanish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_es"},
		//                 {"name", modelName},
		//                 {"lang", "es"},
		//                 {"clientToken", "YW7AM5OOVSW5XKGYKFE2S2HLC2WHC3UI"},
		//             }
		//         },
		//         {
		//             "Swedish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_sv"},
		//                 {"name", modelName},
		//                 {"lang", "sv"},
		//                 {"clientToken", "NPE3UJ7Y4NIVTUOZ7QPPAP3TY6FYPXJY"},
		//             }
		//         },
		//         {
		//             "Turkish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_tr"},
		//                 {"name", modelName},
		//                 {"lang", "tr"},
		//                 {"clientToken", "ZCISEDXESLYJOROLNOODCGGPZXHLUAEE"},
		//             }
		//         },
		//     };
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_0, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_1 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_3;
		String_t* L_5 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = L_4;
		NullCheck(L_6);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral591184A69213A4D299171C75373FEABB89BF8937, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_1, _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7, L_7, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_8 = L_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_9, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = L_10;
		String_t* L_12 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_11);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_12, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = L_11;
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_8, _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551, L_14, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_15 = L_8;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_16, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_17, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = L_17;
		String_t* L_19 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_18;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_21, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_15, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, L_21, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_22 = L_15;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_23, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = L_24;
		String_t* L_26 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = L_25;
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_22);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_22, _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4, L_28, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_29 = L_22;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_30, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = L_31;
		String_t* L_33 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = L_32;
		NullCheck(L_34);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_34, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_35, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralFC140051BF200AB88497170B5004988B2DA52192, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_29);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_29, _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014, L_35, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_36 = L_29;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_37 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_37, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_38, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = L_38;
		String_t* L_40 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_39);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_39, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_40, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41 = L_39;
		NullCheck(L_41);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_41, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = L_41;
		NullCheck(L_42);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_42, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_36);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_36, _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2, L_42, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_43 = L_36;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_44, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = L_44;
		NullCheck(L_45);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_45, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = L_45;
		String_t* L_47 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_47, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = L_46;
		NullCheck(L_48);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_48, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = L_48;
		NullCheck(L_49);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_49, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_43);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_43, _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E, L_49, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_50 = L_43;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_51, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_52 = L_51;
		NullCheck(L_52);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_52, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = L_52;
		String_t* L_54 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_53);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_53, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_54, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = L_53;
		NullCheck(L_55);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_55, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_56 = L_55;
		NullCheck(L_56);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_56, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_50, _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62, L_56, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_57 = L_50;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_58, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_59 = L_58;
		NullCheck(L_59);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_59, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = L_59;
		String_t* L_61 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_60);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_60, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_61, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_62 = L_60;
		NullCheck(L_62);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_62, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63 = L_62;
		NullCheck(L_63);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_63, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC04CC788232484E918569E326AD3839934507B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_57);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_57, _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B, L_63, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_64 = L_57;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_65 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_65, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66 = L_65;
		NullCheck(L_66);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_66, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_67 = L_66;
		String_t* L_68 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_67);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_67, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_68, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_69 = L_67;
		NullCheck(L_69);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_69, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_70 = L_69;
		NullCheck(L_70);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_70, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_64);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_64, _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C, L_70, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_71 = L_64;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_72 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_72, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = L_72;
		NullCheck(L_73);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_73, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_74 = L_73;
		String_t* L_75 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_74);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_74, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_75, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_76 = L_74;
		NullCheck(L_76);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_76, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77 = L_76;
		NullCheck(L_77);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_77, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_71);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_71, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, L_77, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_78 = L_71;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_79 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_79, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_80 = L_79;
		NullCheck(L_80);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_80, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_81 = L_80;
		String_t* L_82 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_81);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_81, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_82, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_83 = L_81;
		NullCheck(L_83);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_83, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_84 = L_83;
		NullCheck(L_84);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_84, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_78);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_78, _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31, L_84, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_85 = L_78;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_86 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_86, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_87 = L_86;
		NullCheck(L_87);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_87, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_88 = L_87;
		String_t* L_89 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_88);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_88, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_89, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_90 = L_88;
		NullCheck(L_90);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_90, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_91 = L_90;
		NullCheck(L_91);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_91, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_85);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_85, _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF, L_91, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_92 = L_85;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_93 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_93, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_94 = L_93;
		NullCheck(L_94);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_94, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_95 = L_94;
		String_t* L_96 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_95);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_95, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_96, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_97 = L_95;
		NullCheck(L_97);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_97, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = L_97;
		NullCheck(L_98);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_92);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_92, _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F, L_98, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2), (void*)L_92);
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
// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* AppVoiceExperience_get_RuntimeConfiguration_mA230CDCD1DD79CDB5228FFB0A412EA7E43F232C0 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_0 = __this->___witRuntimeConfiguration_5;
		return L_0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_RuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_RuntimeConfiguration_m84616707444D78F225D0A9E3D03E4D0CA22AB0DA (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___value0, const RuntimeMethod* method) 
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_0 = ___value0;
		__this->___witRuntimeConfiguration_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witRuntimeConfiguration_5), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Active_m390651D974B07FC7986545D805DEDEDDC4673895 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => null != voiceServiceImpl && voiceServiceImpl.Active;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Facebook.WitAi.IVoiceService::get_Active() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_IsRequestActive_mB4603059CD8A43ED20ECBF5B80A98CB157B1DA4E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => null != voiceServiceImpl && voiceServiceImpl.IsRequestActive;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Facebook.WitAi.IVoiceService::get_IsRequestActive() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.AppVoiceExperience::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppVoiceExperience_get_TranscriptionProvider_m8F56136561DEC932BF4DDA39F664EFEDD057E447 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => voiceServiceImpl.TranscriptionProvider;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.IVoiceService::get_TranscriptionProvider() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_TranscriptionProvider_mBE2061B4AA36620BC198CE2D0438B79E23A7429A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => voiceServiceImpl.TranscriptionProvider = value;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void Facebook.WitAi.IVoiceService::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_MicActive_mD58A0B1D1B4268E01257A19AE9DADF263812426E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != voiceServiceImpl && voiceServiceImpl.MicActive;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Facebook.WitAi.IVoiceService::get_MicActive() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_ShouldSendMicData_mC0CD3592B73CE03B2517F57D0BFDACBD5126728C (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool ShouldSendMicData => witRuntimeConfiguration.sendAudioToWit ||
		//                                           null == TranscriptionProvider;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_0 = __this->___witRuntimeConfiguration_5;
		NullCheck(L_0);
		bool L_1 = L_0->___sendAudioToWit_8;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.VoiceService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasPlatformIntegrations => false;
		return (bool)0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m122E8E6EECEA4D3AFE33A27642AFC96E5BF735AA (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Facebook.WitAi.IVoiceService::Activate() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m58B58668F005D2406B6BBDC0093A76A176854528 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(options);
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_1 = ___options0;
		NullCheck(L_0);
		InterfaceActionInvoker1< WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* >::Invoke(8 /* System.Void Facebook.WitAi.IVoiceService::Activate(Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_ActivateImmediately_m2466AE6381C6197FAC1A854FF4D69211961EB78F (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.ActivateImmediately();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Facebook.WitAi.IVoiceService::ActivateImmediately() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_ActivateImmediately_m7DED575C54D423110492A13A869B5F479A356F0A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.ActivateImmediately(options);
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_1 = ___options0;
		NullCheck(L_0);
		InterfaceActionInvoker1< WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* >::Invoke(10 /* System.Void Facebook.WitAi.IVoiceService::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Deactivate_m06734C8C4D6AA23BC95D5ECD09AB569245B32C7E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Deactivate();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Facebook.WitAi.IVoiceService::Deactivate() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_DeactivateAndAbortRequest_m18E7597A4EE81B4BAE32C93DBA64130EB5219FED (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.DeactivateAndAbortRequest();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Facebook.WitAi.IVoiceService::DeactivateAndAbortRequest() */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_mE2A086508A1C9B280022124B85A357506038A859 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(text);
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void Facebook.WitAi.IVoiceService::Activate(System.String) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m082404E6A18565D726D450578611AA954C14477B (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, String_t* ___text0, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___requestOptions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(text, requestOptions);
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		String_t* L_1 = ___text0;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_2 = ___requestOptions1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* >::Invoke(14 /* System.Void Facebook.WitAi.IVoiceService::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Start_m64C17339756F4DD3B80075343E2B75292BF1D77F (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wit_t7582060C53BB0428697BD46A2E58C7A814907503_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wit_t7582060C53BB0428697BD46A2E58C7A814907503* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (HasPlatformIntegrations)
		bool L_0;
		L_0 = AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// IPlatformVoiceService platformImpl = new VoiceSDKImpl();
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_1 = (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)il2cpp_codegen_object_new(VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceSDKImpl__ctor_m5CA7C982FE92504CE6387F61D7F5942E0FAE4C2E(L_1, NULL);
		V_1 = L_1;
		// if (platformImpl.PlatformSupportsWit)
		RuntimeObject* L_2 = V_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Oculus.Voice.Interfaces.IPlatformVoiceService::get_PlatformSupportsWit() */, IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// voiceServiceImpl = platformImpl;
		RuntimeObject* L_4 = V_1;
		__this->___voiceServiceImpl_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_7), (void*)L_4);
		goto IL_002d;
	}

IL_001f:
	{
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5(__this, NULL);
		goto IL_002d;
	}

IL_0027:
	{
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5(__this, NULL);
	}

IL_002d:
	{
		// if (voiceServiceImpl is Wit wit)
		RuntimeObject* L_5 = __this->___voiceServiceImpl_7;
		V_0 = ((Wit_t7582060C53BB0428697BD46A2E58C7A814907503*)IsInstClass((RuntimeObject*)L_5, Wit_t7582060C53BB0428697BD46A2E58C7A814907503_il2cpp_TypeInfo_var));
		Wit_t7582060C53BB0428697BD46A2E58C7A814907503* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// wit.RuntimeConfiguration = witRuntimeConfiguration;
		Wit_t7582060C53BB0428697BD46A2E58C7A814907503* L_7 = V_0;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_8 = __this->___witRuntimeConfiguration_5;
		NullCheck(L_7);
		Wit_set_RuntimeConfiguration_m1A5350CFD57C6598E99C034CC77994B07952DDAA(L_7, L_8, NULL);
	}

IL_0048:
	{
		// voiceServiceImpl.VoiceEvents = VoiceEvents;
		RuntimeObject* L_9 = __this->___voiceServiceImpl_7;
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_10;
		L_10 = VoiceService_get_VoiceEvents_m1EF25EC82AED7FA30940ECDAB3C862526DD30188_inline(__this, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* >::Invoke(4 /* System.Void Facebook.WitAi.IVoiceService::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents) */, IVoiceService_t01DAFEF167D1E0F15D70823D1305A2316BBF1180_il2cpp_TypeInfo_var, L_9, L_10);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_m28DC00CC8E9365E1A1673B6E48666AF21F947BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_mCAA84480D202470721075085BCDAE6AE538066BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl = GetComponent<Wit>();
		Wit_t7582060C53BB0428697BD46A2E58C7A814907503* L_0;
		L_0 = Component_GetComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_m28DC00CC8E9365E1A1673B6E48666AF21F947BDA(__this, Component_GetComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_m28DC00CC8E9365E1A1673B6E48666AF21F947BDA_RuntimeMethod_var);
		__this->___voiceServiceImpl_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_7), (void*)L_0);
		// if (null == voiceServiceImpl)
		RuntimeObject* L_1 = __this->___voiceServiceImpl_7;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// voiceServiceImpl = gameObject.AddComponent<Wit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Wit_t7582060C53BB0428697BD46A2E58C7A814907503* L_3;
		L_3 = GameObject_AddComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_mCAA84480D202470721075085BCDAE6AE538066BB(L_2, GameObject_AddComponent_TisWit_t7582060C53BB0428697BD46A2E58C7A814907503_mCAA84480D202470721075085BCDAE6AE538066BB_RuntimeMethod_var);
		__this->___voiceServiceImpl_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_7), (void*)L_3);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnEnable_mFA904DED2E6436FA7D1223D4B3F0B4A25854188A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if(null == voiceServiceImpl) InitVoiceSDK();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(null == voiceServiceImpl) InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5(__this, NULL);
	}

IL_000e:
	{
		// platformService?.SetRuntimeConfiguration(witRuntimeConfiguration);
		RuntimeObject* L_1 = __this->___platformService_6;
		RuntimeObject* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_3 = __this->___witRuntimeConfiguration_5;
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* >::Invoke(1 /* System.Void Oculus.Voice.Interfaces.IPlatformVoiceService::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration) */, IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var, G_B4_0, L_3);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience__ctor_mBAABF86A9EA449A140B9A3E681EF9105FFF034A2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		VoiceService__ctor_m2BF0D5D8F2123B0921676DC30B533F0F2AE3994C(__this, NULL);
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
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding__ctor_m3001B3D10803F447B38489ABE06384CB11F7D65C (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sdkInstance0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding(AndroidJavaObject sdkInstance) : base(sdkInstance)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___sdkInstance0;
		BaseServiceBinding__ctor_m22F1D7EDB34C2C3349D5678957D925793DAB1D20(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Active => binding.Call<bool>("isActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRequestActive => binding.Call<bool>("isRequestActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool MicActive => binding.Call<bool>("isMicActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BBF15DA29111BB3C382C9D12F9178147D75DF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool PlatformSupportsWit => binding.Call<bool>("platformSupportsWit");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral50BBF15DA29111BB3C382C9D12F9178147D75DF1, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m74E00EC0B16B2996422598D015FF4A929B59850C (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", text);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_mCEF14E1BA843825751801970A35069ED94B34216 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", text);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_mA000DD248AF9DB80AB7E5A0132FB9C1ED16B07D6 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m4683EC76B9A56D993E540774768B88FD8E79A84A (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m80767C9BF3CEF14CA6CF9D8FF06092379DDF37B1 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activateImmediately");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m473FE539750900CED4AC7999E13FD4FBFC67D90F (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activateImmediately");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("deactivate");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_m2E5B706733A4D5A33D3167E388D7FC68B95565AF (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setRuntimeConfig", new VoiceSDKConfigBinding(configuration).ToJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_3 = ___configuration0;
		VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* L_4 = (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB*)il2cpp_codegen_object_new(VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VoiceSDKConfigBinding__ctor_m32A41B2A486F2E0315E1BDC636B53782723E8E66(L_4, L_3, NULL);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA(L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setListener", listener);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_3 = ___listener0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, NULL);
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
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_m32A41B2A486F2E0315E1BDC636B53782723E8E66 (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___config0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKConfigBinding(WitRuntimeConfiguration config)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// configuration = config;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_0 = ___config0;
		__this->___configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_0), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C00B8845F78EF9AAEA64DBD7D11989A4F3E10B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1CE592A302F5E21B6755D287B31734F1E56DA58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject witConfig =
		//     new AndroidJavaObject("com.oculus.voice.sdk.api.WitConfiguration");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralB1CE592A302F5E21B6755D287B31734F1E56DA58, L_0, NULL);
		V_0 = L_1;
		// witConfig.Set("clientAccessToken", configuration.witConfiguration.clientAccessToken);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_3 = __this->___configuration_0;
		NullCheck(L_3);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_4 = L_3->___witConfiguration_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___clientAccessToken_6;
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_2, _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// AndroidJavaObject witRuntimeConfig = new AndroidJavaObject("com.oculus.voice.sdk.api.WitRuntimeConfiguration");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_7, _stringLiteral2C00B8845F78EF9AAEA64DBD7D11989A4F3E10B7, L_6, NULL);
		// witRuntimeConfig.Set("witConfiguration", witConfig);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		NullCheck(L_8);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_8, _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB, L_9, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveVolume", configuration.minKeepAliveVolume);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = L_8;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_11 = __this->___configuration_0;
		NullCheck(L_11);
		float L_12 = L_11->___minKeepAliveVolume_1;
		NullCheck(L_10);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_10, _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102, L_12, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveTimeInSeconds",
		//     configuration.minKeepAliveTimeInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = L_10;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_14 = __this->___configuration_0;
		NullCheck(L_14);
		float L_15 = L_14->___minKeepAliveTimeInSeconds_2;
		NullCheck(L_13);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_13, _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD, L_15, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("minTranscriptionKeepAliveTimeInSeconds",
		//     configuration.minTranscriptionKeepAliveTimeInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = L_13;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_17 = __this->___configuration_0;
		NullCheck(L_17);
		float L_18 = L_17->___minTranscriptionKeepAliveTimeInSeconds_3;
		NullCheck(L_16);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_16, _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1, L_18, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("maxRecordingTime",
		//     configuration.maxRecordingTime);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = L_16;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_20 = __this->___configuration_0;
		NullCheck(L_20);
		float L_21 = L_20->___maxRecordingTime_4;
		NullCheck(L_19);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_19, _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066, L_21, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("soundWakeThreshold",
		//     configuration.soundWakeThreshold);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = L_19;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_23 = __this->___configuration_0;
		NullCheck(L_23);
		float L_24 = L_23->___soundWakeThreshold_5;
		NullCheck(L_22);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_22, _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6, L_24, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("sampleLengthInMs",
		//     configuration.sampleLengthInMs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = L_22;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_26 = __this->___configuration_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___sampleLengthInMs_6;
		NullCheck(L_25);
		AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F(L_25, _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D, L_27, AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var);
		// witRuntimeConfig.Set("micBufferLengthInSeconds",
		//     configuration.micBufferLengthInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = L_25;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_29 = __this->___configuration_0;
		NullCheck(L_29);
		float L_30 = L_29->___micBufferLengthInSeconds_7;
		NullCheck(L_28);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_28, _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6, L_30, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("sendAudioToWit",
		//     configuration.sendAudioToWit);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = L_28;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_32 = __this->___configuration_0;
		NullCheck(L_32);
		bool L_33 = L_32->___sendAudioToWit_8;
		NullCheck(L_31);
		AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15(L_31, _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A, L_33, AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var);
		// return witRuntimeConfig;
		return L_31;
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
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_m5CA7C982FE92504CE6387F61D7F5942E0FAE4C2E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32A52ACC7E14914EF6FB8A46DFEC78E35E23CC27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceSDKImpl() : base(
		//     "com.oculus.voice.sdk.unity.UnityVoiceSDKServiceFragment")
		BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80(__this, _stringLiteral32A52ACC7E14914EF6FB8A46DFEC78E35E23CC27, BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_PlatformSupportsWit_m372E01C4FEBDC063566D099A673EAFC2702A197E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool PlatformSupportsWit => service.PlatformSupportsWit;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_Active_mD70FF7EB6F3FBB20F5FF3F4BAC05929AC7157A6D (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active => service.Active;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_IsRequestActive_mE5EB744C7A66DD53FE4B7B5F1653743462C63091 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRequestActive => service.IsRequestActive;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_MicActive_mDADE398985B2374337F470B77F5D10197CDAEC25 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool MicActive => service.MicActive;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_SetRuntimeConfiguration_mC0918FA50EF8775A49012EC7819253349C796ECD (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* ___configuration0, const RuntimeMethod* method) 
{
	{
		// service.SetRuntimeConfiguration(configuration);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* L_1 = ___configuration0;
		NullCheck(L_0);
		VoiceSDKBinding_SetRuntimeConfiguration_m2E5B706733A4D5A33D3167E388D7FC68B95565AF(L_0, L_1, NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceSDKImpl_get_VoiceEvents_m219BECF56E6198225AB4A6243AE27A9C5D354B4E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// get => eventBinding.VoiceEvents;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_0 = __this->___eventBinding_3;
		NullCheck(L_0);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_1;
		L_1 = VoiceSDKListenerBinding_get_VoiceEvents_m71FCB3CCE85DC611F18E05D1CB21FC8CD828B329_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_VoiceEvents_m7263658123858DE492903346E3F12454304C37EE (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventBinding = new VoiceSDKListenerBinding(value);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = ___value0;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_1 = (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4*)il2cpp_codegen_object_new(VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceSDKListenerBinding__ctor_m54EECBAC61AA5F8008D11A66FECD43A8E5464B41(L_1, L_0, NULL);
		__this->___eventBinding_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventBinding_3), (void*)L_1);
		// service.SetListener(eventBinding);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_2 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_3 = __this->___eventBinding_3;
		NullCheck(L_2);
		VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5(L_2, L_3, NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceSDKImpl_get_TranscriptionProvider_m9D488E3011D9B638A1C4A62696B522F3045A4E54 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = __this->___U3CTranscriptionProviderU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_TranscriptionProvider_m2BAF91D1F24E1EF79E521ED09C995F36FEB2E72C (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTranscriptionProviderU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTranscriptionProviderU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_mBAB11D2BFABAD73C9EEA6B67E845A0963E8BD553 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// service.Activate(text);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_m74E00EC0B16B2996422598D015FF4A929B59850C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_m9798F3239FE38F6986296A126C2099A7C9AAFD2D (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, String_t* ___text0, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___requestOptions1, const RuntimeMethod* method) 
{
	{
		// service.Activate(text, requestOptions);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		String_t* L_1 = ___text0;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_2 = ___requestOptions1;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_mCEF14E1BA843825751801970A35069ED94B34216(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_m5B4850B2D285877E77FEE40F099226C951C418AB (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// service.Activate();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_mA000DD248AF9DB80AB7E5A0132FB9C1ED16B07D6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_m8EEEAD91E9D26043C3605EB27BF3FD4D404E374D (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___requestOptions0, const RuntimeMethod* method) 
{
	{
		// service.Activate(requestOptions);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_1 = ___requestOptions0;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_m4683EC76B9A56D993E540774768B88FD8E79A84A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_ActivateImmediately_m64D4DDF5573057E516D1D939511DFB5719F84A51 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// service.ActivateImmediately();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		VoiceSDKBinding_ActivateImmediately_m80767C9BF3CEF14CA6CF9D8FF06092379DDF37B1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_ActivateImmediately_m33C638C6440CEFCBB28345FF1625C4BB6EEBFFA7 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* ___requestOptions0, const RuntimeMethod* method) 
{
	{
		// service.ActivateImmediately(requestOptions);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* L_1 = ___requestOptions0;
		NullCheck(L_0);
		VoiceSDKBinding_ActivateImmediately_m473FE539750900CED4AC7999E13FD4FBFC67D90F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Deactivate_m2482B0524373AEFFBB3781A998EFB66EABF1BDA3 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// service.Deactivate();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_DeactivateAndAbortRequest_mD696A792F89B36284EA106562440B571FD176E4C (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// service.Deactivate();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71(L_0, NULL);
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
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceSDKListenerBinding_get_VoiceEvents_m71FCB3CCE85DC611F18E05D1CB21FC8CD828B329 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceEvents VoiceEvents => voiceEvents;
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Facebook.WitAi.Events.VoiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_m54EECBAC61AA5F8008D11A66FECD43A8E5464B41 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___voiceEvents0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2246735173FD8FC0191B3D1EBB41CE5659B71DF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceSDKListenerBinding(VoiceEvents voiceEvents) : base(
		//     "com.oculus.assistant.api.unity.dictation.UnityDictationListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral2246735173FD8FC0191B3D1EBB41CE5659B71DF0, NULL);
		// this.voiceEvents = voiceEvents;
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = ___voiceEvents0;
		__this->___voiceEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceEvents_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onResponse_mCD954E5E2AF77EC1AE5C0B3D55C9A76BD6F8EFE8 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3EFA705FA21918CEB5E6451B5CD2092894C5655F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* G_B2_0 = NULL;
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* G_B1_0 = NULL;
	{
		// voiceEvents.OnResponse?.Invoke(WitResponseNode.Parse(response));
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_1 = L_0->___OnResponse_0;
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___response0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4;
		L_4 = WitResponseNode_Parse_m6FFC3E76C1C075E46BC04079BB9AB16693D85E3C(L_3, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m3EFA705FA21918CEB5E6451B5CD2092894C5655F(G_B2_0, L_4, UnityEvent_1_Invoke_m3EFA705FA21918CEB5E6451B5CD2092894C5655F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onError(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onError_mD432206B5CA604BC06413F8ED2638CBDB4F576BA (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* G_B2_0 = NULL;
	WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* G_B1_0 = NULL;
	{
		// voiceEvents.OnError?.Invoke(error, message);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* L_1 = L_0->___OnError_1;
		WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___error0;
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645(G_B2_0, L_3, L_4, UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicLevelChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicLevelChanged_m43C06324CBCBD1C2692A9C72DB61113A0040999B (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, float ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* G_B2_0 = NULL;
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* G_B1_0 = NULL;
	{
		// voiceEvents.OnMicLevelChanged?.Invoke(level);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_1 = L_0->___OnMicLevelChanged_4;
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		float L_3 = ___level0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(G_B2_0, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCreated_m7808F18247655B82620251AFD14640CE80C39D54 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mF0C82AA7629611920EF105131F8849B61974E9EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* G_B2_0 = NULL;
	WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* G_B1_0 = NULL;
	{
		// voiceEvents.OnRequestCreated?.Invoke(null);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* L_1 = L_0->___OnRequestCreated_5;
		WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mF0C82AA7629611920EF105131F8849B61974E9EA(G_B2_0, (WitRequest_t9EBE9541762EBC83F63DE8E549A47CD273F212A6*)NULL, UnityEvent_1_Invoke_mF0C82AA7629611920EF105131F8849B61974E9EA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStartListening_mE352EEB55023FF09AF82AB90FE1E9FA5549EA70F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnStartListening?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnStartListening_6;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListening_m23EDEFA1AE898EA58CFE76353747226630EF112D (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnStoppedListening?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnStoppedListening_7;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListeningDueToInactivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListeningDueToInactivity_mB660F475DFE6F17EA3077FA99EF6642DFABA617E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnStoppedListeningDueToInactivity?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnStoppedListeningDueToInactivity_8;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListeningDueToTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListeningDueToTimeout_mCF4378F41CA74CE417A570A6ABBA601E05F7EDA5 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnStoppedListeningDueToTimeout?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnStoppedListeningDueToTimeout_9;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListeningDueToDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListeningDueToDeactivation_mBAA592CED376AE55D8F4A83F2EFA7A442997A3BB (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnStoppedListeningDueToDeactivation?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnStoppedListeningDueToDeactivation_10;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicDataSent_m282D8BA4BFC3A94A9FD04385FB284CB976499B47 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnMicDataSent?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnMicDataSent_11;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMinimumWakeThresholdHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMinimumWakeThresholdHit_m5CE35BC05074FA0E58D2D919517CB4B8AA8DBCDF (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// voiceEvents.OnMinimumWakeThresholdHit?.Invoke();
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0->___OnMinimumWakeThresholdHit_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialTranscription_mBFD041B8FBC8A77436A557355259313BEAF5BFA9 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* G_B2_0 = NULL;
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* G_B1_0 = NULL;
	{
		// voiceEvents.OnPartialTranscription?.Invoke(transcription);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_1 = L_0->___OnPartialTranscription_13;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_3, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onFullTranscription_mCAFD20DB9F2788E0279048D6B8EFD67BA893A7D6 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* G_B2_0 = NULL;
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* G_B1_0 = NULL;
	{
		// voiceEvents.OnFullTranscription?.Invoke(transcription);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		NullCheck(L_0);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_1 = L_0->___OnFullTranscription_14;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_3, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceService_get_VoiceEvents_m1EF25EC82AED7FA30940ECDAB3C862526DD30188_inline (VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* __this, const RuntimeMethod* method) 
{
	{
		// get => events;
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___events_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* VoiceSDKListenerBinding_get_VoiceEvents_m71FCB3CCE85DC611F18E05D1CB21FC8CD828B329_inline (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceEvents VoiceEvents => voiceEvents;
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_0 = __this->___voiceEvents_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
