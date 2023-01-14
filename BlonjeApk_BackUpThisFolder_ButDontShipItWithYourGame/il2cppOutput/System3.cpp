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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
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
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Security.Cryptography.Oid>
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
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
// System.Security.Cryptography.Oid[]
struct OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F;
// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE;
// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4D2DC61F0664F305059641FF6BDA07DF2141236C;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t20C0BA2FB19CAD6D3BD432B033BC560186E574C1;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB;
// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED;
// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3;
// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC;
// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5;
// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6;
// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA;
// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB;
IL2CPP_EXTERN_C String_t* _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D;
IL2CPP_EXTERN_C String_t* _stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B;
IL2CPP_EXTERN_C String_t* _stringLiteral17E5BE9B221C767EF04A364F24B81309DAE38512;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9;
IL2CPP_EXTERN_C String_t* _stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9;
IL2CPP_EXTERN_C String_t* _stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDCE7F577695853459152469012B0121731CD52;
IL2CPP_EXTERN_C String_t* _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6;
IL2CPP_EXTERN_C String_t* _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5;
IL2CPP_EXTERN_C String_t* _stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8;
IL2CPP_EXTERN_C String_t* _stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D;
IL2CPP_EXTERN_C String_t* _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190;
IL2CPP_EXTERN_C String_t* _stringLiteral78875BB01F47001614AE95132434E503D00EA404;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705;
IL2CPP_EXTERN_C String_t* _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral8B179EF532CBF38773A257E5F951512B4287DAF9;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62;
IL2CPP_EXTERN_C String_t* _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306;
IL2CPP_EXTERN_C String_t* _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08;
IL2CPP_EXTERN_C String_t* _stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73;
IL2CPP_EXTERN_C String_t* _stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA;
IL2CPP_EXTERN_C String_t* _stringLiteralF41760006700B346FE970834ED6436CD21A1330F;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63;
IL2CPP_EXTERN_C const RuntimeMethod* AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<System.Security.Cryptography.Oid>
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B* ___s_emptyArray_5;
};

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

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8  : public RuntimeObject
{
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____raw_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
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
	RuntimeObject* ___s_InternalSyncObject_61;
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

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddressParser
struct IPAddressParser_t4EBAFE480B61AF2AA63D53B93829B674C8BEE392  : public RuntimeObject
{
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

// System.Marvin
struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242  : public RuntimeObject
{
};

struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields
{
	// System.UInt64 System.Marvin::<DefaultSeed>k__BackingField
	uint64_t ___U3CDefaultSeedU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287  : public RuntimeObject
{
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_friendlyName
	String_t* ____friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::_group
	int32_t ____group_2;
};

// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Security.Cryptography.Oid> System.Security.Cryptography.OidCollection::_list
	List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* ____list_0;
};

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_oids
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____oids_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_current
	int32_t ____current_1;
};

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405  : public RuntimeObject
{
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____keyValue_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____params_1;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_2;
};

struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_3;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D  : public RuntimeObject
{
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509Helper2
struct X509Helper2_t6282AE44135C3E58DB3FD965347CB88163D2E924  : public RuntimeObject
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_0;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_1;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
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

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9_StaticFields
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::s_values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___s_values_2;
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
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

// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;
};

// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t* ___type_3;
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
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

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.TypeConverterAttribute::<ConverterTypeName>k__BackingField
	String_t* ___U3CConverterTypeNameU3Ek__BackingField_1;
};

struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields
{
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* ___Default_0;
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

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D  : public X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F
{
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* ___policy_2;
};

struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___Empty_3;
};

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};
#pragma pack(pop, tp)

// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C  : public IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484
{
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt16>
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt32>
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_0;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_3;
};

// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C  : public CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0
{
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_4;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_7;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_8;
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

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_4;
};

// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_5;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_6;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_8;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB  : public X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE
{
};

struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields
{
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newline_split_1;
};

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___store2_2;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_4;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_5;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_6;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___vtime_7;
};

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;
};

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;
};

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt16>
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt32>
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760  : public RuntimeObject
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject* ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject* ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject* ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject* ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	// System.Int64 System.Runtime.Remoting.Messaging.AsyncResult::add_time
	int64_t ___add_time_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601* ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;
	// System.Threading.WaitCallback System.Runtime.Remoting.Messaging.AsyncResult::orig_cb
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___orig_cb_15;
};
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_pinvoke
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_com
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com* ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};

// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD  : public RuntimeObject
{
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___io_buffer_5;
	// System.Exception System.IO.Compression.DeflateStreamNative::last_error
	Exception_t* ___last_error_6;
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

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Internal.Cryptography.OidLookup::ToOid(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OidLookup_ToOid_m084AE2948BA1D784EAC148B97B6D5EF94F0D58B0 (String_t* ___friendlyName0, int32_t ___oidGroup1, bool ___fallBackToAllGroups2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::.ctor()
inline void List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8 (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::get_Count()
inline int32_t List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::Add(T)
inline void List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_inline (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::get_Item(System.Int32)
inline Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___oids0, const RuntimeMethod* method) ;
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedBasicConstraints0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedEnhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedKeyUsage0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedSubjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, String_t* ___friendlyName1, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m956785EB4A235575C21677C16D2F6CBE54787032 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1Convert_FromInt32_mACAC096211E525F124BE0D50D90524ADCB6EA198 (int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.CollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase__ctor_m9AB03A7692AA8F78FA5519ACA74FF3FA2F9520BC (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___useMachineContext0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D (bool ___useMachineContext0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) ;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___oid0, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1Convert_FromOid_mBB920E2827A66620790C5E07549D74F244735C1C (String_t* ___oid0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, bool ___useMachineContext0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___flags0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___hex0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD (String_t* ___str0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___array0, method);
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___address0, int64_t ___scopeid1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___address0, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparandObj0, bool ___compareScopeId1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline)(__this, ___array0, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline)(___span0, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___destination0, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.BitConverter::TryWriteBytes(System.Span`1<System.Byte>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___span0, method);
}
// System.UInt64 System.Marvin::get_DefaultSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) ;
// System.Int32 System.Marvin::ComputeHash32(System.ReadOnlySpan`1<System.Byte>,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, uint64_t ___seed1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
inline ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 (*) (uint32_t*, int32_t, const RuntimeMethod*))MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline)(___reference0, ___length1, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline)(___span0, method);
}
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___newAddress0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, int64_t ___scopeid1, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___newAddress0, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___address0, Il2CppChar* ___addressString1, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___value0, int32_t ___valueCount1, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___number0, Il2CppChar* ___addressString1, int32_t* ___offset2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
inline ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared)(___array0, method);
}
// System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___numbers0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, int32_t ___fromInclusive1, int32_t ___toExclusive2, StringBuilder_t* ___buffer3, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___address0, StringBuilder_t* ___destination1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062 (StringBuilder_t* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::DivRem(System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5 (int32_t ___a0, int32_t ___b1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.ValueTuple`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___numbers0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___value0, StringBuilder_t* ___buffer1, const RuntimeMethod* method) ;
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___number0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, int32_t ___windowsBits3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared)(___asyncResult0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Stream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline)(___array0, ___start1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___destination0, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared)(__this, method);
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___stream0, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___span0, method);
}
// System.Int32 System.Marvin::ComputeHash32(System.Byte&,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D (uint8_t* ___data0, int32_t ___count1, uint64_t ___seed2, const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline)(__this, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline)(__this, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___oid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___oid0;
		il2cpp_codegen_runtime_class_init_inline(OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = OidLookup_ToOid_m084AE2948BA1D784EAC148B97B6D5EF94F0D58B0(L_0, 0, (bool)0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ___oid0;
		V_0 = L_3;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline(__this, L_4, NULL);
		__this->____group_2 = 0;
		return;
	}
}
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, String_t* ___friendlyName1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		String_t* L_1 = ___friendlyName1;
		__this->____friendlyName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____friendlyName_1), (void*)L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17E5BE9B221C767EF04A364F24B81309DAE38512)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59_RuntimeMethod_var)));
	}

IL_0014:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = ___oid0;
		NullCheck(L_2);
		String_t* L_3 = L_2->____value_0;
		__this->____value_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_3);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4 = ___oid0;
		NullCheck(L_4);
		String_t* L_5 = L_4->____friendlyName_1;
		__this->____friendlyName_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____friendlyName_1), (void*)L_5);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = ___oid0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____group_2;
		__this->____group_2 = L_7;
		return;
	}
}
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_0;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Oid::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
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
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*)il2cpp_codegen_object_new(List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8(L_0, List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var);
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline(L_0, List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_2 = __this->____list_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_3 = ___oid0;
		NullCheck(L_2);
		List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_inline(L_2, L_3, List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2;
		L_2 = List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE(L_0, L_1, List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline(L_0, List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		return L_1;
	}
}
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_0 = (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41*)il2cpp_codegen_object_new(OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6(L_0, __this, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidCollection_System_Collections_IEnumerable_GetEnumerator_m4624AA2C7F0693698228803D9B59EFE6AAD6AFE4 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_0;
		L_0 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(__this, NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = ___index1;
		RuntimeArray* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_003f:
	{
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(__this, NULL);
		RuntimeArray* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_12, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))) <= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_005a:
	{
		V_0 = 0;
		goto IL_0075;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___array0;
		int32_t L_16 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_17;
		L_17 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(__this, L_16, NULL);
		int32_t L_18 = ___index1;
		NullCheck(L_15);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_15, L_17, L_18, NULL);
		int32_t L_19 = ___index1;
		___index1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_0;
		int32_t L_22;
		L_22 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(__this, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_005e;
		}
	}
	{
		return;
	}
}
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidCollection_get_SyncRoot_mD310358F3BF4454604AD96C734BA6EC180CE7A85 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	{
		return __this;
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
// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___oids0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = ___oids0;
		__this->____oids_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oids_0), (void*)L_0);
		__this->____current_1 = (-1);
		return;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = __this->____oids_0;
		int32_t L_1 = __this->____current_1;
		NullCheck(L_0);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2;
		L_2 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidEnumerator_System_Collections_IEnumerator_get_Current_m0B627B9F510EF4F283F40EBE17164B9231BB7735 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0;
		L_0 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current_1;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = __this->____oids_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_1, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_3 = __this->____current_1;
		__this->____current_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return (bool)1;
	}
}
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator_Reset_m24F1F25812A7BFE9B02B312BA9E670C930622F27 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		__this->____current_1 = (-1);
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
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		__this->____oid_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oid_0), (void*)(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL);
		return;
	}

IL_000b:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_1 = ___value0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_2, L_1, NULL);
		__this->____oid_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oid_0), (void*)L_2);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF41760006700B346FE970834ED6436CD21A1330F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		NullCheck((RuntimeArray*)L_2);
		RuntimeObject* L_3;
		L_3 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_2, NULL);
		__this->____raw_1 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____raw_1), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		NullCheck(L_2);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_3 = L_2->____oid_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7(__this, (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL, NULL);
		goto IL_0030;
	}

IL_001f:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_4 = ___asnEncodedData0;
		NullCheck(L_4);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = L_4->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_6, L_5, NULL);
		AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7(__this, L_6, NULL);
	}

IL_0030:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_7 = ___asnEncodedData0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->____raw_1;
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_ToString_m669772943B78D9242BC5F176A4BD857326F95021 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, NULL);
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, NULL);
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, NULL);
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D, NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4, NULL);
		if (L_13)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008c;
	}

IL_005c:
	{
		bool L_14 = ___multiLine0;
		String_t* L_15;
		L_15 = AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC(__this, L_14, NULL);
		return L_15;
	}

IL_0064:
	{
		bool L_16 = ___multiLine0;
		String_t* L_17;
		L_17 = AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA(__this, L_16, NULL);
		return L_17;
	}

IL_006c:
	{
		bool L_18 = ___multiLine0;
		String_t* L_19;
		L_19 = AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3(__this, L_18, NULL);
		return L_19;
	}

IL_0074:
	{
		bool L_20 = ___multiLine0;
		String_t* L_21;
		L_21 = AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789(__this, L_20, NULL);
		return L_21;
	}

IL_007c:
	{
		bool L_22 = ___multiLine0;
		String_t* L_23;
		L_23 = AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14(__this, L_22, NULL);
		return L_23;
	}

IL_0084:
	{
		bool L_24 = ___multiLine0;
		String_t* L_25;
		L_25 = AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373(__this, L_24, NULL);
		return L_25;
	}

IL_008c:
	{
		bool L_26 = ___multiLine0;
		String_t* L_27;
		L_27 = AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70(__this, L_26, NULL);
		return L_27;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0044;
	}

IL_000a:
	{
		StringBuilder_t* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____raw_1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____raw_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1)))))
		{
			goto IL_0040;
		}
	}
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
	}

IL_0040:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0044:
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____raw_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* L_0 = (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35*)il2cpp_codegen_object_new(X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* L_0 = (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF*)il2cpp_codegen_object_new(X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_0 = (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B*)il2cpp_codegen_object_new(X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* L_0 = (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5*)il2cpp_codegen_object_new(X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	uint8_t V_6 = 0x0;
	String_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0011:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____raw_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_2, L_1, NULL);
			V_0 = L_2;
			StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
			V_1 = L_3;
			V_2 = 0;
			goto IL_00ed_1;
		}

IL_002b_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_4 = V_0;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
			L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_4, L_5, NULL);
			V_3 = L_6;
			V_4 = (String_t*)NULL;
			V_5 = (String_t*)NULL;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7 = V_3;
			NullCheck(L_7);
			uint8_t L_8;
			L_8 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_7, NULL);
			V_6 = L_8;
			uint8_t L_9 = V_6;
			if ((((int32_t)L_9) == ((int32_t)((int32_t)129))))
			{
				goto IL_0055_1;
			}
		}
		{
			uint8_t L_10 = V_6;
			if ((((int32_t)L_10) == ((int32_t)((int32_t)130))))
			{
				goto IL_0070_1;
			}
		}
		{
			goto IL_008b_1;
		}

IL_0055_1:
		{
			V_4 = _stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
			L_11 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_3;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_12, NULL);
			NullCheck(L_11);
			String_t* L_14;
			L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_11, L_13);
			V_5 = L_14;
			goto IL_00af_1;
		}

IL_0070_1:
		{
			V_4 = _stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
			L_15 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_3;
			NullCheck(L_16);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_16, NULL);
			NullCheck(L_15);
			String_t* L_18;
			L_18 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_15, L_17);
			V_5 = L_18;
			goto IL_00af_1;
		}

IL_008b_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_3;
			NullCheck(L_19);
			uint8_t L_20;
			L_20 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_19, NULL);
			uint8_t L_21 = L_20;
			RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
			String_t* L_23;
			L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB, L_22, NULL);
			V_4 = L_23;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24 = V_3;
			NullCheck(L_24);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
			L_25 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_24, NULL);
			String_t* L_26;
			L_26 = CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A(L_25, NULL);
			V_5 = L_26;
		}

IL_00af_1:
		{
			StringBuilder_t* L_27 = V_1;
			String_t* L_28 = V_4;
			NullCheck(L_27);
			StringBuilder_t* L_29;
			L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_28, NULL);
			StringBuilder_t* L_30 = V_1;
			String_t* L_31 = V_5;
			NullCheck(L_30);
			StringBuilder_t* L_32;
			L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_31, NULL);
			bool L_33 = ___multiLine0;
			if (!L_33)
			{
				goto IL_00d2_1;
			}
		}
		{
			StringBuilder_t* L_34 = V_1;
			String_t* L_35;
			L_35 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
			NullCheck(L_34);
			StringBuilder_t* L_36;
			L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
			goto IL_00e9_1;
		}

IL_00d2_1:
		{
			int32_t L_37 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = V_0;
			NullCheck(L_38);
			int32_t L_39;
			L_39 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_38, NULL);
			if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_39, 1)))))
			{
				goto IL_00e9_1;
			}
		}
		{
			StringBuilder_t* L_40 = V_1;
			NullCheck(L_40);
			StringBuilder_t* L_41;
			L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		}

IL_00e9_1:
		{
			int32_t L_42 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		}

IL_00ed_1:
		{
			int32_t L_43 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_0;
			NullCheck(L_44);
			int32_t L_45;
			L_45 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_44, NULL);
			if ((((int32_t)L_43) < ((int32_t)L_45)))
			{
				goto IL_002b_1;
			}
		}
		{
			StringBuilder_t* L_46 = V_1;
			NullCheck(L_46);
			String_t* L_47;
			L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
			V_7 = L_47;
			goto IL_010d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0103;
		}
		throw e;
	}

CATCH_0103:
	{// begin catch(System.Object)
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_7 = L_48;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	}// end catch (depth: 1)

IL_010d:
	{
		String_t* L_49 = V_7;
		return L_49;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____raw_1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____raw_1;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____raw_1;
		NullCheck(L_7);
		int32_t L_8 = 3;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____raw_1;
		NullCheck(L_10);
		int32_t L_11 = 2;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____raw_1;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)(((int32_t)((int32_t)L_9>>((int32_t)((int32_t)L_12&((int32_t)31)))))<<((int32_t)((int32_t)L_15&((int32_t)31)))));
		StringBuilder_t* L_16 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_16, NULL);
		V_1 = L_16;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)((int32_t)(L_17&((int32_t)128)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t* L_18 = V_1;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63, NULL);
	}

IL_0068:
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)((int32_t)(L_20&((int32_t)64)))) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0091;
		}
	}
	{
		StringBuilder_t* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t* L_23 = V_1;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0085:
	{
		StringBuilder_t* L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9, NULL);
	}

IL_0091:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)((int32_t)(L_27&((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_28, NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t* L_30 = V_1;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00ae:
	{
		StringBuilder_t* L_32 = V_1;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139, NULL);
	}

IL_00ba:
	{
		int32_t L_34 = V_0;
		if ((!(((uint32_t)((int32_t)(L_34&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_35, NULL);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		StringBuilder_t* L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00d7:
	{
		StringBuilder_t* L_39 = V_1;
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, NULL);
	}

IL_00e3:
	{
		int32_t L_41 = V_0;
		if ((!(((uint32_t)((int32_t)(L_41&8))) == ((uint32_t)8))))
		{
			goto IL_010a;
		}
	}
	{
		StringBuilder_t* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_42, NULL);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t* L_44 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fe:
	{
		StringBuilder_t* L_46 = V_1;
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, _stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08, NULL);
	}

IL_010a:
	{
		int32_t L_48 = V_0;
		if ((!(((uint32_t)((int32_t)(L_48&4))) == ((uint32_t)4))))
		{
			goto IL_0131;
		}
	}
	{
		StringBuilder_t* L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_49, NULL);
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		StringBuilder_t* L_51 = V_1;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0125:
	{
		StringBuilder_t* L_53 = V_1;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251, NULL);
	}

IL_0131:
	{
		int32_t L_55 = V_0;
		if ((!(((uint32_t)((int32_t)(L_55&2))) == ((uint32_t)2))))
		{
			goto IL_0158;
		}
	}
	{
		StringBuilder_t* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_56, NULL);
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t* L_58 = V_1;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_014c:
	{
		StringBuilder_t* L_60 = V_1;
		NullCheck(L_60);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_60, _stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A, NULL);
	}

IL_0158:
	{
		int32_t L_62 = V_0;
		if ((!(((uint32_t)((int32_t)(L_62&1))) == ((uint32_t)1))))
		{
			goto IL_017f;
		}
	}
	{
		StringBuilder_t* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_63, NULL);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		StringBuilder_t* L_65 = V_1;
		NullCheck(L_65);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0173:
	{
		StringBuilder_t* L_67 = V_1;
		NullCheck(L_67);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, _stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363, NULL);
	}

IL_017f:
	{
		StringBuilder_t* L_69 = V_1;
		String_t* L_70;
		L_70 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_69);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_69, _stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D, L_70, NULL);
		StringBuilder_t* L_72 = V_1;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		return L_73;
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
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213 (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____keyValue_0;
		return L_0;
	}
}
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0 (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____params_1;
		return L_0;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__cctor_m1B2E44B5BBF321952E0FD1F19C048E43A6506407 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields*)il2cpp_codegen_static_fields_for(PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var))->___Empty_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields*)il2cpp_codegen_static_fields_for(PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var))->___Empty_3), (void*)L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m672BE9B41107A8C30454BF4CAC120D70512BA89A (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedBasicConstraints0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedBasicConstraints0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB(__this, L_4, NULL);
		__this->____status_8 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, bool ___certificateAuthority0, bool ___hasPathLengthConstraint1, int32_t ___pathLengthConstraint2, bool ___critical3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		bool L_0 = ___hasPathLengthConstraint1;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___pathLengthConstraint2;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = ___pathLengthConstraint2;
		__this->____pathLengthConstraint_7 = L_3;
	}

IL_001f:
	{
		bool L_4 = ___hasPathLengthConstraint1;
		__this->____hasPathLengthConstraint_6 = L_4;
		bool L_5 = ___certificateAuthority0;
		__this->____certificateAuthority_5 = L_5;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_6);
		bool L_7 = ___critical3;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->____certificateAuthority_5;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C_RuntimeMethod_var)));
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->____hasPathLengthConstraint_6;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7_RuntimeMethod_var)));
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->____pathLengthConstraint_7;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB(__this, L_16, NULL);
		__this->____status_8 = L_17;
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_11, L_10, NULL);
			V_0 = L_11;
			V_1 = 0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_0;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			NullCheck(L_12);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
			L_15 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_12, L_14, NULL);
			V_2 = L_15;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0068_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18;
			L_18 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_17, NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)1))))
			{
				goto IL_0068_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_2;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
			L_20 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_19, NULL);
			NullCheck(L_20);
			int32_t L_21 = 0;
			uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			__this->____certificateAuthority_5 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)255)))? 1 : 0);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23 = V_0;
			int32_t L_24 = V_1;
			int32_t L_25 = L_24;
			V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			NullCheck(L_23);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26;
			L_26 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, L_25, NULL);
			V_2 = L_26;
		}

IL_0068_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = V_2;
			if (!L_27)
			{
				goto IL_0087_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28 = V_2;
			NullCheck(L_28);
			uint8_t L_29;
			L_29 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_28, NULL);
			if ((!(((uint32_t)L_29) == ((uint32_t)2))))
			{
				goto IL_0087_1;
			}
		}
		{
			__this->____hasPathLengthConstraint_6 = (bool)1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_30 = V_2;
			int32_t L_31;
			L_31 = ASN1Convert_ToInt32_m956785EB4A235575C21677C16D2F6CBE54787032(L_30, NULL);
			__this->____pathLengthConstraint_7 = L_31;
		}

IL_0087_1:
		{
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	}// end catch (depth: 1)

IL_008e:
	{
		return (int32_t)(0);
	}

IL_0090:
	{
		int32_t L_32 = V_3;
		return L_32;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_0, (uint8_t)((int32_t)48), NULL);
		V_0 = L_0;
		bool L_1 = __this->____certificateAuthority_5;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)1, L_4, NULL);
		NullCheck(L_2);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_2, L_5, NULL);
	}

IL_002b:
	{
		bool L_7 = __this->____hasPathLengthConstraint_6;
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_8 = __this->____pathLengthConstraint_7;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_11, (uint8_t)2, L_10, NULL);
		NullCheck(L_9);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12;
		L_12 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_9, L_11, NULL);
		goto IL_0062;
	}

IL_0050:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_13 = V_0;
		int32_t L_14 = __this->____pathLengthConstraint_7;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
		L_15 = ASN1Convert_FromInt32_mACAC096211E525F124BE0D50D90524ADCB6EA198(L_14, NULL);
		NullCheck(L_13);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_13, L_15, NULL);
	}

IL_0062:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_17);
		return L_18;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509BasicConstraintsExtension_ToString_mBFC61BA07CD2BB8EACCC19A5AE72EA81C11D02E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B, NULL);
		bool L_14 = __this->____certificateAuthority_5;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514, NULL);
		goto IL_009b;
	}

IL_008f:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62, NULL);
	}

IL_009b:
	{
		bool L_19 = ___multiLine0;
		if (!L_19)
		{
			goto IL_00ac;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		String_t* L_21;
		L_21 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_21, NULL);
		goto IL_00b8;
	}

IL_00ac:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00b8:
	{
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5, NULL);
		bool L_27 = __this->____hasPathLengthConstraint_6;
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		StringBuilder_t* L_28 = V_0;
		int32_t L_29 = __this->____pathLengthConstraint_7;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_28, L_29, NULL);
		goto IL_00e7;
	}

IL_00db:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, NULL);
	}

IL_00e7:
	{
		bool L_33 = ___multiLine0;
		if (!L_33)
		{
			goto IL_00f6;
		}
	}
	{
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_00f6:
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2Collection__cctor_mA00FF6D99552680982B6FF926E0F075949CF8DC7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		((X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var))->___newline_split_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var))->___newline_split_1), (void*)L_1);
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
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) 
{
	{
		CollectionBase__ctor_m9AB03A7692AA8F78FA5519ACA74FF3FA2F9520BC(__this, NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_GetHashCode_m3F1BB9203AB722A6A9CF574390B0244F47485111 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mE938759A3C3CA007FB171DDD375312F03394D3F6 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	{
		X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4(__this, (bool)0, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___useMachineContext0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___useMachineContext0;
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1;
		L_1 = X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D(L_0, NULL);
		__this->___impl_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_0), (void*)L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, intptr_t ___chainContext0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Dispose_mC10F7CE7DAF0799F13C798184330C046222E305D (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Dispose_m24B2B8C5A29F06A8A1F8564EB0B39820616B3930 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = __this->___impl_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1 = __this->___impl_0;
		NullCheck(L_1);
		X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A(L_1, NULL);
		__this->___impl_0 = (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_0), (void*)(X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F*)NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Finalize_m76B5ABE85F3D5596788618FFD03C4831DB0EDB39 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean) */, __this, (bool)0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementCollection_get_SyncRoot_m435D18A280E3D7609FB490021AC2E1436BE61568 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m4909BF1B409D795DDD3D8D2206FA17B88AEA5B29 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(32 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m25F89A23A06D302469D28DDA337A0B0C5C463269 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* L_1 = (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D*)il2cpp_codegen_object_new(X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D(L_1, L_0, NULL);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___enumerable0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		__this->___enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_0), (void*)L_1);
		return;
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mCE2DFBF81D34976171E7A936A04F87C0A625B025 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ChainElementEnumerator_MoveNext_mA8C7DDBB648F9B1F15FA3E169D4361374BE2B995 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator_Reset_m4E0A51B45009F95A6E9B64C15F87CC9E48444A40 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_m9F8B96FFCB317F7F8C8E1ACA82061EA7404B732D (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Finalize_mB70B742567D0E59AE522AA9F80800B308D87BC6F (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, bool ___useMachineContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B2_0 = NULL;
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B3_1 = NULL;
	{
		X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18(__this, NULL);
		bool L_0 = ___useMachineContext0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___location_0 = G_B3_0;
		X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* L_1 = (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D*)il2cpp_codegen_object_new(X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D(L_1, NULL);
		__this->___elements_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_1), (void*)L_1);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_2 = (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC*)il2cpp_codegen_object_new(X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9(L_2, NULL);
		__this->___policy_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___policy_2), (void*)L_2);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__cctor_m84D1A5168CDA3C59F5D72648F13A63B0B2BA1A2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_0 = (X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)(X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)SZArrayNew(X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var, (uint32_t)0);
		((X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields*)il2cpp_codegen_static_fields_for(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var))->___Empty_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields*)il2cpp_codegen_static_fields_for(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var))->___Empty_3), (void*)L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_0, NULL);
		__this->___apps_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apps_0), (void*)L_0);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_1, NULL);
		__this->___cert_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cert_1), (void*)L_1);
		__this->___store2_2 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___store2_2), (void*)(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL);
		__this->___rflag_3 = 2;
		__this->___mode_4 = 1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		__this->___timeout_5 = L_2;
		__this->___vflags_6 = 0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___vtime_7 = L_3;
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
// Conversion methods for marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled)
{
	marshaled.___status_0 = unmarshaled.___status_0;
	marshaled.___info_1 = il2cpp_codegen_marshal_string(unmarshaled.___info_1);
}
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled)
{
	int32_t unmarshaledstatus_temp_0 = 0;
	unmarshaledstatus_temp_0 = marshaled.___status_0;
	unmarshaled.___status_0 = unmarshaledstatus_temp_0;
	unmarshaled.___info_1 = il2cpp_codegen_marshal_string_result(marshaled.___info_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___info_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___info_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___info_1);
	marshaled.___info_1 = NULL;
}
// Conversion methods for marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled)
{
	marshaled.___status_0 = unmarshaled.___status_0;
	marshaled.___info_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___info_1);
}
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com_back(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled)
{
	int32_t unmarshaledstatus_temp_0 = 0;
	unmarshaledstatus_temp_0 = marshaled.___status_0;
	unmarshaled.___status_0 = unmarshaledstatus_temp_0;
	unmarshaled.___info_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___info_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___info_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___info_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com_cleanup(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___info_1);
	marshaled.___info_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_m7ECF7F6EEB96855182FD5466A04B4712B3F4C746 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedEnhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedEnhancedKeyUsages0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_4, NULL);
		__this->____status_4 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.OidCollection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___enhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* V_0 = NULL;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_1 = NULL;
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = ___enhancedKeyUsages0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B179EF532CBF38773A257E5F951512B4287DAF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC_RuntimeMethod_var)));
	}

IL_0014:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_2, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_4 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_4, NULL);
		__this->____enhKeyUsage_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enhKeyUsage_3), (void*)L_4);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_5 = ___enhancedKeyUsages0;
		NullCheck(L_5);
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_6;
		L_6 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(L_5, NULL);
		V_0 = L_6;
		goto IL_0058;
	}

IL_0044:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_7 = V_0;
		NullCheck(L_7);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8;
		L_8 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(L_7, NULL);
		V_1 = L_8;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_9 = __this->____enhKeyUsage_3;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5(L_9, L_10, NULL);
	}

IL_0058:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD(L_12, NULL);
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_14, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_16, NULL);
		__this->____status_4 = L_17;
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_5 = __this->____enhKeyUsage_3;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_6 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_6, NULL);
		__this->____enhKeyUsage_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enhKeyUsage_3), (void*)L_6);
	}

IL_0025:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
			NullCheck(L_9);
			uint8_t L_10;
			L_10 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_9, NULL);
			if ((((int32_t)L_10) == ((int32_t)((int32_t)48))))
			{
				goto IL_0047_1;
			}
		}
		{
			String_t* L_11;
			L_11 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1)), NULL);
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_12 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_12, L_11, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var)));
		}

IL_0047_1:
		{
			V_1 = 0;
			goto IL_006c_1;
		}

IL_004b_1:
		{
			OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_13 = __this->____enhKeyUsage_3;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_14 = V_0;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
			L_16 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_14, L_15, NULL);
			String_t* L_17;
			L_17 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_16, NULL);
			Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_18 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72(L_18, L_17, NULL);
			NullCheck(L_13);
			int32_t L_19;
			L_19 = OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5(L_13, L_18, NULL);
			int32_t L_20 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		}

IL_006c_1:
		{
			int32_t L_21 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_0;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_22, NULL);
			if ((((int32_t)L_21) < ((int32_t)L_23)))
			{
				goto IL_004b_1;
			}
		}
		{
			goto IL_007c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Object)
		V_2 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007e;
	}// end catch (depth: 1)

IL_007c:
	{
		return (int32_t)(0);
	}

IL_007e:
	{
		int32_t L_24 = V_2;
		return L_24;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* V_1 = NULL;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_2 = NULL;
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_0, (uint8_t)((int32_t)48), NULL);
		V_0 = L_0;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = __this->____enhKeyUsage_3;
		NullCheck(L_1);
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_2;
		L_2 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(L_1, NULL);
		V_1 = L_2;
		goto IL_002f;
	}

IL_0016:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_3 = V_1;
		NullCheck(L_3);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4;
		L_4 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(L_3, NULL);
		V_2 = L_4;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_6, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8;
		L_8 = ASN1Convert_FromOid_mBB920E2827A66620790C5E07549D74F244735C1C(L_7, NULL);
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9;
		L_9 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_5, L_8, NULL);
	}

IL_002f:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD(L_10, NULL);
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_12);
		return L_13;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509EnhancedKeyUsageExtension_ToString_m9576793CE590716A3BB5AAC1632F946DF75605DE (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECCF64C0782442EC426220868830513FD924C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_3 = NULL;
	{
		int32_t L_0 = __this->____status_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_11 = __this->____enhKeyUsage_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_11, NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_007a:
	{
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_13, NULL);
		V_0 = L_13;
		V_2 = 0;
		goto IL_010a;
	}

IL_0087:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_14 = __this->____enhKeyUsage_3;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_16;
		L_16 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(L_14, L_15, NULL);
		V_3 = L_16;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6, NULL);
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E, NULL);
		goto IL_00c0;
	}

IL_00b4:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C, NULL);
	}

IL_00c0:
	{
		StringBuilder_t* L_24 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_25, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_26, NULL);
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_30 = ___multiLine0;
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		String_t* L_32;
		L_32 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_31);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_32, NULL);
		goto IL_0106;
	}

IL_00ea:
	{
		int32_t L_34 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_35 = __this->____enhKeyUsage_3;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_35, NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, 1)))))
		{
			goto IL_0106;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0106:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_010a:
	{
		int32_t L_40 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_41 = __this->____enhKeyUsage_3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_41, NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0087;
		}
	}
	{
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		return L_44;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547(__this, NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____critical_2 = L_0;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_0028:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_6 = ___asnEncodedData0;
		AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2(__this, L_6, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_7, NULL);
		__this->____critical_2 = L_8;
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
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
		V_1 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		StringBuilder_t* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_7, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
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
// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D (bool ___useMachineContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___useMachineContext0;
		X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* L_1 = (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D*)il2cpp_codegen_object_new(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76(L_1, L_0, NULL);
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
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_mE0EE68497EDEDD78213EEDC931D68DD35DF6340C (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedKeyUsage0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedKeyUsage0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m2FAA526721435935D0B10E0DB916AF56CFD84751 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___keyUsages0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		bool L_1 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_1, NULL);
		int32_t L_2 = ___keyUsages0;
		int32_t L_3;
		L_3 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_2, NULL);
		__this->____keyUsages_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_4, NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->____keyUsages_6;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___flags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		if ((((int32_t)((int32_t)((int32_t)L_0&((int32_t)33023)))) == ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		int32_t L_2 = ___flags0;
		return L_2;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0011;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0021:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			V_1 = 0;
			V_2 = 1;
			goto IL_0040_1;
		}

IL_002f_1:
		{
			int32_t L_9 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
			int32_t L_12 = V_2;
			int32_t L_13 = L_12;
			V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			NullCheck(L_11);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_9<<8)), (int32_t)L_15));
		}

IL_0040_1:
		{
			int32_t L_16 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
			L_18 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_17, NULL);
			NullCheck(L_18);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_002f_1;
			}
		}
		{
			int32_t L_19 = V_1;
			int32_t L_20;
			L_20 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_19, NULL);
			__this->____keyUsages_6 = L_20;
			goto IL_005f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_005f:
	{
		return (int32_t)(0);
	}

IL_0061:
	{
		int32_t L_21 = V_3;
		return L_21;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		int32_t L_0 = __this->____keyUsages_6;
		V_1 = L_0;
		V_2 = (uint8_t)0;
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		uint8_t L_4 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)3, L_3, NULL);
		V_0 = L_5;
		goto IL_0081;
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)255))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B5_0 = ((int32_t)(L_7>>8));
		goto IL_002f;
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		G_B5_0 = L_8;
	}

IL_002f:
	{
		V_3 = G_B5_0;
		goto IL_003b;
	}

IL_0032:
	{
		uint8_t L_9 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)(L_10>>1));
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		if (((int32_t)(L_11&1)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)255))))
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		uint8_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_18));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_19, (uint8_t)3, L_17, NULL);
		V_0 = L_19;
		goto IL_0081;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20;
		uint8_t L_22 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_21;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_23;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_26>>8))));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_27, (uint8_t)3, L_25, NULL);
		V_0 = L_27;
	}

IL_0081:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_28);
		return L_29;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509KeyUsageExtension_ToString_m270131139984275D7571120A2984F0F5E77E79DC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->____status_7;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		int32_t L_11 = __this->____keyUsages_6;
		if (L_11)
		{
			goto IL_0075;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0075:
	{
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_0 = L_12;
		int32_t L_13 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_13&((int32_t)128))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306, NULL);
	}

IL_0095:
	{
		int32_t L_16 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_16&((int32_t)64))))
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00b5:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31, NULL);
	}

IL_00c1:
	{
		int32_t L_23 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_23&((int32_t)32))))
		{
			goto IL_00ed;
		}
	}
	{
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_24, NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00e1:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E, NULL);
	}

IL_00ed:
	{
		int32_t L_30 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_30&((int32_t)16))))
		{
			goto IL_0119;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_31, NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_010d:
	{
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2, NULL);
	}

IL_0119:
	{
		int32_t L_37 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_37&8)))
		{
			goto IL_0144;
		}
	}
	{
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0138:
	{
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1, NULL);
	}

IL_0144:
	{
		int32_t L_44 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_44&4)))
		{
			goto IL_016f;
		}
	}
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_45, NULL);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0163:
	{
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7, NULL);
	}

IL_016f:
	{
		int32_t L_51 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_51&2)))
		{
			goto IL_019a;
		}
	}
	{
		StringBuilder_t* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_52, NULL);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_018e:
	{
		StringBuilder_t* L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6, NULL);
	}

IL_019a:
	{
		int32_t L_58 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_58&1)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_59, NULL);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01b9;
		}
	}
	{
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01b9:
	{
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_63, _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190, NULL);
	}

IL_01c5:
	{
		int32_t L_65 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_65&((int32_t)32768))))
		{
			goto IL_01f4;
		}
	}
	{
		StringBuilder_t* L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_66, NULL);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_01e8;
		}
	}
	{
		StringBuilder_t* L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_68, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01e8:
	{
		StringBuilder_t* L_70 = V_0;
		NullCheck(L_70);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D, NULL);
	}

IL_01f4:
	{
		int32_t L_72 = __this->____keyUsages_6;
		V_1 = L_72;
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_73, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		StringBuilder_t* L_75 = V_0;
		int32_t L_76 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)L_76);
		String_t* L_77;
		L_77 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_75);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_75, L_77, NULL);
		int32_t L_79 = V_1;
		if ((((int32_t)L_79) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0249;
		}
	}
	{
		StringBuilder_t* L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_82 = V_0;
		int32_t L_83 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_83>>8)));
		String_t* L_84;
		L_84 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_82);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_82, L_84, NULL);
	}

IL_0249:
	{
		StringBuilder_t* L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_86, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_88 = ___multiLine0;
		if (!L_88)
		{
			goto IL_0264;
		}
	}
	{
		StringBuilder_t* L_89 = V_0;
		String_t* L_90;
		L_90 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_89);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_89, L_90, NULL);
	}

IL_0264:
	{
		StringBuilder_t* L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		return L_93;
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
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mFC2A19B1301ABBA5F6C5CE407ABC4F4CA1EB49B1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedSubjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedSubjectKeyIdentifier0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0023:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_4, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_4);
		bool L_5 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___subjectKeyIdentifier0;
		NullCheck((RuntimeArray*)L_6);
		RuntimeObject* L_7;
		L_7 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_6, NULL);
		__this->____subjectKeyIdentifier_5 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, String_t* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		String_t* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0028:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_5, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_5);
		bool L_6 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_6, NULL);
		String_t* L_7 = ___subjectKeyIdentifier0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D(L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_9, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m3DD2C4E1505A6E625499FBD833BFC076D28D83EB (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, bool ___critical1, const RuntimeMethod* method) 
{
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___key0;
		bool L_1 = ___critical1;
		X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_0014:
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_2 = ___key0;
		NullCheck(L_2);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_3;
		L_3 = PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = ___algorithm1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0037:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_6;
		L_6 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		goto IL_011e;
	}

IL_004d:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_9;
		L_9 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____subjectKeyIdentifier_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_11, ((int32_t)12), (RuntimeArray*)L_13, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____subjectKeyIdentifier_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)64)|((int32_t)((int32_t)L_17&((int32_t)15)))))));
		goto IL_011e;
	}

IL_008f:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_18, (uint8_t)((int32_t)48), NULL);
		V_1 = L_18;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_20, (uint8_t)((int32_t)48), NULL);
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_19, L_20, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = L_21;
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_23 = ___key0;
		NullCheck(L_23);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_24;
		L_24 = PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD(L_25, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_27, L_26, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28;
		L_28 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_27, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_29 = ___key0;
		NullCheck(L_29);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_30;
		L_30 = PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline(L_29, NULL);
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_30, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_32, L_31, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_33;
		L_33 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_34)->max_length)), 1)));
		V_2 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_36, 0, (RuntimeArray*)L_37, 1, ((int32_t)(((RuntimeArray*)L_38)->max_length)), NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_41 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_41, (uint8_t)3, L_40, NULL);
		NullCheck(L_39);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_42;
		L_42 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_39, L_41, NULL);
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_43;
		L_43 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_1;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_44);
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_43, L_45, NULL);
		__this->____subjectKeyIdentifier_5 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_46);
		goto IL_011e;
	}

IL_0113:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_011e:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_48 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_48, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_48);
		bool L_49 = ___critical2;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_50, NULL);
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_002e;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____subjectKeyIdentifier_5;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____subjectKeyIdentifier_5;
		String_t* L_5;
		L_5 = CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A(L_4, NULL);
		__this->____ski_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_5);
	}

IL_0027:
	{
		String_t* L_6 = __this->____ski_6;
		return L_6;
	}

IL_002e:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_7 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)102))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)97))), ((int32_t)10))));
	}

IL_0013:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)65))), ((int32_t)10))));
	}

IL_0026:
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___c0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_8 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))));
	}

IL_0036:
	{
		return (uint8_t)((int32_t)255);
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___c10;
		uint8_t L_1;
		L_1 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)255))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		Il2CppChar L_4 = ___c21;
		uint8_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_4, NULL);
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3<<4))|(int32_t)L_5)));
	}

IL_001b:
	{
		uint8_t L_6 = V_0;
		return L_6;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___hex0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___hex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = ((int32_t)(L_2>>1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		V_3 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8 = ___hex0;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_10, NULL);
		String_t* L_12 = ___hex0;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		NullCheck(L_12);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_14, NULL);
		uint8_t L_16;
		L_16 = X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA(L_11, L_15, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_16);
	}

IL_003d:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		return L_19;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____ski_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___extension0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(3);
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___extension0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_9, L_8, NULL);
		V_0 = L_9;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
		__this->____subjectKeyIdentifier_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_11);
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.Object)
		V_1 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0047:
	{
		return (int32_t)(0);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____subjectKeyIdentifier_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_1, (uint8_t)4, L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_ToString_m9AE51334149DE6200E554F9C30E2DC5570D36707 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		V_2 = 0;
		goto IL_00ab;
	}

IL_0071:
	{
		StringBuilder_t* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_15, NULL);
		int32_t L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), 1)))))
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
	}

IL_00a7:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00ab:
	{
		int32_t L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0071;
		}
	}
	{
		bool L_24 = ___multiLine0;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t* L_25 = V_0;
		String_t* L_26;
		L_26 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
	}

IL_00c5:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
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
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((!(((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___value0;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___value0;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___newAddress0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___newAddress0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = ___newAddress0;
		if ((((int64_t)L_1) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var)));
	}

IL_001b:
	{
		int64_t L_3 = ___newAddress0;
		IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E(__this, ((int32_t)(uint32_t)L_3), NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, int64_t ___scopeid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___address0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034(NULL);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_3), G_B2_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		int64_t L_4 = ___scopeid1;
		IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___address0, int64_t ___scopeid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___address0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0021:
	{
		int64_t L_2 = ___scopeid1;
		if ((((int64_t)L_2) < ((int64_t)((int64_t)0))))
		{
			goto IL_002b;
		}
	}
	{
		int64_t L_3 = ___scopeid1;
		if ((((int64_t)L_3) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_0036;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0036:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____numbers_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numbers_9), (void*)L_5);
		V_0 = 0;
		goto IL_0072;
	}

IL_0046:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____numbers_9;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___address0))->____pointer_0))->value, (((int32_t)il2cpp_codegen_multiply(L_8, 2))), ((&___address0))->____length_1);
		int32_t L_10 = *((uint8_t*)L_9);
		int32_t L_11 = V_0;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___address0))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, 2)), 1))), ((&___address0))->____length_1);
		int32_t L_13 = *((uint8_t*)L_12);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)256))), L_13))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0072:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_16 = ___scopeid1;
		IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42(__this, ((int32_t)(uint32_t)L_16), NULL);
		return;
	}
}
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(((int32_t)23));
	}

IL_000b:
	{
		return (int32_t)(2);
	}
}
// System.String System.Net.IPAddress::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddress_ToString_m91FE727877BEAA0115F497387E2E9CB0B45C3895 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B3_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B4_1 = NULL;
	{
		String_t* L_0 = __this->____toString_10;
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		bool L_1;
		L_1 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		G_B2_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0024;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____numbers_9;
		uint32_t L_3;
		L_3 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		String_t* L_4;
		L_4 = IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6(L_2, L_3, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_0024:
	{
		uint32_t L_5;
		L_5 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		String_t* L_6;
		L_6 = IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2(L_5, NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->____toString_10 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____toString_10), (void*)G_B4_0);
	}

IL_0034:
	{
		String_t* L_7 = __this->____toString_10;
		return L_7;
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparandObj0, bool ___compareScopeId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___comparandObj0;
		V_0 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)IsInstClass((RuntimeObject*)L_0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_5;
		L_5 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_0;
		NullCheck(L_6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = L_6->____numbers_9;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = __this->____numbers_9;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0040:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0028;
		}
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = V_0;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(L_17, NULL);
		uint32_t L_19;
		L_19 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0057;
		}
	}
	{
		bool L_20 = ___compareScopeId1;
		return (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
	}

IL_0057:
	{
		return (bool)1;
	}

IL_0059:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = V_0;
		NullCheck(L_21);
		uint32_t L_22;
		L_22 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(L_21, NULL);
		uint32_t L_23;
		L_23 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		return (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_m5EA56A0CBC4F66012C11628D8CC75E03E5A8C462 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparand0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparand0;
		bool L_1;
		L_1 = IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Int32 System.Net.IPAddress::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_GetHashCode_m243850627E81961E58E3A7A0A39A1F365C47A4BA (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____hashCode_11;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->____hashCode_11;
		return L_1;
	}

IL_000f:
	{
		bool L_2;
		L_2 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)((int32_t)20)));
		memset(L_3, 0, ((uintptr_t)((int32_t)20)));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_4), (void*)(L_3), ((int32_t)20), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_1 = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = __this->____numbers_9;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline((&L_6), L_5, /*hidden argument*/ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline(L_6, MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = V_1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_2), L_8, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), ((int32_t)16), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint32_t L_10 = __this->____addressOrScopeId_8;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B(L_9, L_10, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_12 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_13;
		L_13 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_12, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_14;
		L_14 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_15;
		L_15 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_13, L_14, NULL);
		V_0 = L_15;
		goto IL_0081;
	}

IL_0065:
	{
		uint32_t* L_16 = (&__this->____addressOrScopeId_8);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_17;
		L_17 = MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline(L_16, 1, MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_18;
		L_18 = MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline(L_17, MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_19;
		L_19 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_20;
		L_20 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_18, L_19, NULL);
		V_0 = L_20;
	}

IL_0081:
	{
		int32_t L_21 = V_0;
		__this->____hashCode_11 = L_21;
		int32_t L_22 = __this->____hashCode_11;
		return L_22;
	}
}
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) 
{
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var)));
	}
}
// System.Void System.Net.IPAddress::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__cctor_m83F9B947B6C0D0F8DEA3E0C62FCCC2573495D6CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_0 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_0, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0), (void*)L_0);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_1 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_1, ((int64_t)((int32_t)16777343)), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1), (void*)L_1);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_2 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_2, ((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2), (void*)L_2);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2;
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_5, L_4, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_8, L_7, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_10, L_9, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7), (void*)L_10);
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
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___newAddress0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___newAddress0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B(__this, L_0, NULL);
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
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___address0, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)30)));
		memset(L_0, 0, ((uintptr_t)((int32_t)30)));
		V_0 = (Il2CppChar*)(L_0);
		uint32_t L_1 = ___address0;
		Il2CppChar* L_2 = V_0;
		int32_t L_3;
		L_3 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_1, L_2, NULL);
		V_1 = L_3;
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = V_1;
		String_t* L_6;
		L_6 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, L_4, 0, L_5, NULL);
		return L_6;
	}
}
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___address0, StringBuilder_t* ___destination1, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)30)));
		memset(L_0, 0, ((uintptr_t)((int32_t)30)));
		V_0 = (Il2CppChar*)(L_0);
		uint32_t L_1 = ___address0;
		Il2CppChar* L_2 = V_0;
		int32_t L_3;
		L_3 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_1, L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = ___destination1;
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___address0, Il2CppChar* ___addressString1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___address0;
		Il2CppChar* L_1 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)((int32_t)L_0&((int32_t)255))), L_1, (&V_0), NULL);
		Il2CppChar* L_2 = ___addressString1;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_5 = ___address0;
		Il2CppChar* L_6 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))), L_6, (&V_0), NULL);
		Il2CppChar* L_7 = ___addressString1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_10 = ___address0;
		Il2CppChar* L_11 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_10>>((int32_t)16)))&((int32_t)255))), L_11, (&V_0), NULL);
		Il2CppChar* L_12 = ___addressString1;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_15 = ___address0;
		Il2CppChar* L_16 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)24)))&((int32_t)255))), L_16, (&V_0), NULL);
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		uint32_t L_1 = ___scopeId1;
		StringBuilder_t* L_2;
		L_2 = IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_2, NULL);
		return L_3;
	}
}
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)65), NULL);
		V_0 = L_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___address0;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54(L_1, ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		bool L_3;
		L_3 = IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70(L_2, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___address0;
		StringBuilder_t* L_5 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_4, 0, 6, L_5, NULL);
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)58))))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)58), NULL);
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___address0;
		uint32_t L_13;
		L_13 = IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6(L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0(L_13, L_14, NULL);
		goto IL_0050;
	}

IL_0047:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___address0;
		StringBuilder_t* L_16 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_15, 0, 8, L_16, NULL);
	}

IL_0050:
	{
		uint32_t L_17 = ___scopeId1;
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)37), NULL);
		uint32_t L_20 = ___scopeId1;
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062(L_19, L_20, NULL);
	}

IL_0062:
	{
		StringBuilder_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___number0, Il2CppChar* ___addressString1, int32_t* ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t* G_B4_1 = NULL;
	int32_t G_B1_0 = 0;
	int32_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	int32_t* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t* G_B5_2 = NULL;
	{
		int32_t* L_0 = ___offset2;
		int32_t* L_1 = ___offset2;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = ___number0;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)99))))
		{
			G_B4_0 = L_2;
			G_B4_1 = L_0;
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = ___number0;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0014;
	}

IL_0010:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0014:
	{
		*((int32_t*)G_B5_2) = (int32_t)((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		int32_t* L_5 = ___offset2;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
	}

IL_0019:
	{
		int32_t L_7 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5(L_7, ((int32_t)10), (&V_1), NULL);
		___number0 = L_8;
		Il2CppChar* L_9 = ___addressString1;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		int32_t L_12 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_12)));
		int32_t L_13 = ___number0;
		if (L_13)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, int32_t ___fromInclusive1, int32_t ___toExclusive2, StringBuilder_t* ___buffer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		int32_t L_1 = ___fromInclusive1;
		int32_t L_2 = ___toExclusive2;
		int32_t L_3 = ___fromInclusive1;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline((&L_4), L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), /*hidden argument*/ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56(L_4, NULL);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = L_5;
		int32_t L_7 = L_6.___Item1_0;
		V_0 = L_7;
		int32_t L_8 = L_6.___Item2_1;
		V_1 = L_8;
		V_2 = (bool)0;
		int32_t L_9 = ___fromInclusive1;
		V_3 = L_9;
		goto IL_003d;
	}

IL_0022:
	{
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t* L_11 = ___buffer3;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)58), NULL);
	}

IL_002e:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = ___address0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		StringBuilder_t* L_17 = ___buffer3;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_16, L_17, NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003d:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_22 = ___buffer3;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral5295380188F75D696383F8BDB2147F0053791372, NULL);
		V_2 = (bool)0;
		int32_t L_24 = V_1;
		___fromInclusive1 = L_24;
	}

IL_0056:
	{
		int32_t L_25 = ___fromInclusive1;
		V_4 = L_25;
		goto IL_0079;
	}

IL_005b:
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t* L_27 = ___buffer3;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)58), NULL);
	}

IL_0067:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = ___address0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		StringBuilder_t* L_33 = ___buffer3;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_32, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0079:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = ___toExclusive2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_005b;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___value0, StringBuilder_t* ___buffer1, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* G_B3_0 = NULL;
	Il2CppChar* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppChar* G_B4_1 = NULL;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)8));
		memset(L_0, 0, ((uintptr_t)8));
		V_0 = (Il2CppChar*)(L_0);
		V_1 = 4;
	}

IL_0007:
	{
		uint16_t L_1 = ___value0;
		V_2 = ((int32_t)((int32_t)L_1%((int32_t)16)));
		uint16_t L_2 = ___value0;
		___value0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2/((int32_t)16))));
		Il2CppChar* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		V_1 = L_5;
		int32_t L_6 = V_2;
		G_B2_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))));
		if ((((int32_t)L_6) < ((int32_t)((int32_t)10))))
		{
			G_B3_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))));
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)97), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10))))));
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002c:
	{
		int32_t L_8 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_8)));
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		*((int16_t*)G_B4_1) = (int16_t)G_B4_0;
		uint16_t L_9 = ___value0;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		StringBuilder_t* L_10 = ___buffer1;
		Il2CppChar* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_10, ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 2)))), ((int32_t)il2cpp_codegen_subtract(4, L_13)), NULL);
		return;
	}
}
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		NullCheck(L_0);
		int32_t L_1 = 7;
		uint16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint16_t L_3;
		L_3 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_2, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___address0;
		NullCheck(L_4);
		int32_t L_5 = 6;
		uint16_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_6, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)16)))|(int32_t)L_7));
	}
}
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___number0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___number0;
		uint16_t L_1 = ___number0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_0>>8))&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_1<<8))&((int32_t)65280))))));
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
// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___state0;
		__this->___browsableState_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)IsInstSealed((RuntimeObject*)L_1, EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var));
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___browsableState_0;
		int32_t L_5 = __this->___browsableState_0;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
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
// System.Void System.ComponentModel.ArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C* __this, const RuntimeMethod* method) 
{
	{
		CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147(__this, NULL);
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
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.BooleanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.DecimalConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.DoubleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int16Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int32Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int64Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(L_2, NULL);
		String_t* L_4;
		L_4 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_m7A206154E18C66B9CEA6934D8AFB1AE9DA4EA666 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_0 = (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)il2cpp_codegen_object_new(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9(L_0, NULL);
		((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_0);
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
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) 
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
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C(L_3, L_0, L_1, L_2, ((int32_t)31), NULL);
		__this->____deflateStream_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_4), (void*)L_3);
		return;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, G_B2_0);
		return L_2;
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.Compression.GZipStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return L_1;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(19 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncResult0;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_mBC83A9A584B5A2DC2B08B044E96C0E8AF33723D5 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = ___buffer0;
		int32_t L_5;
		L_5 = Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE(__this, L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = __this->____deflateStream_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___buffer0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40(L_6, L_7, NULL);
		return L_8;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___asyncResult0;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mF25D52D7EC30B244830E14477D047FC5028E51D3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___buffer0;
		Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8(__this, L_4, NULL);
		return;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = __this->____deflateStream_4;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___buffer0;
		NullCheck(L_5);
		DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730(L_5, L_6, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::CopyTo(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CopyTo_m14B3A1E4E385140F81F16B943C8A9CE21ED908E6 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination0, int32_t ___bufferSize1, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___destination0;
		int32_t L_2 = ___bufferSize1;
		NullCheck(L_0);
		VirtualActionInvoker2< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, int32_t >::Invoke(13 /* System.Void System.IO.Stream::CopyTo(System.IO.Stream,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_2 = __this->____deflateStream_4;
				if (!L_2)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = __this->____deflateStream_4;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
			}

IL_0016_1:
			{
				__this->____deflateStream_4 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_4), (void*)(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL);
				goto IL_0027;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(19 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 GZipStream_ReadAsync_mCFF5156AFDFF16B472A323F2D1BA86BFE13C7358 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___cancellationToken1;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_6;
		L_6 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_4;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_8 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___cancellationToken1;
		NullCheck(L_7);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_10;
		L_10 = DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.GZipStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F GZipStream_WriteAsync_m43C1DEA3F232AFD6036CB0637831887E93488000 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_4 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___cancellationToken1;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_6;
		L_6 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_4;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_8 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___cancellationToken1;
		NullCheck(L_7);
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_10;
		L_10 = DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) 
{
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_0 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_0, (String_t*)NULL, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78875BB01F47001614AE95132434E503D00EA404)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var)));
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
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, int32_t ___windowsBits3, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___compressedStream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___mode1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___mode1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___compressedStream0;
		__this->___base_stream_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_4), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___compressedStream0;
		int32_t L_7 = ___mode1;
		bool L_8 = ___gzip3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_9;
		L_9 = DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6(L_6, L_7, L_8, NULL);
		__this->___native_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_8), (void*)L_9);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_10 = __this->___native_8;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_12 = ___mode1;
		__this->___mode_5 = L_12;
		bool L_13 = ___leaveOpen2;
		__this->___leaveOpen_6 = L_13;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mAFF7BCEF197A6549D13572A0AFD326CD995EA7AC (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(15 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B4_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0009:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = __this->___native_8;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		bool L_3 = ___disposing0;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(G_B4_0, L_3, NULL);
	}

IL_001b:
	{
		bool L_4 = ___disposing0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->___disposed_7;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___disposed_7 = (bool)1;
		bool L_6 = __this->___leaveOpen_6;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___base_stream_4;
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_0045:
	{
		__this->___base_stream_4 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_4), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_004c:
	{
		bool L_10 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_10, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_8;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___destination0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_2;
		L_2 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_5, 0, L_6, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = ___destination0;
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_2), L_8, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = ___offset1;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___count2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___count2;
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) <= ((int32_t)L_17)))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___array0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___count2;
		int32_t L_22;
		L_22 = DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C(__this, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_8;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18(L_7, L_8, L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___source0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_2;
		L_2 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E((&___source0), ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, L_1);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___offset1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0045:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14 = ___count2;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)))))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___array0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___count2;
		DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845(__this, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_5 = __this->___native_8;
		NullCheck(L_5);
		DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F(L_5, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0075:
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_16 = (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)il2cpp_codegen_object_new(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396(L_16, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0075:
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_16 = (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)il2cpp_codegen_object_new(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A(L_16, __this, (intptr_t)((void*)DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B6_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_6 = ((ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)IsInstSealed((RuntimeObject*)L_5, ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		int32_t L_9;
		L_9 = ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7(G_B6_0, L_8, NULL);
		return L_9;
	}
}
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B6_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_6 = ((WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)IsInstSealed((RuntimeObject*)L_5, WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C(G_B6_0, L_8, NULL);
		return;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var)));
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
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* currentDelegate = reinterpret_cast<ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* currentDelegate = reinterpret_cast<WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast;
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B2_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* G_B3_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_1 = NULL;
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_0 = (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)il2cpp_codegen_object_new(DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E(L_0, NULL);
		V_0 = L_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = V_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_3 = L_3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_0;
		int32_t L_5 = ___mode1;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0025;
		}
	}
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_6 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0025:
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_7 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_0), (void*)G_B3_0);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_8 = V_0;
		int32_t L_9 = ___mode1;
		bool L_10 = ___gzip2;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_12 = L_11->___feeder_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_3;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_14, NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___z_stream_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___z_stream_2), (void*)L_16);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_18 = L_17->___z_stream_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_20 = V_0;
		NullCheck(L_20);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(L_20, (bool)1, NULL);
		return (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)NULL;
	}

IL_006a:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_21 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___compressedStream0;
		NullCheck(L_21);
		L_21->___base_stream_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___base_stream_1), (void*)L_22);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_23 = V_0;
		return L_23;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
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
			DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(__this, (bool)0, NULL);
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
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->___disposed_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___disposed_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___base_stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_1), (void*)L_2);
	}

IL_0025:
	{
		__this->___io_buffer_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_3 = __this->___z_stream_2;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_4 = __this->___z_stream_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_6 = __this->___z_stream_2;
		NullCheck(L_6);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_6, NULL);
	}

IL_004c:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___data_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___data_3);
		bool L_9;
		L_9 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_3);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_1 = L_8;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_2;
		__this->___last_error_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_9);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___io_buffer_5;
		intptr_t L_12 = ___buffer0;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, 0, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_005e:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_001c:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		intptr_t L_5 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___io_buffer_5;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		__this->___last_error_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_11);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007a;
	}// end catch (depth: 1)

IL_005b:
	{
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___buffer0), NULL);
		int32_t L_13 = V_1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&___buffer0), ((void*)il2cpp_codegen_add((intptr_t)L_12, L_13)), NULL);
		int32_t L_14 = ___length1;
		int32_t L_15 = V_1;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0074:
	{
		int32_t L_18 = ___length1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_007a:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___result0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Exception_t** L_1 = (&__this->___last_error_6);
		Exception_t* L_2;
		L_2 = InterlockedExchangeImpl<Exception_t*>(L_1, (Exception_t*)NULL);
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_5 = ___result0;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_0076;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0066;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0056;
			}
			case 10:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_004e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
		goto IL_0094;
	}

IL_0056:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163));
		goto IL_0094;
	}

IL_005e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB));
		goto IL_0094;
	}

IL_0066:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41));
		goto IL_0094;
	}

IL_006e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D));
		goto IL_0094;
	}

IL_0076:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D));
		goto IL_0094;
	}

IL_007e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408));
		goto IL_0094;
	}

IL_0086:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
	}

IL_0094:
	{
		String_t* L_6 = V_1;
		String_t* L_7 = ___where1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}
}
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___feeder2' to native representation
	Il2CppMethodPointer ____feeder2_marshaled = NULL;
	____feeder2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___feeder2));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___compress0, static_cast<int32_t>(___gzip1), ____feeder2_marshaled, ___data3);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* _returnValue_unmarshaled = (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___stream0);

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____stream0_marshaled);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

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
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenInst(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___length1, ___data2);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___length1, ___data2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buffer0, ___length1, ___data2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A(L_0, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___s0, const RuntimeMethod* method) 
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
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_nTag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____critical_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____keyValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____params_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields*)il2cpp_codegen_static_fields_for(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var))->___U3CDefaultSeedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, uint64_t ___seed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___data0;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___data0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		uint64_t L_3 = ___seed1;
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_000b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___array0;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint16_t>(L_2);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___array0;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2 = ___span0;
		uint16_t* L_3;
		L_3 = ((  uint16_t* (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint16_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___reference0;
		int32_t L_1 = ___length1;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2 = ___span0;
		uint32_t* L_3;
		L_3 = ((  uint32_t* (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint32_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ___array0;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint16_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint16_t>(L_9);
		int32_t L_11 = ___start1;
		uint16_t* L_12;
		L_12 = il2cpp_unsafe_add<uint16_t,int32_t>(L_10, L_11);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___length2;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___ptr0;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___start1;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___length2;
		__this->____length_1 = L_20;
		return;
	}
}
