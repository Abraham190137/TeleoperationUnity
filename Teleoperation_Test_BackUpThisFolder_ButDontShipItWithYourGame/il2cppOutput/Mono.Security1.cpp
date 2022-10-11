﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F;
// Mono.Security.Interface.Alert
struct Alert_t901529B47B3E318E68713A3E328935BC768B23F3;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD;
// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2;
// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// System.Security.Cryptography.CspParameters
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Mono.Security.Interface.ICertificateValidator
struct ICertificateValidator_t8ECF48A37EC708C8A16305F9B6B44C50676AA854;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
// System.Security.Cryptography.KeySizes
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4;
// Mono.Security.Cryptography.MD2
struct MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F;
// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6;
// Mono.Security.Cryptography.MD4
struct MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0;
// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B;
// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372;
// System.Security.Cryptography.RIPEMD160
struct RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0;
// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Security.Cryptography.SHA384
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631;
// System.Security.Cryptography.SHA512
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Mono.Security.Interface.TlsException
struct TlsException_tC2DD153B101F6116975F36613D7F7C009C5664E3;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// Mono.Security.X509.X509Chain
struct X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534;
// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE;
// Mono.Security.PKCS7/SignedData
struct SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505;
// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Alert_t901529B47B3E318E68713A3E328935BC768B23F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456_11_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19;
IL2CPP_EXTERN_C String_t* _stringLiteral00FAA6DAACAA311CCE49C5E1E1204A7130351314;
IL2CPP_EXTERN_C String_t* _stringLiteral04F339E2067485077633DE2026F6468EC3550949;
IL2CPP_EXTERN_C String_t* _stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7;
IL2CPP_EXTERN_C String_t* _stringLiteral08325EBD3F98F56ECBD5A88334753C82A59BB0EB;
IL2CPP_EXTERN_C String_t* _stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2;
IL2CPP_EXTERN_C String_t* _stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD;
IL2CPP_EXTERN_C String_t* _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
IL2CPP_EXTERN_C String_t* _stringLiteral14766905080A42A4E1B372AB68C4494ECC1FEE82;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5;
IL2CPP_EXTERN_C String_t* _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31;
IL2CPP_EXTERN_C String_t* _stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46;
IL2CPP_EXTERN_C String_t* _stringLiteral3050B959B65E7987322E043FCD280E4871419178;
IL2CPP_EXTERN_C String_t* _stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04;
IL2CPP_EXTERN_C String_t* _stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC;
IL2CPP_EXTERN_C String_t* _stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88;
IL2CPP_EXTERN_C String_t* _stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741;
IL2CPP_EXTERN_C String_t* _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral4250A23553CC186AEFAD328A160DFF786585B4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral453C5BAA19765F31DEA040CBE3D9E279F3C7FA6E;
IL2CPP_EXTERN_C String_t* _stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
IL2CPP_EXTERN_C String_t* _stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28;
IL2CPP_EXTERN_C String_t* _stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7;
IL2CPP_EXTERN_C String_t* _stringLiteral55DAB60CD344FFD34E16292DA4DECD967CD55236;
IL2CPP_EXTERN_C String_t* _stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329;
IL2CPP_EXTERN_C String_t* _stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral6B188360294349CD1D94164DB9AE487200C503EE;
IL2CPP_EXTERN_C String_t* _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3;
IL2CPP_EXTERN_C String_t* _stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB;
IL2CPP_EXTERN_C String_t* _stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117;
IL2CPP_EXTERN_C String_t* _stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93;
IL2CPP_EXTERN_C String_t* _stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341;
IL2CPP_EXTERN_C String_t* _stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098;
IL2CPP_EXTERN_C String_t* _stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08;
IL2CPP_EXTERN_C String_t* _stringLiteral85F02773B30D7E03E02058A46638441028F4AD00;
IL2CPP_EXTERN_C String_t* _stringLiteral8E264486DFD68F8D2AC59C629355E7337C6392BF;
IL2CPP_EXTERN_C String_t* _stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910;
IL2CPP_EXTERN_C String_t* _stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D;
IL2CPP_EXTERN_C String_t* _stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E;
IL2CPP_EXTERN_C String_t* _stringLiteralA006FCB4201934135FE5378132B66888869CBF16;
IL2CPP_EXTERN_C String_t* _stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC;
IL2CPP_EXTERN_C String_t* _stringLiteralA25B69026A70D534621843E13AD9FBEBC01B0B2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D2FB8CDF52221630110111C55A14E4431BD24A;
IL2CPP_EXTERN_C String_t* _stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2;
IL2CPP_EXTERN_C String_t* _stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465;
IL2CPP_EXTERN_C String_t* _stringLiteralACA7E3D2770ADAB061CBEB4B68128A012D6BA80C;
IL2CPP_EXTERN_C String_t* _stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralB274F19DEB1DAD13CEA91A0840C0D4A2A4B61D9E;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB6C0410AEE87244E9E7DBAB19109E78C6FA05884;
IL2CPP_EXTERN_C String_t* _stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855;
IL2CPP_EXTERN_C String_t* _stringLiteralBAADE1C63842D962BC37E4B07F0B56E23A26C022;
IL2CPP_EXTERN_C String_t* _stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0;
IL2CPP_EXTERN_C String_t* _stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD;
IL2CPP_EXTERN_C String_t* _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
IL2CPP_EXTERN_C String_t* _stringLiteralD252B930E829E7C8274E97CAA92250DE3E9543A8;
IL2CPP_EXTERN_C String_t* _stringLiteralD46621FCDFA78A57FA39EF3174253B2BCFCA7D37;
IL2CPP_EXTERN_C String_t* _stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6;
IL2CPP_EXTERN_C String_t* _stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2554AA2E0C9DC24A5C7C498FC582750C82FEF05;
IL2CPP_EXTERN_C String_t* _stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410;
IL2CPP_EXTERN_C String_t* _stringLiteralE7F2002E39D5228A8496A82B1F7CAC32E1BD0715;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B67B27E4DD10700B0726FC3E0A89E2CDBB84C8;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS1_Encode_v15_mE68AC16F70E21E3961689BDC50F35982B014EAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS1_HashNameFromOid_mB154086B9DBD3A7A261B29E356577283BD96EF6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeDSA_mD376BC5F172B6308F4D5DE9519FE8799328D02E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeRSA_m82CA806E057F3381929C3A2B1CCE85F813B8685F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Encode_mE4EDCBEED688E2625A19F871FABAB9A9C5D93CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAManaged_EncryptValue_mAED1DAF6891C6F20546DD23272193471BB495242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAManaged_ExportParameters_mD63F6ED165F8CA27D9F2BBA4C7FDD232D6C2A53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAManaged_get_KeySize_m17BA4753AA6967ADFBEBF49035158532F23DB7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist_2;
};

// Mono.Security.Interface.Alert
struct Alert_t901529B47B3E318E68713A3E328935BC768B23F3  : public RuntimeObject
{
	// Mono.Security.Interface.AlertLevel Mono.Security.Interface.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Interface.AlertDescription Mono.Security.Interface.Alert::description
	uint8_t ___description_1;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_1;
};

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD  : public RuntimeObject
{
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileblock_0;
	// System.IO.Stream Mono.Security.Authenticode.AuthenticodeBase::fs
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::pe64
	bool ___pe64_8;
};

// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08  : public RuntimeObject
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_1;
};

struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields
{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___rng_3;
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t676AC22DA6332E9936696ECC97197AB7B1BC7252  : public RuntimeObject
{
};

// System.Security.Cryptography.CspParameters
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Security.Cryptography.KeySizes
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.KeySizes::m_minSize
	int32_t ___m_minSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::m_maxSize
	int32_t ___m_maxSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::m_skipSize
	int32_t ___m_skipSize_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E  : public RuntimeObject
{
};

// Mono.Security.Interface.MonoTlsProviderFactory
struct MonoTlsProviderFactory_tCB12D9DF24B3A0006C0DB65F134BF58C8A6CFC96  : public RuntimeObject
{
};

// Mono.Security.Cryptography.PKCS1
struct PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79  : public RuntimeObject
{
};

struct PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields
{
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___emptySHA512_3;
};

// Mono.Security.Cryptography.PKCS8
struct PKCS8_tA7AAE6C385047C3A598EFB9AEFDCC0B16FD3BB30  : public RuntimeObject
{
};

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_tDB9CA9A8AD178FFA67DA3B23F4C3E76D6B4F8F20  : public RuntimeObject
{
};

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372  : public RuntimeObject
{
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
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

// Mono.Security.X509.X509Chain
struct X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21  : public RuntimeObject
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;
};

// Mono.Math.BigInteger/Kernel
struct Kernel_t3E9C89E842E791BDCEC06BE4D7788BC552315ED2  : public RuntimeObject
{
};

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF  : public RuntimeObject
{
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___constant_1;
};

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE  : public RuntimeObject
{
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___content_1;
};

// Mono.Security.PKCS7/SignedData
struct SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B  : public RuntimeObject
{
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;
};

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505  : public RuntimeObject
{
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___authenticatedAttributes_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___unauthenticatedAttributes_3;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature_4;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serial_6;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ski_7;
};

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02  : public RuntimeObject
{
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_3;
};

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354  : public RuntimeObject
{
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_3;
};

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE  : public RuntimeObject
{
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Mono.Security.Interface.TlsProtocols>
struct Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 
{
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Mono.Security.Cryptography.MD2
struct MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// Mono.Security.Cryptography.MD4
struct MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.RIPEMD160
struct RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.SHA384
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Security.Cryptography.SHA512
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175  : public PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671__padding[18];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61__padding[3132];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7__padding[9];
	};
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
	__StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61 ___25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_1;
	// System.Int64 <PrivateImplementationDetails>::290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
	int64_t ___290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3C0C410618682C4DF0474E034114CC8E562F05A512B521AC367571017BDFA75D
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___3C0C410618682C4DF0474E034114CC8E562F05A512B521AC367571017BDFA75D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::44F5B1A2C48314502ACCBF186D1A2F9F7F176825898F32F1A2047B956194F174
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___44F5B1A2C48314502ACCBF186D1A2F9F7F176825898F32F1A2047B956194F174_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
	__StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5 ___4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
	__StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776 ___533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329
	__StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB ___55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::59BE5A634187B8A57216EFF5371A47732C05744B1C1A0A6382A6D5622C9FFDCE
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___59BE5A634187B8A57216EFF5371A47732C05744B1C1A0A6382A6D5622C9FFDCE_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456
	__StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3 ___5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::5F8C6B3C66B972606D85E7651F67ADBD02E8316876884674E8328FA710747E5B
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___5F8C6B3C66B972606D85E7651F67ADBD02E8316876884674E8328FA710747E5B_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::60C6ED13AF98DBFEEDA8F8197FFFCC349BB04395CC81DF0D477CBC57BF5B398B
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 ___60C6ED13AF98DBFEEDA8F8197FFFCC349BB04395CC81DF0D477CBC57BF5B398B_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 ___64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7_14;
	// System.Int64 <PrivateImplementationDetails>::6772A9B8BF207A3CFE6EE68769D6985B69522183F24A2A3D41BC3B4602953426
	int64_t ___6772A9B8BF207A3CFE6EE68769D6985B69522183F24A2A3D41BC3B4602953426_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6
	__StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7 ___684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::796E63069E193A008CB4E85573AA1FE53C5F4E58B42A7F61FD0EEE1D89B5120B
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___796E63069E193A008CB4E85573AA1FE53C5F4E58B42A7F61FD0EEE1D89B5120B_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE_20;
	// System.Int64 <PrivateImplementationDetails>::992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24
	int64_t ___992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047
	__StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671 ___9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::B1E34F4A11EE411B83415EF0B252A0B2BBCFCAC2E592865E09C12E4252C93A75
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___B1E34F4A11EE411B83415EF0B252A0B2BBCFCAC2E592865E09C12E4252C93A75_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::C92FAD7F348A682E7D5B7E74C76B5D019174EE7BC87545B25A1FDD49FBCC2D0B
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___C92FAD7F348A682E7D5B7E74C76B5D019174EE7BC87545B25A1FDD49FBCC2D0B_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::FB6D7301FFDCB5FBA5807A19B4F0606947897C1105240B6BBA815352DBBE2064
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___FB6D7301FFDCB5FBA5807A19B4F0606947897C1105240B6BBA815352DBBE2064_28;
};

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2  : public AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD
{
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_9;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::rawdata
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata_10;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash_11;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___coll_12;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___signedHash_13;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___timestamp_14;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___signingCertificate_15;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_16;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_17;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_18;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___entry_19;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___signerChain_20;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___timestampChain_21;
};

// Mono.Security.Interface.CipherSuiteCode
struct CipherSuiteCode_t6117A4432DFD9B03F46C93527A561503E94071B3 
{
	// System.UInt16 Mono.Security.Interface.CipherSuiteCode::value__
	uint16_t ___value___2;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6  : public MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F
{
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x_8;
};

struct MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_StaticFields
{
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PI_SUBST_9;
};

// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5  : public MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0
{
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___digest_8;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa_8;
};

struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;
};

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* ___KeyGenerated_14;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356  : public RuntimeObject
{
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534* ___extensions_21;
};

struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_StaticFields
{
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0  : public RuntimeObject
{
	// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::<RemoteCertificateValidationCallback>k__BackingField
	MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
	// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::<ClientCertificateSelectionCallback>k__BackingField
	MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::<CertificateValidationTime>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CCertificateValidationTimeU3Ek__BackingField_2;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CTrustAnchorsU3Ek__BackingField_3;
	// System.Object Mono.Security.Interface.MonoTlsSettings::<UserSettings>k__BackingField
	RuntimeObject* ___U3CUserSettingsU3Ek__BackingField_4;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<CertificateSearchPaths>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CCertificateSearchPathsU3Ek__BackingField_5;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<SendCloseNotify>k__BackingField
	bool ___U3CSendCloseNotifyU3Ek__BackingField_6;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<ClientCertificateIssuers>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CClientCertificateIssuersU3Ek__BackingField_7;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<DisallowUnauthenticatedCertificateRequest>k__BackingField
	bool ___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8;
	// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::<EnabledProtocols>k__BackingField
	Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___U3CEnabledProtocolsU3Ek__BackingField_9;
	// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::<EnabledCiphers>k__BackingField
	CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___U3CEnabledCiphersU3Ek__BackingField_10;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::cloned
	bool ___cloned_11;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertName
	bool ___checkCertName_12;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_13;
	// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::useServicePointManagerCallback
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___useServicePointManagerCallback_14;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::skipSystemValidators
	bool ___skipSystemValidators_15;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::callbackNeedsChain
	bool ___callbackNeedsChain_16;
	// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::certificateValidator
	RuntimeObject* ___certificateValidator_17;
};

struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields
{
	// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::defaultSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___defaultSettings_18;
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

// Mono.Security.Interface.TlsException
struct TlsException_tC2DD153B101F6116975F36613D7F7C009C5664E3  : public Exception_t
{
	// Mono.Security.Interface.Alert Mono.Security.Interface.TlsException::alert
	Alert_t901529B47B3E318E68713A3E328935BC768B23F3* ___alert_18;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3  : public MulticastDelegate_t
{
};

// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B  : public MulticastDelegate_t
{
};

// System.Security.SecurityException
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_18;
};

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03  : public RuntimeArray
{
	ALIGN_FIELD (8) KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* m_Items[1];

	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
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
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* m_Items[1];

	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object Mono.Net.Security.NoReflectionHelper::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NoReflectionHelper_GetProvider_m07746C3FA62A325DCC22169E40CC5353A93F2A23 (const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings__ctor_mE939325F3FC3A8950048CD299F395C8C823EA925 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::get_DefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_get_DefaultSettings_m1A98FFBA09E1F2A23F128090959A396A353F4297 (const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_Clone_mC4F9A27889ADD0B275018B32BCDA67C30865EA7D (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::.ctor(Mono.Security.Interface.MonoTlsSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings__ctor_m93F7300159A30C4B08C4A9A9B0C0CAA6B16E0D6F (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___other0, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::get_RemoteCertificateValidationCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___value0, const RuntimeMethod* method) ;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::get_ClientCertificateSelectionCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UseServicePointManagerCallback_mE3EBA2F2886B024A4ACC303EE792190A5784E18B_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) ;
// System.Object Mono.Security.Interface.MonoTlsSettings::get_UserSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MonoTlsSettings_get_UserSettings_m9ADCEFD59E6429580D053F5AC0AF492B59353920_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_UserSettings(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UserSettings_mE1E6ED54BB439AE8012FD17D7230515CAB11D55D_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::get_EnabledProtocols()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 MonoTlsSettings_get_EnabledProtocols_m6368286BF3E5703DB56F0EDE7B6AD2EF9C98D4C8_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_EnabledProtocols(System.Nullable`1<Mono.Security.Interface.TlsProtocols>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledProtocols_m41991C8F073B85156818A906815AC4AE5623E77D_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___value0, const RuntimeMethod* method) ;
// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::get_EnabledCiphers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* MonoTlsSettings_get_EnabledCiphers_m7BD72B78EF53FAF51FEEBF5B3657187EC876394A_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_EnabledCiphers(Mono.Security.Interface.CipherSuiteCode[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledCiphers_mA89F7C73A29959710230593DCC689F4B9860156A_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::get_CertificateValidationTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC MonoTlsSettings_get_CertificateValidationTime_mB7E248DE19CACA783A465F59859729C726DF2F9E_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_CertificateValidationTime(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateValidationTime_mE632C0A1BAB7608158B8EF05D2122B87AB6C34A6_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Interface.MonoTlsSettings::get_SendCloseNotify()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_SendCloseNotify_m1D35BCF28142455EC9CDF16CA36A8DEF57B05625_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_SendCloseNotify(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_SendCloseNotify_m903943162225A7267CA3AD1E1E6E76EA71BCC5BF_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String[] Mono.Security.Interface.MonoTlsSettings::get_ClientCertificateIssuers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_ClientCertificateIssuers_m6FB58C63262D146231256A969DC2F3B60CE5C498_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_ClientCertificateIssuers(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateIssuers_m0866718DAECFD44FC53370D23AB4C789CE0759B8_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Interface.MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_DisallowUnauthenticatedCertificateRequest_m15B7CAB13F2301D201AAD092DF2FCB49366ABDF6_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_DisallowUnauthenticatedCertificateRequest_mCC9D044ACAD032758F91CC5A3AD1E69F8C5C7FE4_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::get_TrustAnchors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* MonoTlsSettings_get_TrustAnchors_m4CA73EEBF73B4344C5334F3BC5BBFE1BC27BC7AE_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_mE486AD558BE6F0D8FD89AB88DE922DFA684C4AA7 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_TrustAnchors(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_TrustAnchors_m08A22767288F1FB5AF812D0FDE8ACCDA47116661_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) ;
// System.String[] Mono.Security.Interface.MonoTlsSettings::get_CertificateSearchPaths()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.MonoTlsSettings::set_CertificateSearchPaths(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateSearchPaths_mD7846BCF7B9292F85FEF0BE4A671779AD6C9AC32_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.Alert::.ctor(Mono.Security.Interface.AlertDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Alert__ctor_mEF460A440F5C6CBD4B90FB0CD2665A73BFCE345E (Alert_t901529B47B3E318E68713A3E328935BC768B23F3* __this, uint8_t ___description0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Interface.TlsException::.ctor(Mono.Security.Interface.Alert,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TlsException__ctor_m343EBA01616A2B8649875A19BE4E56BBF46C6D81 (TlsException_tC2DD153B101F6116975F36613D7F7C009C5664E3* __this, Alert_t901529B47B3E318E68713A3E328935BC768B23F3* ___alert0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC (uint8_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed__ctor_m4E661935AEFB98EDCB3EEFE7D6EECAD10C807A2B (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2__ctor_m490777410D02CD92B398D20C6A2DAE7448A00E8B (MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed_MD2Transform_mCA2AD9EF038AC46E69F4726153B9C0DC03FC09D3 (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD2Managed_Padding_m661705CFE5C0683685E84E1CD503326477C7138F (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, int32_t ___nLength0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed__ctor_m89BE94F7DEB019FA53E6B1F46DCFB6B4CA36CD1C (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4__ctor_m0E07C929BDAF3BB0CFD4EC360D22849566538CBB (MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::MD4Transform(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_MD4Transform_m3BEBC5DA2F365EA60233EB3849D6B670AF44835A (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::Encode(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_Encode_m1E02CBE5A0E99DFF36299CCEAC13F92124422D55 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___input1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.MD4Managed::Padding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD4Managed_Padding_mD7BB9A7A7F78490A4B8EC89A21ED240CB85E39F4 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, int32_t ___nLength0, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_F_mD8312B8925BE2A23E1E9B1A13054A95D815F06C4 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::ROL(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_ROL_mAEE08B95D3EA8EB7EF09EB7CC1E97CF6F3E1F31F (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint8_t ___n1, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_G_mCCB055CECFE7296853DF7DB9336A670549C8423A (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.Cryptography.MD4Managed::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_H_mA7897D3B979E6627EB9A44E6FB6C894D4B338910 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::Decode(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_Decode_m01D0E808B7F05B50EC6A1B146F5BE6AB909DA396 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___output0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::FF(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::GG(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.MD4Managed::HH(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_OS2IP_mA051090D7B03C2052FA7B7F6419376D33C438A65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_RSAVP1_m116E9A26C499655F19805E3A878A21380431B0F6 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_I2OSP_m09188E6F6B2F1875A5AD568F5DA5A7517755715C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_Encode_v15_mE68AC16F70E21E3961689BDC50F35982B014EAAD (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue1, int32_t ___emLength2, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Compare_m2191E9428696E154E5B525C0023A0E6452BCBAB8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array21, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConfig_MapNameToOID_m93A1FE1104368BC4032B463DFB51BFBD17F522B6 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConfig_EncodeOID_m7A7B0C0CB32CC54A78BCFFB921BBA172FF21C321 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5FD260C639BDBF6B570A90B23653DE3779848418 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Mono.Security.Cryptography.PKCS1::HashNameFromOid(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PKCS1_HashNameFromOid_mB154086B9DBD3A7A261B29E356577283BD96EF6A (String_t* ___oid0, bool ___throwOnError1, const RuntimeMethod* method) ;
// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.PKCS1::CreateFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E (String_t* ___name0, const RuntimeMethod* method) ;
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F* MD2_Create_m8D8916FDE8D3D1610CD85450B021F880E7E27550 (const RuntimeMethod* method) ;
// Mono.Security.Cryptography.MD4 Mono.Security.Cryptography.MD4::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0* MD4_Create_mCB4921FC30437A53D26E6BFA45D5D31F9F2F6014 (const RuntimeMethod* method) ;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mEA05E397A9E93DDB815D44FF4204495BA328C1C9 (const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m6F713539D55576456BDF91B7BFC7103ED8CB766C (const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_mCF8D7EB52BAB85B20EAE61668D40DDF0CE3EC2E8 (const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA384 System.Security.Cryptography.SHA384::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* SHA384_Create_m3F096EC40352F7BF53607B54D7558FA82DF9CFB9 (const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA512 System.Security.Cryptography.SHA512::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* SHA512_Create_mA731C5882C5EF8426A1F4CAE82208B403BA5A0D6 (const RuntimeMethod* method) ;
// System.Security.Cryptography.RIPEMD160 System.Security.Cryptography.RIPEMD160::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0* RIPEMD160_Create_mAAE3C6A5E5E5C0B15360F8A525BBD75D9DD9860D (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m22D9C0E05AA5534D7874D9779D81BA12CB675862 (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41 (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_RemoveLeadingZero_mCFBEBB4A2B8B6BF60A07951E042D5C8524F8E55A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bigInt0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bigInt0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* RSA_Create_m15ED8FDC27DC83C862944A3CF7BCB6FB5BC13017 (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CspParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645 (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___parameters0, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromUnsignedBigInteger(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___big0, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* DSA_Create_mCF142F0B74319A36B19AE3817F9C47FB306A9E21 (const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Encode_m65BED66F892EB07E6CA404094D13BACB167496C4 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Encode_m3396C4C782EF8EA952C7DE98B570E25CE0D4E062 (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_m3ECE03751BC9620B544DA66B5F0B63DE21A27346 (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___format0, String_t* ___insert1, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_mE231E160F0541E832A29C009CD95AFF578E51918 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* RandomNumberGenerator_Create_mA8AC78824FF028898D2CEA52AF9B5BE6D6081009 (const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m9A470D9CBF2F909B72C2A463DD2BA95BA8B6E9B8 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_mC9FD969A9C89A836300989CC0A3B20E40025D8BE (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, int32_t ___keySize0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104 (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* __this, int32_t ___minSize0, int32_t ___maxSize1, int32_t ___skipSize2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::set_KeySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricAlgorithm_set_KeySize_mD1671D252CCA9F1E78F865817F4F13B157BDB5AD (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E (uint32_t ___value0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GeneratePseudoPrime_mB8FFD10652E0D48BECE2AF33F7B29B64A0BC89E1 (int32_t ___bits0, const RuntimeMethod* method) ;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___ui1, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Mono.Math.BigInteger::BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m6B49D00910D0474566294F331B8E2959414C87C7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC (int32_t ___value0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_inline (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsymmetricAlgorithm_get_KeySize_m82ADFD22F46E442C6564C94D45101A4B43A7296D_inline (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_GenerateKeyPair_m3E0EB3C2ADA16EE8FE2A8AE7071333CB6795F55D (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___exp0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___value0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, bool ___writable1, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::ProcessFirstBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m2CD7CCD229D8F3DDFF65B3A064F87756C3A1AFDF (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt16 Mono.Security.BitConverterLE::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverterLE_ToUInt16_mCEF75C82E29791EE2719AC882211226BFCC84021 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.BitConverterLE::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverterLE_ToUInt32_mDADBC5CAD1DE74FD9A0611F70C4C3F01F66BEAA0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.X509Chain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, String_t* ___filename0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m7D3DD72DA482A68007DB183975E3F649EEE308CD (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m4609283D3F9F231C0B5156FAE7C2DCF89A3AD7A6 (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* ___sd0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___calculatedMessageDigest1, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___ha2, const RuntimeMethod* method) ;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8 (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7 (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56 (X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, String_t* ___issuer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serial1, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___x5092, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbHash0, String_t* ___str1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbSignature2, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___collection0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___leaf0, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_mDB114E56EC2F9D5820B2F48A00CF14972B3BCCED (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___cs0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature1, const RuntimeMethod* method) ;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ASN1Convert_ToDateTime_mFC0728584C74F8A86DCB36EA9D076805D8769C26 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___time0, const RuntimeMethod* method) ;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* HashAlgorithm_Create_mC9DE26E90D5910F717146015C772E10A2A611A57 (String_t* ___hashName0, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Verify_v15_m43A88872056E2CC8A5B15534134EC647E246097E (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature3, bool ___tryNonStandardEncoding4, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.X509Chain::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___ui0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, uint32_t ___ui1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___small1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___sign0, uint32_t ___len1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___n1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB (const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5 (int32_t ___bits0, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___rng1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___bitNum0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___bitNum0, const RuntimeMethod* method) ;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___radix0, String_t* ___characterSet1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, uint32_t ___ui1, const RuntimeMethod* method) ;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___radix0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___k1, const RuntimeMethod* method) ;
// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___small1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___x0, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___b1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___len1, const RuntimeMethod* method) ;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___modulus1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___b1, const RuntimeMethod* method) ;
// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method) ;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, uint32_t ___b0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___exp1, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB (int32_t ___bits0, const RuntimeMethod* method) ;
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___bitNum0, const RuntimeMethod* method) ;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::Incr2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_Multicast(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* currentDelegate = reinterpret_cast<MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_Open(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_OpenStaticInvoker(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_ClosedStaticInvoker(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3);
}
// System.Void Mono.Security.Interface.MonoLocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoLocalCertificateSelectionCallback__ctor_mCA81824D698BD5808E501A9AC4DA99758B69D3FC (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE_Multicast;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Interface.MonoLocalCertificateSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MonoLocalCertificateSelectionCallback_Invoke_m32D010A24184A7BEEE6191B19F04E2E8AC8C3CEE (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, String_t* ___targetHost0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers3, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___targetHost0, ___localCertificates1, ___remoteCertificate2, ___acceptableIssuers3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Interface.MonoTlsProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsProvider__ctor_m65BF846CE616D13609A5EFB2F42AE03A38E5CB8D (MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* __this, const RuntimeMethod* method) 
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
// Mono.Security.Interface.MonoTlsProvider Mono.Security.Interface.MonoTlsProviderFactory::GetProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* MonoTlsProviderFactory_GetProvider_m78A0B860DB25698EE7FB098ADA9BE356D4476567 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = NoReflectionHelper_GetProvider_m07746C3FA62A325DCC22169E40CC5353A93F2A23(NULL);
		return ((MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E*)CastclassClass((RuntimeObject*)L_0, MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E_il2cpp_TypeInfo_var));
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
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::get_RemoteCertificateValidationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = __this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___value0, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = ___value0;
		__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::get_ClientCertificateSelectionCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = __this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___value0, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = ___value0;
		__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::get_UseServicePointManagerCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 MonoTlsSettings_get_UseServicePointManagerCallback_m11F6CF11F844ED2F6D54497CBAB18E04E6AFD754 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___useServicePointManagerCallback_14;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UseServicePointManagerCallback_mE3EBA2F2886B024A4ACC303EE792190A5784E18B (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___useServicePointManagerCallback_14 = L_0;
		return;
	}
}
// System.Boolean Mono.Security.Interface.MonoTlsSettings::get_CallbackNeedsCertificateChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_CallbackNeedsCertificateChain_m02260798D928BDA7F6D9A2356B7CE688650BF176 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___callbackNeedsChain_16;
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::get_CertificateValidationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC MonoTlsSettings_get_CertificateValidationTime_mB7E248DE19CACA783A465F59859729C726DF2F9E (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CCertificateValidationTimeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_CertificateValidationTime(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateValidationTime_mE632C0A1BAB7608158B8EF05D2122B87AB6C34A6 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CCertificateValidationTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::get_TrustAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* MonoTlsSettings_get_TrustAnchors_m4CA73EEBF73B4344C5334F3BC5BBFE1BC27BC7AE (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CTrustAnchorsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_TrustAnchors(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_TrustAnchors_m08A22767288F1FB5AF812D0FDE8ACCDA47116661 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___value0;
		__this->___U3CTrustAnchorsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrustAnchorsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object Mono.Security.Interface.MonoTlsSettings::get_UserSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoTlsSettings_get_UserSettings_m9ADCEFD59E6429580D053F5AC0AF492B59353920 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CUserSettingsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_UserSettings(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UserSettings_mE1E6ED54BB439AE8012FD17D7230515CAB11D55D (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUserSettingsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserSettingsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String[] Mono.Security.Interface.MonoTlsSettings::get_CertificateSearchPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CCertificateSearchPathsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_CertificateSearchPaths(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateSearchPaths_mD7846BCF7B9292F85FEF0BE4A671779AD6C9AC32 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CCertificateSearchPathsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCertificateSearchPathsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Mono.Security.Interface.MonoTlsSettings::get_SendCloseNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_SendCloseNotify_m1D35BCF28142455EC9CDF16CA36A8DEF57B05625 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSendCloseNotifyU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_SendCloseNotify(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_SendCloseNotify_m903943162225A7267CA3AD1E1E6E76EA71BCC5BF (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSendCloseNotifyU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String[] Mono.Security.Interface.MonoTlsSettings::get_ClientCertificateIssuers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_ClientCertificateIssuers_m6FB58C63262D146231256A969DC2F3B60CE5C498 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CClientCertificateIssuersU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_ClientCertificateIssuers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateIssuers_m0866718DAECFD44FC53370D23AB4C789CE0759B8 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CClientCertificateIssuersU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateIssuersU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean Mono.Security.Interface.MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_DisallowUnauthenticatedCertificateRequest_m15B7CAB13F2301D201AAD092DF2FCB49366ABDF6 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_DisallowUnauthenticatedCertificateRequest_mCC9D044ACAD032758F91CC5A3AD1E69F8C5C7FE4 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::get_EnabledProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 MonoTlsSettings_get_EnabledProtocols_m6368286BF3E5703DB56F0EDE7B6AD2EF9C98D4C8 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 L_0 = __this->___U3CEnabledProtocolsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_EnabledProtocols(System.Nullable`1<Mono.Security.Interface.TlsProtocols>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledProtocols_m41991C8F073B85156818A906815AC4AE5623E77D (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 L_0 = ___value0;
		__this->___U3CEnabledProtocolsU3Ek__BackingField_9 = L_0;
		return;
	}
}
// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::get_EnabledCiphers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* MonoTlsSettings_get_EnabledCiphers_m7BD72B78EF53FAF51FEEBF5B3657187EC876394A (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* L_0 = __this->___U3CEnabledCiphersU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::set_EnabledCiphers(Mono.Security.Interface.CipherSuiteCode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledCiphers_mA89F7C73A29959710230593DCC689F4B9860156A (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___value0, const RuntimeMethod* method) 
{
	{
		CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* L_0 = ___value0;
		__this->___U3CEnabledCiphersU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnabledCiphersU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings__ctor_mE939325F3FC3A8950048CD299F395C8C823EA925 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		__this->___checkCertName_12 = (bool)1;
		__this->___callbackNeedsChain_16 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::get_DefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_get_DefaultSettings_m1A98FFBA09E1F2A23F128090959A396A353F4297 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_0 = ((MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields*)il2cpp_codegen_static_fields_for(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var))->___defaultSettings_18;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_1 = (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0*)il2cpp_codegen_object_new(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MonoTlsSettings__ctor_mE939325F3FC3A8950048CD299F395C8C823EA925(L_1, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_2;
		L_2 = InterlockedCompareExchangeImpl<MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0*>((&((MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields*)il2cpp_codegen_static_fields_for(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var))->___defaultSettings_18), L_1, (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0*)NULL);
	}

IL_0018:
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_3 = ((MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields*)il2cpp_codegen_static_fields_for(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var))->___defaultSettings_18;
		return L_3;
	}
}
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::CopyDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_CopyDefaultSettings_mE5970D083778040231805379F970AB869548029E (const RuntimeMethod* method) 
{
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_0;
		L_0 = MonoTlsSettings_get_DefaultSettings_m1A98FFBA09E1F2A23F128090959A396A353F4297(NULL);
		NullCheck(L_0);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_1;
		L_1 = MonoTlsSettings_Clone_mC4F9A27889ADD0B275018B32BCDA67C30865EA7D(L_0, NULL);
		return L_1;
	}
}
// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::get_CertificateValidator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoTlsSettings_get_CertificateValidator_m2DC79DA38E7CB5E87A21E315A29F21E1D9ACF367 (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___certificateValidator_17;
		return L_0;
	}
}
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::CloneWithValidator(Mono.Security.Interface.ICertificateValidator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_CloneWithValidator_mF20535B6DE43DD45FAE2ECC6871C85C15F260D6B (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, RuntimeObject* ___validator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___cloned_11;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___validator0;
		__this->___certificateValidator_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___certificateValidator_17), (void*)L_1);
		return __this;
	}

IL_0011:
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_2 = (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0*)il2cpp_codegen_object_new(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MonoTlsSettings__ctor_m93F7300159A30C4B08C4A9A9B0C0CAA6B16E0D6F(L_2, __this, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_3 = L_2;
		RuntimeObject* L_4 = ___validator0;
		NullCheck(L_3);
		L_3->___certificateValidator_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___certificateValidator_17), (void*)L_4);
		return L_3;
	}
}
// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_Clone_mC4F9A27889ADD0B275018B32BCDA67C30865EA7D (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_0 = (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0*)il2cpp_codegen_object_new(MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MonoTlsSettings__ctor_m93F7300159A30C4B08C4A9A9B0C0CAA6B16E0D6F(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Mono.Security.Interface.MonoTlsSettings::.ctor(Mono.Security.Interface.MonoTlsSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTlsSettings__ctor_m93F7300159A30C4B08C4A9A9B0C0CAA6B16E0D6F (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___checkCertName_12 = (bool)1;
		__this->___callbackNeedsChain_16 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_0 = ___other0;
		NullCheck(L_0);
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_1;
		L_1 = MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline(L_0, NULL);
		MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline(__this, L_1, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_2 = ___other0;
		NullCheck(L_2);
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_3;
		L_3 = MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline(L_2, NULL);
		MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline(__this, L_3, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_4 = ___other0;
		NullCheck(L_4);
		bool L_5 = L_4->___checkCertName_12;
		__this->___checkCertName_12 = L_5;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_6 = ___other0;
		NullCheck(L_6);
		bool L_7 = L_6->___checkCertRevocationStatus_13;
		__this->___checkCertRevocationStatus_13 = L_7;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_8 = ___other0;
		NullCheck(L_8);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9 = L_8->___useServicePointManagerCallback_14;
		MonoTlsSettings_set_UseServicePointManagerCallback_mE3EBA2F2886B024A4ACC303EE792190A5784E18B_inline(__this, L_9, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_10 = ___other0;
		NullCheck(L_10);
		bool L_11 = L_10->___skipSystemValidators_15;
		__this->___skipSystemValidators_15 = L_11;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_12 = ___other0;
		NullCheck(L_12);
		bool L_13 = L_12->___callbackNeedsChain_16;
		__this->___callbackNeedsChain_16 = L_13;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_14 = ___other0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = MonoTlsSettings_get_UserSettings_m9ADCEFD59E6429580D053F5AC0AF492B59353920_inline(L_14, NULL);
		MonoTlsSettings_set_UserSettings_mE1E6ED54BB439AE8012FD17D7230515CAB11D55D_inline(__this, L_15, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_16 = ___other0;
		NullCheck(L_16);
		Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 L_17;
		L_17 = MonoTlsSettings_get_EnabledProtocols_m6368286BF3E5703DB56F0EDE7B6AD2EF9C98D4C8_inline(L_16, NULL);
		MonoTlsSettings_set_EnabledProtocols_m41991C8F073B85156818A906815AC4AE5623E77D_inline(__this, L_17, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_18 = ___other0;
		NullCheck(L_18);
		CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* L_19;
		L_19 = MonoTlsSettings_get_EnabledCiphers_m7BD72B78EF53FAF51FEEBF5B3657187EC876394A_inline(L_18, NULL);
		MonoTlsSettings_set_EnabledCiphers_mA89F7C73A29959710230593DCC689F4B9860156A_inline(__this, L_19, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_20 = ___other0;
		NullCheck(L_20);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_21;
		L_21 = MonoTlsSettings_get_CertificateValidationTime_mB7E248DE19CACA783A465F59859729C726DF2F9E_inline(L_20, NULL);
		MonoTlsSettings_set_CertificateValidationTime_mE632C0A1BAB7608158B8EF05D2122B87AB6C34A6_inline(__this, L_21, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_22 = ___other0;
		NullCheck(L_22);
		bool L_23;
		L_23 = MonoTlsSettings_get_SendCloseNotify_m1D35BCF28142455EC9CDF16CA36A8DEF57B05625_inline(L_22, NULL);
		MonoTlsSettings_set_SendCloseNotify_m903943162225A7267CA3AD1E1E6E76EA71BCC5BF_inline(__this, L_23, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_24 = ___other0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = MonoTlsSettings_get_ClientCertificateIssuers_m6FB58C63262D146231256A969DC2F3B60CE5C498_inline(L_24, NULL);
		MonoTlsSettings_set_ClientCertificateIssuers_m0866718DAECFD44FC53370D23AB4C789CE0759B8_inline(__this, L_25, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_26 = ___other0;
		NullCheck(L_26);
		bool L_27;
		L_27 = MonoTlsSettings_get_DisallowUnauthenticatedCertificateRequest_m15B7CAB13F2301D201AAD092DF2FCB49366ABDF6_inline(L_26, NULL);
		MonoTlsSettings_set_DisallowUnauthenticatedCertificateRequest_mCC9D044ACAD032758F91CC5A3AD1E69F8C5C7FE4_inline(__this, L_27, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_28 = ___other0;
		NullCheck(L_28);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_29;
		L_29 = MonoTlsSettings_get_TrustAnchors_m4CA73EEBF73B4344C5334F3BC5BBFE1BC27BC7AE_inline(L_28, NULL);
		if (!L_29)
		{
			goto IL_00d5;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_30 = ___other0;
		NullCheck(L_30);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_31;
		L_31 = MonoTlsSettings_get_TrustAnchors_m4CA73EEBF73B4344C5334F3BC5BBFE1BC27BC7AE_inline(L_30, NULL);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_32 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		X509CertificateCollection__ctor_mE486AD558BE6F0D8FD89AB88DE922DFA684C4AA7(L_32, L_31, NULL);
		MonoTlsSettings_set_TrustAnchors_m08A22767288F1FB5AF812D0FDE8ACCDA47116661_inline(__this, L_32, NULL);
	}

IL_00d5:
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_33 = ___other0;
		NullCheck(L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34;
		L_34 = MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_35 = ___other0;
		NullCheck(L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36;
		L_36 = MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline(L_35, NULL);
		NullCheck(L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)));
		MonoTlsSettings_set_CertificateSearchPaths_mD7846BCF7B9292F85FEF0BE4A671779AD6C9AC32_inline(__this, L_37, NULL);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_38 = ___other0;
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline(L_38, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40;
		L_40 = MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline(__this, NULL);
		NullCheck((RuntimeArray*)L_39);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_39, (RuntimeArray*)L_40, 0, NULL);
	}

IL_0102:
	{
		__this->___cloned_11 = (bool)1;
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
// System.Void Mono.Security.Interface.TlsException::.ctor(Mono.Security.Interface.Alert,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TlsException__ctor_m343EBA01616A2B8649875A19BE4E56BBF46C6D81 (TlsException_tC2DD153B101F6116975F36613D7F7C009C5664E3* __this, Alert_t901529B47B3E318E68713A3E328935BC768B23F3* ___alert0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		Alert_t901529B47B3E318E68713A3E328935BC768B23F3* L_1 = ___alert0;
		__this->___alert_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alert_18), (void*)L_1);
		return;
	}
}
// System.Void Mono.Security.Interface.TlsException::.ctor(Mono.Security.Interface.AlertDescription,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TlsException__ctor_m4E03D70F9BCA4C0CA737720A43ABAB696CEA6209 (TlsException_tC2DD153B101F6116975F36613D7F7C009C5664E3* __this, uint8_t ___description0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Alert_t901529B47B3E318E68713A3E328935BC768B23F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___description0;
		Alert_t901529B47B3E318E68713A3E328935BC768B23F3* L_1 = (Alert_t901529B47B3E318E68713A3E328935BC768B23F3*)il2cpp_codegen_object_new(Alert_t901529B47B3E318E68713A3E328935BC768B23F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Alert__ctor_mEF460A440F5C6CBD4B90FB0CD2665A73BFCE345E(L_1, L_0, NULL);
		String_t* L_2 = ___message1;
		TlsException__ctor_m343EBA01616A2B8649875A19BE4E56BBF46C6D81(__this, L_1, L_2, NULL);
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
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m372F8F7845B638F6C6BD17F0390A1641A51C2E21 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		NullCheck(L_1);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2)), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_10;
		L_10 = Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC((&V_3), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
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
// System.Void Mono.Security.Cryptography.MD2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2__ctor_m490777410D02CD92B398D20C6A2DAE7448A00E8B (MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue_1 = ((int32_t)128);
		return;
	}
}
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F* MD2_Create_m8D8916FDE8D3D1610CD85450B021F880E7E27550 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* L_0 = (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6*)il2cpp_codegen_object_new(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD2Managed__ctor_m4E661935AEFB98EDCB3EEFE7D6EECAD10C807A2B(L_0, NULL);
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
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD2Managed_Padding_m661705CFE5C0683685E84E1CD503326477C7138F (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, int32_t ___nLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___nLength0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___nLength0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ___nLength0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}

IL_0020:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed__ctor_m4E661935AEFB98EDCB3EEFE7D6EECAD10C807A2B (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD2__ctor_m490777410D02CD92B398D20C6A2DAE7448A00E8B(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___state_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_4), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___checksum_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checksum_5), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___buffer_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_6), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		__this->___x_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_8), (void*)L_3);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, __this);
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed_Initialize_m578DBD3B8265ABD7FE060D4DD958EA986301698F (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, const RuntimeMethod* method) 
{
	{
		__this->___count_7 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___state_4;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___checksum_5;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_1, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buffer_6;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___x_8;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, ((int32_t)48), NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed_HashCore_m2B4BED309AC3C80A6E8D14ADDE4BF9AC9CC266F6 (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___count_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = ___cbSize2;
		__this->___count_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))&((int32_t)15)));
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_3));
		int32_t L_4 = ___cbSize2;
		int32_t L_5 = V_2;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_006e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		int32_t L_7 = ___ibStart1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buffer_6;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___state_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___checksum_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buffer_6;
		MD2Managed_MD2Transform_mCA2AD9EF038AC46E69F4726153B9C0DC03FC09D3(__this, L_11, L_12, L_13, 0, NULL);
		int32_t L_14 = V_2;
		V_0 = L_14;
		goto IL_0063;
	}

IL_0048:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___state_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___checksum_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___ibStart1;
		int32_t L_19 = V_0;
		MD2Managed_MD2Transform_mCA2AD9EF038AC46E69F4726153B9C0DC03FC09D3(__this, L_15, L_16, L_17, ((int32_t)il2cpp_codegen_add(L_18, L_19)), NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)16)));
	}

IL_0063:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = ___cbSize2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_21, ((int32_t)15)))) < ((int32_t)L_22)))
		{
			goto IL_0048;
		}
	}
	{
		V_1 = 0;
		goto IL_0070;
	}

IL_006e:
	{
		V_0 = 0;
	}

IL_0070:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___array0;
		int32_t L_24 = ___ibStart1;
		int32_t L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___buffer_6;
		int32_t L_27 = V_1;
		int32_t L_28 = ___cbSize2;
		int32_t L_29 = V_0;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_23, ((int32_t)il2cpp_codegen_add(L_24, L_25)), (RuntimeArray*)L_26, L_27, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD2Managed_HashFinal_mDB2FA7F5A7A8A4FEE85BD56B47801B12BCDFCAF1 (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___count_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = MD2Managed_Padding_m661705CFE5C0683685E84E1CD503326477C7138F(__this, L_3, NULL);
		int32_t L_5 = V_1;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32) */, __this, L_4, 0, L_5);
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___checksum_5;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32) */, __this, L_6, 0, ((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___state_4;
		NullCheck((RuntimeArray*)L_7);
		RuntimeObject* L_8;
		L_8 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_7, NULL);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, __this);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed_MD2Transform_mCA2AD9EF038AC46E69F4726153B9C0DC03FC09D3 (MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___state0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___x_8;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___block2;
		int32_t L_3 = ___index3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___x_8;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, ((int32_t)16), ((int32_t)16), NULL);
		V_1 = 0;
		goto IL_0040;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___x_8;
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___state0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___block2;
		int32_t L_12 = ___index3;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, ((int32_t)32)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15))));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0040:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)16))))
		{
			goto IL_0026;
		}
	}
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_0084;
	}

IL_004b:
	{
		V_3 = 0;
		goto IL_0071;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___x_8;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		uint8_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((uint8_t*)L_20);
		il2cpp_codegen_runtime_class_init_inline(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_StaticFields*)il2cpp_codegen_static_fields_for(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var))->___PI_SUBST_9;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = ((int32_t)(uint8_t)((int32_t)(L_21^(int32_t)L_25)));
		V_4 = (uint8_t)L_26;
		*((int8_t*)L_20) = (int8_t)L_26;
		uint8_t L_27 = V_4;
		V_0 = L_27;
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0071:
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_30, L_31))&((int32_t)255)));
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0084:
	{
		int32_t L_33 = V_2;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)18))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___x_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___state0;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_34, 0, (RuntimeArray*)L_35, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___checksum1;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)15);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = L_38;
		V_5 = 0;
		goto IL_00cb;
	}

IL_00a3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___checksum1;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		uint8_t* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)));
		int32_t L_42 = *((uint8_t*)L_41);
		il2cpp_codegen_runtime_class_init_inline(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_StaticFields*)il2cpp_codegen_static_fields_for(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var))->___PI_SUBST_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___block2;
		int32_t L_45 = ___index3;
		int32_t L_46 = V_5;
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
		uint8_t L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = V_0;
		NullCheck(L_43);
		int32_t L_50 = ((int32_t)((int32_t)L_48^L_49));
		uint8_t L_51 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52 = ((int32_t)(uint8_t)((int32_t)(L_42^(int32_t)L_51)));
		V_4 = (uint8_t)L_52;
		*((int8_t*)L_41) = (int8_t)L_52;
		uint8_t L_53 = V_4;
		V_0 = L_53;
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00cb:
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)16))))
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Managed__cctor_m4A97F7EE439FE55705B9B2AB478CD29A0FBCD202 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329_9_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_StaticFields*)il2cpp_codegen_static_fields_for(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var))->___PI_SUBST_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_StaticFields*)il2cpp_codegen_static_fields_for(MD2Managed_t94E8961A2B74741CEF033AC65C8B3C601DCFAAA6_il2cpp_TypeInfo_var))->___PI_SUBST_9), (void*)L_1);
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
// System.Void Mono.Security.Cryptography.MD4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4__ctor_m0E07C929BDAF3BB0CFD4EC360D22849566538CBB (MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue_1 = ((int32_t)128);
		return;
	}
}
// Mono.Security.Cryptography.MD4 Mono.Security.Cryptography.MD4::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0* MD4_Create_mCB4921FC30437A53D26E6BFA45D5D31F9F2F6014 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* L_0 = (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5*)il2cpp_codegen_object_new(MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD4Managed__ctor_m89BE94F7DEB019FA53E6B1F46DCFB6B4CA36CD1C(L_0, NULL);
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
// System.Void Mono.Security.Cryptography.MD4Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed__ctor_m89BE94F7DEB019FA53E6B1F46DCFB6B4CA36CD1C (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD4__ctor_m0E07C929BDAF3BB0CFD4EC360D22849566538CBB(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___state_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_4), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___count_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___count_6), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___buffer_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_5), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___digest_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_8), (void*)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___x_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_7), (void*)L_4);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, __this);
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_Initialize_mFC1E0B77E8CF24894ECF37C54EC3D3527E36DDFB (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___count_6;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___count_6;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___state_4;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)1732584193));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___state_4;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)-271733879));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___state_4;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)-1732584194));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___state_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)271733878));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_5;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_6, 0, ((int32_t)64), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___x_7;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_7, 0, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::HashCore(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_HashCore_m41A5263D2F078402E912B70E7DD08B9D12085E66 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___count_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_2>>3))&((int32_t)63)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___count_6;
		NullCheck(L_3);
		uint32_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = ___cbSize2;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)(L_6<<3))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___count_6;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___cbSize2;
		if ((((int64_t)((int64_t)(uint64_t)L_9)) >= ((int64_t)((int64_t)((int32_t)(L_10<<3))))))
		{
			goto IL_0041;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___count_6;
		NullCheck(L_11);
		uint32_t* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_13 = *((uint32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0041:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___count_6;
		NullCheck(L_14);
		uint32_t* L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_16 = *((uint32_t*)L_15);
		int32_t L_17 = ___cbSize2;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17>>((int32_t)29)))));
		int32_t L_18 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_18));
		V_2 = 0;
		int32_t L_19 = ___cbSize2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_00a4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___array0;
		int32_t L_22 = ___ibStart1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___buffer_5;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___buffer_5;
		MD4Managed_MD4Transform_m3BEBC5DA2F365EA60233EB3849D6B670AF44835A(__this, L_26, L_27, 0, NULL);
		int32_t L_28 = V_1;
		V_2 = L_28;
		goto IL_009b;
	}

IL_0086:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___state_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___array0;
		int32_t L_31 = ___ibStart1;
		int32_t L_32 = V_2;
		MD4Managed_MD4Transform_m3BEBC5DA2F365EA60233EB3849D6B670AF44835A(__this, L_29, L_30, ((int32_t)il2cpp_codegen_add(L_31, L_32)), NULL);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)64)));
	}

IL_009b:
	{
		int32_t L_34 = V_2;
		int32_t L_35 = ___cbSize2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_34, ((int32_t)63)))) < ((int32_t)L_35)))
		{
			goto IL_0086;
		}
	}
	{
		V_0 = 0;
	}

IL_00a4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___array0;
		int32_t L_37 = ___ibStart1;
		int32_t L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___buffer_5;
		int32_t L_40 = V_0;
		int32_t L_41 = ___cbSize2;
		int32_t L_42 = V_2;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_36, ((int32_t)il2cpp_codegen_add(L_37, L_38)), (RuntimeArray*)L_39, L_40, ((int32_t)il2cpp_codegen_subtract(L_41, L_42)), NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.MD4Managed::HashFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD4Managed_HashFinal_m5BDA517A8D12C62F62C5EFBBCBC661DE9C198EFC (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___count_6;
		MD4Managed_Encode_m1E02CBE5A0E99DFF36299CCEAC13F92124422D55(__this, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___count_6;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_5>>3))&((int32_t)63)));
		uint32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)56)))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_7 = V_1;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)120), (int32_t)L_7));
		goto IL_0031;
	}

IL_002d:
	{
		uint32_t L_8 = V_1;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)56), (int32_t)L_8));
	}

IL_0031:
	{
		V_2 = G_B3_0;
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = MD4Managed_Padding_mD7BB9A7A7F78490A4B8EC89A21ED240CB85E39F4(__this, L_9, NULL);
		int32_t L_11 = V_2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32) */, __this, L_10, 0, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32) */, __this, L_12, 0, 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___digest_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___state_4;
		MD4Managed_Encode_m1E02CBE5A0E99DFF36299CCEAC13F92124422D55(__this, L_13, L_14, NULL);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___digest_8;
		return L_15;
	}
}
// System.Byte[] Mono.Security.Cryptography.MD4Managed::Padding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD4Managed_Padding_mD7BB9A7A7F78490A4B8EC89A21ED240CB85E39F4 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, int32_t ___nLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___nLength0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___nLength0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_3;
	}

IL_0013:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.UInt32 Mono.Security.Cryptography.MD4Managed::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_F_mD8312B8925BE2A23E1E9B1A13054A95D815F06C4 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)((~L_2))&(int32_t)L_3))));
	}
}
// System.UInt32 Mono.Security.Cryptography.MD4Managed::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_G_mCCB055CECFE7296853DF7DB9336A670549C8423A (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		uint32_t L_4 = ___y1;
		uint32_t L_5 = ___z2;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)L_2&(int32_t)L_3))))|((int32_t)((int32_t)L_4&(int32_t)L_5))));
	}
}
// System.UInt32 Mono.Security.Cryptography.MD4Managed::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_H_mA7897D3B979E6627EB9A44E6FB6C894D4B338910 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
// System.UInt32 Mono.Security.Cryptography.MD4Managed::ROL(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD4Managed_ROL_mAEE08B95D3EA8EB7EF09EB7CC1E97CF6F3E1F31F (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t ___x0, uint8_t ___n1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint8_t L_1 = ___n1;
		uint32_t L_2 = ___x0;
		uint8_t L_3 = ___n1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)((int32_t)L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), (int32_t)L_3))&((int32_t)31)))))));
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::FF(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___a0;
		uint32_t* L_1 = ___a0;
		int32_t L_2 = *((uint32_t*)L_1);
		uint32_t L_3 = ___b1;
		uint32_t L_4 = ___c2;
		uint32_t L_5 = ___d3;
		uint32_t L_6;
		L_6 = MD4Managed_F_mD8312B8925BE2A23E1E9B1A13054A95D815F06C4(__this, L_3, L_4, L_5, NULL);
		uint32_t L_7 = ___x4;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))));
		uint32_t* L_8 = ___a0;
		uint32_t* L_9 = ___a0;
		int32_t L_10 = *((uint32_t*)L_9);
		uint8_t L_11 = ___s5;
		uint32_t L_12;
		L_12 = MD4Managed_ROL_mAEE08B95D3EA8EB7EF09EB7CC1E97CF6F3E1F31F(__this, L_10, L_11, NULL);
		*((int32_t*)L_8) = (int32_t)L_12;
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::GG(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___a0;
		uint32_t* L_1 = ___a0;
		int32_t L_2 = *((uint32_t*)L_1);
		uint32_t L_3 = ___b1;
		uint32_t L_4 = ___c2;
		uint32_t L_5 = ___d3;
		uint32_t L_6;
		L_6 = MD4Managed_G_mCCB055CECFE7296853DF7DB9336A670549C8423A(__this, L_3, L_4, L_5, NULL);
		uint32_t L_7 = ___x4;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), ((int32_t)1518500249)))));
		uint32_t* L_8 = ___a0;
		uint32_t* L_9 = ___a0;
		int32_t L_10 = *((uint32_t*)L_9);
		uint8_t L_11 = ___s5;
		uint32_t L_12;
		L_12 = MD4Managed_ROL_mAEE08B95D3EA8EB7EF09EB7CC1E97CF6F3E1F31F(__this, L_10, L_11, NULL);
		*((int32_t*)L_8) = (int32_t)L_12;
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::HH(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, uint32_t* ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, uint8_t ___s5, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___a0;
		uint32_t* L_1 = ___a0;
		int32_t L_2 = *((uint32_t*)L_1);
		uint32_t L_3 = ___b1;
		uint32_t L_4 = ___c2;
		uint32_t L_5 = ___d3;
		uint32_t L_6;
		L_6 = MD4Managed_H_mA7897D3B979E6627EB9A44E6FB6C894D4B338910(__this, L_3, L_4, L_5, NULL);
		uint32_t L_7 = ___x4;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), ((int32_t)1859775393)))));
		uint32_t* L_8 = ___a0;
		uint32_t* L_9 = ___a0;
		int32_t L_10 = *((uint32_t*)L_9);
		uint8_t L_11 = ___s5;
		uint32_t L_12;
		L_12 = MD4Managed_ROL_mAEE08B95D3EA8EB7EF09EB7CC1E97CF6F3E1F31F(__this, L_10, L_11, NULL);
		*((int32_t*)L_8) = (int32_t)L_12;
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::Encode(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_Encode_m1E02CBE5A0E99DFF36299CCEAC13F92124422D55 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___input1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0038;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___input1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output0;
		int32_t L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___input1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output0;
		int32_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___input1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___output0;
		int32_t L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___input1;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_23>>((int32_t)24)))));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 4));
	}

IL_0038:
	{
		int32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___output0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::Decode(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_Decode_m01D0E808B7F05B50EC6A1B146F5BE6AB909DA396 (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___output0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___index2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___index2;
		V_1 = L_0;
		goto IL_002e;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___output0;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input1;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input1;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 3));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_6|((int32_t)((int32_t)L_10<<8))))|((int32_t)((int32_t)L_14<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24))))));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 4));
	}

IL_002e:
	{
		int32_t L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___output0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.MD4Managed::MD4Transform(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Managed_MD4Transform_m3BEBC5DA2F365EA60233EB3849D6B670AF44835A (MD4Managed_t3BAE281BCBF5ECC7E8FA3507132477DA635B9AF5* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block1, int32_t ___index2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___state0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___state0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___x_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___block1;
		int32_t L_14 = ___index2;
		MD4Managed_Decode_m01D0E808B7F05B50EC6A1B146F5BE6AB909DA396(__this, L_12, L_13, L_14, NULL);
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_2;
		uint32_t L_17 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___x_7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_0), L_15, L_16, L_17, L_20, (uint8_t)3, NULL);
		uint32_t L_21 = V_0;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->___x_7;
		NullCheck(L_24);
		int32_t L_25 = 1;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_3), L_21, L_22, L_23, L_26, (uint8_t)7, NULL);
		uint32_t L_27 = V_3;
		uint32_t L_28 = V_0;
		uint32_t L_29 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___x_7;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_2), L_27, L_28, L_29, L_32, (uint8_t)((int32_t)11), NULL);
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_3;
		uint32_t L_35 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___x_7;
		NullCheck(L_36);
		int32_t L_37 = 3;
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_1), L_33, L_34, L_35, L_38, (uint8_t)((int32_t)19), NULL);
		uint32_t L_39 = V_1;
		uint32_t L_40 = V_2;
		uint32_t L_41 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___x_7;
		NullCheck(L_42);
		int32_t L_43 = 4;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_0), L_39, L_40, L_41, L_44, (uint8_t)3, NULL);
		uint32_t L_45 = V_0;
		uint32_t L_46 = V_1;
		uint32_t L_47 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___x_7;
		NullCheck(L_48);
		int32_t L_49 = 5;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_3), L_45, L_46, L_47, L_50, (uint8_t)7, NULL);
		uint32_t L_51 = V_3;
		uint32_t L_52 = V_0;
		uint32_t L_53 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___x_7;
		NullCheck(L_54);
		int32_t L_55 = 6;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_2), L_51, L_52, L_53, L_56, (uint8_t)((int32_t)11), NULL);
		uint32_t L_57 = V_2;
		uint32_t L_58 = V_3;
		uint32_t L_59 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = __this->___x_7;
		NullCheck(L_60);
		int32_t L_61 = 7;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_1), L_57, L_58, L_59, L_62, (uint8_t)((int32_t)19), NULL);
		uint32_t L_63 = V_1;
		uint32_t L_64 = V_2;
		uint32_t L_65 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___x_7;
		NullCheck(L_66);
		int32_t L_67 = 8;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_0), L_63, L_64, L_65, L_68, (uint8_t)3, NULL);
		uint32_t L_69 = V_0;
		uint32_t L_70 = V_1;
		uint32_t L_71 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = __this->___x_7;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)9);
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_3), L_69, L_70, L_71, L_74, (uint8_t)7, NULL);
		uint32_t L_75 = V_3;
		uint32_t L_76 = V_0;
		uint32_t L_77 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = __this->___x_7;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)10);
		uint32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_2), L_75, L_76, L_77, L_80, (uint8_t)((int32_t)11), NULL);
		uint32_t L_81 = V_2;
		uint32_t L_82 = V_3;
		uint32_t L_83 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = __this->___x_7;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)11);
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_1), L_81, L_82, L_83, L_86, (uint8_t)((int32_t)19), NULL);
		uint32_t L_87 = V_1;
		uint32_t L_88 = V_2;
		uint32_t L_89 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = __this->___x_7;
		NullCheck(L_90);
		int32_t L_91 = ((int32_t)12);
		uint32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_0), L_87, L_88, L_89, L_92, (uint8_t)3, NULL);
		uint32_t L_93 = V_0;
		uint32_t L_94 = V_1;
		uint32_t L_95 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = __this->___x_7;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)13);
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_3), L_93, L_94, L_95, L_98, (uint8_t)7, NULL);
		uint32_t L_99 = V_3;
		uint32_t L_100 = V_0;
		uint32_t L_101 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = __this->___x_7;
		NullCheck(L_102);
		int32_t L_103 = ((int32_t)14);
		uint32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_2), L_99, L_100, L_101, L_104, (uint8_t)((int32_t)11), NULL);
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_3;
		uint32_t L_107 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = __this->___x_7;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)15);
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		MD4Managed_FF_mA227BE16EECCB0BC298BA664D40D8703152D5AA0(__this, (&V_1), L_105, L_106, L_107, L_110, (uint8_t)((int32_t)19), NULL);
		uint32_t L_111 = V_1;
		uint32_t L_112 = V_2;
		uint32_t L_113 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = __this->___x_7;
		NullCheck(L_114);
		int32_t L_115 = 0;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_0), L_111, L_112, L_113, L_116, (uint8_t)3, NULL);
		uint32_t L_117 = V_0;
		uint32_t L_118 = V_1;
		uint32_t L_119 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = __this->___x_7;
		NullCheck(L_120);
		int32_t L_121 = 4;
		uint32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_3), L_117, L_118, L_119, L_122, (uint8_t)5, NULL);
		uint32_t L_123 = V_3;
		uint32_t L_124 = V_0;
		uint32_t L_125 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = __this->___x_7;
		NullCheck(L_126);
		int32_t L_127 = 8;
		uint32_t L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_2), L_123, L_124, L_125, L_128, (uint8_t)((int32_t)9), NULL);
		uint32_t L_129 = V_2;
		uint32_t L_130 = V_3;
		uint32_t L_131 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->___x_7;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)12);
		uint32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_1), L_129, L_130, L_131, L_134, (uint8_t)((int32_t)13), NULL);
		uint32_t L_135 = V_1;
		uint32_t L_136 = V_2;
		uint32_t L_137 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = __this->___x_7;
		NullCheck(L_138);
		int32_t L_139 = 1;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_0), L_135, L_136, L_137, L_140, (uint8_t)3, NULL);
		uint32_t L_141 = V_0;
		uint32_t L_142 = V_1;
		uint32_t L_143 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = __this->___x_7;
		NullCheck(L_144);
		int32_t L_145 = 5;
		uint32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_3), L_141, L_142, L_143, L_146, (uint8_t)5, NULL);
		uint32_t L_147 = V_3;
		uint32_t L_148 = V_0;
		uint32_t L_149 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = __this->___x_7;
		NullCheck(L_150);
		int32_t L_151 = ((int32_t)9);
		uint32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_2), L_147, L_148, L_149, L_152, (uint8_t)((int32_t)9), NULL);
		uint32_t L_153 = V_2;
		uint32_t L_154 = V_3;
		uint32_t L_155 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = __this->___x_7;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)13);
		uint32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_1), L_153, L_154, L_155, L_158, (uint8_t)((int32_t)13), NULL);
		uint32_t L_159 = V_1;
		uint32_t L_160 = V_2;
		uint32_t L_161 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = __this->___x_7;
		NullCheck(L_162);
		int32_t L_163 = 2;
		uint32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_0), L_159, L_160, L_161, L_164, (uint8_t)3, NULL);
		uint32_t L_165 = V_0;
		uint32_t L_166 = V_1;
		uint32_t L_167 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = __this->___x_7;
		NullCheck(L_168);
		int32_t L_169 = 6;
		uint32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_3), L_165, L_166, L_167, L_170, (uint8_t)5, NULL);
		uint32_t L_171 = V_3;
		uint32_t L_172 = V_0;
		uint32_t L_173 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = __this->___x_7;
		NullCheck(L_174);
		int32_t L_175 = ((int32_t)10);
		uint32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_2), L_171, L_172, L_173, L_176, (uint8_t)((int32_t)9), NULL);
		uint32_t L_177 = V_2;
		uint32_t L_178 = V_3;
		uint32_t L_179 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = __this->___x_7;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)14);
		uint32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_1), L_177, L_178, L_179, L_182, (uint8_t)((int32_t)13), NULL);
		uint32_t L_183 = V_1;
		uint32_t L_184 = V_2;
		uint32_t L_185 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = __this->___x_7;
		NullCheck(L_186);
		int32_t L_187 = 3;
		uint32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_0), L_183, L_184, L_185, L_188, (uint8_t)3, NULL);
		uint32_t L_189 = V_0;
		uint32_t L_190 = V_1;
		uint32_t L_191 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = __this->___x_7;
		NullCheck(L_192);
		int32_t L_193 = 7;
		uint32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_3), L_189, L_190, L_191, L_194, (uint8_t)5, NULL);
		uint32_t L_195 = V_3;
		uint32_t L_196 = V_0;
		uint32_t L_197 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = __this->___x_7;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)11);
		uint32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_2), L_195, L_196, L_197, L_200, (uint8_t)((int32_t)9), NULL);
		uint32_t L_201 = V_2;
		uint32_t L_202 = V_3;
		uint32_t L_203 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = __this->___x_7;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)15);
		uint32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		MD4Managed_GG_m57C28D2EE1C3AC5241943AEB683989331AFB2415(__this, (&V_1), L_201, L_202, L_203, L_206, (uint8_t)((int32_t)13), NULL);
		uint32_t L_207 = V_1;
		uint32_t L_208 = V_2;
		uint32_t L_209 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = __this->___x_7;
		NullCheck(L_210);
		int32_t L_211 = 0;
		uint32_t L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_0), L_207, L_208, L_209, L_212, (uint8_t)3, NULL);
		uint32_t L_213 = V_0;
		uint32_t L_214 = V_1;
		uint32_t L_215 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = __this->___x_7;
		NullCheck(L_216);
		int32_t L_217 = 8;
		uint32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_3), L_213, L_214, L_215, L_218, (uint8_t)((int32_t)9), NULL);
		uint32_t L_219 = V_3;
		uint32_t L_220 = V_0;
		uint32_t L_221 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = __this->___x_7;
		NullCheck(L_222);
		int32_t L_223 = 4;
		uint32_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_2), L_219, L_220, L_221, L_224, (uint8_t)((int32_t)11), NULL);
		uint32_t L_225 = V_2;
		uint32_t L_226 = V_3;
		uint32_t L_227 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_228 = __this->___x_7;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_1), L_225, L_226, L_227, L_230, (uint8_t)((int32_t)15), NULL);
		uint32_t L_231 = V_1;
		uint32_t L_232 = V_2;
		uint32_t L_233 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = __this->___x_7;
		NullCheck(L_234);
		int32_t L_235 = 2;
		uint32_t L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_0), L_231, L_232, L_233, L_236, (uint8_t)3, NULL);
		uint32_t L_237 = V_0;
		uint32_t L_238 = V_1;
		uint32_t L_239 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = __this->___x_7;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)10);
		uint32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_3), L_237, L_238, L_239, L_242, (uint8_t)((int32_t)9), NULL);
		uint32_t L_243 = V_3;
		uint32_t L_244 = V_0;
		uint32_t L_245 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = __this->___x_7;
		NullCheck(L_246);
		int32_t L_247 = 6;
		uint32_t L_248 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_2), L_243, L_244, L_245, L_248, (uint8_t)((int32_t)11), NULL);
		uint32_t L_249 = V_2;
		uint32_t L_250 = V_3;
		uint32_t L_251 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = __this->___x_7;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)14);
		uint32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_1), L_249, L_250, L_251, L_254, (uint8_t)((int32_t)15), NULL);
		uint32_t L_255 = V_1;
		uint32_t L_256 = V_2;
		uint32_t L_257 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_258 = __this->___x_7;
		NullCheck(L_258);
		int32_t L_259 = 1;
		uint32_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_0), L_255, L_256, L_257, L_260, (uint8_t)3, NULL);
		uint32_t L_261 = V_0;
		uint32_t L_262 = V_1;
		uint32_t L_263 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_264 = __this->___x_7;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)9);
		uint32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_3), L_261, L_262, L_263, L_266, (uint8_t)((int32_t)9), NULL);
		uint32_t L_267 = V_3;
		uint32_t L_268 = V_0;
		uint32_t L_269 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_270 = __this->___x_7;
		NullCheck(L_270);
		int32_t L_271 = 5;
		uint32_t L_272 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_2), L_267, L_268, L_269, L_272, (uint8_t)((int32_t)11), NULL);
		uint32_t L_273 = V_2;
		uint32_t L_274 = V_3;
		uint32_t L_275 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_276 = __this->___x_7;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)13);
		uint32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_1), L_273, L_274, L_275, L_278, (uint8_t)((int32_t)15), NULL);
		uint32_t L_279 = V_1;
		uint32_t L_280 = V_2;
		uint32_t L_281 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_282 = __this->___x_7;
		NullCheck(L_282);
		int32_t L_283 = 3;
		uint32_t L_284 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_0), L_279, L_280, L_281, L_284, (uint8_t)3, NULL);
		uint32_t L_285 = V_0;
		uint32_t L_286 = V_1;
		uint32_t L_287 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_288 = __this->___x_7;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)11);
		uint32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_3), L_285, L_286, L_287, L_290, (uint8_t)((int32_t)9), NULL);
		uint32_t L_291 = V_3;
		uint32_t L_292 = V_0;
		uint32_t L_293 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_294 = __this->___x_7;
		NullCheck(L_294);
		int32_t L_295 = 7;
		uint32_t L_296 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_2), L_291, L_292, L_293, L_296, (uint8_t)((int32_t)11), NULL);
		uint32_t L_297 = V_2;
		uint32_t L_298 = V_3;
		uint32_t L_299 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_300 = __this->___x_7;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)15);
		uint32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		MD4Managed_HH_m35ABC1BD17ADB7103B07BAE99ED070EA850FB197(__this, (&V_1), L_297, L_298, L_299, L_302, (uint8_t)((int32_t)15), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_303 = ___state0;
		NullCheck(L_303);
		uint32_t* L_304 = ((L_303)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_305 = *((uint32_t*)L_304);
		uint32_t L_306 = V_0;
		*((int32_t*)L_304) = (int32_t)((int32_t)il2cpp_codegen_add(L_305, (int32_t)L_306));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = ___state0;
		NullCheck(L_307);
		uint32_t* L_308 = ((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_309 = *((uint32_t*)L_308);
		uint32_t L_310 = V_1;
		*((int32_t*)L_308) = (int32_t)((int32_t)il2cpp_codegen_add(L_309, (int32_t)L_310));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_311 = ___state0;
		NullCheck(L_311);
		uint32_t* L_312 = ((L_311)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_313 = *((uint32_t*)L_312);
		uint32_t L_314 = V_2;
		*((int32_t*)L_312) = (int32_t)((int32_t)il2cpp_codegen_add(L_313, (int32_t)L_314));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_315 = ___state0;
		NullCheck(L_315);
		uint32_t* L_316 = ((L_315)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_317 = *((uint32_t*)L_316);
		uint32_t L_318 = V_3;
		*((int32_t*)L_316) = (int32_t)((int32_t)il2cpp_codegen_add(L_317, (int32_t)L_318));
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
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Compare_m2191E9428696E154E5B525C0023A0E6452BCBAB8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array21, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array10;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array21;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___array10;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___array21;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_6) == ((int32_t)L_10)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___array10;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0010;
		}
	}

IL_0024:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_I2OSP_m09188E6F6B2F1875A5AD568F5DA5A7517755715C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___size1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___x0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___x0;
		NullCheck(L_6);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)))), ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_OS2IP_mA051090D7B03C2052FA7B7F6419376D33C438A65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___x0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0002;
		}
	}

IL_0011:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___x0;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___x0;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		return L_16;
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___x0;
		return L_17;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_RSAVP1_m116E9A26C499655F19805E3A878A21380431B0F6 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, const RuntimeMethod* method) 
{
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___s1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[]) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Verify_v15_m43A88872056E2CC8A5B15534134EC647E246097E (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature3, bool ___tryNonStandardEncoding4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, L_0);
		V_0 = ((int32_t)(L_1>>3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___signature3;
		il2cpp_codegen_runtime_class_init_inline(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = PKCS1_OS2IP_mA051090D7B03C2052FA7B7F6419376D33C438A65(L_2, NULL);
		V_1 = L_3;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_4 = ___rsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = PKCS1_RSAVP1_m116E9A26C499655F19805E3A878A21380431B0F6(L_4, L_5, NULL);
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = PKCS1_I2OSP_m09188E6F6B2F1875A5AD568F5DA5A7517755715C(L_6, L_7, NULL);
		V_2 = L_8;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_9 = ___hash1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___hashValue2;
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = PKCS1_Encode_v15_mE68AC16F70E21E3961689BDC50F35982B014EAAD(L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		bool L_14;
		L_14 = PKCS1_Compare_m2191E9428696E154E5B525C0023A0E6452BCBAB8(L_12, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0034;
		}
	}
	{
		bool L_16 = ___tryNonStandardEncoding4;
		if (L_16)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		bool L_17 = V_3;
		return L_17;
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if (L_20)
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		V_4 = 2;
		goto IL_005b;
	}

IL_0048:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_27) == ((int32_t)((int32_t)255))))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005b:
	{
		int32_t L_29 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___hashValue2;
		NullCheck(L_31);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), ((int32_t)(((RuntimeArray*)L_31)->max_length)))), 1)))))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		int32_t L_33 = V_4;
		int32_t L_34 = L_33;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (!L_36)
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___hashValue2;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)));
		V_5 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_5;
		NullCheck(L_42);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_39, L_40, (RuntimeArray*)L_41, 0, ((int32_t)(((RuntimeArray*)L_42)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___hashValue2;
		il2cpp_codegen_runtime_class_init_inline(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = PKCS1_Compare_m2191E9428696E154E5B525C0023A0E6452BCBAB8(L_43, L_44, NULL);
		return L_45;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PKCS1_Encode_v15_mE68AC16F70E21E3961689BDC50F35982B014EAAD (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue1, int32_t ___emLength2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_4 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_5 = NULL;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___hashValue1;
		NullCheck(L_0);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_1 = ___hash0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(L_2>>3)))))
		{
			goto IL_0023;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_3 = ___hash0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3D2FB8CDF52221630110111C55A14E4431BD24A)), L_4, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_6 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS1_Encode_v15_mE68AC16F70E21E3961689BDC50F35982B014EAAD_RuntimeMethod_var)));
	}

IL_0023:
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_7 = ___hash0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = CryptoConfig_MapNameToOID_m93A1FE1104368BC4032B463DFB51BFBD17F522B6(L_8, NULL);
		V_1 = L_9;
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_11, (uint8_t)((int32_t)48), NULL);
		V_4 = L_11;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_4;
		String_t* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = CryptoConfig_EncodeOID_m7A7B0C0CB32CC54A78BCFFB921BBA172FF21C321(L_13, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_15, L_14, NULL);
		NullCheck(L_12);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_12, L_15, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_4;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_18, (uint8_t)5, NULL);
		NullCheck(L_17);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19;
		L_19 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_17, L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___hashValue1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_21, (uint8_t)4, L_20, NULL);
		V_5 = L_21;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_22, (uint8_t)((int32_t)48), NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23 = L_22;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24 = V_4;
		NullCheck(L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_23, L_24, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26 = L_23;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = V_5;
		NullCheck(L_26);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28;
		L_28 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_26, L_27, NULL);
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_26);
		V_0 = L_29;
		goto IL_008a;
	}

IL_0088:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___hashValue1;
		V_0 = L_30;
	}

IL_008a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___hashValue1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___hashValue1;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___hashValue1;
		NullCheck(L_35);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_31, 0, (RuntimeArray*)L_32, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), ((int32_t)(((RuntimeArray*)L_34)->max_length)))), ((int32_t)(((RuntimeArray*)L_35)->max_length)), NULL);
		int32_t L_36 = ___emLength2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		NullCheck(L_37);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)(((RuntimeArray*)L_37)->max_length)))), 3)), NULL);
		V_2 = L_38;
		int32_t L_39 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), 3)));
		V_3 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_3;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		V_6 = 2;
		goto IL_00cf;
	}

IL_00c0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_3;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)((int32_t)255));
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00cf:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_2;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)il2cpp_codegen_add(L_47, 2)))))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_3;
		int32_t L_50 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		NullCheck(L_51);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_48, 0, (RuntimeArray*)L_49, ((int32_t)il2cpp_codegen_add(L_50, 3)), ((int32_t)(((RuntimeArray*)L_51)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_3;
		return L_52;
	}
}
// System.String Mono.Security.Cryptography.PKCS1::HashNameFromOid(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PKCS1_HashNameFromOid_mB154086B9DBD3A7A261B29E356577283BD96EF6A (String_t* ___oid0, bool ___throwOnError1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00FAA6DAACAA311CCE49C5E1E1204A7130351314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14766905080A42A4E1B372AB68C4494ECC1FEE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B188360294349CD1D94164DB9AE487200C503EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E264486DFD68F8D2AC59C629355E7337C6392BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA006FCB4201934135FE5378132B66888869CBF16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25B69026A70D534621843E13AD9FBEBC01B0B2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA7E3D2770ADAB061CBEB4B68128A012D6BA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD252B930E829E7C8274E97CAA92250DE3E9543A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2554AA2E0C9DC24A5C7C498FC582750C82FEF05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7F2002E39D5228A8496A82B1F7CAC32E1BD0715);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B67B27E4DD10700B0726FC3E0A89E2CDBB84C8);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5FD260C639BDBF6B570A90B23653DE3779848418(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)719034781)))))
		{
			goto IL_0052;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)601591448)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)510574318))))
		{
			goto IL_00f8;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)601591448))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_0173;
	}

IL_0032:
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)618369067))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)702257162))))
		{
			goto IL_00b0;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)719034781))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_0173;
	}

IL_0052:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-1817490609)))))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)875536856))))
		{
			goto IL_00e9;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1817490609))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_0173;
	}

IL_0075:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1800712990))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1783935371))))
		{
			goto IL_0125;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-801575721))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0173;
	}

IL_009b:
	{
		String_t* L_15 = ___oid0;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralA25B69026A70D534621843E13AD9FBEBC01B0B2E, NULL);
		if (L_16)
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0173;
	}

IL_00b0:
	{
		String_t* L_17 = ___oid0;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralE2554AA2E0C9DC24A5C7C498FC582750C82FEF05, NULL);
		if (L_18)
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0173;
	}

IL_00c5:
	{
		String_t* L_19 = ___oid0;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralD252B930E829E7C8274E97CAA92250DE3E9543A8, NULL);
		if (L_20)
		{
			goto IL_014f;
		}
	}
	{
		goto IL_0173;
	}

IL_00d7:
	{
		String_t* L_21 = ___oid0;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteral14766905080A42A4E1B372AB68C4494ECC1FEE82, NULL);
		if (L_22)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_0173;
	}

IL_00e9:
	{
		String_t* L_23 = ___oid0;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteralE7F2002E39D5228A8496A82B1F7CAC32E1BD0715, NULL);
		if (L_24)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_0173;
	}

IL_00f8:
	{
		String_t* L_25 = ___oid0;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralA006FCB4201934135FE5378132B66888869CBF16, NULL);
		if (L_26)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_0173;
	}

IL_0107:
	{
		String_t* L_27 = ___oid0;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral6B188360294349CD1D94164DB9AE487200C503EE, NULL);
		if (L_28)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_0173;
	}

IL_0116:
	{
		String_t* L_29 = ___oid0;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral8E264486DFD68F8D2AC59C629355E7337C6392BF, NULL);
		if (L_30)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0173;
	}

IL_0125:
	{
		String_t* L_31 = ___oid0;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteralACA7E3D2770ADAB061CBEB4B68128A012D6BA80C, NULL);
		if (L_32)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_0173;
	}

IL_0134:
	{
		String_t* L_33 = ___oid0;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral00FAA6DAACAA311CCE49C5E1E1204A7130351314, NULL);
		if (L_34)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0173;
	}

IL_0143:
	{
		return _stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769;
	}

IL_0149:
	{
		return _stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2;
	}

IL_014f:
	{
		return _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
	}

IL_0155:
	{
		return _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
	}

IL_015b:
	{
		return _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
	}

IL_0161:
	{
		return _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
	}

IL_0167:
	{
		return _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
	}

IL_016d:
	{
		return _stringLiteralF4B67B27E4DD10700B0726FC3E0A89E2CDBB84C8;
	}

IL_0173:
	{
		bool L_35 = ___throwOnError1;
		if (!L_35)
		{
			goto IL_0187;
		}
	}
	{
		String_t* L_36 = ___oid0;
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB274F19DEB1DAD13CEA91A0840C0D4A2A4B61D9E)), L_36, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_38 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS1_HashNameFromOid_mB154086B9DBD3A7A261B29E356577283BD96EF6A_RuntimeMethod_var)));
	}

IL_0187:
	{
		return (String_t*)NULL;
	}
}
// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.PKCS1::CreateFromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* PKCS1_CreateFromOid_m28E10EF2DAA6C7900493AB6676078FAA20C57A09 (String_t* ___oid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___oid0;
		il2cpp_codegen_runtime_class_init_inline(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = PKCS1_HashNameFromOid_mB154086B9DBD3A7A261B29E356577283BD96EF6A(L_0, (bool)1, NULL);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_2;
		L_2 = PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E(L_1, NULL);
		return L_2;
	}
}
// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.PKCS1::CreateFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B67B27E4DD10700B0726FC3E0A89E2CDBB84C8);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___name0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5FD260C639BDBF6B570A90B23653DE3779848418(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1935726387)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)415037492)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)206706215))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)415037492))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_0124;
	}

IL_002f:
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1918948768))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1935726387))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_0124;
	}

IL_0044:
	{
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-1330447974)))))
		{
			goto IL_0061;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)2019614482))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1330447974))))
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_0124;
	}

IL_0061:
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1267551733))))
		{
			goto IL_00d6;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1240198026))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_0124;
	}

IL_0076:
	{
		String_t* L_13 = ___name0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769, NULL);
		if (L_14)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0124;
	}

IL_0088:
	{
		String_t* L_15 = ___name0;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2, NULL);
		if (L_16)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0124;
	}

IL_009a:
	{
		String_t* L_17 = ___name0;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17, NULL);
		if (L_18)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0124;
	}

IL_00a9:
	{
		String_t* L_19 = ___name0;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B, NULL);
		if (L_20)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0124;
	}

IL_00b8:
	{
		String_t* L_21 = ___name0;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD, NULL);
		if (L_22)
		{
			goto IL_010c;
		}
	}
	{
		goto IL_0124;
	}

IL_00c7:
	{
		String_t* L_23 = ___name0;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1, NULL);
		if (L_24)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0124;
	}

IL_00d6:
	{
		String_t* L_25 = ___name0;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73, NULL);
		if (L_26)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_0124;
	}

IL_00e5:
	{
		String_t* L_27 = ___name0;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteralF4B67B27E4DD10700B0726FC3E0A89E2CDBB84C8, NULL);
		if (L_28)
		{
			goto IL_011e;
		}
	}
	{
		goto IL_0124;
	}

IL_00f4:
	{
		MD2_tCF39983E32DA5A7A2CC6A13E8B428D6D3FA1AD3F* L_29;
		L_29 = MD2_Create_m8D8916FDE8D3D1610CD85450B021F880E7E27550(NULL);
		return L_29;
	}

IL_00fa:
	{
		MD4_tD434E96F4AA811B40097D60A1F4C9B2636A286F0* L_30;
		L_30 = MD4_Create_mCB4921FC30437A53D26E6BFA45D5D31F9F2F6014(NULL);
		return L_30;
	}

IL_0100:
	{
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_31;
		L_31 = MD5_Create_mEA05E397A9E93DDB815D44FF4204495BA328C1C9(NULL);
		return L_31;
	}

IL_0106:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_32;
		L_32 = SHA1_Create_m6F713539D55576456BDF91B7BFC7103ED8CB766C(NULL);
		return L_32;
	}

IL_010c:
	{
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_33;
		L_33 = SHA256_Create_mCF8D7EB52BAB85B20EAE61668D40DDF0CE3EC2E8(NULL);
		return L_33;
	}

IL_0112:
	{
		SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* L_34;
		L_34 = SHA384_Create_m3F096EC40352F7BF53607B54D7558FA82DF9CFB9(NULL);
		return L_34;
	}

IL_0118:
	{
		SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* L_35;
		L_35 = SHA512_Create_mA731C5882C5EF8426A1F4CAE82208B403BA5A0D6(NULL);
		return L_35;
	}

IL_011e:
	{
		RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0* L_36;
		L_36 = RIPEMD160_Create_mAAE3C6A5E5E5C0B15360F8A525BBD75D9DD9860D(NULL);
		return L_36;
	}

IL_0124:
	{
	}
	try
	{// begin try (depth: 1)
		String_t* L_37 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = il2cpp_codegen_get_type(L_37, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E_RuntimeMethod_var);
		RuntimeObject* L_39;
		L_39 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_38, NULL);
		V_1 = ((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)CastclassClass((RuntimeObject*)L_39, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var));
		goto IL_014a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.Object)
		String_t* L_40 = ___name0;
		String_t* L_41;
		L_41 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB274F19DEB1DAD13CEA91A0840C0D4A2A4B61D9E)), L_40, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_42 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_42);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS1_CreateFromName_mD94C873F9E6755D6B46EAD204FF120A42AF0655E_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_014a:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_43 = V_1;
		return L_43;
	}
}
// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS1__cctor_m590A6175AF1A39399AF936FDA81A827026765308 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA1_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA1_0), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA256_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA256_1), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA384_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA384_2), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA512_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_StaticFields*)il2cpp_codegen_static_fields_for(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var))->___emptySHA512_3), (void*)L_10);
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
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m22D9C0E05AA5534D7874D9779D81BA12CB675862 (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____version_0 = 0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____list_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_3), (void*)L_0);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_mF8536B2938ED0774AEAFAC0D16AF8FAD636F904A (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		PrivateKeyInfo__ctor_m22D9C0E05AA5534D7874D9779D81BA12CB675862(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41(__this, L_0, NULL);
		return;
	}
}
// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrivateKeyInfo_get_Algorithm_m544D7A80C2BD7DE45C080DF09D88221A58DB9459 (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____algorithm_1;
		return L_0;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_get_PrivateKey_m08A332D04C22BE19ED55E82B4D3804336502D13B (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____key_2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____key_2;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41 (PrivateKeyInfo_t28A9EE4065B3A3A02D373C6FC28EE45E394D9354* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_4 = NULL;
	int32_t V_5 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B6_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B5_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_1, L_0, NULL);
		V_0 = L_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41_RuntimeMethod_var)));
	}

IL_001c:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_0;
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_5, 0, NULL);
		V_1 = L_6;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_9 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41_RuntimeMethod_var)));
	}

IL_0038:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->____version_0 = L_13;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_14 = V_0;
		NullCheck(L_14);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
		L_15 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_14, 1, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = L_15;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_16, NULL);
		G_B5_0 = L_16;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)48))))
		{
			G_B6_0 = L_16;
			goto IL_0062;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_18 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41_RuntimeMethod_var)));
	}

IL_0062:
	{
		NullCheck(G_B6_0);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19;
		L_19 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(G_B6_0, 0, NULL);
		V_2 = L_19;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = V_2;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_007d;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_22 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Decode_m0418E893A9C18998D461DF559BEE133012C54B41_RuntimeMethod_var)));
	}

IL_007d:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23 = V_2;
		String_t* L_24;
		L_24 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_23, NULL);
		__this->____algorithm_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____algorithm_1), (void*)L_24);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25 = V_0;
		NullCheck(L_25);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26;
		L_26 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_25, 2, NULL);
		V_3 = L_26;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_27, NULL);
		__this->____key_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key_2), (void*)L_28);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_29, NULL);
		if ((((int32_t)L_30) <= ((int32_t)3)))
		{
			goto IL_00da;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_31 = V_0;
		NullCheck(L_31);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32;
		L_32 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_31, 3, NULL);
		V_4 = L_32;
		V_5 = 0;
		goto IL_00cf;
	}

IL_00b4:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_33 = __this->____list_3;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_36;
		L_36 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_34, L_35, NULL);
		NullCheck(L_33);
		int32_t L_37;
		L_37 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_33, L_36);
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cf:
	{
		int32_t L_39 = V_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_40 = V_4;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_40, NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_00b4;
		}
	}

IL_00da:
	{
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_RemoveLeadingZero_mCFBEBB4A2B8B6BF60A07951E042D5C8524F8E55A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bigInt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bigInt0;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bigInt0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = 1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bigInt0;
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		int32_t L_10 = V_1;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bigInt0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bigInt0;
		NullCheck(L_0);
		int32_t L_1 = ___length1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bigInt0;
		return L_2;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bigInt0;
		NullCheck(L_3);
		int32_t L_4 = ___length1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) <= ((int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bigInt0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = PrivateKeyInfo_RemoveLeadingZero_mCFBEBB4A2B8B6BF60A07951E042D5C8524F8E55A(L_5, NULL);
		return L_6;
	}

IL_0015:
	{
		int32_t L_7 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bigInt0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bigInt0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___bigInt0;
		NullCheck(L_13);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length)))), ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		return L_14;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* PrivateKeyInfo_DecodeRSA_m82CA806E057F3381929C3A2B1CCE85F813B8685F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keypair0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keypair0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_1, L_0, NULL);
		V_0 = L_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_m82CA806E057F3381929C3A2B1CCE85F813B8685F_RuntimeMethod_var)));
	}

IL_001c:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_0;
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_5, 0, NULL);
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_8 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_m82CA806E057F3381929C3A2B1CCE85F813B8685F_RuntimeMethod_var)));
	}

IL_0036:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_9, NULL);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)9))))
		{
			goto IL_004b;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_11 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeRSA_m82CA806E057F3381929C3A2B1CCE85F813B8685F_RuntimeMethod_var)));
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_0;
		NullCheck(L_12);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_13;
		L_13 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_12, 1, NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = PrivateKeyInfo_RemoveLeadingZero_mCFBEBB4A2B8B6BF60A07951E042D5C8524F8E55A(L_14, NULL);
		(&V_1)->___Modulus_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Modulus_1), (void*)L_15);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16.___Modulus_1;
		NullCheck(L_17);
		V_2 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		int32_t L_18 = V_2;
		V_3 = ((int32_t)(L_18>>1));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_0;
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20;
		L_20 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_19, 3, NULL);
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_20, NULL);
		int32_t L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_21, L_22, NULL);
		(&V_1)->___D_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___D_7), (void*)L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24 = V_0;
		NullCheck(L_24);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_24, 6, NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_25, NULL);
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_26, L_27, NULL);
		(&V_1)->___DP_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___DP_4), (void*)L_28);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_29 = V_0;
		NullCheck(L_29);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_30;
		L_30 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_29, 7, NULL);
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_30, NULL);
		int32_t L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_31, L_32, NULL);
		(&V_1)->___DQ_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___DQ_5), (void*)L_33);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_34 = V_0;
		NullCheck(L_34);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_35;
		L_35 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_34, 2, NULL);
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_35, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = PrivateKeyInfo_RemoveLeadingZero_mCFBEBB4A2B8B6BF60A07951E042D5C8524F8E55A(L_36, NULL);
		(&V_1)->___Exponent_0 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Exponent_0), (void*)L_37);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = V_0;
		NullCheck(L_38);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_39;
		L_39 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_38, 8, NULL);
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_39, NULL);
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_40, L_41, NULL);
		(&V_1)->___InverseQ_6 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___InverseQ_6), (void*)L_42);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_43 = V_0;
		NullCheck(L_43);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44;
		L_44 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_43, 4, NULL);
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_44, NULL);
		int32_t L_46 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_45, L_46, NULL);
		(&V_1)->___P_2 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___P_2), (void*)L_47);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_48 = V_0;
		NullCheck(L_48);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_49;
		L_49 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_48, 5, NULL);
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_49, NULL);
		int32_t L_51 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_50, L_51, NULL);
		(&V_1)->___Q_3 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Q_3), (void*)L_52);
		V_4 = (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)NULL;
	}
	try
	{// begin try (depth: 1)
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_53;
		L_53 = RSA_Create_m15ED8FDC27DC83C862944A3CF7BCB6FB5BC13017(NULL);
		V_4 = L_53;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_54 = V_4;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_55 = V_1;
		NullCheck(L_54);
		VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_54, L_55);
		goto IL_0158;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013a;
		}
		throw e;
	}

CATCH_013a:
	{// begin catch(System.Security.Cryptography.CryptographicException)
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_56 = (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var)));
		NullCheck(L_56);
		CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645(L_56, NULL);
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_57 = L_56;
		NullCheck(L_57);
		CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A(L_57, 1, NULL);
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_58 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)));
		NullCheck(L_58);
		RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF(L_58, L_57, NULL);
		V_4 = L_58;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_59 = V_4;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_60 = V_1;
		NullCheck(L_59);
		VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_59, L_60);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0158;
	}// end catch (depth: 1)

IL_0158:
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_61 = V_4;
		return L_61;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Encode_m65BED66F892EB07E6CA404094D13BACB167496C4 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		NullCheck(L_0);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_1;
		L_1 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_2, (uint8_t)((int32_t)48), NULL);
		V_1 = L_2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)2, L_4, NULL);
		NullCheck(L_3);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_3, L_5, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8.___Modulus_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10;
		L_10 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_9, NULL);
		NullCheck(L_7);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11;
		L_11 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_7, L_10, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13.___Exponent_0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
		L_15 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_14, NULL);
		NullCheck(L_12);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_12, L_15, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18.___D_7;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20;
		L_20 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_19, NULL);
		NullCheck(L_17);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_17, L_20, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_23.___P_2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_24, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26;
		L_26 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_25, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_28 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28.___Q_3;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_30;
		L_30 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_29, NULL);
		NullCheck(L_27);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_31;
		L_31 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_27, L_30, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_33 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33.___DP_4;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_35;
		L_35 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_34, NULL);
		NullCheck(L_32);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_36;
		L_36 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_32, L_35, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_37 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_38 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38.___DQ_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_40;
		L_40 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_39, NULL);
		NullCheck(L_37);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_41;
		L_41 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_37, L_40, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_42 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___InverseQ_6;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_45;
		L_45 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_44, NULL);
		NullCheck(L_42);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_46;
		L_46 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_42, L_45, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_47 = V_1;
		NullCheck(L_47);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_47);
		return L_48;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* PrivateKeyInfo_DecodeDSA_mD376BC5F172B6308F4D5DE9519FE8799328D02E2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey0, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 ___dsaParameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___privateKey0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_1, L_0, NULL);
		V_0 = L_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_DecodeDSA_mD376BC5F172B6308F4D5DE9519FE8799328D02E2_RuntimeMethod_var)));
	}

IL_001b:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = PrivateKeyInfo_Normalize_mF76CD1FC00E20C1C35AC8757E761064307BA3C33(L_6, ((int32_t)20), NULL);
		(&___dsaParameters1)->___X_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&___dsaParameters1)->___X_5), (void*)L_7);
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_8;
		L_8 = DSA_Create_mCF142F0B74319A36B19AE3817F9C47FB306A9E21(NULL);
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_9 = L_8;
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_10 = ___dsaParameters1;
		NullCheck(L_9);
		VirtualActionInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 >::Invoke(12 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_9, L_10);
		return L_9;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Encode_m3396C4C782EF8EA952C7DE98B570E25CE0D4E062 (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) 
{
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_0 = ___dsa0;
		NullCheck(L_0);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_1;
		L_1 = VirtualFuncInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9, bool >::Invoke(11 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1.___X_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_3;
		L_3 = ASN1Convert_FromUnsignedBigInteger_m02FCA27FD400AD7C2A1F38283D38A56486924783(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_3);
		return L_4;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.AsymmetricAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKeyInfo_Encode_mE4EDCBEED688E2625A19F871FABAB9A9C5D93CB5 (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___aa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_0 = ___aa0;
		if (!((RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)IsInstClass((RuntimeObject*)L_0, RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_1 = ___aa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = PrivateKeyInfo_Encode_m65BED66F892EB07E6CA404094D13BACB167496C4(((RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)CastclassClass((RuntimeObject*)L_1, RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}

IL_0014:
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_3 = ___aa0;
		if (!((DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)IsInstClass((RuntimeObject*)L_3, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_4 = ___aa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = PrivateKeyInfo_Encode_m3396C4C782EF8EA952C7DE98B570E25CE0D4E062(((DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)CastclassClass((RuntimeObject*)L_4, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0028:
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_6 = ___aa0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_8 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		CryptographicException__ctor_m3ECE03751BC9620B544DA66B5F0B63DE21A27346(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6)), L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrivateKeyInfo_Encode_mE4EDCBEED688E2625A19F871FABAB9A9C5D93CB5_RuntimeMethod_var)));
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
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_mE231E160F0541E832A29C009CD95AFF578E51918 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m5CF5C6296CD6DA1A655FDEEF0701F4E6600E5D7F (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		EncryptedPrivateKeyInfo__ctor_mE231E160F0541E832A29C009CD95AFF578E51918(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85(__this, L_0, NULL);
		return;
	}
}
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptedPrivateKeyInfo_get_Algorithm_mA143C07290B65E429244DBD3C98CD7E4F2FDA061 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____algorithm_0;
		return L_0;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptedPrivateKeyInfo_get_EncryptedData_m0CE09A1279C5BD7DCFC30BD5D9D59921D7082583 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_3;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data_3;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}

IL_0019:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptedPrivateKeyInfo_get_Salt_m9535A0F6F11ABF70C3DAEEBB61E437CB21042F61 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____salt_1;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_1;
		L_1 = RandomNumberGenerator_Create_mA8AC78824FF028898D2CEA52AF9B5BE6D6081009(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____salt_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____salt_1), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____salt_1;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_3);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____salt_1;
		NullCheck((RuntimeArray*)L_4);
		RuntimeObject* L_5;
		L_5 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_4, NULL);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptedPrivateKeyInfo_get_IterationCount_m0027F1C5D6D120B70924F3DFCDFAAA48C064F410 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____iterations_2;
		return L_0;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85 (EncryptedPrivateKeyInfo_t05EB9097978F3451F26C58ADF5A958DDDC27CE02* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_4 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B2_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B1_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B4_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B3_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B6_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B5_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B14_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B7_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B9_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B9_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B8_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B8_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B11_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B11_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B10_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B10_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B13_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* G_B12_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_1, L_0, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = L_1;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_2, NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_001b:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = G_B2_0;
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_5, 0, NULL);
		V_0 = L_6;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_7, NULL);
		G_B3_0 = L_5;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
		{
			G_B4_0 = L_5;
			goto IL_0038;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_9 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_0038:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
		NullCheck(L_10);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11;
		L_11 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_10, 0, NULL);
		V_1 = L_11;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_1;
		NullCheck(L_12);
		uint8_t L_13;
		L_13 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_12, NULL);
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_13) == ((int32_t)6)))
		{
			G_B6_0 = G_B4_0;
			goto IL_0054;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_14 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_0054:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15 = V_1;
		String_t* L_16;
		L_16 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_15, NULL);
		__this->____algorithm_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____algorithm_0), (void*)L_16);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_17, NULL);
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			G_B14_0 = G_B6_0;
			goto IL_00d7;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_0;
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20;
		L_20 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_19, 1, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21 = L_20;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_21, NULL);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			G_B9_0 = L_21;
			G_B9_1 = G_B7_0;
			goto IL_0085;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_23 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_0085:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24 = G_B9_0;
		NullCheck(L_24);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_24, 0, NULL);
		V_3 = L_25;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26 = V_3;
		NullCheck(L_26);
		uint8_t L_27;
		L_27 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_26, NULL);
		G_B10_0 = L_24;
		G_B10_1 = G_B9_1;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			G_B11_0 = L_24;
			G_B11_1 = G_B9_1;
			goto IL_00a1;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_28 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_00a1:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_29, NULL);
		__this->____salt_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____salt_1), (void*)L_30);
		NullCheck(G_B11_0);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_31;
		L_31 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(G_B11_0, 1, NULL);
		V_4 = L_31;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = V_4;
		NullCheck(L_32);
		uint8_t L_33;
		L_33 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_32, NULL);
		G_B12_0 = G_B11_1;
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			G_B13_0 = G_B11_1;
			goto IL_00ca;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_34 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_00ca:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_35 = V_4;
		int32_t L_36;
		L_36 = ASN1Convert_ToInt32_m9A470D9CBF2F909B72C2A463DD2BA95BA8B6E9B8(L_35, NULL);
		__this->____iterations_2 = L_36;
		G_B14_0 = G_B13_0;
	}

IL_00d7:
	{
		NullCheck(G_B14_0);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_37;
		L_37 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(G_B14_0, 1, NULL);
		V_2 = L_37;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = V_2;
		NullCheck(L_38);
		uint8_t L_39;
		L_39 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_38, NULL);
		if ((((int32_t)L_39) == ((int32_t)4)))
		{
			goto IL_00f2;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_40 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptedPrivateKeyInfo_Decode_m1C9F94B949283DE27932FACE345EE2C314982C85_RuntimeMethod_var)));
	}

IL_00f2:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_41 = V_2;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_41, NULL);
		__this->____data_3 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_3), (void*)L_42);
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
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) 
{
	{
		RSAManaged__ctor_mC9FD969A9C89A836300989CC0A3B20E40025D8BE(__this, ((int32_t)1024), NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_mC9FD969A9C89A836300989CC0A3B20E40025D8BE (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, int32_t ___keySize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___keyBlinding_3 = (bool)1;
		RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630(__this, NULL);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue_1), (void*)L_0);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = ((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue_1;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)384), ((int32_t)16384), 8, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		int32_t L_3 = ___keySize0;
		AsymmetricAlgorithm_set_KeySize_mD1671D252CCA9F1E78F865817F4F13B157BDB5AD(__this, L_3, NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_Finalize_mFD07D39251303051B9DF8AF29AB6B4CF9FA7FDCB (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.AsymmetricAlgorithm::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_GenerateKeyPair_m3E0EB3C2ADA16EE8FE2A8AE7071333CB6795F55D (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_3 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, __this);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))>>1));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, __this);
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E(((int32_t)65537), NULL);
		__this->___e_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_13), (void*)L_3);
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5;
		L_5 = BigInteger_GeneratePseudoPrime_mB8FFD10652E0D48BECE2AF33F7B29B64A0BC89E1(L_4, NULL);
		__this->___p_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_7), (void*)L_5);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___p_7;
		uint32_t L_7;
		L_7 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_6, ((int32_t)65537), NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}

IL_0043:
	{
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9;
		L_9 = BigInteger_GeneratePseudoPrime_mB8FFD10652E0D48BECE2AF33F7B29B64A0BC89E1(L_8, NULL);
		__this->___q_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q_8), (void*)L_9);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = __this->___q_8;
		uint32_t L_11;
		L_11 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_10, ((int32_t)65537), NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = __this->___p_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0043;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = __this->___p_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17;
		L_17 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_15, L_16, NULL);
		__this->___n_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___n_12), (void*)L_17);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = __this->___n_12;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_18, NULL);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, __this);
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_00c0;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = __this->___p_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = BigInteger_op_LessThan_m6B49D00910D0474566294F331B8E2959414C87C7(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_0043;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = __this->___q_8;
		__this->___p_7 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_7), (void*)L_24);
		goto IL_0043;
	}

IL_00c0:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = __this->___p_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26;
		L_26 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27;
		L_27 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_25, L_26, NULL);
		V_2 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = __this->___q_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29;
		L_29 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_28, L_29, NULL);
		V_3 = L_30;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_33;
		L_33 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_31, L_32, NULL);
		V_4 = L_33;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = __this->___e_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35 = V_4;
		NullCheck(L_34);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36;
		L_36 = BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5(L_34, L_35, NULL);
		__this->___d_6 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_6), (void*)L_36);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = __this->___d_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39;
		L_39 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_37, L_38, NULL);
		__this->___dp_9 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dp_9), (void*)L_39);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = __this->___d_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42;
		L_42 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_40, L_41, NULL);
		__this->___dq_10 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dq_10), (void*)L_42);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = __this->___q_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_44 = __this->___p_7;
		NullCheck(L_43);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45;
		L_45 = BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5(L_43, L_44, NULL);
		__this->___qInv_11 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qInv_11), (void*)L_45);
		__this->___keypairGenerated_4 = (bool)1;
		__this->___isCRTpossible_2 = (bool)1;
		KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* L_46 = __this->___KeyGenerated_14;
		if (!L_46)
		{
			goto IL_015e;
		}
	}
	{
		KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* L_47 = __this->___KeyGenerated_14;
		NullCheck(L_47);
		KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_inline(L_47, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
	}

IL_015e:
	{
		return;
	}
}
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RSAManaged_get_KeySize_m17BA4753AA6967ADFBEBF49035158532F23DB7A3 (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___m_disposed_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6C0410AEE87244E9E7DBAB19109E78C6FA05884)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_get_KeySize_m17BA4753AA6967ADFBEBF49035158532F23DB7A3_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3 = __this->___keypairGenerated_4;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = __this->___n_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (!((int32_t)(L_6&7)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_subtract(8, ((int32_t)(L_8&7))))));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_003b:
	{
		int32_t L_10;
		L_10 = AsymmetricAlgorithm_get_KeySize_m82ADFD22F46E442C6564C94D45101A4B43A7296D_inline(__this, NULL);
		return L_10;
	}
}
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSAManaged_get_PublicOnly_m12DE914F7BDDD2E850EDD7F34BA9CF3114C333BF (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___keypairGenerated_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = __this->___d_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_1, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = __this->___n_12;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_3, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSAManaged_EncryptValue_mAED1DAF6891C6F20546DD23272193471BB495242 (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	{
		bool L_0 = __this->___m_disposed_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD46621FCDFA78A57FA39EF3174253B2BCFCA7D37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_EncryptValue_mAED1DAF6891C6F20546DD23272193471BB495242_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_2 = __this->___keypairGenerated_4;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		RSAManaged_GenerateKeyPair_m3E0EB3C2ADA16EE8FE2A8AE7071333CB6795F55D(__this, NULL);
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___rgb0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_4, L_3, NULL);
		V_0 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___e_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = __this->___n_12;
		NullCheck(L_5);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_9, ((int32_t)(L_10>>3)), NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = V_0;
		NullCheck(L_12);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_12, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = V_1;
		NullCheck(L_13);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_13, NULL);
		return L_11;
	}
}
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF RSAManaged_ExportParameters_mD63F6ED165F8CA27D9F2BBA4C7FDD232D6C2A53F (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, bool ___includePrivateParameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->___m_disposed_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6C0410AEE87244E9E7DBAB19109E78C6FA05884)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ExportParameters_mD63F6ED165F8CA27D9F2BBA4C7FDD232D6C2A53F_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3 = __this->___keypairGenerated_4;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		RSAManaged_GenerateKeyPair_m3E0EB3C2ADA16EE8FE2A8AE7071333CB6795F55D(__this, NULL);
	}

IL_0026:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = __this->___e_13;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_4, NULL);
		(&V_0)->___Exponent_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Exponent_0), (void*)L_5);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___n_12;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_6, NULL);
		(&V_0)->___Modulus_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Modulus_1), (void*)L_7);
		bool L_8 = ___includePrivateParameters0;
		if (!L_8)
		{
			goto IL_0188;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___d_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_9, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_11 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55DAB60CD344FFD34E16292DA4DECD967CD55236)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ExportParameters_mD63F6ED165F8CA27D9F2BBA4C7FDD232D6C2A53F_RuntimeMethod_var)));
	}

IL_0071:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = __this->___d_6;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_12, NULL);
		(&V_0)->___D_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___D_7), (void*)L_13);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14.___D_7;
		NullCheck(L_15);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16.___Modulus_1;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_00cc;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18.___Modulus_1;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)));
		V_1 = L_20;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21.___D_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		NullCheck(L_24);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_25.___D_7;
		NullCheck(L_26);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_27 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = L_27.___D_7;
		NullCheck(L_28);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), ((int32_t)(((RuntimeArray*)L_26)->max_length)))), ((int32_t)(((RuntimeArray*)L_28)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		(&V_0)->___D_7 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___D_7), (void*)L_29);
	}

IL_00cc:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = __this->___p_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_30, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0188;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_32, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_33)
		{
			goto IL_0188;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = __this->___dp_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_34, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_35)
		{
			goto IL_0188;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36 = __this->___dq_10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_36, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_37)
		{
			goto IL_0188;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = __this->___qInv_11;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_38, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, __this);
		V_2 = ((int32_t)(L_40>>4));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = __this->___p_7;
		int32_t L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_41, L_42, NULL);
		(&V_0)->___P_2 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___P_2), (void*)L_43);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_44 = __this->___q_8;
		int32_t L_45 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_44, L_45, NULL);
		(&V_0)->___Q_3 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Q_3), (void*)L_46);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = __this->___dp_9;
		int32_t L_48 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_47, L_48, NULL);
		(&V_0)->___DP_4 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DP_4), (void*)L_49);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = __this->___dq_10;
		int32_t L_51 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_50, L_51, NULL);
		(&V_0)->___DQ_5 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DQ_5), (void*)L_52);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_53 = __this->___qInv_11;
		int32_t L_54 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD(__this, L_53, L_54, NULL);
		(&V_0)->___InverseQ_6 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___InverseQ_6), (void*)L_55);
	}

IL_0188:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_56 = V_0;
		return L_56;
	}
}
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8 (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_3 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	int32_t G_B22_0 = 0;
	RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* G_B25_0 = NULL;
	RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* G_B23_0 = NULL;
	RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* G_B26_1 = NULL;
	int32_t G_B35_0 = 0;
	{
		bool L_0 = __this->___m_disposed_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6C0410AEE87244E9E7DBAB19109E78C6FA05884)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8_RuntimeMethod_var)));
	}

IL_0018:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_3 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3.___Exponent_0;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5;
		L_5 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAADE1C63842D962BC37E4B07F0B56E23A26C022)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_6 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8_RuntimeMethod_var)));
	}

IL_0030:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_7 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7.___Modulus_1;
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9;
		L_9 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08325EBD3F98F56ECBD5A88334753C82A59BB0EB)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_10 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8_RuntimeMethod_var)));
	}

IL_0048:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_11 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11.___Exponent_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_13, L_12, NULL);
		__this->___e_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_13), (void*)L_13);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_14 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14.___Modulus_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_16, L_15, NULL);
		__this->___n_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___n_12), (void*)L_16);
		V_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		__this->___q_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q_8), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = L_17;
		V_2 = L_18;
		__this->___p_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_7), (void*)L_18);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = L_19;
		V_2 = L_20;
		__this->___qInv_11 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qInv_11), (void*)L_20);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = L_21;
		V_2 = L_22;
		__this->___dq_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dq_10), (void*)L_22);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = L_23;
		V_2 = L_24;
		__this->___dp_9 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dp_9), (void*)L_24);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = V_2;
		__this->___d_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_6), (void*)L_25);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_26 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_26.___D_7;
		if (!L_27)
		{
			goto IL_00b7;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_28 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28.___D_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_30, L_29, NULL);
		__this->___d_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_6), (void*)L_30);
	}

IL_00b7:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_31 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = L_31.___DP_4;
		if (!L_32)
		{
			goto IL_00d0;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_33 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33.___DP_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_35, L_34, NULL);
		__this->___dp_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dp_9), (void*)L_35);
	}

IL_00d0:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_36 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36.___DQ_5;
		if (!L_37)
		{
			goto IL_00e9;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_38 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38.___DQ_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_40, L_39, NULL);
		__this->___dq_10 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dq_10), (void*)L_40);
	}

IL_00e9:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_41 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_41.___InverseQ_6;
		if (!L_42)
		{
			goto IL_0102;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_43 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___InverseQ_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_45, L_44, NULL);
		__this->___qInv_11 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qInv_11), (void*)L_45);
	}

IL_0102:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_46 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46.___P_2;
		if (!L_47)
		{
			goto IL_011b;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_48 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = L_48.___P_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_50, L_49, NULL);
		__this->___p_7 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_7), (void*)L_50);
	}

IL_011b:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_51 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = L_51.___Q_3;
		if (!L_52)
		{
			goto IL_0134;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_53 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = L_53.___Q_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_55 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_55, L_54, NULL);
		__this->___q_8 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q_8), (void*)L_55);
	}

IL_0134:
	{
		__this->___keypairGenerated_4 = (bool)1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_56 = __this->___p_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_56, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_57)
		{
			goto IL_0165;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_58 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_58, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_59)
		{
			goto IL_0165;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_60 = __this->___dp_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_60, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		G_B22_0 = ((int32_t)(L_61));
		goto IL_0166;
	}

IL_0165:
	{
		G_B22_0 = 0;
	}

IL_0166:
	{
		V_0 = (bool)G_B22_0;
		bool L_62 = V_0;
		G_B23_0 = __this;
		if (!L_62)
		{
			G_B25_0 = __this;
			goto IL_0187;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = __this->___dq_10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_63, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		G_B24_0 = G_B23_0;
		if (!L_64)
		{
			G_B25_0 = G_B23_0;
			goto IL_0187;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_65 = __this->___qInv_11;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_65, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		G_B26_0 = ((int32_t)(L_66));
		G_B26_1 = G_B24_0;
		goto IL_0188;
	}

IL_0187:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_0188:
	{
		NullCheck(G_B26_1);
		G_B26_1->___isCRTpossible_2 = (bool)G_B26_0;
		bool L_67 = V_0;
		if (L_67)
		{
			goto IL_0191;
		}
	}
	{
		return;
	}

IL_0191:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_68 = __this->___n_12;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_69 = __this->___p_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_70 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_71;
		L_71 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_69, L_70, NULL);
		bool L_72;
		L_72 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_68, L_71, NULL);
		V_1 = L_72;
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_0256;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_74 = __this->___p_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_75;
		L_75 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_76;
		L_76 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_74, L_75, NULL);
		V_3 = L_76;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_77 = __this->___q_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_78;
		L_78 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_79;
		L_79 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_77, L_78, NULL);
		V_4 = L_79;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_80 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_81 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_82;
		L_82 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_80, L_81, NULL);
		V_5 = L_82;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_83 = __this->___e_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_84 = V_5;
		NullCheck(L_83);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_85;
		L_85 = BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5(L_83, L_84, NULL);
		V_6 = L_85;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_86 = __this->___d_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_87 = V_6;
		bool L_88;
		L_88 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_86, L_87, NULL);
		V_1 = L_88;
		bool L_89 = V_1;
		if (L_89)
		{
			goto IL_0256;
		}
	}
	{
		bool L_90 = __this->___isCRTpossible_2;
		if (!L_90)
		{
			goto IL_0256;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_91 = __this->___dp_9;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_92 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_93 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_94;
		L_94 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_92, L_93, NULL);
		bool L_95;
		L_95 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_91, L_94, NULL);
		if (!L_95)
		{
			goto IL_0254;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_96 = __this->___dq_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_97 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_98 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_99;
		L_99 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_97, L_98, NULL);
		bool L_100;
		L_100 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_96, L_99, NULL);
		if (!L_100)
		{
			goto IL_0254;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_101 = __this->___qInv_11;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_102 = __this->___q_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_103 = __this->___p_7;
		NullCheck(L_102);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_104;
		L_104 = BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5(L_102, L_103, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_101, L_104, NULL);
		G_B35_0 = ((int32_t)(L_105));
		goto IL_0255;
	}

IL_0254:
	{
		G_B35_0 = 0;
	}

IL_0255:
	{
		V_1 = (bool)G_B35_0;
	}

IL_0256:
	{
		bool L_106 = V_1;
		if (L_106)
		{
			goto IL_0269;
		}
	}
	{
		String_t* L_107;
		L_107 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3050B959B65E7987322E043FCD280E4871419178)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_108 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_108);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_108, L_107, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAManaged_ImportParameters_m585D1CB6F017A3FDA42FEFEAFD14029F8E41EBC8_RuntimeMethod_var)));
	}

IL_0269:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_Dispose_mE2C5CCB287A79986DFB8A3A2380E6666291C982B (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___m_disposed_5;
		if (L_0)
		{
			goto IL_010e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = __this->___d_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_1, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = __this->___d_6;
		NullCheck(L_3);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_3, NULL);
		__this->___d_6 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_6), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_002b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = __this->___p_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_4, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___p_7;
		NullCheck(L_6);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_6, NULL);
		__this->___p_7 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_7), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_004b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = __this->___q_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_7, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___q_8;
		NullCheck(L_9);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_9, NULL);
		__this->___q_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q_8), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_006b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = __this->___dp_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_10, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = __this->___dp_9;
		NullCheck(L_12);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_12, NULL);
		__this->___dp_9 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dp_9), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_008b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = __this->___dq_10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_13, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = __this->___dq_10;
		NullCheck(L_15);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_15, NULL);
		__this->___dq_10 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dq_10), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_00ab:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = __this->___qInv_11;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_16, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = __this->___qInv_11;
		NullCheck(L_18);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_18, NULL);
		__this->___qInv_11 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qInv_11), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_00cb:
	{
		bool L_19 = ___disposing0;
		if (!L_19)
		{
			goto IL_010e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = __this->___e_13;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_20, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = __this->___e_13;
		NullCheck(L_22);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_22, NULL);
		__this->___e_13 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_13), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_00ee:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = __this->___n_12;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_23, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = __this->___n_12;
		NullCheck(L_25);
		BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323(L_25, NULL);
		__this->___n_12 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___n_12), (void*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL);
	}

IL_010e:
	{
		__this->___m_disposed_5 = (bool)1;
		return;
	}
}
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAManaged_ToXmlString_m05B2E2182E8223F5242E8C0D8A0BF70750A9CB93 (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, bool ___includePrivateParameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F339E2067485077633DE2026F6468EC3550949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85F02773B30D7E03E02058A46638441028F4AD00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___includePrivateParameters0;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_2;
		L_2 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, __this, L_1);
		V_1 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			StringBuilder_t* L_3 = V_0;
			NullCheck(L_3);
			StringBuilder_t* L_4;
			L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465, NULL);
			StringBuilder_t* L_5 = V_0;
			NullCheck(L_5);
			StringBuilder_t* L_6;
			L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD, NULL);
			StringBuilder_t* L_7 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_8 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8.___Modulus_1;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_10;
			L_10 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_9, NULL);
			NullCheck(L_7);
			StringBuilder_t* L_11;
			L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_10, NULL);
			StringBuilder_t* L_12 = V_0;
			NullCheck(L_12);
			StringBuilder_t* L_13;
			L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D, NULL);
			StringBuilder_t* L_14 = V_0;
			NullCheck(L_14);
			StringBuilder_t* L_15;
			L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral04F339E2067485077633DE2026F6468EC3550949, NULL);
			StringBuilder_t* L_16 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_17 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17.___Exponent_0;
			String_t* L_19;
			L_19 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_18, NULL);
			NullCheck(L_16);
			StringBuilder_t* L_20;
			L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_19, NULL);
			StringBuilder_t* L_21 = V_0;
			NullCheck(L_21);
			StringBuilder_t* L_22;
			L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910, NULL);
			bool L_23 = ___includePrivateParameters0;
			if (!L_23)
			{
				goto IL_0198_1;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_24 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24.___P_2;
			if (!L_25)
			{
				goto IL_00a6_1;
			}
		}
		{
			StringBuilder_t* L_26 = V_0;
			NullCheck(L_26);
			StringBuilder_t* L_27;
			L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08, NULL);
			StringBuilder_t* L_28 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_29 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29.___P_2;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_31;
			L_31 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_30, NULL);
			NullCheck(L_28);
			StringBuilder_t* L_32;
			L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_31, NULL);
			StringBuilder_t* L_33 = V_0;
			NullCheck(L_33);
			StringBuilder_t* L_34;
			L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117, NULL);
		}

IL_00a6_1:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_35 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35.___Q_3;
			if (!L_36)
			{
				goto IL_00d8_1;
			}
		}
		{
			StringBuilder_t* L_37 = V_0;
			NullCheck(L_37);
			StringBuilder_t* L_38;
			L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0, NULL);
			StringBuilder_t* L_39 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_40 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40.___Q_3;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_42;
			L_42 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_41, NULL);
			NullCheck(L_39);
			StringBuilder_t* L_43;
			L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_42, NULL);
			StringBuilder_t* L_44 = V_0;
			NullCheck(L_44);
			StringBuilder_t* L_45;
			L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral85F02773B30D7E03E02058A46638441028F4AD00, NULL);
		}

IL_00d8_1:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_46 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46.___DP_4;
			if (!L_47)
			{
				goto IL_010a_1;
			}
		}
		{
			StringBuilder_t* L_48 = V_0;
			NullCheck(L_48);
			StringBuilder_t* L_49;
			L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, _stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855, NULL);
			StringBuilder_t* L_50 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_51 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = L_51.___DP_4;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_53;
			L_53 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_52, NULL);
			NullCheck(L_50);
			StringBuilder_t* L_54;
			L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, L_53, NULL);
			StringBuilder_t* L_55 = V_0;
			NullCheck(L_55);
			StringBuilder_t* L_56;
			L_56 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_55, _stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE, NULL);
		}

IL_010a_1:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_57 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = L_57.___DQ_5;
			if (!L_58)
			{
				goto IL_013c_1;
			}
		}
		{
			StringBuilder_t* L_59 = V_0;
			NullCheck(L_59);
			StringBuilder_t* L_60;
			L_60 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_59, _stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D, NULL);
			StringBuilder_t* L_61 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_62 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = L_62.___DQ_5;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_64;
			L_64 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_63, NULL);
			NullCheck(L_61);
			StringBuilder_t* L_65;
			L_65 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, L_64, NULL);
			StringBuilder_t* L_66 = V_0;
			NullCheck(L_66);
			StringBuilder_t* L_67;
			L_67 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_66, _stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD, NULL);
		}

IL_013c_1:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_68 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = L_68.___InverseQ_6;
			if (!L_69)
			{
				goto IL_016e_1;
			}
		}
		{
			StringBuilder_t* L_70 = V_0;
			NullCheck(L_70);
			StringBuilder_t* L_71;
			L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, _stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7, NULL);
			StringBuilder_t* L_72 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_73 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = L_73.___InverseQ_6;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_75;
			L_75 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_74, NULL);
			NullCheck(L_72);
			StringBuilder_t* L_76;
			L_76 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_72, L_75, NULL);
			StringBuilder_t* L_77 = V_0;
			NullCheck(L_77);
			StringBuilder_t* L_78;
			L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_77, _stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88, NULL);
		}

IL_016e_1:
		{
			StringBuilder_t* L_79 = V_0;
			NullCheck(L_79);
			StringBuilder_t* L_80;
			L_80 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_79, _stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93, NULL);
			StringBuilder_t* L_81 = V_0;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_82 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = L_82.___D_7;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_84;
			L_84 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_83, NULL);
			NullCheck(L_81);
			StringBuilder_t* L_85;
			L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, L_84, NULL);
			StringBuilder_t* L_86 = V_0;
			NullCheck(L_86);
			StringBuilder_t* L_87;
			L_87 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_86, _stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F, NULL);
		}

IL_0198_1:
		{
			StringBuilder_t* L_88 = V_0;
			NullCheck(L_88);
			StringBuilder_t* L_89;
			L_89 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, _stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5, NULL);
			goto IL_0254;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a9;
		}
		throw e;
	}

CATCH_01a9:
	{// begin catch(System.Object)
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_90 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = L_90.___P_2;
			if (!L_91)
			{
				goto IL_01c6;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_92 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = L_92.___P_2;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_94 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = L_94.___P_2;
			NullCheck(L_95);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_93, 0, ((int32_t)(((RuntimeArray*)L_95)->max_length)), NULL);
		}

IL_01c6:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_96 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = L_96.___Q_3;
			if (!L_97)
			{
				goto IL_01e2;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_98 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = L_98.___Q_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_100 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = L_100.___Q_3;
			NullCheck(L_101);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_99, 0, ((int32_t)(((RuntimeArray*)L_101)->max_length)), NULL);
		}

IL_01e2:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_102 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = L_102.___DP_4;
			if (!L_103)
			{
				goto IL_01fe;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_104 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = L_104.___DP_4;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_106 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = L_106.___DP_4;
			NullCheck(L_107);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_105, 0, ((int32_t)(((RuntimeArray*)L_107)->max_length)), NULL);
		}

IL_01fe:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_108 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = L_108.___DQ_5;
			if (!L_109)
			{
				goto IL_021a;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_110 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = L_110.___DQ_5;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_112 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = L_112.___DQ_5;
			NullCheck(L_113);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_111, 0, ((int32_t)(((RuntimeArray*)L_113)->max_length)), NULL);
		}

IL_021a:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_114 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = L_114.___InverseQ_6;
			if (!L_115)
			{
				goto IL_0236;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_116 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = L_116.___InverseQ_6;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_118 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = L_118.___InverseQ_6;
			NullCheck(L_119);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_117, 0, ((int32_t)(((RuntimeArray*)L_119)->max_length)), NULL);
		}

IL_0236:
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_120 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = L_120.___D_7;
			if (!L_121)
			{
				goto IL_0252;
			}
		}
		{
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_122 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = L_122.___D_7;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_124 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = L_124.___D_7;
			NullCheck(L_125);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_123, 0, ((int32_t)(((RuntimeArray*)L_125)->max_length)), NULL);
		}

IL_0252:
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_0254:
	{
		StringBuilder_t* L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127;
		L_127 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_126);
		return L_127;
	}
}
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSAManaged_GetPaddedValue_m228CFE67E9EF6B3659E761E55D06AD18B6DFF1FD (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = ___length1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}

IL_000f:
	{
		int32_t L_5 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		int32_t L_9 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)))), ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		return L_14;
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
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Multicast(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* currentDelegate = reinterpret_cast<KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Open(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenStaticInvoker(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_ClosedStaticInvoker(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenVirtual(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInterface(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericVirtual(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___sender0, ___e1);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericInterface(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___sender0, ___e1);
}
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_m5B52F3B7F5A33F1A0BDC378D304EF8F681A1D8FB (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Open;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Multicast;
}
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___fileblock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileblock_0), (void*)L_0);
		return;
	}
}
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockNo_2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		int32_t L_1 = __this->___peOffset_4;
		return L_1;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs_1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
	}

IL_000e:
	{
		String_t* L_1 = ___filename0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_2, L_1, 3, 1, 1, NULL);
		__this->___fs_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs_1), (void*)L_2);
		__this->___blockNo_2 = 0;
		return;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs_1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___rawdata0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B(L_2, L_1, (bool)0, NULL);
		__this->___fs_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs_1), (void*)L_2);
		__this->___blockNo_2 = 0;
		return;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs_1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs_1;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_1);
		__this->___fs_1 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs_1), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = Locale_GetText_m2CD7CCD229D8F3DDFF65B3A064F87756C3A1AFDF(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453C5BAA19765F31DEA040CBE3D9E279F3C7FA6E)), L_3, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_8 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545_RuntimeMethod_var)));
	}

IL_0029:
	{
		return;
	}
}
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::ProcessFirstBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs_1;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, ((int64_t)0));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___fs_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___fileblock_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___fileblock_0;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		__this->___blockLength_3 = L_5;
		__this->___blockNo_2 = 1;
		int32_t L_6 = __this->___blockLength_3;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)64))))
		{
			goto IL_004a;
		}
	}
	{
		return 2;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___fileblock_0;
		uint16_t L_8;
		L_8 = BitConverterLE_ToUInt16_mCEF75C82E29791EE2719AC882211226BFCC84021(L_7, 0, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)23117))))
		{
			goto IL_005f;
		}
	}
	{
		return 3;
	}

IL_005f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___fileblock_0;
		int32_t L_10;
		L_10 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_9, ((int32_t)60), NULL);
		__this->___peOffset_4 = L_10;
		int32_t L_11 = __this->___peOffset_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___fileblock_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_13;
		L_13 = Locale_GetText_mBF03E5F490A30E7BDF18D916A1D7A904C07A4F1E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4250A23553CC186AEFAD328A160DFF786585B4E5)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___fileblock_0;
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(L_13, L_16, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_18 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A_RuntimeMethod_var)));
	}

IL_00a4:
	{
		int32_t L_19 = __this->___peOffset_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = __this->___fs_1;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		if ((((int64_t)((int64_t)L_19)) <= ((int64_t)L_21)))
		{
			goto IL_00ba;
		}
	}
	{
		return 4;
	}

IL_00ba:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___fileblock_0;
		int32_t L_23 = __this->___peOffset_4;
		uint32_t L_24;
		L_24 = BitConverterLE_ToUInt32_mDADBC5CAD1DE74FD9A0611F70C4C3F01F66BEAA0(L_22, L_23, NULL);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)17744))))
		{
			goto IL_00d4;
		}
	}
	{
		return 5;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___fileblock_0;
		int32_t L_26 = __this->___peOffset_4;
		uint16_t L_27;
		L_27 = BitConverterLE_ToUInt16_mCEF75C82E29791EE2719AC882211226BFCC84021(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)24))), NULL);
		V_0 = L_27;
		uint16_t L_28 = V_0;
		__this->___pe64_8 = (bool)((((int32_t)L_28) == ((int32_t)((int32_t)523)))? 1 : 0);
		bool L_29 = __this->___pe64_8;
		if (!L_29)
		{
			goto IL_013d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___fileblock_0;
		int32_t L_31 = __this->___peOffset_4;
		int32_t L_32;
		L_32 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_30, ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)168))), NULL);
		__this->___dirSecurityOffset_5 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___fileblock_0;
		int32_t L_34 = __this->___peOffset_4;
		int32_t L_35;
		L_35 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_33, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_34, ((int32_t)168))), 4)), NULL);
		__this->___dirSecuritySize_6 = L_35;
		goto IL_0177;
	}

IL_013d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___fileblock_0;
		int32_t L_37 = __this->___peOffset_4;
		int32_t L_38;
		L_38 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_36, ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)152))), NULL);
		__this->___dirSecurityOffset_5 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___fileblock_0;
		int32_t L_40 = __this->___peOffset_4;
		int32_t L_41;
		L_41 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)156))), NULL);
		__this->___dirSecuritySize_6 = L_41;
	}

IL_0177:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___fileblock_0;
		int32_t L_43 = __this->___peOffset_4;
		int32_t L_44;
		L_44 = BitConverterLE_ToInt32_m2297FAB5095F11250B3F11D2C4F3CDC5FF410CC8(L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)12))), NULL);
		__this->___coffSymbolTableOffset_7 = L_44;
		return 0;
	}
}
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = __this->___blockNo_2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		int32_t L_1 = __this->___dirSecuritySize_6;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = __this->___dirSecuritySize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 8)));
		V_0 = L_3;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___fs_1;
		int32_t L_5 = __this->___dirSecurityOffset_5;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, ((int64_t)((int32_t)il2cpp_codegen_add(L_5, 8))));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___fs_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}

IL_004d:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___hash0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___blockNo_2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs_1;
		int32_t L_2 = __this->___blockLength_3;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, ((int64_t)L_2));
		V_1 = 0;
		int32_t L_3 = __this->___dirSecurityOffset_5;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_4 = __this->___dirSecurityOffset_5;
		int32_t L_5 = __this->___blockLength_3;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_6 = __this->___dirSecurityOffset_5;
		__this->___blockLength_3 = L_6;
		V_0 = ((int64_t)0);
		goto IL_0152;
	}

IL_004e:
	{
		int32_t L_7 = __this->___dirSecurityOffset_5;
		int32_t L_8 = __this->___blockLength_3;
		V_0 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8)));
		goto IL_0152;
	}

IL_0062:
	{
		int32_t L_9 = __this->___coffSymbolTableOffset_7;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___fileblock_0;
		int32_t L_11;
		L_11 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___fileblock_0;
		int32_t L_13;
		L_13 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, ((int32_t)13)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___fileblock_0;
		int32_t L_15;
		L_15 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, ((int32_t)14)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___fileblock_0;
		int32_t L_17;
		L_17 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, ((int32_t)15)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___fileblock_0;
		int32_t L_19;
		L_19 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, ((int32_t)16)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___fileblock_0;
		int32_t L_21;
		L_21 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)17)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___fileblock_0;
		int32_t L_23;
		L_23 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, ((int32_t)18)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___fileblock_0;
		int32_t L_25;
		L_25 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, ((int32_t)19)))), (uint8_t)0);
		int32_t L_26 = __this->___coffSymbolTableOffset_7;
		int32_t L_27 = __this->___blockLength_3;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_28 = __this->___coffSymbolTableOffset_7;
		__this->___blockLength_3 = L_28;
		V_0 = ((int64_t)0);
		goto IL_0152;
	}

IL_0115:
	{
		int32_t L_29 = __this->___coffSymbolTableOffset_7;
		int32_t L_30 = __this->___blockLength_3;
		V_0 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_29, L_30)));
		goto IL_0152;
	}

IL_0126:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = __this->___fs_1;
		NullCheck(L_31);
		int64_t L_32;
		L_32 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_31);
		V_1 = ((int32_t)((int64_t)(L_32&((int64_t)7))));
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(8, L_34));
	}

IL_013e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = __this->___fs_1;
		NullCheck(L_35);
		int64_t L_36;
		L_36 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_35);
		int32_t L_37 = __this->___blockLength_3;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_36, ((int64_t)L_37)));
	}

IL_0152:
	{
		int32_t L_38 = __this->___peOffset_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)88)));
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_39 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___fileblock_0;
		int32_t L_41 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___fileblock_0;
		NullCheck(L_39);
		int32_t L_43;
		L_43 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_39, L_40, 0, L_41, L_42, 0, NULL);
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 4));
		bool L_45 = __this->___pe64_8;
		if (!L_45)
		{
			goto IL_019c;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_46 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___fileblock_0;
		int32_t L_48 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___fileblock_0;
		int32_t L_50 = V_2;
		NullCheck(L_46);
		int32_t L_51;
		L_51 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_46, L_47, L_48, ((int32_t)76), L_49, L_50, NULL);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, ((int32_t)84)));
		goto IL_01b8;
	}

IL_019c:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_53 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___fileblock_0;
		int32_t L_55 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___fileblock_0;
		int32_t L_57 = V_2;
		NullCheck(L_53);
		int32_t L_58;
		L_58 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_53, L_54, L_55, ((int32_t)60), L_56, L_57, NULL);
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)68)));
	}

IL_01b8:
	{
		int64_t L_60 = V_0;
		if (L_60)
		{
			goto IL_01d6;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_61 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___fileblock_0;
		int32_t L_63 = V_2;
		int32_t L_64 = __this->___blockLength_3;
		int32_t L_65 = V_2;
		NullCheck(L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_61, L_62, L_63, ((int32_t)il2cpp_codegen_subtract(L_64, L_65)), NULL);
		goto IL_02ab;
	}

IL_01d6:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_67 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___fileblock_0;
		int32_t L_69 = V_2;
		int32_t L_70 = __this->___blockLength_3;
		int32_t L_71 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___fileblock_0;
		int32_t L_73 = V_2;
		NullCheck(L_67);
		int32_t L_74;
		L_74 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_67, L_68, L_69, ((int32_t)il2cpp_codegen_subtract(L_70, L_71)), L_72, L_73, NULL);
		int64_t L_75 = V_0;
		V_3 = ((int64_t)(L_75>>((int32_t)12)));
		int64_t L_76 = V_0;
		int64_t L_77 = V_3;
		V_4 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_76, ((int64_t)(L_77<<((int32_t)12))))));
		int32_t L_78 = V_4;
		if (L_78)
		{
			goto IL_024b;
		}
	}
	{
		int64_t L_79 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_79, ((int64_t)1)));
		V_4 = ((int32_t)4096);
		goto IL_024b;
	}

IL_0213:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_80 = __this->___fs_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___fileblock_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___fileblock_0;
		NullCheck(L_82);
		NullCheck(L_80);
		int32_t L_83;
		L_83 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_80, L_81, 0, ((int32_t)(((RuntimeArray*)L_82)->max_length)));
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_84 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___fileblock_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = __this->___fileblock_0;
		NullCheck(L_86);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___fileblock_0;
		NullCheck(L_84);
		int32_t L_88;
		L_88 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_84, L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), L_87, 0, NULL);
	}

IL_024b:
	{
		int64_t L_89 = V_3;
		int64_t L_90 = L_89;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_90, ((int64_t)1)));
		if ((((int64_t)L_90) > ((int64_t)((int64_t)0))))
		{
			goto IL_0213;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_91 = __this->___fs_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___fileblock_0;
		int32_t L_93 = V_4;
		NullCheck(L_91);
		int32_t L_94;
		L_94 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_91, L_92, 0, L_93);
		int32_t L_95 = V_4;
		if ((((int32_t)L_94) == ((int32_t)L_95)))
		{
			goto IL_026f;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_026f:
	{
		int32_t L_96 = V_1;
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_97 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___fileblock_0;
		int32_t L_99 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___fileblock_0;
		NullCheck(L_97);
		int32_t L_101;
		L_101 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_97, L_98, 0, L_99, L_100, 0, NULL);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_102 = ___hash0;
		int32_t L_103 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_103);
		int32_t L_105 = V_1;
		NullCheck(L_102);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106;
		L_106 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_102, L_104, 0, L_105, NULL);
		goto IL_02ab;
	}

IL_029b:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_107 = ___hash0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___fileblock_0;
		int32_t L_109 = V_4;
		NullCheck(L_107);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110;
		L_110 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_107, L_108, 0, L_109, NULL);
	}

IL_02ab:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_111 = ___hash0;
		NullCheck(L_111);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112;
		L_112 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_111);
		return L_112;
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
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C(__this, NULL);
		__this->___reason_16 = (-1);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_0 = (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21*)il2cpp_codegen_object_new(X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79(L_0, NULL);
		__this->___signerChain_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signerChain_20), (void*)L_0);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_1 = (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21*)il2cpp_codegen_object_new(X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79(L_1, NULL);
		__this->___timestampChain_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timestampChain_21), (void*)L_1);
		return;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_mE7D65775E1289E0DBB208034BE5EB40AB6469BA0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) 
{
	{
		AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A(__this, L_0, NULL);
		return;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___rawdata_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawdata_10), (void*)L_0);
	}
	try
	{// begin try (depth: 1)
		bool L_1;
		L_1 = AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0(__this, NULL);
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Security.SecurityException)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_0019:
	{// begin catch(System.Object)
		__this->___reason_16 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* AuthenticodeDeformatter_get_SigningCertificate_m5C675A2AB0464670DF6C557C4433871014EB52CC (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->___signingCertificate_15;
		return L_0;
	}
}
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5);
		s_Il2CppMethodInitialized = true;
	}
	ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* V_0 = NULL;
	SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* V_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	{
		String_t* L_0 = __this->___filename_9;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___filename_9;
		AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465(__this, L_1, NULL);
		goto IL_0022;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawdata_10;
		AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81(__this, L_2, NULL);
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E(__this, NULL);
		__this->___entry_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entry_19), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___entry_19;
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		__this->___reason_16 = 1;
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___entry_19;
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_6 = (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE*)il2cpp_codegen_object_new(ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContentInfo__ctor_m7D3DD72DA482A68007DB183975E3F649EEE308CD(L_6, L_5, NULL);
		V_0 = L_6;
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline(L_7, NULL);
		bool L_9;
		L_9 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_8, _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_006b:
	{
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_10 = V_0;
		NullCheck(L_10);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11;
		L_11 = ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline(L_10, NULL);
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_12 = (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B*)il2cpp_codegen_object_new(SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SignedData__ctor_m4609283D3F9F231C0B5156FAE7C2DCF89A3AD7A6(L_12, L_11, NULL);
		V_1 = L_12;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_13 = V_1;
		NullCheck(L_13);
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_14;
		L_14 = SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline(L_14, NULL);
		bool L_16;
		L_16 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_15, _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3, NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0096:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_17 = V_1;
		NullCheck(L_17);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_18;
		L_18 = SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline(L_17, NULL);
		__this->___coll_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_12), (void*)L_18);
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_19 = V_1;
		NullCheck(L_19);
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_20;
		L_20 = SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline(L_19, NULL);
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline(L_20, NULL);
		V_2 = L_21;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_2;
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23;
		L_23 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_22, 0, NULL);
		NullCheck(L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24;
		L_24 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, 1, NULL);
		NullCheck(L_24);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_24, 1, NULL);
		__this->___signedHash_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signedHash_13), (void*)L_25);
		V_3 = (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)NULL;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26 = __this->___signedHash_13;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE(L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)20))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)16))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)20))))
		{
			goto IL_0113;
		}
	}
	{
		goto IL_0167;
	}

IL_00ea:
	{
		int32_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)32))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_32 = V_6;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)48))))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)64))))
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0167;
	}

IL_00fe:
	{
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_34;
		L_34 = MD5_Create_mEA05E397A9E93DDB815D44FF4204495BA328C1C9(NULL);
		V_3 = L_34;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_35 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_35, NULL);
		__this->___hash_11 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)L_36);
		goto IL_0176;
	}

IL_0113:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_37;
		L_37 = SHA1_Create_m6F713539D55576456BDF91B7BFC7103ED8CB766C(NULL);
		V_3 = L_37;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_38, NULL);
		__this->___hash_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)L_39);
		goto IL_0176;
	}

IL_0128:
	{
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_40;
		L_40 = SHA256_Create_mCF8D7EB52BAB85B20EAE61668D40DDF0CE3EC2E8(NULL);
		V_3 = L_40;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_41, NULL);
		__this->___hash_11 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)L_42);
		goto IL_0176;
	}

IL_013d:
	{
		SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* L_43;
		L_43 = SHA384_Create_m3F096EC40352F7BF53607B54D7558FA82DF9CFB9(NULL);
		V_3 = L_43;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_44 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_44, NULL);
		__this->___hash_11 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)L_45);
		goto IL_0176;
	}

IL_0152:
	{
		SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* L_46;
		L_46 = SHA512_Create_mA731C5882C5EF8426A1F4CAE82208B403BA5A0D6(NULL);
		V_3 = L_46;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_47, NULL);
		__this->___hash_11 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)L_48);
		goto IL_0176;
	}

IL_0167:
	{
		__this->___reason_16 = 5;
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0176:
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_49 = __this->___signedHash_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___hash_11;
		NullCheck(L_49);
		bool L_51;
		L_51 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_49, L_50, NULL);
		if (L_51)
		{
			goto IL_0196;
		}
	}
	{
		__this->___reason_16 = 2;
	}

IL_0196:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_52 = V_2;
		NullCheck(L_52);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_53;
		L_53 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_52, 0, NULL);
		NullCheck(L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
		L_54 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_53, NULL);
		V_4 = L_54;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_55 = V_3;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_55);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_56 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_4;
		NullCheck(L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
		L_58 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_56, L_57, NULL);
		V_5 = L_58;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_59 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_5;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_61 = V_3;
		bool L_62;
		L_62 = AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973(__this, L_59, L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_63 = __this->___reason_16;
		return (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
	}

IL_01ca:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, String_t* ___issuer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serial1, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___x5092, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___issuer0;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_1 = ___x5092;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.Security.X509.X509Certificate::get_IssuerName() */, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___serial1;
		NullCheck(L_4);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_5 = ___x5092;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_5);
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___serial1;
		NullCheck(L_7);
		V_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		V_1 = 0;
		goto IL_003e;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___serial1;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_12 = ___x5092;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_12);
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_0 = L_15;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int32_t)L_11) == ((int32_t)L_17)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003e:
	{
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___serial1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* ___sd0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___calculatedMessageDigest1, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___ha2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	String_t* V_2 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_9 = NULL;
	String_t* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* V_14 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_15 = NULL;
	int32_t V_16 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_17 = NULL;
	SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* V_18 = NULL;
	{
		V_0 = (String_t*)NULL;
		V_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		V_8 = 0;
		goto IL_0099;
	}

IL_000c:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_0 = ___sd0;
		NullCheck(L_0);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_1;
		L_1 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_0, NULL);
		NullCheck(L_1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2;
		L_2 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_1, NULL);
		int32_t L_3 = V_8;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_9 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_4, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_9;
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_5, 0, NULL);
		String_t* L_7;
		L_7 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_6, NULL);
		V_10 = L_7;
		String_t* L_8 = V_10;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7, NULL);
		if (L_9)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_10 = V_10;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31, NULL);
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_12 = V_10;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C, NULL);
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = V_10;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2, NULL);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_0093;
	}

IL_006e:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_9;
		NullCheck(L_16);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17;
		L_17 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_16, 1, NULL);
		NullCheck(L_17);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18;
		L_18 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_17, 0, NULL);
		String_t* L_19;
		L_19 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_18, NULL);
		V_0 = L_19;
		goto IL_0093;
	}

IL_0084:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = V_9;
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_20, 1, NULL);
		NullCheck(L_21);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22;
		L_22 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_21, 0, NULL);
		V_1 = L_22;
	}

IL_0093:
	{
		int32_t L_23 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0099:
	{
		int32_t L_24 = V_8;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_25 = ___sd0;
		NullCheck(L_25);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_26;
		L_26 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_25, NULL);
		NullCheck(L_26);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_27;
		L_27 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_26, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_27);
		if ((((int32_t)L_24) < ((int32_t)L_28)))
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_29 = V_0;
		bool L_30;
		L_30 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_29, _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3, NULL);
		if (!L_30)
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_31 = V_1;
		if (L_31)
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_00c4:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___calculatedMessageDigest1;
		NullCheck(L_32);
		bool L_34;
		L_34 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_00cf:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_35 = ___ha2;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		String_t* L_37;
		L_37 = CryptoConfig_MapNameToOID_m93A1FE1104368BC4032B463DFB51BFBD17F522B6(L_36, NULL);
		V_2 = L_37;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_38, (uint8_t)((int32_t)49), NULL);
		V_3 = L_38;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_39 = ___sd0;
		NullCheck(L_39);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_40;
		L_40 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_39, NULL);
		NullCheck(L_40);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_41;
		L_41 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_40, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_41);
		V_11 = L_42;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0119:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_43 = V_11;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_44 = V_13;
					if (!L_44)
					{
						goto IL_012d;
					}
				}
				{
					RuntimeObject* L_45 = V_13;
					NullCheck(L_45);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_45);
				}

IL_012d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010e_1;
			}

IL_00f7_1:
			{
				RuntimeObject* L_46 = V_11;
				NullCheck(L_46);
				RuntimeObject* L_47;
				L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				V_12 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_47, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_48 = V_3;
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_49 = V_12;
				NullCheck(L_48);
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_50;
				L_50 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_48, L_49, NULL);
			}

IL_010e_1:
			{
				RuntimeObject* L_51 = V_11;
				NullCheck(L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_51);
				if (L_52)
				{
					goto IL_00f7_1;
				}
			}
			{
				goto IL_012e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012e:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_53 = ___ha2;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_53);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_54 = ___ha2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_55 = V_3;
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_55);
		NullCheck(L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_54, L_56, NULL);
		V_4 = L_57;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_58 = ___sd0;
		NullCheck(L_58);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_59;
		L_59 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_58, NULL);
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8(L_59, NULL);
		V_5 = L_60;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_61 = ___sd0;
		NullCheck(L_61);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_62;
		L_62 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline(L_62, NULL);
		V_6 = L_63;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_64 = ___sd0;
		NullCheck(L_64);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_65;
		L_65 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_64, NULL);
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7(L_65, NULL);
		V_7 = L_66;
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_67 = __this->___coll_12;
		NullCheck(L_67);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_68;
		L_68 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_67, NULL);
		V_14 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f1:
			{// begin finally (depth: 1)
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_69 = V_14;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_69, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_70 = V_13;
					if (!L_70)
					{
						goto IL_0205;
					}
				}
				{
					RuntimeObject* L_71 = V_13;
					NullCheck(L_71);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_71);
				}

IL_0205:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01e6_1;
			}

IL_0178_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_72 = V_14;
				NullCheck(L_72);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_73;
				L_73 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_72, NULL);
				V_15 = L_73;
				String_t* L_74 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_7;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_76 = V_15;
				bool L_77;
				L_77 = AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413(__this, L_74, L_75, L_76, NULL);
				if (!L_77)
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_78 = V_15;
				NullCheck(L_78);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79;
				L_79 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey() */, L_78);
				NullCheck(L_79);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_5;
				NullCheck(L_80);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))) <= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_80)->max_length))>>3)))))
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_81 = V_15;
				__this->___signingCertificate_15 = L_81;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___signingCertificate_15), (void*)L_81);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_82 = V_15;
				NullCheck(L_82);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_83;
				L_83 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_82);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_4;
				String_t* L_85 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_5;
				NullCheck(((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_83, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)));
				bool L_87;
				L_87 = RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE(((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_83, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)), L_84, L_85, L_86, NULL);
				if (!L_87)
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_88 = __this->___signerChain_20;
				X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_89 = __this->___coll_12;
				NullCheck(L_88);
				X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825(L_88, L_89, NULL);
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_90 = __this->___signerChain_20;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_91 = V_15;
				NullCheck(L_90);
				bool L_92;
				L_92 = X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33(L_90, L_91, NULL);
				__this->___trustedRoot_17 = L_92;
				goto IL_0206;
			}

IL_01e6_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_93 = V_14;
				NullCheck(L_93);
				bool L_94;
				L_94 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_93, NULL);
				if (L_94)
				{
					goto IL_0178_1;
				}
			}
			{
				goto IL_0206;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0206:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_95 = ___sd0;
		NullCheck(L_95);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_96;
		L_96 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_95, NULL);
		NullCheck(L_96);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_97;
		L_97 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_96, NULL);
		NullCheck(L_97);
		int32_t L_98;
		L_98 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_97);
		if (L_98)
		{
			goto IL_0221;
		}
	}
	{
		__this->___trustedTimestampRoot_18 = (bool)1;
		goto IL_0291;
	}

IL_0221:
	{
		V_16 = 0;
		goto IL_027d;
	}

IL_0226:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_99 = ___sd0;
		NullCheck(L_99);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_100;
		L_100 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_99, NULL);
		NullCheck(L_100);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_101;
		L_101 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_100, NULL);
		int32_t L_102 = V_16;
		NullCheck(L_101);
		RuntimeObject* L_103;
		L_103 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_101, L_102);
		V_17 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_103, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_104 = V_17;
		NullCheck(L_104);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_105;
		L_105 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_104, 0, NULL);
		String_t* L_106;
		L_106 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_105, NULL);
		bool L_107;
		L_107 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_106, _stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696, NULL);
		if (!L_107)
		{
			goto IL_0277;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_108 = V_17;
		NullCheck(L_108);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_109;
		L_109 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_108, 1, NULL);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_110 = (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505*)il2cpp_codegen_object_new(SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var);
		NullCheck(L_110);
		SignerInfo__ctor_mDB114E56EC2F9D5820B2F48A00CF14972B3BCCED(L_110, L_109, NULL);
		V_18 = L_110;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_111 = V_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_5;
		bool L_113;
		L_113 = AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD(__this, L_111, L_112, NULL);
		__this->___trustedTimestampRoot_18 = L_113;
	}

IL_0277:
	{
		int32_t L_114 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_027d:
	{
		int32_t L_115 = V_16;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_116 = ___sd0;
		NullCheck(L_116);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_117;
		L_117 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_116, NULL);
		NullCheck(L_117);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_118;
		L_118 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_117, NULL);
		NullCheck(L_118);
		int32_t L_119;
		L_119 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_118);
		if ((((int32_t)L_115) < ((int32_t)L_119)))
		{
			goto IL_0226;
		}
	}

IL_0291:
	{
		bool L_120 = __this->___trustedRoot_17;
		if (!L_120)
		{
			goto IL_02a0;
		}
	}
	{
		bool L_121 = __this->___trustedTimestampRoot_18;
		return L_121;
	}

IL_02a0:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___cs0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	String_t* V_2 = NULL;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	String_t* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_10 = NULL;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* V_16 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_17 = NULL;
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* V_18 = NULL;
	bool V_19 = false;
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_0 = ___cs0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = (String_t*)NULL;
		V_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		V_9 = 0;
		goto IL_00ac;
	}

IL_0017:
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_2 = ___cs0;
		NullCheck(L_2);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3;
		L_3 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_2, NULL);
		int32_t L_4 = V_9;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_10 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_5, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6 = V_10;
		NullCheck(L_6);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7;
		L_7 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_6, 0, NULL);
		String_t* L_8;
		L_8 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_7, NULL);
		V_11 = L_8;
		String_t* L_9 = V_11;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_11 = V_11;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31, NULL);
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_13 = V_11;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741, NULL);
		if (L_14)
		{
			goto IL_008d;
		}
	}
	{
		goto IL_00a6;
	}

IL_0066:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15 = V_10;
		NullCheck(L_15);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_15, 1, NULL);
		NullCheck(L_16);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17;
		L_17 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_16, 0, NULL);
		String_t* L_18;
		L_18 = ASN1Convert_ToOid_mA14AFFFD01E1AC0ADA5149B502CBBEB3A5035DBC(L_17, NULL);
		V_0 = L_18;
		goto IL_00a6;
	}

IL_007c:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_10;
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20;
		L_20 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_19, 1, NULL);
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_20, 0, NULL);
		V_1 = L_21;
		goto IL_00a6;
	}

IL_008d:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_10;
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23;
		L_23 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_22, 1, NULL);
		NullCheck(L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24;
		L_24 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, 0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_25;
		L_25 = ASN1Convert_ToDateTime_mFC0728584C74F8A86DCB36EA9D076805D8769C26(L_24, NULL);
		__this->___timestamp_14 = L_25;
	}

IL_00a6:
	{
		int32_t L_26 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00ac:
	{
		int32_t L_27 = V_9;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_28 = ___cs0;
		NullCheck(L_28);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_29;
		L_29 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_29);
		if ((((int32_t)L_27) < ((int32_t)L_30)))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_31, _stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410, NULL);
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		return (bool)0;
	}

IL_00cd:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_33 = V_1;
		if (L_33)
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_00d2:
	{
		V_2 = (String_t*)NULL;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE(L_34, NULL);
		V_12 = L_35;
		int32_t L_36 = V_12;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)20))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_37 = V_12;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)16))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_38 = V_12;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)20))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_012a;
	}

IL_00f0:
	{
		int32_t L_39 = V_12;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)32))))
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_40 = V_12;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)48))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_41 = V_12;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)64))))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_012a;
	}

IL_0104:
	{
		V_2 = _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
		goto IL_012a;
	}

IL_010c:
	{
		V_2 = _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
		goto IL_012a;
	}

IL_0114:
	{
		V_2 = _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
		goto IL_012a;
	}

IL_011c:
	{
		V_2 = _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
		goto IL_012a;
	}

IL_0124:
	{
		V_2 = _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
	}

IL_012a:
	{
		String_t* L_42 = V_2;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_43;
		L_43 = HashAlgorithm_Create_mC9DE26E90D5910F717146015C772E10A2A611A57(L_42, NULL);
		V_3 = L_43;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_1;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___signature1;
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_45, L_46, NULL);
		NullCheck(L_44);
		bool L_48;
		L_48 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_44, L_47, NULL);
		if (L_48)
		{
			goto IL_0142;
		}
	}
	{
		return (bool)0;
	}

IL_0142:
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_49 = ___cs0;
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8(L_49, NULL);
		V_4 = L_50;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_51 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_51, (uint8_t)((int32_t)49), NULL);
		V_5 = L_51;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_52 = ___cs0;
		NullCheck(L_52);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_53;
		L_53 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_52, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_53);
		V_13 = L_54;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0185:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_55 = V_13;
					V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_55, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_56 = V_15;
					if (!L_56)
					{
						goto IL_0199;
					}
				}
				{
					RuntimeObject* L_57 = V_15;
					NullCheck(L_57);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_57);
				}

IL_0199:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_017a_1;
			}

IL_0162_1:
			{
				RuntimeObject* L_58 = V_13;
				NullCheck(L_58);
				RuntimeObject* L_59;
				L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_58);
				V_14 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_59, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_60 = V_5;
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_61 = V_14;
				NullCheck(L_60);
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_62;
				L_62 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_60, L_61, NULL);
			}

IL_017a_1:
			{
				RuntimeObject* L_63 = V_13;
				NullCheck(L_63);
				bool L_64;
				L_64 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_63);
				if (L_64)
				{
					goto IL_0162_1;
				}
			}
			{
				goto IL_019a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019a:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_65 = V_3;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_66 = V_5;
		NullCheck(L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67;
		L_67 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_66);
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68;
		L_68 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_65, L_67, NULL);
		V_6 = L_68;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_69 = ___cs0;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline(L_69, NULL);
		V_7 = L_70;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_71 = ___cs0;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72;
		L_72 = SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7(L_71, NULL);
		V_8 = L_72;
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_73 = __this->___coll_12;
		NullCheck(L_73);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_74;
		L_74 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_73, NULL);
		V_16 = L_74;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0249:
			{// begin finally (depth: 1)
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_75 = V_16;
					V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_75, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_76 = V_15;
					if (!L_76)
					{
						goto IL_025d;
					}
				}
				{
					RuntimeObject* L_77 = V_15;
					NullCheck(L_77);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_77);
				}

IL_025d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_023e_1;
			}

IL_01c8_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_78 = V_16;
				NullCheck(L_78);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_79;
				L_79 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_78, NULL);
				V_17 = L_79;
				String_t* L_80 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_8;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_82 = V_17;
				bool L_83;
				L_83 = AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413(__this, L_80, L_81, L_82, NULL);
				if (!L_83)
				{
					goto IL_023e_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_84 = V_17;
				NullCheck(L_84);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85;
				L_85 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey() */, L_84);
				NullCheck(L_85);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_4;
				NullCheck(L_86);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length)))))
				{
					goto IL_023e_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_87 = V_17;
				NullCheck(L_87);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_88;
				L_88 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_87);
				V_18 = ((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_88, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var));
				RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_89 = (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4*)il2cpp_codegen_object_new(RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
				NullCheck(L_89);
				RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A(L_89, NULL);
				RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_90 = L_89;
				RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_91 = V_18;
				NullCheck(L_91);
				RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_92;
				L_92 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_91, (bool)0);
				NullCheck(L_90);
				VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_90, L_92);
				HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_93 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_4;
				il2cpp_codegen_runtime_class_init_inline(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
				bool L_96;
				L_96 = PKCS1_Verify_v15_m43A88872056E2CC8A5B15534134EC647E246097E(L_90, L_93, L_94, L_95, (bool)1, NULL);
				if (!L_96)
				{
					goto IL_023e_1;
				}
			}
			{
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_97 = __this->___timestampChain_21;
				X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_98 = __this->___coll_12;
				NullCheck(L_97);
				X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825(L_97, L_98, NULL);
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_99 = __this->___timestampChain_21;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_100 = V_17;
				NullCheck(L_99);
				bool L_101;
				L_101 = X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33(L_99, L_100, NULL);
				V_19 = L_101;
				goto IL_0260;
			}

IL_023e_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_102 = V_16;
				NullCheck(L_102);
				bool L_103;
				L_103 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_102, NULL);
				if (L_103)
				{
					goto IL_01c8_1;
				}
			}
			{
				goto IL_025e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_025e:
	{
		return (bool)0;
	}

IL_0260:
	{
		bool L_104 = V_19;
		return L_104;
	}
}
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___filename_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filename_9), (void*)(String_t*)NULL);
		__this->___rawdata_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawdata_10), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___entry_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entry_19), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___hash_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash_11), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___signedHash_13 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signedHash_13), (void*)(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL);
		__this->___signingCertificate_15 = (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signingCertificate_15), (void*)(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL);
		__this->___reason_16 = (-1);
		__this->___trustedRoot_17 = (bool)0;
		__this->___trustedTimestampRoot_18 = (bool)0;
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_0 = __this->___signerChain_20;
		NullCheck(L_0);
		X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F(L_0, NULL);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_1 = __this->___timestampChain_21;
		NullCheck(L_1);
		X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___timestamp_14 = L_2;
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
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___sign0, uint32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___len1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		uint32_t L_2 = ___len1;
		__this->___length_0 = L_2;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		__this->___data_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___bi0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		__this->___length_0 = L_4;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___len1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		V_0 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___bi0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
	}

IL_0031:
	{
		uint32_t L_10 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___bi0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_12))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___bi0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length_0;
		__this->___length_0 = L_14;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inData0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		___inData0 = L_1;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inData0;
		NullCheck(L_2);
		__this->___length_0 = ((int32_t)((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inData0;
		NullCheck(L_3);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))&3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_003b:
	{
		uint32_t L_6 = __this->___length_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___data_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___inData0;
		NullCheck(L_8);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		V_2 = 0;
		goto IL_0083;
	}

IL_0056:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___data_1;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___inData0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 3));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___inData0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 2));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___inData0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___inData0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_14<<((int32_t)24)))|((int32_t)((int32_t)L_18<<((int32_t)16)))))|((int32_t)((int32_t)L_22<<8))))|(int32_t)L_26)));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_27, 4));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0083:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)3)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, 1)))
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_009d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data_1;
		uint32_t L_32 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___inData0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, 1))), (uint32_t)L_35);
		goto IL_00ea;
	}

IL_00b1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_1;
		uint32_t L_37 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___inData0;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___inData0;
		NullCheck(L_41);
		int32_t L_42 = 1;
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_40<<8))|(int32_t)L_43)));
		goto IL_00ea;
	}

IL_00cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___data_1;
		uint32_t L_45 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 0;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___inData0;
		NullCheck(L_49);
		int32_t L_50 = 1;
		uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___inData0;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 1))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_48<<((int32_t)16)))|((int32_t)((int32_t)L_51<<8))))|(int32_t)L_54)));
	}

IL_00ea:
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___ui0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		uint32_t L_2 = ___ui0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_2);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		return;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E (uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___value0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_3, L_2, NULL);
		return L_3;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_3, L_2, NULL);
		return L_3;
	}

IL_0010:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_4, 0, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_6 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}

IL_0024:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___bi21;
		int32_t L_9;
		L_9 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (-1))))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11;
		L_11 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_11;
	}

IL_0049:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___bi21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14;
		L_14 = Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142(L_12, L_13, NULL);
		return L_14;
	}

IL_0051:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_15 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}

IL_005c:
	{
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}
}
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___ui1, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi0;
		uint32_t L_1 = ___ui1;
		uint32_t L_2;
		L_2 = Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi10;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length_0;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)L_8))))
		{
			goto IL_0036;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var)));
	}

IL_0036:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		NullCheck(L_11);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___bi21;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___length_0;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)L_13))))
		{
			goto IL_0053;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_14 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var)));
	}

IL_0053:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = ___bi10;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = ___bi21;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_19, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_18)), NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___bi10;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___bi10;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = ___bi21;
		NullCheck(L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = ___bi21;
		NullCheck(L_26);
		uint32_t L_27 = L_26->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_0;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___data_1;
		Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8(L_21, 0, L_23, L_25, 0, L_27, L_29, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_0;
		NullCheck(L_30);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_30, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = V_0;
		return L_31;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		int32_t L_1 = ___shiftVal1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		int32_t L_1 = ___shiftVal1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_1;
		L_1 = RandomNumberGenerator_Create_mA8AC78824FF028898D2CEA52AF9B5BE6D6081009(NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3), (void*)L_1);
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_2 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3;
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5 (int32_t ___bits0, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___rng1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_5, 1, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		V_2 = L_5;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_6<<2)));
		V_3 = L_7;
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_8 = ___rng1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
		NullCheck(L_8);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_8, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = V_2;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_10, 0, (RuntimeArray*)L_12, 0, ((int32_t)(L_13<<2)), NULL);
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_15 = V_1;
		V_4 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, 1))&((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = V_2;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		uint32_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_18, 1)))));
		int32_t L_20 = *((uint32_t*)L_19);
		uint32_t L_21 = V_4;
		*((int32_t*)L_19) = (int32_t)((int32_t)(L_20|(int32_t)L_21));
		int32_t L_22 = V_1;
		V_4 = ((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_22))&((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = V_2;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data_1;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		uint32_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_25, 1)))));
		int32_t L_27 = *((uint32_t*)L_26);
		uint32_t L_28 = V_4;
		*((int32_t*)L_26) = (int32_t)((int32_t)(L_27&(int32_t)L_28));
		goto IL_0094;
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_2;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		uint32_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_31, 1)))));
		int32_t L_33 = *((uint32_t*)L_32);
		*((int32_t*)L_32) = (int32_t)((int32_t)(L_33|((int32_t)-2147483648LL)));
	}

IL_0094:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_2;
		NullCheck(L_34);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_34, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35 = V_2;
		return L_35;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB (int32_t ___bits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bits0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_1;
		L_1 = BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB(NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Mono.Math.BigInteger::BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_1;
		uint32_t L_1 = __this->___length_0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0029;
	}

IL_0021:
	{
		uint32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)((uint32_t)L_5>>1));
	}

IL_0029:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) > ((uint32_t)0))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		if (!((int32_t)((int32_t)L_7&(int32_t)L_8)))
		{
			goto IL_0021;
		}
	}

IL_0032:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = __this->___length_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))<<5))));
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___bitNum0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___bitNum0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_1 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_2>>5));
		int32_t L_3 = ___bitNum0;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_3&((int32_t)31))));
		uint8_t L_4 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_4&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return (bool)((((int32_t)((int32_t)((int32_t)L_8|(int32_t)L_9))) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___bitNum0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___bitNum0;
		BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___bitNum0, bool ___value1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_0>>5));
		uint32_t L_1 = V_0;
		uint32_t L_2 = __this->___length_0;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_3 = ___bitNum0;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_3&((int32_t)31)))&((int32_t)31)))));
		bool L_4 = ___value1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((uint32_t*)L_7);
		uint32_t L_9 = V_1;
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8|(int32_t)L_9));
		return;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((uint32_t*)L_12);
		uint32_t L_14 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13&(int32_t)((~L_14))));
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] Mono.Math.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_1;
	}

IL_0010:
	{
		int32_t L_2;
		L_2 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(__this, NULL);
		int32_t L_3 = L_2;
		V_0 = ((int32_t)(L_3>>3));
		if (!((int32_t)(L_3&7)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)(L_7&3));
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		V_2 = 4;
	}

IL_0032:
	{
		V_3 = 0;
		uint32_t L_9 = __this->___length_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 1));
		goto IL_007e;
	}

IL_0040:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		int32_t L_14 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_006d;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_6;
		uint32_t L_18 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, L_17))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18&((int32_t)255)))));
		uint32_t L_19 = V_5;
		V_5 = ((int32_t)((uint32_t)L_19>>8));
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_006d:
	{
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		V_2 = 4;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_007e:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		return L_26;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, uint32_t ___ui1, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi10;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___bi10;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___ui1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, uint32_t ___ui1, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi10;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___bi10;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___ui1;
		return (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0027:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi21;
		int32_t L_8;
		L_8 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)1;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi21;
		int32_t L_8;
		L_8 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_6, L_7, NULL);
		return (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m6B49D00910D0474566294F331B8E2959414C87C7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___radix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___radix0;
		String_t* L_1;
		L_1 = BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D(__this, L_0, _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99, NULL);
		return L_1;
	}
}
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___radix0, String_t* ___characterSet1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___characterSet1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		uint32_t L_2 = ___radix0;
		if ((((int64_t)((int64_t)L_1)) >= ((int64_t)((int64_t)(uint64_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint32_t L_4 = ___radix0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		return _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 1, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		return _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
	}

IL_004d:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, __this, NULL);
		V_1 = L_8;
		goto IL_007a;
	}

IL_005c:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		uint32_t L_10 = ___radix0;
		uint32_t L_11;
		L_11 = Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA(L_9, L_10, NULL);
		V_2 = L_11;
		String_t* L_12 = ___characterSet1;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, L_16, NULL);
		V_0 = L_17;
	}

IL_007a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_18, 0, NULL);
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.Void Mono.Math.BigInteger::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0010;
	}

IL_0002:
	{
		uint32_t L_0 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
	}

IL_0010:
	{
		uint32_t L_1 = __this->___length_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		uint32_t L_3 = __this->___length_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0002;
		}
	}

IL_002a:
	{
		uint32_t L_6 = __this->___length_0;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, 1));
	}

IL_0040:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		uint32_t L_4 = __this->___length_0;
		if ((((int64_t)((int64_t)L_3)) < ((int64_t)((int64_t)(uint64_t)L_4))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Mono.Math.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mEAB87BB7A4882FEAF1D7D65B6713E31C0A6F07EE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___data_1;
		uint32_t L_2 = V_1;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_4));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_0015:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = __this->___length_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.String Mono.Math.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m80A151A5EF5ABF1F5FF16660E78042B85241E3E9 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D(__this, ((int32_t)10), NULL);
		return L_0;
	}
}
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mEC32AE6F06C0C113291158D434ED2A92B07E6453 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___o0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___o0;
		if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_3, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		RuntimeObject* L_5 = ___o0;
		V_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)IsInstClass((RuntimeObject*)L_5, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_6, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = V_0;
		int32_t L_9;
		L_9 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(__this, L_8, NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus0, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___modulus0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6(__this, L_0, NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___exp0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___n1;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_1 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_1, L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___exp0;
		NullCheck(L_1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GeneratePseudoPrime_mB8FFD10652E0D48BECE2AF33F7B29B64A0BC89E1 (int32_t ___bits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* L_0 = (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175*)il2cpp_codegen_object_new(SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754(L_0, NULL);
		int32_t L_1 = ___bits0;
		NullCheck(L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = VirtualFuncInvoker1< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t >::Invoke(7 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mono.Math.BigInteger::Incr2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_1;
		NullCheck(L_0);
		uint32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((uint32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) < ((uint32_t)2))))
		{
			goto IL_006b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data_1;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		NullCheck(L_6);
		uint32_t* L_9 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0046;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___data_1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		uint32_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((uint32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data_1;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_20 = __this->___length_0;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_22 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
	}

IL_006b:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_m276F063532FC0A35DE1FACAF95D0EB2D6C2B2AAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)783));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2), (void*)L_1);
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
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___modulus0;
		__this->___mod_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mod_0), (void*)L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = __this->___mod_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length_0;
		V_0 = ((int32_t)((int32_t)L_2<<1));
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_4, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)), NULL);
		__this->___constant_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant_1), (void*)L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = __this->___constant_1;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = __this->___constant_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0(L_8, L_9, NULL);
		__this->___constant_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant_1), (void*)L_10);
		return;
	}
}
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	uint32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_7 = NULL;
	uint32_t G_B7_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = __this->___mod_0;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = V_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length_0;
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
		uint32_t L_4 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___x0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length_0;
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___x0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
		NullCheck(L_9);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___x0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length_0;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)L_11))))
		{
			goto IL_003d;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_12 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var)));
	}

IL_003d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___x0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length_0;
		uint32_t L_15 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = __this->___constant_1;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_18, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)L_17)), NULL);
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___x0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		uint32_t L_21 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___x0;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		uint32_t L_24 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = __this->___constant_1;
		NullCheck(L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = __this->___constant_1;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_4;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
		Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), L_26, 0, L_28, L_30, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ___x0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length_0;
		uint32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)L_33))))
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = ___x0;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___length_0;
		G_B7_0 = L_35;
		goto IL_009e;
	}

IL_009d:
	{
		uint32_t L_36 = V_2;
		G_B7_0 = L_36;
	}

IL_009e:
	{
		V_5 = G_B7_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = ___x0;
		uint32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->___length_0 = L_38;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = ___x0;
		NullCheck(L_39);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_39, NULL);
		uint32_t L_40 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_41, 1, L_40, NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_4;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data_1;
		uint32_t L_44 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45 = V_4;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___length_0;
		uint32_t L_47 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = V_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = V_6;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		uint32_t L_54 = V_2;
		Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA(L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), L_49, 0, L_51, L_53, 0, L_54, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_55 = V_6;
		NullCheck(L_55);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_55, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_56 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_00fe;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_59 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_60 = V_6;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_59, L_60, NULL);
		goto IL_012d;
	}

IL_00fe:
	{
		uint32_t L_61 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_62, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_61, 1)), NULL);
		V_7 = L_62;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = V_7;
		NullCheck(L_63);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = L_63->___data_1;
		uint32_t L_65 = V_2;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_66 = V_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_67 = V_6;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_66, L_67, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_68 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_69 = V_7;
		Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196(L_68, L_69, NULL);
		goto IL_012d;
	}

IL_0126:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_70 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_71 = V_0;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_70, L_71, NULL);
	}

IL_012d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_72 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_72, L_73, NULL);
		if (L_74)
		{
			goto IL_0126;
		}
	}
	{
		return;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_8, L_9, NULL);
		___a0 = L_10;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16;
		L_16 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_14, L_15, NULL);
		___b1 = L_16;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19;
		L_19 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_17, L_18, NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = V_0;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_20, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___b1;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (-1))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0039;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0025:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7;
		L_7 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_003f;
	}

IL_002f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var)));
	}

IL_003f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = V_1;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = __this->___mod_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length_0;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)((int32_t)L_18<<1))))))
		{
			goto IL_0071;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21;
		L_21 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_19, L_20, NULL);
		V_1 = L_21;
		goto IL_0078;
	}

IL_0071:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = V_1;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_22, NULL);
	}

IL_0078:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0089;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = __this->___mod_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26;
		L_26 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_24, L_25, NULL);
		V_1 = L_26;
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = V_1;
		return L_27;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_0, 1, NULL);
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___a0;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___k1;
		NullCheck(L_5);
		bool L_6;
		L_6 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___a0;
		V_0 = L_7;
	}

IL_001f:
	{
		V_2 = 1;
		goto IL_0042;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_8, L_9, NULL);
		V_1 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___k1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16;
		L_16 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_14, L_15, NULL);
		V_0 = L_16;
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0042:
	{
		int32_t L_18 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___k1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, uint32_t ___b0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___exp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___b0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___exp1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(__this, L_1, L_2, NULL);
		return L_3;
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
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___small1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___big0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, NULL);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___big0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		V_2 = L_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___small1;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data_1;
		V_3 = L_8;
		V_4 = 0;
		V_5 = 0;
	}

IL_0028:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		uint32_t L_10 = V_4;
		NullCheck(L_9);
		uint32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		uint32_t L_13 = V_6;
		uint32_t L_14 = V_5;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		V_6 = L_15;
		uint32_t L_16 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		uint32_t L_18 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		uint32_t L_20 = V_4;
		NullCheck(L_19);
		uint32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint32_t L_23 = V_6;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
		V_7 = L_24;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_24);
		uint32_t L_25 = V_7;
		uint32_t L_26 = V_6;
		if (!((int32_t)(((!(((uint32_t)L_15) >= ((uint32_t)L_16)))? 1 : 0)|((!(((uint32_t)L_25) <= ((uint32_t)((~L_26)))))? 1 : 0))))
		{
			goto IL_0057;
		}
	}
	{
		V_5 = 1;
		goto IL_005a;
	}

IL_0057:
	{
		V_5 = 0;
	}

IL_005a:
	{
		uint32_t L_27 = V_4;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, 1));
		V_4 = L_28;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = ___small1;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length_0;
		if ((!(((uint32_t)L_28) >= ((uint32_t)L_30))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_31 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = ___big0;
		NullCheck(L_32);
		uint32_t L_33 = L_32->___length_0;
		if ((((int32_t)L_31) == ((int32_t)L_33)))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_34 = V_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_1;
		uint32_t L_36 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		uint32_t L_38 = V_4;
		NullCheck(L_37);
		uint32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, 1)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		uint32_t L_42 = V_4;
		uint32_t L_43 = L_42;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
		NullCheck(L_41);
		uint32_t L_44 = L_43;
		uint32_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_46 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length_0;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_48))))
		{
			goto IL_0078;
		}
	}

IL_0097:
	{
		uint32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = ___big0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length_0;
		if ((((int32_t)L_49) == ((int32_t)L_51)))
		{
			goto IL_00b8;
		}
	}

IL_00a1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		uint32_t L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_2;
		uint32_t L_55 = V_4;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint32_t)L_57);
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		V_4 = L_59;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_60 = ___big0;
		NullCheck(L_60);
		uint32_t L_61 = L_60->___length_0;
		if ((!(((uint32_t)L_59) >= ((uint32_t)L_61))))
		{
			goto IL_00a1;
		}
	}

IL_00b8:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = V_0;
		NullCheck(L_62);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_62, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = V_0;
		return L_63;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___small1, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___big0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___small1;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		V_1 = L_3;
		V_2 = 0;
		V_3 = 0;
	}

IL_0012:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		uint32_t L_5 = V_2;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		uint32_t L_8 = V_4;
		uint32_t L_9 = V_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		V_4 = L_10;
		uint32_t L_11 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		uint32_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16 = V_4;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_15, (int32_t)L_16));
		V_5 = L_17;
		*((int32_t*)L_14) = (int32_t)L_17;
		uint32_t L_18 = V_5;
		uint32_t L_19 = V_4;
		if (!((int32_t)(((!(((uint32_t)L_10) >= ((uint32_t)L_11)))? 1 : 0)|((!(((uint32_t)L_18) <= ((uint32_t)((~L_19)))))? 1 : 0))))
		{
			goto IL_003f;
		}
	}
	{
		V_3 = 1;
		goto IL_0041;
	}

IL_003f:
	{
		V_3 = 0;
	}

IL_0041:
	{
		uint32_t L_20 = V_2;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		V_2 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___small1;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_23))))
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_24 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = ___big0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length_0;
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_27 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		int32_t L_31 = *((uint32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_31, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		uint32_t L_33 = V_2;
		uint32_t L_34 = L_33;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (L_36)
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_37 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = ___big0;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length_0;
		if ((!(((uint32_t)L_37) >= ((uint32_t)L_39))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0089;
	}

IL_007b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___big0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = L_40;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___length_0;
		NullCheck(L_41);
		L_41->___length_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, 1));
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = ___big0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->___length_0;
		if ((!(((uint32_t)L_44) > ((uint32_t)0))))
		{
			goto IL_00a3;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45 = ___big0;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length_0;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, 1));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_007b;
		}
	}

IL_00a3:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_51 = ___big0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___length_0;
		if (L_52)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_53 = ___big0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_54 = L_53;
		NullCheck(L_54);
		uint32_t L_55 = L_54->___length_0;
		NullCheck(L_54);
		L_54->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, 1));
	}

IL_00b9:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	uint64_t V_7 = 0;
	bool V_8 = false;
	uint32_t V_9 = 0;
	{
		V_4 = 0;
		V_5 = (bool)0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		V_5 = (bool)1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___bi21;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		V_0 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___bi21;
		NullCheck(L_6);
		uint32_t L_7 = L_6->___length_0;
		V_3 = L_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___bi10;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
		V_1 = L_9;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___bi10;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length_0;
		V_2 = L_11;
		goto IL_0051;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___bi10;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_1;
		V_0 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___bi10;
		NullCheck(L_14);
		uint32_t L_15 = L_14->___length_0;
		V_3 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		V_1 = L_17;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___bi21;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___length_0;
		V_2 = L_19;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___bi10;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		V_6 = L_21;
		V_7 = ((int64_t)0);
	}

IL_005d:
	{
		uint64_t L_22 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		uint32_t L_24 = V_4;
		NullCheck(L_23);
		uint32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		uint32_t L_28 = V_4;
		NullCheck(L_27);
		uint32_t L_29 = L_28;
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_26), ((int64_t)(uint64_t)L_30)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_6;
		uint32_t L_32 = V_4;
		uint64_t L_33 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)(uint32_t)L_33));
		uint64_t L_34 = V_7;
		V_7 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint32_t L_35 = V_4;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, 1));
		V_4 = L_36;
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_38 = V_7;
		V_8 = (bool)((!(((uint64_t)L_38) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_3;
		if ((!(((uint32_t)L_40) < ((uint32_t)L_41))))
		{
			goto IL_00bb;
		}
	}

IL_0097:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_6;
		uint32_t L_43 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		uint32_t L_45 = V_4;
		NullCheck(L_44);
		uint32_t L_46 = L_45;
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, 1));
		V_9 = L_48;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint32_t)L_48);
		uint32_t L_49 = V_9;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		uint32_t L_50 = V_4;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, 1));
		V_4 = L_51;
		uint32_t L_52 = V_3;
		bool L_53 = V_8;
		if (((int32_t)(((!(((uint32_t)L_51) >= ((uint32_t)L_52)))? 1 : 0)&(int32_t)L_53)))
		{
			goto IL_0097;
		}
	}

IL_00bb:
	{
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_00d3;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_6;
		uint32_t L_56 = V_4;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___bi10;
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		V_4 = L_59;
		NullCheck(L_57);
		L_57->___length_0 = L_59;
		return;
	}

IL_00d3:
	{
		bool L_60 = V_5;
		if (!L_60)
		{
			goto IL_00f1;
		}
	}
	{
		uint32_t L_61 = V_4;
		uint32_t L_62 = V_3;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, 1))))))
		{
			goto IL_00f1;
		}
	}

IL_00de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		uint32_t L_64 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		uint32_t L_66 = V_4;
		NullCheck(L_65);
		uint32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		uint32_t L_69 = V_4;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, 1));
		V_4 = L_70;
		uint32_t L_71 = V_3;
		if ((!(((uint32_t)L_70) >= ((uint32_t)L_71))))
		{
			goto IL_00de;
		}
	}

IL_00f1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_72 = ___bi10;
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		L_72->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_74 = ___bi10;
		NullCheck(L_74);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_74, NULL);
		return;
	}
}
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		V_1 = L_3;
		goto IL_0014;
	}

IL_0010:
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___bi10;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data_1;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1));
	}

IL_002a:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_003a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___bi21;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data_1;
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0026;
		}
	}

IL_003a:
	{
		uint32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_19 = V_1;
		if (L_19)
		{
			goto IL_0042;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0042:
	{
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_20) < ((uint32_t)L_21))))
		{
			goto IL_0048;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0048:
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		if ((!(((uint32_t)L_22) > ((uint32_t)L_23))))
		{
			goto IL_004e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_004e:
	{
		uint32_t L_24 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 1));
		goto IL_0058;
	}

IL_0054:
	{
		uint32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, 1));
	}

IL_0058:
	{
		uint32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = ___bi10;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = ___bi21;
		NullCheck(L_32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32->___data_1;
		uint32_t L_34 = V_2;
		NullCheck(L_33);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_31) == ((int32_t)L_36)))
		{
			goto IL_0054;
		}
	}

IL_006d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = ___bi10;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___data_1;
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = ___bi21;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data_1;
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		uint32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_46))))
		{
			goto IL_0081;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0081:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___bi10;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data_1;
		uint32_t L_49 = V_2;
		NullCheck(L_48);
		uint32_t L_50 = L_49;
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = ___bi21;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		uint32_t L_54 = V_2;
		NullCheck(L_53);
		uint32_t L_55 = L_54;
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_51) > ((uint32_t)L_56))))
		{
			goto IL_0095;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0095:
	{
		return (int32_t)(0);
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_1 = L_1;
		goto IL_002f;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)(uint64_t)L_8)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___n0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		uint32_t L_11 = V_1;
		uint64_t L_12 = V_0;
		uint32_t L_13 = ___d1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)((int64_t)(uint64_t)L_13)))));
		uint64_t L_14 = V_0;
		uint32_t L_15 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_14%(uint64_t)(int64_t)((int64_t)(uint64_t)L_15)));
	}

IL_002f:
	{
		uint32_t L_16 = V_1;
		uint32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 1));
		if ((!(((uint32_t)L_17) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___n0;
		NullCheck(L_18);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_18, NULL);
		uint64_t L_19 = V_0;
		return ((int32_t)(uint32_t)L_19);
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_1 = L_1;
		goto IL_0022;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)(uint64_t)L_8)));
		uint64_t L_9 = V_0;
		uint32_t L_10 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_9%(uint64_t)(int64_t)((int64_t)(uint64_t)L_10)));
	}

IL_0022:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1));
		if ((!(((uint32_t)L_12) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_13 = V_0;
		return ((int32_t)(uint32_t)L_13);
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, uint32_t ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_3 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, NULL);
		V_0 = L_2;
		V_1 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___n0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		V_2 = L_4;
		goto IL_003c;
	}

IL_0019:
	{
		uint64_t L_5 = V_1;
		V_1 = ((int64_t)((int64_t)L_5<<((int32_t)32)));
		uint64_t L_6 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___n0;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data_1;
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int64_t)((int64_t)L_6|((int64_t)(uint64_t)L_11)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_1;
		uint32_t L_14 = V_2;
		uint64_t L_15 = V_1;
		uint32_t L_16 = ___d1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_15/(uint64_t)(int64_t)((int64_t)(uint64_t)L_16)))));
		uint64_t L_17 = V_1;
		uint32_t L_18 = ___d1;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_17%(uint64_t)(int64_t)((int64_t)(uint64_t)L_18)));
	}

IL_003c:
	{
		uint32_t L_19 = V_2;
		uint32_t L_20 = L_19;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 1));
		if ((!(((uint32_t)L_20) <= ((uint32_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		NullCheck(L_21);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_21, NULL);
		uint64_t L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23;
		L_23 = BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E(((int32_t)(uint32_t)L_22), NULL);
		V_3 = L_23;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_24 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_25 = L_24;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_26);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_27 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_28);
		return L_27;
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_13 = NULL;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint64_t V_19 = 0;
	uint32_t V_20 = 0;
	uint64_t V_21 = 0;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_22 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_3 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5;
		L_5 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_5);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_6 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_8);
		return L_6;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___bi10;
		NullCheck(L_9);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_9, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___bi21;
		NullCheck(L_10);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_10, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___bi21;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18;
		L_18 = Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A(L_13, L_17, NULL);
		return L_18;
	}

IL_0047:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___bi10;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___length_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = ___bi21;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___length_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
		V_2 = ((int32_t)-2147483648LL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = ___bi21;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = ___bi21;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length_0;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1));
		uint32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		V_4 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = ___bi10;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ___bi21;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_32));
		goto IL_008d;
	}

IL_0083:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_34 = V_2;
		V_2 = ((int32_t)((uint32_t)L_34>>1));
	}

IL_008d:
	{
		uint32_t L_35 = V_2;
		if (!L_35)
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_36 = V_3;
		uint32_t L_37 = V_2;
		if (!((int32_t)((int32_t)L_36&(int32_t)L_37)))
		{
			goto IL_0083;
		}
	}

IL_0095:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = ___bi10;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___bi21;
		NullCheck(L_40);
		uint32_t L_41 = L_40->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_42, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_41)), 1)), NULL);
		V_6 = L_42;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = ___bi10;
		int32_t L_44 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45;
		L_45 = BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4(L_43, L_44, NULL);
		V_7 = L_45;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_46 = V_7;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		V_8 = L_47;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = ___bi21;
		int32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50;
		L_50 = BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4(L_48, L_49, NULL);
		___bi21 = L_50;
		uint32_t L_51 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = ___bi21;
		NullCheck(L_52);
		uint32_t L_53 = L_52->___length_0;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_53));
		uint32_t L_54 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_55 = ___bi21;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___bi21;
		NullCheck(L_57);
		uint32_t L_58 = L_57->___length_0;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, 1));
		uint32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_11 = L_60;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_61 = ___bi21;
		NullCheck(L_61);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = L_61->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = ___bi21;
		NullCheck(L_63);
		uint32_t L_64 = L_63->___length_0;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, 2));
		uint32_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_12 = ((int64_t)(uint64_t)L_66);
		goto IL_0233;
	}

IL_0100:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_8;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_8;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int64_t L_75 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_70)<<((int32_t)32))), ((int64_t)(uint64_t)L_74)));
		uint32_t L_76 = V_11;
		V_14 = ((int64_t)((uint64_t)(int64_t)L_75/(uint64_t)(int64_t)((int64_t)(uint64_t)L_76)));
		uint32_t L_77 = V_11;
		V_15 = ((int64_t)((uint64_t)(int64_t)L_75%(uint64_t)(int64_t)((int64_t)(uint64_t)L_77)));
	}

IL_011f:
	{
		uint64_t L_78 = V_14;
		if ((((int64_t)L_78) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0141;
		}
	}
	{
		uint64_t L_79 = V_14;
		uint64_t L_80 = V_12;
		uint64_t L_81 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_8;
		int32_t L_83 = V_10;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(L_83, 2));
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))) > ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_81<<((int32_t)32))), ((int64_t)(uint64_t)L_85)))))))
		{
			goto IL_015d;
		}
	}

IL_0141:
	{
		uint64_t L_86 = V_14;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_86, ((int64_t)1)));
		uint64_t L_87 = V_15;
		uint32_t L_88 = V_11;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)(uint64_t)L_88)));
		uint64_t L_89 = V_15;
		if ((!(((uint64_t)L_89) >= ((uint64_t)((int64_t)4294967296LL)))))
		{
			goto IL_011f;
		}
	}

IL_015d:
	{
		V_17 = 0;
		int32_t L_90 = V_10;
		int32_t L_91 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_90, L_91)), 1));
		V_19 = ((int64_t)0);
		uint64_t L_92 = V_14;
		V_20 = ((int32_t)(uint32_t)L_92);
	}

IL_0171:
	{
		uint64_t L_93 = V_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_94 = ___bi21;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		uint32_t L_96 = V_17;
		NullCheck(L_95);
		uint32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint32_t L_99 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_98), ((int64_t)(uint64_t)L_99)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = V_8;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_16 = L_103;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_8;
		int32_t L_105 = V_18;
		NullCheck(L_104);
		uint32_t* L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
		int32_t L_107 = *((uint32_t*)L_106);
		uint64_t L_108 = V_19;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_107, ((int32_t)(uint32_t)L_108)));
		uint64_t L_109 = V_19;
		V_19 = ((int64_t)((uint64_t)L_109>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_8;
		int32_t L_111 = V_18;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		uint32_t L_114 = V_16;
		if ((!(((uint32_t)L_113) > ((uint32_t)L_114))))
		{
			goto IL_01b2;
		}
	}
	{
		uint64_t L_115 = V_19;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)1)));
	}

IL_01b2:
	{
		uint32_t L_116 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, 1));
		int32_t L_117 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		uint32_t L_118 = V_17;
		int32_t L_119 = V_1;
		if ((((int64_t)((int64_t)(uint64_t)L_118)) < ((int64_t)((int64_t)L_119))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_120 = V_10;
		int32_t L_121 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_120, L_121)), 1));
		V_17 = 0;
		uint64_t L_122 = V_19;
		if (!L_122)
		{
			goto IL_0216;
		}
	}
	{
		uint32_t L_123 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, 1));
		V_21 = ((int64_t)0);
	}

IL_01de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_8;
		int32_t L_125 = V_18;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_128 = ___bi21;
		NullCheck(L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = L_128->___data_1;
		uint32_t L_130 = V_17;
		NullCheck(L_129);
		uint32_t L_131 = L_130;
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint64_t L_133 = V_21;
		V_21 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_127), ((int64_t)(uint64_t)L_132))), (int64_t)L_133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_8;
		int32_t L_135 = V_18;
		uint64_t L_136 = V_21;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)((int32_t)(uint32_t)L_136));
		uint64_t L_137 = V_21;
		V_21 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint32_t L_138 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, 1));
		int32_t L_139 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		uint32_t L_140 = V_17;
		int32_t L_141 = V_1;
		if ((((int64_t)((int64_t)(uint64_t)L_140)) < ((int64_t)((int64_t)L_141))))
		{
			goto IL_01de;
		}
	}

IL_0216:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data_1;
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_145, 1));
		uint32_t L_146 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint32_t)L_146);
		int32_t L_147 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_147, 1));
		int32_t L_148 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_148, 1));
	}

IL_0233:
	{
		int32_t L_149 = V_9;
		if ((((int32_t)L_149) > ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_150 = V_6;
		NullCheck(L_150);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_150, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_151 = V_7;
		NullCheck(L_151);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_151, NULL);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_152 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_153 = L_152;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_154 = V_6;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_154);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_154);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_155 = L_153;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_156 = V_7;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_156);
		V_13 = L_155;
		int32_t L_157 = V_4;
		if (!L_157)
		{
			goto IL_0272;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_158 = V_13;
		V_22 = L_158;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_159 = V_22;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_160 = V_22;
		NullCheck(L_160);
		int32_t L_161 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_164;
		L_164 = BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8(L_162, L_163, NULL);
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_164);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_164);
	}

IL_0272:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_165 = V_13;
		return L_165;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi0;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF(L_4, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)), NULL);
		return L_4;
	}

IL_0012:
	{
		int32_t L_5 = ___n1;
		V_0 = ((int32_t)(L_5>>5));
		int32_t L_6 = ___n1;
		___n1 = ((int32_t)(L_6&((int32_t)31)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___bi0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length_0;
		int32_t L_9 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_10, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_8, 1)), L_9)), NULL);
		V_1 = L_10;
		V_2 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___bi0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		V_3 = L_12;
		int32_t L_13 = ___n1;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		V_5 = 0;
		goto IL_006f;
	}

IL_003e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___bi0;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_1;
		uint32_t L_16 = V_2;
		NullCheck(L_15);
		uint32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_1;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		uint32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_21), ((int64_t)L_22)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		uint32_t L_23 = V_4;
		int32_t L_24 = ___n1;
		uint32_t L_25 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_21), ((int64_t)L_22))))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_23<<((int32_t)(L_24&((int32_t)31)))))|(int32_t)L_25)));
		uint32_t L_26 = V_4;
		int32_t L_27 = ___n1;
		V_5 = ((int32_t)((uint32_t)L_26>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_27))&((int32_t)31)))));
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, 1));
	}

IL_006f:
	{
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) >= ((uint32_t)L_30))))
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = V_1;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data_1;
		uint32_t L_33 = V_2;
		int32_t L_34 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)L_34)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		uint32_t L_35 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)L_34))))), (uint32_t)L_35);
		goto IL_00a1;
	}

IL_0084:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36 = V_1;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		uint32_t L_38 = V_2;
		int32_t L_39 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_38), ((int64_t)L_39)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___bi0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		uint32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_38), ((int64_t)L_39))))), (uint32_t)L_44);
		uint32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, 1));
	}

IL_009d:
	{
		uint32_t L_46 = V_2;
		uint32_t L_47 = V_3;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_47))))
		{
			goto IL_0084;
		}
	}

IL_00a1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_1;
		NullCheck(L_48);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_48, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_49 = V_1;
		return L_49;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_2, L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		int32_t L_3 = ___n1;
		V_0 = ((int32_t)(L_3>>5));
		int32_t L_4 = ___n1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___bi0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length_0;
		int32_t L_7 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_8, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, L_7)), 1)), NULL);
		V_1 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		NullCheck(L_10);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1));
		if (!((int32_t)(L_4&((int32_t)31))))
		{
			goto IL_007e;
		}
	}
	{
		V_4 = 0;
		goto IL_005f;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___bi0;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		uint32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)L_14)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		NullCheck(L_12);
		intptr_t L_15 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)L_14))));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = V_1;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
		uint32_t L_19 = V_2;
		uint32_t L_20 = V_3;
		int32_t L_21 = ___n1;
		uint32_t L_22 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>((int32_t)(L_21&((int32_t)31)))))|(int32_t)L_22)));
		uint32_t L_23 = V_3;
		int32_t L_24 = ___n1;
		V_4 = ((int32_t)((int32_t)L_23<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_24))&((int32_t)31)))));
	}

IL_005f:
	{
		uint32_t L_25 = V_2;
		uint32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1));
		if ((!(((uint32_t)L_26) <= ((uint32_t)0))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0086;
	}

IL_0069:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = V_1;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		uint32_t L_29 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = ___bi0;
		NullCheck(L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = L_30->___data_1;
		uint32_t L_32 = V_2;
		int32_t L_33 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_32), ((int64_t)L_33)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		NullCheck(L_31);
		intptr_t L_34 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_32), ((int64_t)L_33))));
		uint32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)L_35);
	}

IL_007e:
	{
		uint32_t L_36 = V_2;
		uint32_t L_37 = L_36;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 1));
		if ((!(((uint32_t)L_37) <= ((uint32_t)0))))
		{
			goto IL_0069;
		}
	}

IL_0086:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = V_1;
		NullCheck(L_38);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_38, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = V_1;
		return L_39;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint64_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___y3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___d6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		uint32_t L_13 = ___xOffset1;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_13), ((int64_t)4))))));
		uint32_t* L_14 = V_6;
		uint32_t L_15 = ___xLen2;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_15), ((int64_t)4))))));
		uint32_t* L_16 = V_1;
		uint32_t L_17 = ___yOffset4;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_17), ((int64_t)4))))));
		uint32_t* L_18 = V_8;
		uint32_t L_19 = ___yLen5;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_19), ((int64_t)4))))));
		uint32_t* L_20 = V_2;
		uint32_t L_21 = ___dOffset7;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_21), ((int64_t)4))))));
		goto IL_00e3;
	}

IL_0088:
	{
		uint32_t* L_22 = V_6;
		int32_t L_23 = *((uint32_t*)L_22);
		if (!L_23)
		{
			goto IL_00d7;
		}
	}
	{
		V_11 = ((int64_t)0);
		uint32_t* L_24 = V_10;
		V_12 = L_24;
		uint32_t* L_25 = V_8;
		V_13 = L_25;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_26 = V_11;
		uint32_t* L_27 = V_6;
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t* L_29 = V_13;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_12;
		int32_t L_32 = *((uint32_t*)L_31);
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_28)), ((int64_t)(uint64_t)((uint32_t)L_30)))), ((int64_t)(uint64_t)((uint32_t)L_32))))));
		uint32_t* L_33 = V_12;
		uint64_t L_34 = V_11;
		*((int32_t*)L_33) = (int32_t)((int32_t)(uint32_t)L_34);
		uint64_t L_35 = V_11;
		V_11 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint32_t* L_36 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, 4));
		uint32_t* L_37 = V_12;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, 4));
	}

IL_00c7:
	{
		uint32_t* L_38 = V_13;
		uint32_t* L_39 = V_9;
		if ((!(((uintptr_t)L_38) >= ((uintptr_t)L_39))))
		{
			goto IL_009b;
		}
	}
	{
		uint64_t L_40 = V_11;
		if (!L_40)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t* L_41 = V_12;
		uint64_t L_42 = V_11;
		*((int32_t*)L_41) = (int32_t)((int32_t)(uint32_t)L_42);
	}

IL_00d7:
	{
		uint32_t* L_43 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4));
		uint32_t* L_44 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
	}

IL_00e3:
	{
		uint32_t* L_45 = V_6;
		uint32_t* L_46 = V_7;
		if ((!(((uintptr_t)L_45) >= ((uintptr_t)L_46))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint64_t V_12 = 0;
	uint32_t* V_13 = NULL;
	uint32_t* V_14 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___y3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___d6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		int32_t L_13 = ___xOffset1;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))));
		uint32_t* L_14 = V_6;
		int32_t L_15 = ___xLen2;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))));
		uint32_t* L_16 = V_1;
		int32_t L_17 = ___yOffest4;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))));
		uint32_t* L_18 = V_8;
		int32_t L_19 = ___yLen5;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))));
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___dOffset7;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))));
		uint32_t* L_22 = V_10;
		int32_t L_23 = ___mod8;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))));
		goto IL_00ef;
	}

IL_0088:
	{
		uint32_t* L_24 = V_6;
		int32_t L_25 = *((uint32_t*)L_24);
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		V_12 = ((int64_t)0);
		uint32_t* L_26 = V_10;
		V_13 = L_26;
		uint32_t* L_27 = V_8;
		V_14 = L_27;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_28 = V_12;
		uint32_t* L_29 = V_6;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_14;
		int32_t L_32 = *((uint32_t*)L_31);
		uint32_t* L_33 = V_13;
		int32_t L_34 = *((uint32_t*)L_33);
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_30)), ((int64_t)(uint64_t)((uint32_t)L_32)))), ((int64_t)(uint64_t)((uint32_t)L_34))))));
		uint32_t* L_35 = V_13;
		uint64_t L_36 = V_12;
		*((int32_t*)L_35) = (int32_t)((int32_t)(uint32_t)L_36);
		uint64_t L_37 = V_12;
		V_12 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint32_t* L_38 = V_14;
		V_14 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, 4));
		uint32_t* L_39 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, 4));
	}

IL_00c7:
	{
		uint32_t* L_40 = V_14;
		uint32_t* L_41 = V_9;
		if ((!(((uintptr_t)L_40) < ((uintptr_t)L_41))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t* L_42 = V_13;
		uint32_t* L_43 = V_11;
		if ((!(((uintptr_t)L_42) >= ((uintptr_t)L_43))))
		{
			goto IL_009b;
		}
	}

IL_00d3:
	{
		uint64_t L_44 = V_12;
		if (!L_44)
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_45 = V_13;
		uint32_t* L_46 = V_11;
		if ((!(((uintptr_t)L_45) < ((uintptr_t)L_46))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_47 = V_13;
		uint64_t L_48 = V_12;
		*((int32_t*)L_47) = (int32_t)((int32_t)(uint32_t)L_48);
	}

IL_00e3:
	{
		uint32_t* L_49 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, 4));
		uint32_t* L_50 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, 4));
	}

IL_00ef:
	{
		uint32_t* L_51 = V_6;
		uint32_t* L_52 = V_7;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)L_52))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, uint32_t ___modulus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___modulus1;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___bi0;
		uint32_t L_2 = ___modulus1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_1, L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		V_3 = 1;
		goto IL_0039;
	}

IL_0010:
	{
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_5 = V_3;
		return L_5;
	}

IL_0016:
	{
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)L_8)), (int32_t)L_9))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)L_11));
		uint32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_14 = ___modulus1;
		uint32_t L_15 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_002d:
	{
		uint32_t L_16 = V_3;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)(int32_t)L_17/(uint32_t)(int32_t)L_18)), (int32_t)L_19))));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_20%(uint32_t)(int32_t)L_21));
	}

IL_0039:
	{
		uint32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0010;
		}
	}

IL_003c:
	{
		return 0;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___modulus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_0 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_1 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_5 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* V_6 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_7 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_8 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___modulus1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___modulus1;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E(L_2, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E(L_7, NULL);
		return L_8;
	}

IL_001d:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_9 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_10 = L_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11;
		L_11 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_11);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_12 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13;
		L_13 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_13);
		V_0 = L_12;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_14 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_14;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_15 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_16 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17;
		L_17 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_17);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19;
		L_19 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_19);
		V_2 = L_18;
		V_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___modulus1;
		V_4 = L_20;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = ___bi0;
		V_5 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___modulus1;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_23 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_23, L_22, NULL);
		V_6 = L_23;
		goto IL_00c1;
	}

IL_0068:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_25 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35;
		L_35 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_31, L_34, NULL);
		NullCheck(L_25);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36;
		L_36 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_25, L_28, L_35, NULL);
		V_8 = L_36;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_37 = V_0;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_40);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_41 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_42);
	}

IL_008e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_44 = V_5;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_45;
		L_45 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_43, L_44, NULL);
		V_7 = L_45;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_46 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_49);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_50 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_53);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_54 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_57);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_58 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_59 = V_7;
		NullCheck(L_59);
		int32_t L_60 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_61);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = V_5;
		V_4 = L_62;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = L_65;
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00c1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_67 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_67, 0, NULL);
		if (L_68)
		{
			goto IL_0068;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_71, 1, NULL);
		if (!L_72)
		{
			goto IL_00e1;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_73 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_73);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6_RuntimeMethod_var)));
	}

IL_00e1:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_74 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_84;
		L_84 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_80, L_83, NULL);
		NullCheck(L_74);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_85;
		L_85 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_74, L_77, L_84, NULL);
		return L_85;
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
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Multicast(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* currentDelegate = reinterpret_cast<PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___bi0, ___confidence1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Open(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___bi0, ___confidence1, method);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenStaticInvoker(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___bi0, ___confidence1);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_ClosedStaticInvoker(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___bi0, ___confidence1);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenVirtual(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return VirtualFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___bi0, ___confidence1);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInterface(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___bi0, ___confidence1);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericVirtual(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker1< bool, int32_t >::Invoke(method, ___bi0, ___confidence1);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericInterface(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(method, ___bi0, ___confidence1);
}
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Open;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Multicast;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552 (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___bi0, ___confidence1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___bi0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)100))))
		{
			goto IL_0011;
		}
	}
	{
		V_1 = ((int32_t)27);
		goto IL_008f;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)150))))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = ((int32_t)18);
		goto IL_008f;
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)200))))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = ((int32_t)15);
		goto IL_008f;
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)250))))
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((int32_t)12);
		goto IL_008f;
	}

IL_0038:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)300))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = ((int32_t)9);
		goto IL_008f;
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)350))))
		{
			goto IL_0051;
		}
	}
	{
		V_1 = 8;
		goto IL_008f;
	}

IL_0051:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)400))))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 7;
		goto IL_008f;
	}

IL_005d:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)500))))
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 6;
		goto IL_008f;
	}

IL_0069:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)600))))
		{
			goto IL_0075;
		}
	}
	{
		V_1 = 5;
		goto IL_008f;
	}

IL_0075:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)800))))
		{
			goto IL_0081;
		}
	}
	{
		V_1 = 4;
		goto IL_008f;
	}

IL_0081:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)1250))))
		{
			goto IL_008d;
		}
	}
	{
		V_1 = 3;
		goto IL_008f;
	}

IL_008d:
	{
		V_1 = 2;
	}

IL_008f:
	{
		int32_t L_13 = ___confidence1;
		switch (L_13)
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_00ba;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00c7;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_00af:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)(L_14>>2));
		int32_t L_15 = V_1;
		if (L_15)
		{
			goto IL_00b8;
		}
	}
	{
		return 1;
	}

IL_00b8:
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_00ba:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)(L_17>>1));
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_00c3;
		}
	}
	{
		return 1;
	}

IL_00c3:
	{
		int32_t L_19 = V_1;
		return L_19;
	}

IL_00c5:
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_00c7:
	{
		int32_t L_21 = V_1;
		return ((int32_t)(L_21<<1));
	}

IL_00cb:
	{
		int32_t L_22 = V_1;
		return ((int32_t)(L_22<<2));
	}

IL_00cf:
	{
		Exception_t* L_23 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var)));
	}

IL_00da:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_24 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var)));
	}
}
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n0, int32_t ___confidence1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_8 = NULL;
	int32_t V_9 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(L_2, NULL);
		int32_t L_4 = ___confidence1;
		int32_t L_5;
		L_5 = PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57(L_3, L_4, NULL);
		V_1 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___n0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7;
		L_7 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_6, L_7, NULL);
		V_2 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20(L_9, NULL);
		V_3 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = V_2;
		int32_t L_12 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13;
		L_13 = BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8(L_11, L_12, NULL);
		V_4 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___n0;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_15 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_15, L_14, NULL);
		V_5 = L_15;
		V_6 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = ___n0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0052;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_18 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_4;
		NullCheck(L_18);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20;
		L_20 = ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D(L_18, 2, L_19, NULL);
		V_6 = L_20;
	}

IL_0052:
	{
		V_7 = 0;
		goto IL_00ed;
	}

IL_005a:
	{
		int32_t L_21 = V_7;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_22, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_23)
		{
			goto IL_009a;
		}
	}

IL_0069:
	{
		V_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
	}

IL_006c:
	{
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25;
		L_25 = BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB(L_24, NULL);
		V_8 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27;
		L_27 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(2, NULL);
		bool L_28;
		L_28 = BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_008d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_006c;
		}
	}

IL_008d:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_32 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_33 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_4;
		NullCheck(L_32);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35;
		L_35 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_32, L_33, L_34, NULL);
		V_6 = L_35;
	}

IL_009a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_36, 1, NULL);
		if (L_37)
		{
			goto IL_00e7;
		}
	}
	{
		V_9 = 0;
		goto IL_00cc;
	}

IL_00a9:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_38 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40;
		L_40 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(2, NULL);
		NullCheck(L_38);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41;
		L_41 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_38, L_39, L_40, NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_6;
		bool L_43;
		L_43 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_42, 1, NULL);
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		return (bool)0;
	}

IL_00c6:
	{
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00cc:
	{
		int32_t L_45 = V_9;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_00db;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_47, L_48, NULL);
		if (L_49)
		{
			goto IL_00a9;
		}
	}

IL_00db:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_51 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_50, L_51, NULL);
		if (!L_52)
		{
			goto IL_00e7;
		}
	}
	{
		return (bool)0;
	}

IL_00e7:
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ed:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
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
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_Confidence_m8A53DA3C670504B629434C990508D4B77642B875 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* PrimeGeneratorBase_get_PrimalityTest_m96C5E1866F96043982AF493BE7EAB5969F770E1D (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* L_0 = (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B*)il2cpp_codegen_object_new(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A(L_0, NULL, (intptr_t)((void*)PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m706A348C994861A2B92CE9156FE20DCF7474E286 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)4000);
	}
}
// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
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
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateSearchBase_mD12A7AC0A052FA228E0F4918BBA1B2B59AD605CE (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___bits0, RuntimeObject* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bits0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB(L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = L_1;
		NullCheck(L_2);
		BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39(L_2, 0, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6AC834873702FE49B85FB261931CA31BC239FFCD (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___bits0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bits0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, RuntimeObject* >::Invoke(9 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object) */, __this, L_0, NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6599A58FA9EBD14FEB9D18073419FF8341365B8B (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___bits0, RuntimeObject* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___bits0;
		RuntimeObject* L_1 = ___context1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, RuntimeObject* >::Invoke(8 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object) */, __this, L_0, L_1);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_3, ((int32_t)-1060120681), NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds() */, __this);
		V_2 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2;
		V_3 = L_6;
	}

IL_0022:
	{
		uint32_t L_7 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_8 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_8%(uint32_t)(int32_t)5)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_9 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_9%(uint32_t)(int32_t)7)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_10 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)11))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_11 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)((int32_t)13))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_12 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_12%(uint32_t)(int32_t)((int32_t)17))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_13%(uint32_t)(int32_t)((int32_t)19))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_14 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)((int32_t)23))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_15 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_15%(uint32_t)(int32_t)((int32_t)29))))
		{
			goto IL_009d;
		}
	}
	{
		V_4 = ((int32_t)10);
		goto IL_006d;
	}

IL_005b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_21;
		L_21 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_16, L_20, NULL);
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_2;
		if ((((int64_t)((int64_t)(uint64_t)L_28)) <= ((int64_t)((int64_t)L_29))))
		{
			goto IL_005b;
		}
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_0;
		RuntimeObject* L_31 = ___context1;
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, RuntimeObject* >::Invoke(10 /* System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object) */, __this, L_30, L_31);
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* L_33;
		L_33 = VirtualFuncInvoker0< PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* >::Invoke(5 /* Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest() */, __this);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_0;
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence() */, __this);
		NullCheck(L_33);
		bool L_36;
		L_36 = PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline(L_33, L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = V_0;
		return L_37;
	}

IL_009d:
	{
		uint32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, 2));
		uint32_t L_39 = V_1;
		if ((!(((uint32_t)L_39) >= ((uint32_t)((int32_t)-1060120681)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)-1060120681)));
	}

IL_00b1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = V_0;
		NullCheck(L_41);
		BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808(L_41, NULL);
		goto IL_0022;
	}
}
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m2682AEC2B91FC89D1EB0799BFE5DA4C0F7F8C1D0 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, RuntimeObject* ___context1, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, const RuntimeMethod* method) 
{
	{
		PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5FD260C639BDBF6B570A90B23653DE3779848418 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = __this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___value0, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = ___value0;
		__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = __this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___value0, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = ___value0;
		__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UseServicePointManagerCallback_mE3EBA2F2886B024A4ACC303EE792190A5784E18B_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___useServicePointManagerCallback_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MonoTlsSettings_get_UserSettings_m9ADCEFD59E6429580D053F5AC0AF492B59353920_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CUserSettingsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_UserSettings_mE1E6ED54BB439AE8012FD17D7230515CAB11D55D_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUserSettingsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserSettingsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 MonoTlsSettings_get_EnabledProtocols_m6368286BF3E5703DB56F0EDE7B6AD2EF9C98D4C8_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 L_0 = __this->___U3CEnabledProtocolsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledProtocols_m41991C8F073B85156818A906815AC4AE5623E77D_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 L_0 = ___value0;
		__this->___U3CEnabledProtocolsU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* MonoTlsSettings_get_EnabledCiphers_m7BD72B78EF53FAF51FEEBF5B3657187EC876394A_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* L_0 = __this->___U3CEnabledCiphersU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_EnabledCiphers_mA89F7C73A29959710230593DCC689F4B9860156A_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___value0, const RuntimeMethod* method) 
{
	{
		CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* L_0 = ___value0;
		__this->___U3CEnabledCiphersU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnabledCiphersU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC MonoTlsSettings_get_CertificateValidationTime_mB7E248DE19CACA783A465F59859729C726DF2F9E_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CCertificateValidationTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateValidationTime_mE632C0A1BAB7608158B8EF05D2122B87AB6C34A6_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CCertificateValidationTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_SendCloseNotify_m1D35BCF28142455EC9CDF16CA36A8DEF57B05625_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSendCloseNotifyU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_SendCloseNotify_m903943162225A7267CA3AD1E1E6E76EA71BCC5BF_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSendCloseNotifyU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_ClientCertificateIssuers_m6FB58C63262D146231256A969DC2F3B60CE5C498_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CClientCertificateIssuersU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateIssuers_m0866718DAECFD44FC53370D23AB4C789CE0759B8_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CClientCertificateIssuersU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateIssuersU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoTlsSettings_get_DisallowUnauthenticatedCertificateRequest_m15B7CAB13F2301D201AAD092DF2FCB49366ABDF6_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_DisallowUnauthenticatedCertificateRequest_mCC9D044ACAD032758F91CC5A3AD1E69F8C5C7FE4_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* MonoTlsSettings_get_TrustAnchors_m4CA73EEBF73B4344C5334F3BC5BBFE1BC27BC7AE_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CTrustAnchorsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_TrustAnchors_m08A22767288F1FB5AF812D0FDE8ACCDA47116661_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___value0;
		__this->___U3CTrustAnchorsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrustAnchorsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MonoTlsSettings_get_CertificateSearchPaths_mD6BE6C9347446D742B29CAB987AEB76FF845A050_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CCertificateSearchPathsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_CertificateSearchPaths_mD7846BCF7B9292F85FEF0BE4A671779AD6C9AC32_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CCertificateSearchPathsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCertificateSearchPathsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_nTag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_inline (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsymmetricAlgorithm_get_KeySize_m82ADFD22F46E442C6564C94D45101A4B43A7296D_inline (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___KeySizeValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___contentType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) 
{
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = __this->___content_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_0 = __this->___contentInfo_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_0 = __this->___certs_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_0 = __this->___signerInfo_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___authenticatedAttributes_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___issuer_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___unauthenticatedAttributes_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___version_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___bi0, int32_t ___confidence1, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___bi0, ___confidence1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
