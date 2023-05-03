#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB;
// Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute
struct ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0;
// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral9C794E8D9AD5FBB2ADFA48731CAC6ACF56BFA693;
IL2CPP_EXTERN_C String_t* _stringLiteralCD194760A36A1472D970322901CB8E13091FAD56;
IL2CPP_EXTERN_C String_t* _stringLiteralF93BB4549050CFFD5565EA1CEA575968DF0BDC3F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4A18C641CC1469B563893B10C14995D062D26170 
{
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

// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::mAssistantServiceConnection
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mAssistantServiceConnection_0;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceFragmentClass
	String_t* ___serviceFragmentClass_1;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceGetter
	String_t* ___serviceGetter_2;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute
struct ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::varname
	String_t* ___varname_0;
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::fallbackName
	String_t* ___fallbackName_1;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::set_debug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_set_debug_mD423F7DFBAC26FE5600D5F3485CD9748B26F656D (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
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
// System.Void Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayElementTitleAttribute__ctor_m7990542BCC882B8960A3B61CCAAD6D3024438B52 (ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0* __this, String_t* ___elementTitleVar0, String_t* ___fallbackName1, const RuntimeMethod* method) 
{
	{
		// public ArrayElementTitleAttribute(string elementTitleVar = null, string fallbackName = null)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// varname = elementTitleVar;
		String_t* L_0 = ___elementTitleVar0;
		__this->___varname_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___varname_0), (void*)L_0);
		// this.fallbackName = fallbackName;
		String_t* L_1 = ___fallbackName1;
		__this->___fallbackName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fallbackName_1), (void*)L_1);
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
// System.Boolean Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidServiceConnection_get_IsConnected_m87FF953B8004D62BAC41D5057E6C1F2E6C87B38C (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsConnected => null != mAssistantServiceConnection;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mAssistantServiceConnection_0;
		return (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::get_AssistantServiceConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidServiceConnection_get_AssistantServiceConnection_m7CB9FD77AC661424EEEC2258CD62EAB2EE98C6FC (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject AssistantServiceConnection => mAssistantServiceConnection;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mAssistantServiceConnection_0;
		return L_0;
	}
}
// System.Void Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidServiceConnection__ctor_m5A0B7A0B00C1B3958A6E6456813F4DC174F87183 (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, String_t* ___serviceFragmentClassName0, String_t* ___serviceGetterMethodName1, const RuntimeMethod* method) 
{
	{
		// public AndroidServiceConnection(string serviceFragmentClassName, string serviceGetterMethodName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// serviceFragmentClass = serviceFragmentClassName;
		String_t* L_0 = ___serviceFragmentClassName0;
		__this->___serviceFragmentClass_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serviceFragmentClass_1), (void*)L_0);
		// serviceGetter = serviceGetterMethodName;
		String_t* L_1 = ___serviceGetterMethodName1;
		__this->___serviceGetter_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serviceGetter_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidServiceConnection_Connect_mA56BE5CB5E2131A83FB26153803EE930B6AF2228 (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD194760A36A1472D970322901CB8E13091FAD56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		// if (null == mAssistantServiceConnection)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mAssistantServiceConnection_0;
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		// AndroidJNIHelper.debug = true;
		AndroidJNIHelper_set_debug_mD423F7DFBAC26FE5600D5F3485CD9748B26F656D((bool)1, NULL);
		// AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject activity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_2;
		// using (AndroidJavaClass assistantBackgroundFragment = new AndroidJavaClass(serviceFragmentClass))
		String_t* L_3 = __this->___serviceFragmentClass_1;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0055;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// mAssistantServiceConnection =
			//     assistantBackgroundFragment.CallStatic<AndroidJavaObject>("createAndAttach", activity);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
			NullCheck(L_7);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
			L_11 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_7, _stringLiteralCD194760A36A1472D970322901CB8E13091FAD56, L_9, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
			__this->___mAssistantServiceConnection_0 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___mAssistantServiceConnection_0), (void*)L_11);
			// }
			goto IL_0056;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidServiceConnection_Disconnect_m6793307BEC56F3840BEE62436171D42C7036A8B5 (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF93BB4549050CFFD5565EA1CEA575968DF0BDC3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAssistantServiceConnection.Call("detach");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mAssistantServiceConnection_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralF93BB4549050CFFD5565EA1CEA575968DF0BDC3F, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::GetService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidServiceConnection_GetService_m10C8E3DC881909650EFBFFDC577236CEDDF11860 (AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mAssistantServiceConnection.Call<AndroidJavaObject>(serviceGetter);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___mAssistantServiceConnection_0;
		String_t* L_1 = __this->___serviceGetter_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, L_1, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
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
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding__ctor_m22F1D7EDB34C2C3349D5678957D925793DAB1D20 (BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sdkInstance0, const RuntimeMethod* method) 
{
	{
		// protected BaseServiceBinding(AndroidJavaObject sdkInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// binding = sdkInstance;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___sdkInstance0;
		__this->___binding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___binding_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding_Shutdown_mFA621C6F626DA54E41EB6F1E88B8AF18D5F9907F (BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C794E8D9AD5FBB2ADFA48731CAC6ACF56BFA693);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("shutdown");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral9C794E8D9AD5FBB2ADFA48731CAC6ACF56BFA693, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
