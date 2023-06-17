﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>

#include "icalls/mscorlib/System.Globalization/RegionInfo.h"
#include "icalls/mscorlib/System.Diagnostics/StackFrame.h"
#include "icalls/mscorlib/System.Diagnostics/StackTrace.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator>
struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>
struct IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Bootstring
struct Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6;
// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275;
// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Collections.Comparer
struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653;
// System.Collections.CompatibleComparer
struct CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465;
// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60;
// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279;
// System.Diagnostics.DebuggerHiddenAttribute
struct DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097;
// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269;
// System.Diagnostics.DebuggerStepThroughAttribute
struct DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006;
// System.Diagnostics.DebuggerTypeProxyAttribute
struct DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.Tracing.EventAttribute
struct EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Diagnostics.Tracing.EventSourceAttribute
struct EventSourceAttribute_t26715FCD425D9AA129790DCE4B1F310FD879958F;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139;
// System.Globalization.ISimpleCollator
struct ISimpleCollator_t084383013F96378AFFD4540649E086C9C13BFF5B;
// System.Globalization.IdnMapping
struct IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81;
// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Globalization.Punycode
struct Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5;
// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC;
// System.Globalization.RegionInfo
struct RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.Globalization.SortVersion
struct SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2;
// System.Runtime.CompilerServices.StateMachineAttribute
struct StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA;
// System.Globalization.CultureInfo/OnCultureInfoChangedDelegate
struct OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A;
// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061;
// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E;
// System.Collections.ListDictionaryInternal/NodeEnumerator
struct NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6;
// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED;
// System.Collections.Stack/StackEnumerator
struct StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_32_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_38_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4;
IL2CPP_EXTERN_C String_t* _stringLiteral040B337A5817FD39541437C95901315498072E63;
IL2CPP_EXTERN_C String_t* _stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763;
IL2CPP_EXTERN_C String_t* _stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3;
IL2CPP_EXTERN_C String_t* _stringLiteral1677585FA882DFEA3E037D8F7D17D1E0A2DB542E;
IL2CPP_EXTERN_C String_t* _stringLiteral182CD377F82DC14018E675243286CFE505773C59;
IL2CPP_EXTERN_C String_t* _stringLiteral1A09185860153B4BC6DD6BAFD7F3988481D6646F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633;
IL2CPP_EXTERN_C String_t* _stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18;
IL2CPP_EXTERN_C String_t* _stringLiteral2641A688E06878073878B71263139298B198E3F5;
IL2CPP_EXTERN_C String_t* _stringLiteral2686791DAEA9744EF058DB953C96FCF23CDE7093;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral312B3CE8E6D23EA0D5519810CADE3401B79E8FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700;
IL2CPP_EXTERN_C String_t* _stringLiteral461B901954DA68B031564E85615378AE7FACBEA9;
IL2CPP_EXTERN_C String_t* _stringLiteral466A44407120A6FBBBFC8CA6D5807FBDD28EFD10;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9159CF9C9BE2960BB8479A6CD2A5483BCE4A50;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral51110E17CA94BC00F4A876802AC4AC26E7E482B1;
IL2CPP_EXTERN_C String_t* _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5A2DEA51A5B0471C055D29047CC3D301B5BF3787;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2B287AA9E20644FBF7B4A84D7867432285D7F6;
IL2CPP_EXTERN_C String_t* _stringLiteral5C874D8FC07A857928D39A56EE8CCD04D9B0847E;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAC7821D3146E3E5AA5B53530F1797167C3D4A4;
IL2CPP_EXTERN_C String_t* _stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A42FCEEAC1D98507D8329C4992B135D890D96AB;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E;
IL2CPP_EXTERN_C String_t* _stringLiteral71943296949CB7F897DB641231533D430DE14FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE;
IL2CPP_EXTERN_C String_t* _stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6;
IL2CPP_EXTERN_C String_t* _stringLiteral80060678D9E3BDD3E617588C88C22F4BCEAE9A89;
IL2CPP_EXTERN_C String_t* _stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF;
IL2CPP_EXTERN_C String_t* _stringLiteral83314EA460FCEFD3C214A42664EEA4D9E9280DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9;
IL2CPP_EXTERN_C String_t* _stringLiteral83B4C2882FD3AA7B5248EB993CD86C13E0BDF274;
IL2CPP_EXTERN_C String_t* _stringLiteral847FE3059C3CD6F8719A86023405C3E0846C0821;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF22EA5A6A5A696D2456E9227B5745A698E05A8;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral916FA9BB612A639C6BF76F616B11B2D1BC0E68F2;
IL2CPP_EXTERN_C String_t* _stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC;
IL2CPP_EXTERN_C String_t* _stringLiteral95DA3FC7722DD1C65280ACB8BF456EF76775963D;
IL2CPP_EXTERN_C String_t* _stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral98573F4BC94560E6FC3EAD68128033E305B56C6C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5565E5D902873A3A8A82128310E2F42D9E08370;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1;
IL2CPP_EXTERN_C String_t* _stringLiteralAB44AED1F8533DF887C42A9D9AA0A2AB246920D3;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB473A5ECB9EEEBFCB444E0D4B4269A1E0E33740B;
IL2CPP_EXTERN_C String_t* _stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB887A5015E73D94AAFD666C9F0C2D6965A1EF3F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1;
IL2CPP_EXTERN_C String_t* _stringLiteralC981BE9C1F04078473AFB89D43A49C223508D178;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA2F88999132DA5422C607B25387A98089B3B06;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F468BEC5D3406D86F26A2D9F63332D43DEBE21;
IL2CPP_EXTERN_C String_t* _stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3037931DE899C4BCA58ECF059EF9BE27F54B681;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F;
IL2CPP_EXTERN_C String_t* _stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1;
IL2CPP_EXTERN_C String_t* _stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18;
IL2CPP_EXTERN_C String_t* _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F618640BA54D0C46BC1191E4D1C6340105A43E;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralF9F16E39CCA8029EBA20A5DD6A70B628EFDD3240;
IL2CPP_EXTERN_C String_t* _stringLiteralFE9AF4FDBD2FA6CD5CC4C6361F0BFDF49243FD16;
IL2CPP_EXTERN_C String_t* _stringLiteralFED80DDFCB901E0011096F16C1480B6FA6C7591B;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Bootstring_Decode_mFDC512629697009B17F10CD6F74E4D8CCF0CD366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_GetObjectData_mD1C091EEB209483F6231A4412ADFE30E0177FCC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompatibleComparer_Compare_m2FA8636A804A278CFD91C474268DEFB615B77CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompatibleComparer_GetHashCode_m2DCDE0BF85BBCEFF30F315567F74F892CCAE3FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m107783465114525A503819A30C3499E3E40E9F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_GetAscii_mA4A89B67014507D490722D7C6BDFA5E19A3E4635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_GetUnicode_mCC150BC9761DF474E752484693DC567FA21406E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_ToUnicode_m7F360A2967F2183F6B3FA8EE11144920518CC1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_VerifyProhibitedCharacters_m0E43BDC789C3CDC4D98D256396F387B736CDBB8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_set_Item_mE92FAA3316C4236A957DAE30BD212672B3D56906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_Reset_m52AD33268396FEAAB5D9161B2FB0A1CDE36B8826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueueEnumerator_MoveNext_m81FC4568198C6B9B866F32938BB972F62003B884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueueEnumerator_Reset_mD77CF947A155EA2626AC9EBF9DA1C0C8B3A3947D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueueEnumerator_get_Current_mCCBFFF155BA2BB78C2965260C96BCFDCBA860E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_Dequeue_m89B22F0E9AD92C04919C8F98AE170E8D75A52B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_Peek_m23547E6A2765C50351CC5C25499168C74A937BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue__ctor_mC8D4457894462D84210E9032A7FF5663B1C7E5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionInfo__ctor_m3DB2F00BCDB453A9657C8BEF0D63ACEA373062A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionInfo__ctor_m85E194710DB7740ADC7F54FAD11ED4D1284C932B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionInfo__ctor_mD496A2C9B302F95DF4062256AECE8AD304E5DA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A  : public RuntimeObject
{
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

// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

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

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_tFEA1A3012A2BA5E1F6CD0F63173264A165CB6A7B  : public RuntimeObject
{
};

// System.Globalization.Bootstring
struct Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6  : public RuntimeObject
{
	// System.Char System.Globalization.Bootstring::delimiter
	Il2CppChar ___delimiter_0;
	// System.Int32 System.Globalization.Bootstring::base_num
	int32_t ___base_num_1;
	// System.Int32 System.Globalization.Bootstring::tmin
	int32_t ___tmin_2;
	// System.Int32 System.Globalization.Bootstring::tmax
	int32_t ___tmax_3;
	// System.Int32 System.Globalization.Bootstring::skew
	int32_t ___skew_4;
	// System.Int32 System.Globalization.Bootstring::damp
	int32_t ___damp_5;
	// System.Int32 System.Globalization.Bootstring::initial_bias
	int32_t ___initial_bias_6;
	// System.Int32 System.Globalization.Bootstring::initial_n
	int32_t ___initial_n_7;
};

// System.Collections.Generic.CollectionExtensions
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};

// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57  : public RuntimeObject
{
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_5;
	// System.String System.Globalization.CompareInfo::_sortName
	String_t* ____sortName_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E* ___m_SortVersion_7;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_8;
	// System.Globalization.ISimpleCollator System.Globalization.CompareInfo::collator
	RuntimeObject* ___collator_9;
};

// System.Collections.Comparer
struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.Comparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.CompatibleComparer
struct CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465  : public RuntimeObject
{
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_0;
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_1;
};

// System.Diagnostics.Contracts.Contract
struct Contract_tD9FCC48E522DA4471B12BD7298721B5814BF91A6  : public RuntimeObject
{
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

// System.Diagnostics.Debugger
struct Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF  : public RuntimeObject
{
};

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Buffers.Text.FormattingHelpers
struct FormattingHelpers_t06A1B3D3DEEAE9313D177C6D62D99DBF100E151D  : public RuntimeObject
{
};

// System.Collections.HashHelpers
struct HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.Globalization.IdnMapping
struct IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81  : public RuntimeObject
{
	// System.Boolean System.Globalization.IdnMapping::allow_unassigned
	bool ___allow_unassigned_0;
	// System.Boolean System.Globalization.IdnMapping::use_std3
	bool ___use_std3_1;
	// System.Globalization.Punycode System.Globalization.IdnMapping::puny
	Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* ___puny_2;
};

// System.Collections.Generic.IntrospectiveSortUtilities
struct IntrospectiveSortUtilities_tD784154D54CAE81D6BD1F950B40A8C89EF328402  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair
struct KeyValuePair_t7874AE3B9245A56073B459BA3A218A817370F597  : public RuntimeObject
{
};

// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123  : public RuntimeObject
{
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC  : public RuntimeObject
{
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject* ____syncRoot_6;
};

// System.Globalization.RegionInfo
struct RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836  : public RuntimeObject
{
	// System.Int32 System.Globalization.RegionInfo::regionId
	int32_t ___regionId_1;
	// System.String System.Globalization.RegionInfo::iso2Name
	String_t* ___iso2Name_2;
	// System.String System.Globalization.RegionInfo::iso3Name
	String_t* ___iso3Name_3;
	// System.String System.Globalization.RegionInfo::win3Name
	String_t* ___win3Name_4;
	// System.String System.Globalization.RegionInfo::englishName
	String_t* ___englishName_5;
	// System.String System.Globalization.RegionInfo::nativeName
	String_t* ___nativeName_6;
	// System.String System.Globalization.RegionInfo::currencySymbol
	String_t* ___currencySymbol_7;
	// System.String System.Globalization.RegionInfo::isoCurrencySymbol
	String_t* ___isoCurrencySymbol_8;
	// System.String System.Globalization.RegionInfo::currencyEnglishName
	String_t* ___currencyEnglishName_9;
	// System.String System.Globalization.RegionInfo::currencyNativeName
	String_t* ___currencyNativeName_10;
};
// Native definition for P/Invoke marshalling of System.Globalization.RegionInfo
struct RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_pinvoke
{
	int32_t ___regionId_1;
	char* ___iso2Name_2;
	char* ___iso3Name_3;
	char* ___win3Name_4;
	char* ___englishName_5;
	char* ___nativeName_6;
	char* ___currencySymbol_7;
	char* ___isoCurrencySymbol_8;
	char* ___currencyEnglishName_9;
	char* ___currencyNativeName_10;
};
// Native definition for COM marshalling of System.Globalization.RegionInfo
struct RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_com
{
	int32_t ___regionId_1;
	Il2CppChar* ___iso2Name_2;
	Il2CppChar* ___iso3Name_3;
	Il2CppChar* ___win3Name_4;
	Il2CppChar* ___englishName_5;
	Il2CppChar* ___nativeName_6;
	Il2CppChar* ___currencySymbol_7;
	Il2CppChar* ___isoCurrencySymbol_8;
	Il2CppChar* ___currencyEnglishName_9;
	Il2CppChar* ___currencyNativeName_10;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
};

// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47  : public RuntimeObject
{
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_0;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Buffers.Utilities
struct Utilities_t47DFEED0E704B42BDB4499194D7C812E763E6186  : public RuntimeObject
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

// System.Collections.ArrayList/ArrayListDebugView
struct ArrayListDebugView_t84F5D056AFE95B118FA2000FA00D0A58706DB6FB  : public RuntimeObject
{
};

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::_currentElement
	RuntimeObject* ____currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::_isArrayList
	bool ____isArrayList_4;
};

// System.Collections.Hashtable/HashtableDebugView
struct HashtableDebugView_t8AC15CFAD73CC79A91528679B7EF33B72612F0AD  : public RuntimeObject
{
};

// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_bucket
	int32_t ____bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_version
	int32_t ____version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::_current
	bool ____current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_getObjectRetType
	int32_t ____getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentKey
	RuntimeObject* ____currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentValue
	RuntimeObject* ____currentValue_6;
};

// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
};

// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E  : public RuntimeObject
{
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::value
	RuntimeObject* ___value_1;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/DictionaryNode::next
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___next_2;
};

// System.Collections.ListDictionaryInternal/NodeEnumerator
struct NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6  : public RuntimeObject
{
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeEnumerator::list
	ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___list_0;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/NodeEnumerator::current
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___current_1;
	// System.Int32 System.Collections.ListDictionaryInternal/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeEnumerator::start
	bool ___start_3;
};

// System.Collections.Queue/QueueDebugView
struct QueueDebugView_t8A9249E9FE6806384AD5B4532D89BC2CE5E70672  : public RuntimeObject
{
};

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED  : public RuntimeObject
{
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Stack/StackDebugView
struct StackDebugView_t0623502C1272C6DB2F946F048EB1378A8FA0C63A  : public RuntimeObject
{
};

// System.Collections.Stack/StackEnumerator
struct StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522  : public RuntimeObject
{
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275  : public EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8
{
};

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.ConditionalAttribute::<ConditionString>k__BackingField
	String_t* ___U3CConditionStringU3Ek__BackingField_0;
};

// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;
};

// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;
};

// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_2;
};

// System.Diagnostics.DebuggerHiddenAttribute
struct DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerStepThroughAttribute
struct DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerTypeProxyAttribute
struct DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::typeName
	String_t* ___typeName_0;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Diagnostics.Tracing.EventAttribute
struct EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Diagnostics.Tracing.EventAttribute::<EventId>k__BackingField
	int32_t ___U3CEventIdU3Ek__BackingField_0;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.EventAttribute::<Level>k__BackingField
	int32_t ___U3CLevelU3Ek__BackingField_1;
};

// System.Diagnostics.Tracing.EventSourceAttribute
struct EventSourceAttribute_t26715FCD425D9AA129790DCE4B1F310FD879958F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.Tracing.EventSourceAttribute::<Guid>k__BackingField
	String_t* ___U3CGuidU3Ek__BackingField_0;
	// System.String System.Diagnostics.Tracing.EventSourceAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B  : public EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Globalization.Punycode
struct Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5  : public Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
};

// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.StateMachineAttribute
struct StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t* ___U3CStateMachineTypeU3Ek__BackingField_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800
struct __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5__padding[10800];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284__padding[1208];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C__padding[1450];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
struct __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7__padding[15];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1__padding[152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D__padding[1665];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170
struct __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155__padding[170];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172
struct __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6__padding[172];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE__padding[2100];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176
struct __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A__padding[2176];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336
struct __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970__padding[336];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952
struct __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD__padding[5952];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648
struct __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE__padding[648];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3__padding[84];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};

// System.Globalization.CultureInfo/Data
struct Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E 
{
	// System.Int32 System.Globalization.CultureInfo/Data::ansi
	int32_t ___ansi_0;
	// System.Int32 System.Globalization.CultureInfo/Data::ebcdic
	int32_t ___ebcdic_1;
	// System.Int32 System.Globalization.CultureInfo/Data::mac
	int32_t ___mac_2;
	// System.Int32 System.Globalization.CultureInfo/Data::oem
	int32_t ___oem_3;
	// System.Boolean System.Globalization.CultureInfo/Data::right_to_left
	bool ___right_to_left_4;
	// System.Byte System.Globalization.CultureInfo/Data::list_sep
	uint8_t ___list_sep_5;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo/Data
struct Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_pinvoke
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo/Data
struct Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_com
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};

// System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject* ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;
};
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4  : public StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.Diagnostics.Tracing.EventSource/EventData
struct EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D 
{
	// System.IntPtr System.Diagnostics.Tracing.EventSource/EventData::<DataPointer>k__BackingField
	intptr_t ___U3CDataPointerU3Ek__BackingField_0;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::<Size>k__BackingField
	int32_t ___U3CSizeU3Ek__BackingField_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::<Reserved>k__BackingField
	int32_t ___U3CReservedU3Ek__BackingField_2;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.Security.SecurityException
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_18;
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Globalization.CultureInfo/OnCultureInfoChangedDelegate
struct OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A  : public MulticastDelegate_t
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
struct ThrowStub_t98574FADF548B70B1F425B46CC940CEC3C38FB5F  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>

// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.String>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>

// System.Collections.ArrayList

// System.Collections.ArrayList

// System.Attribute

// System.Attribute

// System.Buffers.Binary.BinaryPrimitives

// System.Buffers.Binary.BinaryPrimitives

// System.Globalization.Bootstring

// System.Globalization.Bootstring

// System.Collections.Generic.CollectionExtensions

// System.Collections.Generic.CollectionExtensions

// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_StaticFields
{
	// System.Globalization.CompareInfo System.Globalization.CompareInfo::Invariant
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___Invariant_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470* ___collators_10;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_11;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_12;
};

// System.Globalization.CompareInfo

// System.Collections.Comparer
struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields
{
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* ___DefaultInvariant_2;
};

// System.Collections.Comparer

// System.Collections.CompatibleComparer

// System.Collections.CompatibleComparer

// System.Diagnostics.Contracts.Contract

// System.Diagnostics.Contracts.Contract

// System.Globalization.CultureInfo
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

// System.Globalization.CultureInfo

// System.Diagnostics.Debugger
struct Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields
{
	// System.String System.Diagnostics.Debugger::DefaultCategory
	String_t* ___DefaultCategory_0;
};

// System.Diagnostics.Debugger

// System.Diagnostics.Tracing.EventSource

// System.Diagnostics.Tracing.EventSource

// System.Buffers.Text.FormattingHelpers

// System.Buffers.Text.FormattingHelpers

// System.Collections.HashHelpers
struct HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields
{
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_1;
};

// System.Collections.HashHelpers

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.Globalization.IdnMapping

// System.Globalization.IdnMapping

// System.Collections.Generic.IntrospectiveSortUtilities

// System.Collections.Generic.IntrospectiveSortUtilities

// System.Collections.Generic.KeyValuePair

// System.Collections.Generic.KeyValuePair

// System.Collections.ListDictionaryInternal

// System.Collections.ListDictionaryInternal

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeNameIgnoreCase_1;
};

// System.Reflection.Module

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.Collections.Queue

// System.Collections.Queue

// System.Globalization.RegionInfo
struct RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields
{
	// System.Globalization.RegionInfo System.Globalization.RegionInfo::currentRegion
	RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* ___currentRegion_0;
};

// System.Globalization.RegionInfo

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfoEnumerator

// System.Runtime.Serialization.SerializationInfoEnumerator

// System.Collections.Stack

// System.Collections.Stack

// System.Diagnostics.StackFrame

// System.Diagnostics.StackFrame

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_3;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_4;
};

// System.Diagnostics.StackTrace

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Buffers.Utilities

// System.Buffers.Utilities

// System.Collections.ArrayList/ArrayListDebugView

// System.Collections.ArrayList/ArrayListDebugView

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields
{
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::s_dummyObject
	RuntimeObject* ___s_dummyObject_5;
};

// System.Collections.ArrayList/ArrayListEnumeratorSimple

// System.Collections.Hashtable/HashtableDebugView

// System.Collections.Hashtable/HashtableDebugView

// System.Collections.Hashtable/HashtableEnumerator

// System.Collections.Hashtable/HashtableEnumerator

// System.Collections.Hashtable/KeyCollection

// System.Collections.Hashtable/KeyCollection

// System.Collections.ListDictionaryInternal/DictionaryNode

// System.Collections.ListDictionaryInternal/DictionaryNode

// System.Collections.ListDictionaryInternal/NodeEnumerator

// System.Collections.ListDictionaryInternal/NodeEnumerator

// System.Collections.Queue/QueueDebugView

// System.Collections.Queue/QueueDebugView

// System.Collections.Queue/QueueEnumerator

// System.Collections.Queue/QueueEnumerator

// System.Collections.Stack/StackDebugView

// System.Collections.Stack/StackDebugView

// System.Collections.Stack/StackEnumerator

// System.Collections.Stack/StackEnumerator

// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	// System.Buffers.ArrayPoolEventSource System.Buffers.ArrayPoolEventSource::Log
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log_1;
};

// System.Buffers.ArrayPoolEventSource

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Collections.Generic.ByteEqualityComparer

// System.Collections.Generic.ByteEqualityComparer

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields
{
	// System.Collections.Concurrent.CDSCollectionETWBCLProvider System.Collections.Concurrent.CDSCollectionETWBCLProvider::Log
	CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* ___Log_1;
};

// System.Collections.Concurrent.CDSCollectionETWBCLProvider

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Diagnostics.ConditionalAttribute

// System.Diagnostics.ConditionalAttribute

// System.Diagnostics.DebuggableAttribute

// System.Diagnostics.DebuggableAttribute

// System.Diagnostics.DebuggerBrowsableAttribute

// System.Diagnostics.DebuggerBrowsableAttribute

// System.Diagnostics.DebuggerDisplayAttribute

// System.Diagnostics.DebuggerDisplayAttribute

// System.Diagnostics.DebuggerHiddenAttribute

// System.Diagnostics.DebuggerHiddenAttribute

// System.Diagnostics.DebuggerNonUserCodeAttribute

// System.Diagnostics.DebuggerNonUserCodeAttribute

// System.Diagnostics.DebuggerStepThroughAttribute

// System.Diagnostics.DebuggerStepThroughAttribute

// System.Diagnostics.DebuggerTypeProxyAttribute

// System.Diagnostics.DebuggerTypeProxyAttribute

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Double

// System.Double

// System.Diagnostics.Tracing.EventAttribute

// System.Diagnostics.Tracing.EventAttribute

// System.Diagnostics.Tracing.EventSourceAttribute

// System.Diagnostics.Tracing.EventSourceAttribute

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Collections.Generic.InternalStringComparer

// System.Collections.Generic.InternalStringComparer

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Globalization.Punycode

// System.Globalization.Punycode

// System.Single

// System.Single

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// System.Threading.SpinWait

// System.Diagnostics.StackTraceHiddenAttribute

// System.Diagnostics.StackTraceHiddenAttribute

// System.Runtime.CompilerServices.StateMachineAttribute

// System.Runtime.CompilerServices.StateMachineAttribute

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998

// System.Globalization.CultureInfo/Data

// System.Globalization.CultureInfo/Data

// System.Collections.Hashtable/bucket

// System.Collections.Hashtable/bucket

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170 <PrivateImplementationDetails>::021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
	__StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 ___021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D
	__StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 ___0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78
	__StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE ___12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF ___195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687
	__StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C ___1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 ___1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 ___4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800 <PrivateImplementationDetails>::56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854
	__StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 ___56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B ___61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648 <PrivateImplementationDetails>::67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955
	__StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE ___67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472 <PrivateImplementationDetails>::7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 ___7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780_35;
	// System.Int64 <PrivateImplementationDetails>::819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F
	int64_t ___819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_37;
	// System.Int64 <PrivateImplementationDetails>::82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21
	int64_t ___82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E ___86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF
	__StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D ___8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952 <PrivateImplementationDetails>::9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115
	__StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD ___9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336 <PrivateImplementationDetails>::93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6
	__StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 ___93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 ___964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6
	__StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 ___96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 ___A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176 <PrivateImplementationDetails>::B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838
	__StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A ___B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3
	__StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 ___C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E ___C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172 <PrivateImplementationDetails>::D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15
	__StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 ___D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC ___DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D
	__StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 ___DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E ___E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 ___E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 ___F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208 <PrivateImplementationDetails>::FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD
	__StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 ___FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB_92;
};

// <PrivateImplementationDetails>

// System.Runtime.CompilerServices.AsyncStateMachineAttribute

// System.Runtime.CompilerServices.AsyncStateMachineAttribute

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Diagnostics.Tracing.EventSource/EventData

// System.Diagnostics.Tracing.EventSource/EventData

// System.SystemException

// System.SystemException

// System.Type
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

// System.Type

// System.ArgumentException

// System.ArgumentException

// System.InvalidOperationException

// System.InvalidOperationException

// System.Collections.Generic.KeyNotFoundException

// System.Collections.Generic.KeyNotFoundException

// System.NotImplementedException

// System.NotImplementedException

// System.Security.SecurityException

// System.Security.SecurityException

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.Runtime.Serialization.SerializationException

// System.Globalization.CultureInfo/OnCultureInfoChangedDelegate

// System.Globalization.CultureInfo/OnCultureInfoChangedDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.PlatformNotSupportedException

// System.PlatformNotSupportedException

// Unity.ThrowStub

// Unity.ThrowStub
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
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7  : public RuntimeArray
{
	ALIGN_FIELD (8) StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* m_Items[1];

	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF  : public RuntimeArray
{
	ALIGN_FIELD (8) StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* m_Items[1];

	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587  : public RuntimeArray
{
	ALIGN_FIELD (8) bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E m_Items[1];

	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m4D42F650E5486418C833A1D788800BFCBFF7AF11_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m153BCA24E1AB65004A192DD74C0506DE22FE5349_gshared (RuntimeObject** ___0_target, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* __this, const RuntimeMethod* method) ;

// System.Void System.Globalization.Punycode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Punycode__ctor_mA724ADE4D83C72190185A988C57A8FAF51D94F3F (Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::GetAscii(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_unicode, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::Convert(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_Convert_mE1C94D1B09C8907C4F5D4CD9D6C906389B3A0368 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_input, int32_t ___1_index, int32_t ___2_count, bool ___3_toAscii, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::ToAscii(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::ToUnicode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_ToUnicode_m7F360A2967F2183F6B3FA8EE11144920518CC1D8 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::NamePrep(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void System.Globalization.IdnMapping::VerifyStd3AsciiRules(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.String System.Globalization.Bootstring::Encode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Globalization.IdnMapping::VerifyLength(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.String System.String::Normalize(System.Text.NormalizationForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Normalize_mB458CCECBD27D6E9FB44CF03D37E856846C41831 (String_t* __this, int32_t ___0_normalizationForm, const RuntimeMethod* method) ;
// System.Void System.Globalization.IdnMapping::VerifyProhibitedCharacters(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyProhibitedCharacters_m0E43BDC789C3CDC4D98D256396F387B736CDBB8D (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_GetUnicodeCategory_mC434975D89EED4FB9B602F785526268980A49CEC (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String System.Globalization.IdnMapping::GetUnicode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_ascii, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.Globalization.Bootstring::Decode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Bootstring_Decode_mFDC512629697009B17F10CD6F74E4D8CCF0CD366 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009 (String_t* ___0_strA, String_t* ___1_strB, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char System.Globalization.Bootstring::EncodeDigit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Bootstring_EncodeDigit_mAD7E733BCFAF26E99FC6A326727587B215F3D3F5 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, int32_t ___0_d, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.Bootstring::Adapt(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bootstring_Adapt_m7F810E5C8232495B45D482BDE84F3903E133D846 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, int32_t ___0_delta, int32_t ___1_numPoints, bool ___2_firstTime, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.Bootstring::DecodeDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bootstring_DecodeDigit_mC8A0AF977E663636F9EE77B86C5D77BF37370F48 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679 (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
// System.Void System.Globalization.Bootstring::.ctor(System.Char,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bootstring__ctor_mAD2400ED1D514C28EA0F51E00E36101071D71EF3 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, Il2CppChar ___0_delimiter, int32_t ___1_baseNum, int32_t ___2_tmin, int32_t ___3_tmax, int32_t ___4_skew, int32_t ___5_damp, int32_t ___6_initialBias, int32_t ___7_initialN, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.Void System.Globalization.RegionInfo::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo__ctor_m85E194710DB7740ADC7F54FAD11ED4D1284C932B (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_ci, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::GetCultureInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_GetCultureInfo_m7B3C1F8F350401E2FE485E2D1693BA2A0B7BEB6D (int32_t ___0_culture, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.RegionInfo::GetByTerritory(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_ci, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpperInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpperInvariant_mD73F658CDE1280A527231DC305B66CF09B64E5AB (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.RegionInfo::construct_internal_region_from_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::GetCultureInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_GetCultureInfo_mF07467FB427362952D26EAC992010EB03CE41511 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.String System.Globalization.CultureInfo::get_Territory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F (int32_t ___0_skip, bool ___1_needFileInfo, MethodBase_t** ___2_method, int32_t* ___3_iloffset, int32_t* ___4_native_offset, String_t** ___5_file, int32_t* ___6_line, int32_t* ___7_column, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD (MethodBase_t* ___0_left, MethodBase_t* ___1_right, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600 (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___0_skipFrames, bool ___1_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::.ctor()
inline void List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::Add(T)
inline void List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_inline (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95*, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, int32_t ___0_skipFrames, bool ___1_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_mB7E4A01A8827865E97756445895D201687C09BB5 (MethodBase_t* ___0_left, MethodBase_t* ___1_right, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::ToArray()
inline StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3 (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, const RuntimeMethod* method)
{
	return ((  StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___0_e, int32_t ___1_skipFrames, bool ___2_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mD87DF0D20142792EF523A9D0A5BBFE847C4FF9BE (Exception_t* ___0_e, int32_t ___1_skipFrames, bool ___2_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Byte[] System.Reflection.RuntimeAssembly::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RuntimeAssembly_GetAotId_mE60698ACE0B9F738390B88A87E3173D7BBEB567E (const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.StackFrame::GetMethodAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase,System.Boolean,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___0_sb, MethodBase_t* ___1_mi, bool ___2_needsNewLine, bool* ___3_skipped, bool* ___4_isAsync, const RuntimeMethod* method) ;
// System.UInt32 System.Diagnostics.StackFrame::GetMethodIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m7DD1B04A2F586280F4291C750E5B1795C75E1FFB (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.CustomAttributeExtensions::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeExtensions_IsDefined_m88E1A7B2E5D09A109B9E6C2830AC70BCD907FAF4 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::ConvertAsyncStateMachineMethod(System.Reflection.MethodBase&,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_ConvertAsyncStateMachineMethod_m7400401B4F938D08E899981328B3E532013414CB (MethodBase_t** ___0_method, Type_t** ___1_declaringType, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Runtime.CompilerServices.AsyncStateMachineAttribute>(System.Reflection.MemberInfo)
inline RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m107783465114525A503819A30C3499E3E40E9F2C (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m4D42F650E5486418C833A1D788800BFCBFF7AF11_gshared)(___0_element, method);
}
// System.Type System.Runtime.CompilerServices.StateMachineAttribute::get_StateMachineType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline (StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76* __this, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___0_sb, bool ___1_separator, bool* ___2_isAsync, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventAttribute::set_EventId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventAttribute_set_EventId_mC5617BB069437135E936C4CC9138B426192C9153_inline (EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventSource_set_Name_m55128F99D84FDFE12B36CED0D6E9BC8A2C7D77B8_inline (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m6DDF3ABD543CF9CB6493C593B06A772B5F6E50A6 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, String_t* ___0_eventSourceName, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_mD93F560C6627CA14D4EBC29243EF9790FECFE22F (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_DataPointer(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Size(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Reserved(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.HashHelpers::IsPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashHelpers_IsPrime_mE1421D059FBC1DF88DB8F7C23438BF89B0F8E633 (int32_t ___0_candidate, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::.ctor()
inline void ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Collections.ListDictionaryInternal/DictionaryNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryNode__ctor_m9357A7727A8ED2BF9CDB7A674C49D0121DC00F22 (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ListDictionaryInternal::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListDictionaryInternal_get_Count_mC8F585CAB29896B42726AF57626B6D7814AFCFD9_inline (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Collections.ListDictionaryInternal/NodeEnumerator::.ctor(System.Collections.ListDictionaryInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___0_list, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry System.Collections.ListDictionaryInternal/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Collections.CompatibleComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_Compare_m2FA8636A804A278CFD91C474268DEFB615B77CD6 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, float ___1_growFactor, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
// System.Void System.Collections.Queue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mF3022386EC827D710D6C9E0E3FB564B8A467D708 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
// System.Void System.Collections.Queue::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_SetCapacity_m0F22CA22FA5E6ECD22AACDA717C530BF02231CAC (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueEnumerator__ctor_mC05AAA2306368D630FDDEBC1FDFCDF18586393D8 (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ___0_q, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.Queue::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_GetElement_m2DDA15A3A9D73E3CB798BEBEEFA13B59FC9FE1F1 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Stack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Stack/StackEnumerator::.ctor(System.Collections.Stack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* ___0_stack, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_list, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_mA7DFA2E913CA86E09777E3E8693C98459803E38D (RuntimeArray* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>>(T&)
inline ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858** ___0_target, const RuntimeMethod* method)
{
	return ((  ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858**, const RuntimeMethod*))LazyInitializer_EnsureInitialized_TisRuntimeObject_m153BCA24E1AB65004A192DD74C0506DE22FE5349_gshared)(___0_target, method);
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, float ___1_loadFactor, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, float ___1_loadFactor, RuntimeObject* ___2_equalityComparer, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_nvalue, bool ___2_add, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, RuntimeObject* ___1_equalityComparer, const RuntimeMethod* method) ;
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, int32_t ___1_hashsize, uint32_t* ___2_seed, uint32_t* ___3_incr, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyEntries(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_newsize, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___0_newBuckets, RuntimeObject* ___1_key, RuntimeObject* ___2_nvalue, int32_t ___3_hashcode, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_hashtable, int32_t ___1_getObjRetType, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/KeyCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_hashtable, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.CompatibleComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::get_HashCodeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyKeys(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyValues(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Single System.Runtime.Serialization.SerializationInfo::GetSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.CompatibleComparer::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_mD070CC744D2BA684391418B77E61E24F8E735492 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_hashCodeProvider, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_level, int64_t ___1_keywords, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m8609472BD078A398CF4CA9DBF4BBDA1C454096A6 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Buffer::IndexOfByte(System.Byte*,System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_IndexOfByte_mF43902211DC955885C828233F0D46BAC239B0ECC (uint8_t* ___0_src, uint8_t ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
inline void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8*, const RuntimeMethod*))EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.ctor()
inline void EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A*, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___0_a, int16_t ___1_b, int16_t ___2_c, uint8_t ___3_d, uint8_t ___4_e, uint8_t ___5_f, uint8_t ___6_g, uint8_t ___7_h, uint8_t ___8_i, uint8_t ___9_j, uint8_t ___10_k, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor(System.Guid,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mA6FB74138AB52C540333000C0CEAD367D5072083 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, Guid_t ___0_eventSourceGuid, String_t* ___1_eventSourceName, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEventCore(System.Int32,System.Int32,System.Diagnostics.Tracing.EventSource/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_eventDataCount, EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* ___2_data, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, int32_t ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_mF3DADFC0459BB9C89B17BCECE51A57C3F4ED7D88 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Globalization.CultureInfo/Data
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke(const Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E& unmarshaled, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_pinvoke& marshaled)
{
	marshaled.___ansi_0 = unmarshaled.___ansi_0;
	marshaled.___ebcdic_1 = unmarshaled.___ebcdic_1;
	marshaled.___mac_2 = unmarshaled.___mac_2;
	marshaled.___oem_3 = unmarshaled.___oem_3;
	marshaled.___right_to_left_4 = static_cast<int32_t>(unmarshaled.___right_to_left_4);
	marshaled.___list_sep_5 = unmarshaled.___list_sep_5;
}
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back(const Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_pinvoke& marshaled, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E& unmarshaled)
{
	int32_t unmarshaledansi_temp_0 = 0;
	unmarshaledansi_temp_0 = marshaled.___ansi_0;
	unmarshaled.___ansi_0 = unmarshaledansi_temp_0;
	int32_t unmarshaledebcdic_temp_1 = 0;
	unmarshaledebcdic_temp_1 = marshaled.___ebcdic_1;
	unmarshaled.___ebcdic_1 = unmarshaledebcdic_temp_1;
	int32_t unmarshaledmac_temp_2 = 0;
	unmarshaledmac_temp_2 = marshaled.___mac_2;
	unmarshaled.___mac_2 = unmarshaledmac_temp_2;
	int32_t unmarshaledoem_temp_3 = 0;
	unmarshaledoem_temp_3 = marshaled.___oem_3;
	unmarshaled.___oem_3 = unmarshaledoem_temp_3;
	bool unmarshaledright_to_left_temp_4 = false;
	unmarshaledright_to_left_temp_4 = static_cast<bool>(marshaled.___right_to_left_4);
	unmarshaled.___right_to_left_4 = unmarshaledright_to_left_temp_4;
	uint8_t unmarshaledlist_sep_temp_5 = 0x0;
	unmarshaledlist_sep_temp_5 = marshaled.___list_sep_5;
	unmarshaled.___list_sep_5 = unmarshaledlist_sep_temp_5;
}
// Conversion method for clean up from marshalling of: System.Globalization.CultureInfo/Data
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup(Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Globalization.CultureInfo/Data
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_com(const Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E& unmarshaled, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_com& marshaled)
{
	marshaled.___ansi_0 = unmarshaled.___ansi_0;
	marshaled.___ebcdic_1 = unmarshaled.___ebcdic_1;
	marshaled.___mac_2 = unmarshaled.___mac_2;
	marshaled.___oem_3 = unmarshaled.___oem_3;
	marshaled.___right_to_left_4 = static_cast<int32_t>(unmarshaled.___right_to_left_4);
	marshaled.___list_sep_5 = unmarshaled.___list_sep_5;
}
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_com_back(const Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_com& marshaled, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E& unmarshaled)
{
	int32_t unmarshaledansi_temp_0 = 0;
	unmarshaledansi_temp_0 = marshaled.___ansi_0;
	unmarshaled.___ansi_0 = unmarshaledansi_temp_0;
	int32_t unmarshaledebcdic_temp_1 = 0;
	unmarshaledebcdic_temp_1 = marshaled.___ebcdic_1;
	unmarshaled.___ebcdic_1 = unmarshaledebcdic_temp_1;
	int32_t unmarshaledmac_temp_2 = 0;
	unmarshaledmac_temp_2 = marshaled.___mac_2;
	unmarshaled.___mac_2 = unmarshaledmac_temp_2;
	int32_t unmarshaledoem_temp_3 = 0;
	unmarshaledoem_temp_3 = marshaled.___oem_3;
	unmarshaled.___oem_3 = unmarshaledoem_temp_3;
	bool unmarshaledright_to_left_temp_4 = false;
	unmarshaledright_to_left_temp_4 = static_cast<bool>(marshaled.___right_to_left_4);
	unmarshaled.___right_to_left_4 = unmarshaledright_to_left_temp_4;
	uint8_t unmarshaledlist_sep_temp_5 = 0x0;
	unmarshaledlist_sep_temp_5 = marshaled.___list_sep_5;
	unmarshaled.___list_sep_5 = unmarshaledlist_sep_temp_5;
}
// Conversion method for clean up from marshalling of: System.Globalization.CultureInfo/Data
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_com_cleanup(Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_Multicast(OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* currentDelegate = reinterpret_cast<OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_language, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenInst(OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	NullCheck(___0_language);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_language, method);
}
void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenStatic(OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_language, method);
}
void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenStaticInvoker(OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_language);
}
void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_ClosedStaticInvoker(OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_language);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A (OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Il2CppChar*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_language' to native representation
	Il2CppChar* ____0_language_marshaled = NULL;
	if (___0_language != NULL)
	{
		____0_language_marshaled = &___0_language->____firstChar_5;
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_language_marshaled);

}
// System.Void System.Globalization.CultureInfo/OnCultureInfoChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCultureInfoChangedDelegate__ctor_mDDDB8BFE449BABF15CDB8FFFF44F27E1976796AB (OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD_Multicast;
}
// System.Void System.Globalization.CultureInfo/OnCultureInfoChangedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCultureInfoChangedDelegate_Invoke_m0B1A63FCC3BC0CC1EBE15D2FEDC61D225AAA57FD (OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A* __this, String_t* ___0_language, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_language, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Globalization.IdnMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping__ctor_m1128F0904A9B3F8CD81CF613CAF8AEC9455FC8AE (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* L_0 = (Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5*)il2cpp_codegen_object_new(Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Punycode__ctor_mA724ADE4D83C72190185A988C57A8FAF51D94F3F(L_0, NULL);
		__this->___puny_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___puny_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean System.Globalization.IdnMapping::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IdnMapping_Equals_m2E1F55AC624E6EBF300F6321F9EFBFBF123D1EB9 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81*)IsInstSealed((RuntimeObject*)L_0, IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81_il2cpp_TypeInfo_var));
		IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = __this->___allow_unassigned_0;
		IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->___allow_unassigned_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = __this->___use_std3_1;
		IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->___use_std3_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Int32 System.Globalization.IdnMapping::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IdnMapping_GetHashCode_mDDE06B9384CAAD86B79372CAAF93DB17B4150D14 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		bool L_0 = __this->___allow_unassigned_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 2;
	}

IL_000c:
	{
		bool L_1 = __this->___use_std3_1;
		G_B4_0 = G_B3_0;
		if (L_1)
		{
			G_B5_0 = G_B3_0;
			goto IL_0017;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0018:
	{
		return ((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0));
	}
}
// System.String System.Globalization.IdnMapping::GetAscii(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetAscii_mA4A89B67014507D490722D7C6BDFA5E19A3E4635 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_unicode, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_unicode;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98573F4BC94560E6FC3EAD68128033E305B56C6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetAscii_mA4A89B67014507D490722D7C6BDFA5E19A3E4635_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___0_unicode;
		String_t* L_3 = ___0_unicode;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5;
		L_5 = IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6(__this, L_2, 0, L_4, NULL);
		return L_5;
	}
}
// System.String System.Globalization.IdnMapping::GetAscii(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_unicode, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_unicode;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98573F4BC94560E6FC3EAD68128033E305B56C6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F618640BA54D0C46BC1191E4D1C6340105A43E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = ___1_index;
		int32_t L_6 = ___2_count;
		String_t* L_7 = ___0_unicode;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) <= ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}

IL_002c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A2DEA51A5B0471C055D29047CC3D301B5BF3787)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetAscii_mF61DB2EB5465B52524F9CD52418F133EC9A989A6_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_10 = ___0_unicode;
		int32_t L_11 = ___1_index;
		int32_t L_12 = ___2_count;
		String_t* L_13;
		L_13 = IdnMapping_Convert_mE1C94D1B09C8907C4F5D4CD9D6C906389B3A0368(__this, L_10, L_11, L_12, (bool)1, NULL);
		return L_13;
	}
}
// System.String System.Globalization.IdnMapping::Convert(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_Convert_mE1C94D1B09C8907C4F5D4CD9D6C906389B3A0368 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_input, int32_t ___1_index, int32_t ___2_count, bool ___3_toAscii, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_38_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___0_input;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		V_3 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		String_t* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)128))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_7, L_8, NULL);
		V_0 = L_9;
		goto IL_0036;
	}

IL_0029:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}

IL_0036:
	{
		String_t* L_14 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_38_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_14, L_16, NULL);
		V_1 = L_18;
		V_2 = 0;
		V_4 = 0;
		goto IL_009f;
	}

IL_0055:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		if (L_23)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_24 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) == ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_0069:
	{
		bool L_26 = ___3_toAscii;
		if (!L_26)
		{
			goto IL_007e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_1;
		int32_t L_28 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_2;
		String_t* L_34;
		L_34 = IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484(__this, L_32, L_33, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_34);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_34);
		goto IL_008d;
	}

IL_007e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_1;
		int32_t L_36 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_2;
		String_t* L_42;
		L_42 = IdnMapping_ToUnicode_m7F360A2967F2183F6B3FA8EE11144920518CC1D8(__this, L_40, L_41, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_42);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (String_t*)L_42);
	}

IL_008d:
	{
		int32_t L_43 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_1;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		String_t* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, L_48));
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_009f:
	{
		int32_t L_50 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = V_1;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_1;
		String_t* L_53;
		L_53 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_52, NULL);
		return L_53;
	}
}
// System.String System.Globalization.IdnMapping::ToAscii(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0050;
	}

IL_0004:
	{
		String_t* L_0 = ___0_s;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)32))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0032;
		}
	}

IL_001a:
	{
		int32_t L_6 = ___1_offset;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1677585FA882DFEA3E037D8F7D17D1E0A2DB542E)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484_RuntimeMethod_var)));
	}

IL_0032:
	{
		String_t* L_12 = ___0_s;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)128))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_15 = ___0_s;
		int32_t L_16 = ___1_offset;
		String_t* L_17;
		L_17 = IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9(__this, L_15, L_16, NULL);
		___0_s = L_17;
		goto IL_0059;
	}

IL_004c:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0050:
	{
		int32_t L_19 = V_0;
		String_t* L_20 = ___0_s;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}

IL_0059:
	{
		bool L_22 = __this->___use_std3_1;
		if (!L_22)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_23 = ___0_s;
		int32_t L_24 = ___1_offset;
		IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E(__this, L_23, L_24, NULL);
	}

IL_0069:
	{
		V_1 = 0;
		goto IL_00c3;
	}

IL_006d:
	{
		String_t* L_25 = ___0_s;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)128))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_28 = ___0_s;
		NullCheck(L_28);
		bool L_29;
		L_29 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_28, _stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6, 5, NULL);
		if (!L_29)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_30 = ___1_offset;
		int32_t L_31 = V_1;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
		RuntimeObject* L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80060678D9E3BDD3E617588C88C22F4BCEAE9A89)), L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484_RuntimeMethod_var)));
	}

IL_00a1:
	{
		Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* L_36 = __this->___puny_2;
		String_t* L_37 = ___0_s;
		int32_t L_38 = ___1_offset;
		NullCheck(L_36);
		String_t* L_39;
		L_39 = Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7(L_36, L_37, L_38, NULL);
		___0_s = L_39;
		String_t* L_40 = ___0_s;
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6, L_40, NULL);
		___0_s = L_41;
		goto IL_00cc;
	}

IL_00bf:
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00c3:
	{
		int32_t L_43 = V_1;
		String_t* L_44 = ___0_s;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_44, NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_006d;
		}
	}

IL_00cc:
	{
		String_t* L_46 = ___0_s;
		int32_t L_47 = ___1_offset;
		IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF(__this, L_46, L_47, NULL);
		String_t* L_48 = ___0_s;
		return L_48;
	}
}
// System.Void System.Globalization.IdnMapping::VerifyLength(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_s;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___1_offset;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F16E39CCA8029EBA20A5DD6A70B628EFDD3240)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF_RuntimeMethod_var)));
	}

IL_001e:
	{
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)63))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = ___1_offset;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2686791DAEA9744EF058DB953C96FCF23CDE7093)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyLength_m62DCC12F1C907133D996FAABD48015E7FB542DFF_RuntimeMethod_var)));
	}

IL_003e:
	{
		return;
	}
}
// System.String System.Globalization.IdnMapping::NamePrep(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_s;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Normalize_mB458CCECBD27D6E9FB44CF03D37E856846C41831(L_0, 5, NULL);
		___0_s = L_1;
		String_t* L_2 = ___0_s;
		int32_t L_3 = ___1_offset;
		IdnMapping_VerifyProhibitedCharacters_m0E43BDC789C3CDC4D98D256396F387B736CDBB8D(__this, L_2, L_3, NULL);
		bool L_4 = __this->___allow_unassigned_0;
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_001d:
	{
		String_t* L_5 = ___0_s;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Char_GetUnicodeCategory_mC434975D89EED4FB9B602F785526268980A49CEC(L_5, L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)29)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_8 = ___1_offset;
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral312B3CE8E6D23EA0D5519810CADE3401B79E8FDC)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0044:
	{
		int32_t L_15 = V_0;
		String_t* L_16 = ___0_s;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001d;
		}
	}

IL_004d:
	{
		String_t* L_18 = ___0_s;
		return L_18;
	}
}
// System.Void System.Globalization.IdnMapping::VerifyProhibitedCharacters(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyProhibitedCharacters_m0E43BDC789C3CDC4D98D256396F387B736CDBB8D (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_012d;
	}

IL_0007:
	{
		String_t* L_0 = ___0_s;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Char_GetUnicodeCategory_mC434975D89EED4FB9B602F785526268980A49CEC(L_0, L_1, NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)11))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_006e;
			}
			case 5:
			{
				goto IL_0111;
			}
			case 6:
			{
				goto IL_0111;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_0036:
	{
		String_t* L_4 = ___0_s;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0129;
	}

IL_004c:
	{
		String_t* L_7 = ___0_s;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_10 = ___0_s;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0129;
	}

IL_006e:
	{
		String_t* L_13 = ___0_s;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, L_14, NULL);
		V_1 = L_15;
		Il2CppChar L_16 = V_1;
		if ((((int32_t)((int32_t)64991)) > ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)65007))))
		{
			goto IL_0111;
		}
	}

IL_0089:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_18&((int32_t)65535)))) == ((int32_t)((int32_t)65534))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		if ((((int32_t)((int32_t)65529)) > ((int32_t)L_19)))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)65533))))
		{
			goto IL_0111;
		}
	}

IL_00a7:
	{
		Il2CppChar L_21 = V_1;
		if ((((int32_t)((int32_t)12272)) > ((int32_t)L_21)))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)12283))))
		{
			goto IL_0111;
		}
	}

IL_00b7:
	{
		Il2CppChar L_23 = V_1;
		if ((((int32_t)((int32_t)8234)) > ((int32_t)L_23)))
		{
			goto IL_00c7;
		}
	}
	{
		Il2CppChar L_24 = V_1;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)8238))))
		{
			goto IL_0111;
		}
	}

IL_00c7:
	{
		Il2CppChar L_25 = V_1;
		if ((((int32_t)((int32_t)8298)) > ((int32_t)L_25)))
		{
			goto IL_00d7;
		}
	}
	{
		Il2CppChar L_26 = V_1;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)8303))))
		{
			goto IL_0111;
		}
	}

IL_00d7:
	{
		Il2CppChar L_27 = V_1;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)8206)))))
		{
			goto IL_00f9;
		}
	}
	{
		Il2CppChar L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)832))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)833))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)8206))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0129;
	}

IL_00f9:
	{
		Il2CppChar L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)8207))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_0129;
		}
	}

IL_0111:
	{
		int32_t L_34 = ___1_offset;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_36);
		String_t* L_38;
		L_38 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5565E5D902873A3A8A82128310E2F42D9E08370)), L_37, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyProhibitedCharacters_m0E43BDC789C3CDC4D98D256396F387B736CDBB8D_RuntimeMethod_var)));
	}

IL_0129:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_012d:
	{
		int32_t L_41 = V_0;
		String_t* L_42 = ___0_s;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_42, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Globalization.IdnMapping::VerifyStd3AsciiRules(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		String_t* L_0 = ___0_s;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___0_s;
		NullCheck(L_2);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, 0, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = ___1_offset;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C874D8FC07A857928D39A56EE8CCD04D9B0847E)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E_RuntimeMethod_var)));
	}

IL_002a:
	{
		String_t* L_9 = ___0_s;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = ___0_s;
		String_t* L_12 = ___0_s;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_11);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = ___1_offset;
		String_t* L_16 = ___0_s;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_17)), 1));
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral466A44407120A6FBBBFC8CA6D5807FBDD28EFD10)), L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E_RuntimeMethod_var)));
	}

IL_0064:
	{
		V_0 = 0;
		goto IL_00b4;
	}

IL_0068:
	{
		String_t* L_22 = ___0_s;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_23, NULL);
		V_1 = L_24;
		Il2CppChar L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)45))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_26 = V_1;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)47))))
		{
			goto IL_0098;
		}
	}
	{
		Il2CppChar L_27 = V_1;
		if ((((int32_t)((int32_t)58)) > ((int32_t)L_27)))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_28 = V_1;
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0098;
		}
	}

IL_0084:
	{
		Il2CppChar L_29 = V_1;
		if ((((int32_t)((int32_t)91)) > ((int32_t)L_29)))
		{
			goto IL_008e;
		}
	}
	{
		Il2CppChar L_30 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)96))))
		{
			goto IL_0098;
		}
	}

IL_008e:
	{
		Il2CppChar L_31 = V_1;
		if ((((int32_t)((int32_t)123)) > ((int32_t)L_31)))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)127))))
		{
			goto IL_00b0;
		}
	}

IL_0098:
	{
		int32_t L_33 = ___1_offset;
		int32_t L_34 = V_0;
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		RuntimeObject* L_36 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_35);
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral182CD377F82DC14018E675243286CFE505773C59)), L_36, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_VerifyStd3AsciiRules_mE755A05FEB03E1C58CFB7DD9B31D8B4A121C5E7E_RuntimeMethod_var)));
	}

IL_00b0:
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00b4:
	{
		int32_t L_40 = V_0;
		String_t* L_41 = ___0_s;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_41, NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0068;
		}
	}
	{
		return;
	}
}
// System.String System.Globalization.IdnMapping::GetUnicode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetUnicode_mCC150BC9761DF474E752484693DC567FA21406E7 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_ascii, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_ascii;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetUnicode_mCC150BC9761DF474E752484693DC567FA21406E7_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___0_ascii;
		String_t* L_3 = ___0_ascii;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5;
		L_5 = IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82(__this, L_2, 0, L_4, NULL);
		return L_5;
	}
}
// System.String System.Globalization.IdnMapping::GetUnicode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_ascii, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_ascii;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F618640BA54D0C46BC1191E4D1C6340105A43E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = ___1_index;
		int32_t L_6 = ___2_count;
		String_t* L_7 = ___0_ascii;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) <= ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}

IL_002c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2641A688E06878073878B71263139298B198E3F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_GetUnicode_m291C4562D3CC962D8A6F1DF417C16DA339956E82_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_10 = ___0_ascii;
		int32_t L_11 = ___1_index;
		int32_t L_12 = ___2_count;
		String_t* L_13;
		L_13 = IdnMapping_Convert_mE1C94D1B09C8907C4F5D4CD9D6C906389B3A0368(__this, L_10, L_11, L_12, (bool)0, NULL);
		return L_13;
	}
}
// System.String System.Globalization.IdnMapping::ToUnicode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdnMapping_ToUnicode_m7F360A2967F2183F6B3FA8EE11144920518CC1D8 (IdnMapping_t96B54B2E8909296A1E713A0FF115B1B82FB7CE81* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		String_t* L_0 = ___0_s;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)128))))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = ___1_offset;
		String_t* L_5;
		L_5 = IdnMapping_NamePrep_m62FAF6E8C61B86DB8CDCD3358D3AD5E85322DEE9(__this, L_3, L_4, NULL);
		___0_s = L_5;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		String_t* L_8 = ___0_s;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}

IL_002b:
	{
		String_t* L_10 = ___0_s;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_10, _stringLiteral7F8774EDFDA2D77DC99E22AFCE18B2E1E4AC7CD6, 5, NULL);
		if (L_11)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_12 = ___0_s;
		return L_12;
	}

IL_003b:
	{
		String_t* L_13 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_13, L_14, NULL);
		___0_s = L_15;
		String_t* L_16 = ___0_s;
		String_t* L_17 = ___0_s;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_17, 4, NULL);
		___0_s = L_18;
		Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* L_19 = __this->___puny_2;
		String_t* L_20 = ___0_s;
		int32_t L_21 = ___1_offset;
		NullCheck(L_19);
		String_t* L_22;
		L_22 = Bootstring_Decode_mFDC512629697009B17F10CD6F74E4D8CCF0CD366(L_19, L_20, L_21, NULL);
		___0_s = L_22;
		String_t* L_23 = ___0_s;
		V_0 = L_23;
		String_t* L_24 = ___0_s;
		int32_t L_25 = ___1_offset;
		String_t* L_26;
		L_26 = IdnMapping_ToAscii_m21063BB5EA484F7550240BD6F18567E596ADD484(__this, L_24, L_25, NULL);
		___0_s = L_26;
		String_t* L_27 = ___0_s;
		int32_t L_28;
		L_28 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_16, L_27, 5, NULL);
		if (!L_28)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_29 = ___1_offset;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_30);
		String_t* L_32;
		L_32 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C9159CF9C9BE2960BB8479A6CD2A5483BCE4A50)), L_31, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IdnMapping_ToUnicode_m7F360A2967F2183F6B3FA8EE11144920518CC1D8_RuntimeMethod_var)));
	}

IL_008c:
	{
		String_t* L_34 = V_0;
		return L_34;
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
// System.Void System.Globalization.Bootstring::.ctor(System.Char,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bootstring__ctor_mAD2400ED1D514C28EA0F51E00E36101071D71EF3 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, Il2CppChar ___0_delimiter, int32_t ___1_baseNum, int32_t ___2_tmin, int32_t ___3_tmax, int32_t ___4_skew, int32_t ___5_damp, int32_t ___6_initialBias, int32_t ___7_initialN, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Il2CppChar L_0 = ___0_delimiter;
		__this->___delimiter_0 = L_0;
		int32_t L_1 = ___1_baseNum;
		__this->___base_num_1 = L_1;
		int32_t L_2 = ___2_tmin;
		__this->___tmin_2 = L_2;
		int32_t L_3 = ___3_tmax;
		__this->___tmax_3 = L_3;
		int32_t L_4 = ___4_skew;
		__this->___skew_4 = L_4;
		int32_t L_5 = ___5_damp;
		__this->___damp_5 = L_5;
		int32_t L_6 = ___6_initialBias;
		__this->___initial_bias_6 = L_6;
		int32_t L_7 = ___7_initialN;
		__this->___initial_n_7 = L_7;
		return;
	}
}
// System.String System.Globalization.Bootstring::Encode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StringBuilder_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Il2CppChar V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->___initial_n_7;
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1 = __this->___initial_bias_6;
		V_2 = L_1;
		V_3 = 0;
		V_4 = 0;
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_5 = L_2;
		V_6 = 0;
		goto IL_0046;
	}

IL_0021:
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = V_6;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0040;
		}
	}
	{
		StringBuilder_t* L_6 = V_5;
		String_t* L_7 = ___0_s;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, L_9, NULL);
	}

IL_0040:
	{
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0046:
	{
		int32_t L_12 = V_6;
		String_t* L_13 = ___0_s;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_15, NULL);
		int32_t L_17 = L_16;
		V_4 = L_17;
		V_3 = L_17;
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_01ae;
		}
	}
	{
		StringBuilder_t* L_19 = V_5;
		Il2CppChar L_20 = __this->___delimiter_0;
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, L_20, NULL);
		goto IL_01ae;
	}

IL_0075:
	{
		V_7 = ((int32_t)2147483647LL);
		V_8 = 0;
		goto IL_00a8;
	}

IL_0081:
	{
		String_t* L_22 = ___0_s;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_23, NULL);
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_26 = ___0_s;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
		int32_t L_29 = V_7;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_30 = ___0_s;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_31, NULL);
		V_7 = L_32;
	}

IL_00a2:
	{
		int32_t L_33 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a8:
	{
		int32_t L_34 = V_8;
		String_t* L_35 = ___0_s;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_7;
		int32_t L_39 = V_0;
		if (((int64_t)L_38 - (int64_t)L_39 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_38 - (int64_t)L_39 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		int32_t L_40 = V_4;
		if (((int64_t)L_40 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_40 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		if (((int64_t)((int32_t)il2cpp_codegen_subtract(L_38, L_39)) * (int64_t)((int32_t)il2cpp_codegen_add(L_40, 1)) < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_subtract(L_38, L_39)) * (int64_t)((int32_t)il2cpp_codegen_add(L_40, 1)) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		if (((int64_t)L_37 + (int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), ((int32_t)il2cpp_codegen_add(L_40, 1)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_37 + (int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), ((int32_t)il2cpp_codegen_add(L_40, 1)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), ((int32_t)il2cpp_codegen_add(L_40, 1))))));
		int32_t L_41 = V_7;
		V_0 = L_41;
		V_9 = 0;
		goto IL_0199;
	}

IL_00c9:
	{
		String_t* L_42 = ___0_s;
		int32_t L_43 = V_9;
		NullCheck(L_42);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_42, L_43, NULL);
		V_10 = L_44;
		Il2CppChar L_45 = V_10;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00e1;
		}
	}
	{
		Il2CppChar L_47 = V_10;
		if ((((int32_t)L_47) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00e5;
		}
	}

IL_00e1:
	{
		int32_t L_48 = V_1;
		if (((int64_t)L_48 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_48 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Bootstring_Encode_m77C628E72EBC4208743CC8F000EA5D10DF1764F7_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00e5:
	{
		Il2CppChar L_49 = V_10;
		int32_t L_50 = V_0;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_51 = V_1;
		V_11 = L_51;
		int32_t L_52 = __this->___base_num_1;
		V_12 = L_52;
	}

IL_00f8:
	{
		int32_t L_53 = V_12;
		int32_t L_54 = V_2;
		int32_t L_55 = __this->___tmin_2;
		if ((((int32_t)L_53) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_54, L_55)))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_56 = V_12;
		int32_t L_57 = V_2;
		int32_t L_58 = __this->___tmax_3;
		if ((((int32_t)L_56) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_57, L_58)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_59 = V_12;
		int32_t L_60 = V_2;
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract(L_59, L_60));
		goto IL_0124;
	}

IL_0116:
	{
		int32_t L_61 = __this->___tmax_3;
		G_B24_0 = L_61;
		goto IL_0124;
	}

IL_011e:
	{
		int32_t L_62 = __this->___tmin_2;
		G_B24_0 = L_62;
	}

IL_0124:
	{
		V_13 = G_B24_0;
		int32_t L_63 = V_11;
		int32_t L_64 = V_13;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_016a;
		}
	}
	{
		StringBuilder_t* L_65 = V_5;
		int32_t L_66 = V_13;
		int32_t L_67 = V_11;
		int32_t L_68 = V_13;
		int32_t L_69 = __this->___base_num_1;
		int32_t L_70 = V_13;
		Il2CppChar L_71;
		L_71 = Bootstring_EncodeDigit_mAD7E733BCFAF26E99FC6A326727587B215F3D3F5(__this, ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_67, L_68))%((int32_t)il2cpp_codegen_subtract(L_69, L_70)))))), NULL);
		NullCheck(L_65);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_65, L_71, NULL);
		int32_t L_73 = V_11;
		int32_t L_74 = V_13;
		int32_t L_75 = __this->___base_num_1;
		int32_t L_76 = V_13;
		V_11 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_73, L_74))/((int32_t)il2cpp_codegen_subtract(L_75, L_76))));
		int32_t L_77 = V_12;
		int32_t L_78 = __this->___base_num_1;
		V_12 = ((int32_t)il2cpp_codegen_add(L_77, L_78));
		goto IL_00f8;
	}

IL_016a:
	{
		StringBuilder_t* L_79 = V_5;
		int32_t L_80 = V_11;
		Il2CppChar L_81;
		L_81 = Bootstring_EncodeDigit_mAD7E733BCFAF26E99FC6A326727587B215F3D3F5(__this, L_80, NULL);
		NullCheck(L_79);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_79, L_81, NULL);
		int32_t L_83 = V_1;
		int32_t L_84 = V_4;
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		int32_t L_87;
		L_87 = Bootstring_Adapt_m7F810E5C8232495B45D482BDE84F3903E133D846(__this, L_83, ((int32_t)il2cpp_codegen_add(L_84, 1)), (bool)((((int32_t)L_85) == ((int32_t)L_86))? 1 : 0), NULL);
		V_2 = L_87;
		V_1 = 0;
		int32_t L_88 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0193:
	{
		int32_t L_89 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_0199:
	{
		int32_t L_90 = V_9;
		String_t* L_91 = ___0_s;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_91, NULL);
		if ((((int32_t)L_90) < ((int32_t)L_92)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01ae:
	{
		int32_t L_95 = V_4;
		String_t* L_96 = ___0_s;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_96, NULL);
		if ((((int32_t)L_95) < ((int32_t)L_97)))
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t* L_98 = V_5;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		return L_99;
	}
}
// System.Char System.Globalization.Bootstring::EncodeDigit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Bootstring_EncodeDigit_mAD7E733BCFAF26E99FC6A326727587B215F3D3F5 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, int32_t ___0_d, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_d;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)26))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_d;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)26))), ((int32_t)48)));
		goto IL_0012;
	}

IL_000e:
	{
		int32_t L_2 = ___0_d;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)97)));
	}

IL_0012:
	{
		return ((int32_t)(uint16_t)G_B3_0);
	}
}
// System.Int32 System.Globalization.Bootstring::DecodeDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bootstring_DecodeDigit_mC8A0AF977E663636F9EE77B86C5D77BF37370F48 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)48)))) < ((int32_t)((int32_t)10))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)65)))) < ((int32_t)((int32_t)26))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)97)))) < ((int32_t)((int32_t)26))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = __this->___base_num_1;
		return L_3;
	}

IL_001f:
	{
		Il2CppChar L_4 = ___0_c;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)97)));
	}

IL_0024:
	{
		Il2CppChar L_5 = ___0_c;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)65)));
	}

IL_0029:
	{
		Il2CppChar L_6 = ___0_c;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)22)));
	}
}
// System.Int32 System.Globalization.Bootstring::Adapt(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bootstring_Adapt_m7F810E5C8232495B45D482BDE84F3903E133D846 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, int32_t ___0_delta, int32_t ___1_numPoints, bool ___2_firstTime, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___2_firstTime;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_delta;
		int32_t L_2 = __this->___damp_5;
		___0_delta = ((int32_t)(L_1/L_2));
		goto IL_0014;
	}

IL_000f:
	{
		int32_t L_3 = ___0_delta;
		___0_delta = ((int32_t)(L_3/2));
	}

IL_0014:
	{
		int32_t L_4 = ___0_delta;
		int32_t L_5 = ___0_delta;
		int32_t L_6 = ___1_numPoints;
		___0_delta = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(L_5/L_6))));
		V_0 = 0;
		goto IL_0039;
	}

IL_001f:
	{
		int32_t L_7 = ___0_delta;
		int32_t L_8 = __this->___base_num_1;
		int32_t L_9 = __this->___tmin_2;
		___0_delta = ((int32_t)(L_7/((int32_t)il2cpp_codegen_subtract(L_8, L_9))));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___base_num_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0039:
	{
		int32_t L_12 = ___0_delta;
		int32_t L_13 = __this->___base_num_1;
		int32_t L_14 = __this->___tmin_2;
		int32_t L_15 = __this->___tmax_3;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), L_15))/2)))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = __this->___base_num_1;
		int32_t L_18 = __this->___tmin_2;
		int32_t L_19 = ___0_delta;
		int32_t L_20 = ___0_delta;
		int32_t L_21 = __this->___skew_4;
		return ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1)), L_19))/((int32_t)il2cpp_codegen_add(L_20, L_21))))));
	}
}
// System.String System.Globalization.Bootstring::Decode(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Bootstring_Decode_mFDC512629697009B17F10CD6F74E4D8CCF0CD366 (Bootstring_t3A0D3AC1BE7A01FFD1C55F3DF52DE835C3D321D6* __this, String_t* ___0_s, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringBuilder_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = __this->___initial_n_7;
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1 = __this->___initial_bias_6;
		V_2 = L_1;
		V_3 = 0;
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		Il2CppChar L_6 = __this->___delimiter_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = V_5;
		V_3 = L_7;
	}

IL_0031:
	{
		int32_t L_8 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		int32_t L_9 = V_5;
		String_t* L_10 = ___0_s;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_13 = ___0_s;
		return L_13;
	}

IL_0047:
	{
		StringBuilder_t* L_14 = V_4;
		String_t* L_15 = ___0_s;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_14, L_15, 0, L_16, NULL);
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_005c;
	}

IL_0059:
	{
		int32_t L_19 = V_3;
		G_B10_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005c:
	{
		V_6 = G_B10_0;
		goto IL_0140;
	}

IL_0063:
	{
		int32_t L_20 = V_1;
		V_7 = L_20;
		V_8 = 1;
		int32_t L_21 = __this->___base_num_1;
		V_9 = L_21;
	}

IL_0071:
	{
		String_t* L_22 = ___0_s;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_24, NULL);
		int32_t L_26;
		L_26 = Bootstring_DecodeDigit_mC8A0AF977E663636F9EE77B86C5D77BF37370F48(__this, L_25, NULL);
		V_10 = L_26;
		int32_t L_27 = V_1;
		int32_t L_28 = V_10;
		int32_t L_29 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29))));
		int32_t L_30 = V_9;
		int32_t L_31 = V_2;
		int32_t L_32 = __this->___tmin_2;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_31, L_32)))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_33 = V_9;
		int32_t L_34 = V_2;
		int32_t L_35 = __this->___tmax_3;
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_34, L_35)))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_2;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		goto IL_00ba;
	}

IL_00ac:
	{
		int32_t L_38 = __this->___tmax_3;
		G_B17_0 = L_38;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_39 = __this->___tmin_2;
		G_B17_0 = L_39;
	}

IL_00ba:
	{
		V_11 = G_B17_0;
		int32_t L_40 = V_10;
		int32_t L_41 = V_11;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_42 = V_8;
		int32_t L_43 = __this->___base_num_1;
		int32_t L_44 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_multiply(L_42, ((int32_t)il2cpp_codegen_subtract(L_43, L_44))));
		int32_t L_45 = V_9;
		int32_t L_46 = __this->___base_num_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
		goto IL_0071;
	}

IL_00dd:
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_7;
		StringBuilder_t* L_49 = V_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_49, NULL);
		int32_t L_51 = V_7;
		int32_t L_52;
		L_52 = Bootstring_Adapt_m7F810E5C8232495B45D482BDE84F3903E133D846(__this, ((int32_t)il2cpp_codegen_subtract(L_47, L_48)), ((int32_t)il2cpp_codegen_add(L_50, 1)), (bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0), NULL);
		V_2 = L_52;
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		StringBuilder_t* L_55 = V_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_55, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, ((int32_t)(L_54/((int32_t)il2cpp_codegen_add(L_56, 1))))));
		int32_t L_57 = V_1;
		StringBuilder_t* L_58 = V_4;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_58, NULL);
		V_1 = ((int32_t)(L_57%((int32_t)il2cpp_codegen_add(L_59, 1))));
		int32_t L_60 = V_0;
		if ((((int32_t)L_60) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_61 = ___1_offset;
		int32_t L_62 = V_6;
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		RuntimeObject* L_64 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_63);
		String_t* L_65;
		L_65 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFED80DDFCB901E0011096F16C1480B6FA6C7591B)), L_64, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_66 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_66, L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Bootstring_Decode_mFDC512629697009B17F10CD6F74E4D8CCF0CD366_RuntimeMethod_var)));
	}

IL_0131:
	{
		StringBuilder_t* L_67 = V_4;
		int32_t L_68 = V_1;
		int32_t L_69 = V_0;
		NullCheck(L_67);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_67, L_68, ((int32_t)(uint16_t)L_69), NULL);
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0140:
	{
		int32_t L_72 = V_6;
		String_t* L_73 = ___0_s;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_73, NULL);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t* L_75 = V_4;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
		return L_76;
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
// System.Void System.Globalization.Punycode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Punycode__ctor_mA724ADE4D83C72190185A988C57A8FAF51D94F3F (Punycode_t44EE1AAE844D2794F7B24173D738BC7120E37BF5* __this, const RuntimeMethod* method) 
{
	{
		Bootstring__ctor_mAD2400ED1D514C28EA0F51E00E36101071D71EF3(__this, ((int32_t)45), ((int32_t)36), 1, ((int32_t)26), ((int32_t)38), ((int32_t)700), ((int32_t)72), ((int32_t)128), NULL);
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
// Conversion methods for marshalling of: System.Globalization.RegionInfo
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke(const RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836& unmarshaled, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_pinvoke& marshaled)
{
	marshaled.___regionId_1 = unmarshaled.___regionId_1;
	marshaled.___iso2Name_2 = il2cpp_codegen_marshal_string(unmarshaled.___iso2Name_2);
	marshaled.___iso3Name_3 = il2cpp_codegen_marshal_string(unmarshaled.___iso3Name_3);
	marshaled.___win3Name_4 = il2cpp_codegen_marshal_string(unmarshaled.___win3Name_4);
	marshaled.___englishName_5 = il2cpp_codegen_marshal_string(unmarshaled.___englishName_5);
	marshaled.___nativeName_6 = il2cpp_codegen_marshal_string(unmarshaled.___nativeName_6);
	marshaled.___currencySymbol_7 = il2cpp_codegen_marshal_string(unmarshaled.___currencySymbol_7);
	marshaled.___isoCurrencySymbol_8 = il2cpp_codegen_marshal_string(unmarshaled.___isoCurrencySymbol_8);
	marshaled.___currencyEnglishName_9 = il2cpp_codegen_marshal_string(unmarshaled.___currencyEnglishName_9);
	marshaled.___currencyNativeName_10 = il2cpp_codegen_marshal_string(unmarshaled.___currencyNativeName_10);
}
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back(const RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_pinvoke& marshaled, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836& unmarshaled)
{
	int32_t unmarshaledregionId_temp_0 = 0;
	unmarshaledregionId_temp_0 = marshaled.___regionId_1;
	unmarshaled.___regionId_1 = unmarshaledregionId_temp_0;
	unmarshaled.___iso2Name_2 = il2cpp_codegen_marshal_string_result(marshaled.___iso2Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___iso2Name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___iso2Name_2));
	unmarshaled.___iso3Name_3 = il2cpp_codegen_marshal_string_result(marshaled.___iso3Name_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___iso3Name_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___iso3Name_3));
	unmarshaled.___win3Name_4 = il2cpp_codegen_marshal_string_result(marshaled.___win3Name_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___win3Name_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___win3Name_4));
	unmarshaled.___englishName_5 = il2cpp_codegen_marshal_string_result(marshaled.___englishName_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___englishName_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___englishName_5));
	unmarshaled.___nativeName_6 = il2cpp_codegen_marshal_string_result(marshaled.___nativeName_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nativeName_6), (void*)il2cpp_codegen_marshal_string_result(marshaled.___nativeName_6));
	unmarshaled.___currencySymbol_7 = il2cpp_codegen_marshal_string_result(marshaled.___currencySymbol_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencySymbol_7), (void*)il2cpp_codegen_marshal_string_result(marshaled.___currencySymbol_7));
	unmarshaled.___isoCurrencySymbol_8 = il2cpp_codegen_marshal_string_result(marshaled.___isoCurrencySymbol_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___isoCurrencySymbol_8), (void*)il2cpp_codegen_marshal_string_result(marshaled.___isoCurrencySymbol_8));
	unmarshaled.___currencyEnglishName_9 = il2cpp_codegen_marshal_string_result(marshaled.___currencyEnglishName_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencyEnglishName_9), (void*)il2cpp_codegen_marshal_string_result(marshaled.___currencyEnglishName_9));
	unmarshaled.___currencyNativeName_10 = il2cpp_codegen_marshal_string_result(marshaled.___currencyNativeName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencyNativeName_10), (void*)il2cpp_codegen_marshal_string_result(marshaled.___currencyNativeName_10));
}
// Conversion method for clean up from marshalling of: System.Globalization.RegionInfo
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___iso2Name_2);
	marshaled.___iso2Name_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___iso3Name_3);
	marshaled.___iso3Name_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___win3Name_4);
	marshaled.___win3Name_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___englishName_5);
	marshaled.___englishName_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___nativeName_6);
	marshaled.___nativeName_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___currencySymbol_7);
	marshaled.___currencySymbol_7 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___isoCurrencySymbol_8);
	marshaled.___isoCurrencySymbol_8 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___currencyEnglishName_9);
	marshaled.___currencyEnglishName_9 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___currencyNativeName_10);
	marshaled.___currencyNativeName_10 = NULL;
}
// Conversion methods for marshalling of: System.Globalization.RegionInfo
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_com(const RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836& unmarshaled, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_com& marshaled)
{
	marshaled.___regionId_1 = unmarshaled.___regionId_1;
	marshaled.___iso2Name_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___iso2Name_2);
	marshaled.___iso3Name_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___iso3Name_3);
	marshaled.___win3Name_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___win3Name_4);
	marshaled.___englishName_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___englishName_5);
	marshaled.___nativeName_6 = il2cpp_codegen_marshal_bstring(unmarshaled.___nativeName_6);
	marshaled.___currencySymbol_7 = il2cpp_codegen_marshal_bstring(unmarshaled.___currencySymbol_7);
	marshaled.___isoCurrencySymbol_8 = il2cpp_codegen_marshal_bstring(unmarshaled.___isoCurrencySymbol_8);
	marshaled.___currencyEnglishName_9 = il2cpp_codegen_marshal_bstring(unmarshaled.___currencyEnglishName_9);
	marshaled.___currencyNativeName_10 = il2cpp_codegen_marshal_bstring(unmarshaled.___currencyNativeName_10);
}
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_com_back(const RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_com& marshaled, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836& unmarshaled)
{
	int32_t unmarshaledregionId_temp_0 = 0;
	unmarshaledregionId_temp_0 = marshaled.___regionId_1;
	unmarshaled.___regionId_1 = unmarshaledregionId_temp_0;
	unmarshaled.___iso2Name_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___iso2Name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___iso2Name_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___iso2Name_2));
	unmarshaled.___iso3Name_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___iso3Name_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___iso3Name_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___iso3Name_3));
	unmarshaled.___win3Name_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___win3Name_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___win3Name_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___win3Name_4));
	unmarshaled.___englishName_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___englishName_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___englishName_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___englishName_5));
	unmarshaled.___nativeName_6 = il2cpp_codegen_marshal_bstring_result(marshaled.___nativeName_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nativeName_6), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___nativeName_6));
	unmarshaled.___currencySymbol_7 = il2cpp_codegen_marshal_bstring_result(marshaled.___currencySymbol_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencySymbol_7), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___currencySymbol_7));
	unmarshaled.___isoCurrencySymbol_8 = il2cpp_codegen_marshal_bstring_result(marshaled.___isoCurrencySymbol_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___isoCurrencySymbol_8), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___isoCurrencySymbol_8));
	unmarshaled.___currencyEnglishName_9 = il2cpp_codegen_marshal_bstring_result(marshaled.___currencyEnglishName_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencyEnglishName_9), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___currencyEnglishName_9));
	unmarshaled.___currencyNativeName_10 = il2cpp_codegen_marshal_bstring_result(marshaled.___currencyNativeName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___currencyNativeName_10), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___currencyNativeName_10));
}
// Conversion method for clean up from marshalling of: System.Globalization.RegionInfo
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_com_cleanup(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___iso2Name_2);
	marshaled.___iso2Name_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___iso3Name_3);
	marshaled.___iso3Name_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___win3Name_4);
	marshaled.___win3Name_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___englishName_5);
	marshaled.___englishName_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___nativeName_6);
	marshaled.___nativeName_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___currencySymbol_7);
	marshaled.___currencySymbol_7 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___isoCurrencySymbol_8);
	marshaled.___isoCurrencySymbol_8 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___currencyEnglishName_9);
	marshaled.___currencyEnglishName_9 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___currencyNativeName_10);
	marshaled.___currencyNativeName_10 = NULL;
}
// System.Globalization.RegionInfo System.Globalization.RegionInfo::get_CurrentRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* RegionInfo_get_CurrentRegion_mB82DE2D6B69557416CE18565789F6C77A3CB6791 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* V_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_1 = NULL;
	{
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_0 = ((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields*)il2cpp_codegen_static_fields_for(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var))->___currentRegion_0;
		V_0 = L_0;
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_1 = V_0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		V_1 = L_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = V_1;
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_5 = (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*)il2cpp_codegen_object_new(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RegionInfo__ctor_m85E194710DB7740ADC7F54FAD11ED4D1284C932B(L_5, L_4, NULL);
		V_0 = L_5;
	}

IL_0019:
	{
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_6 = V_0;
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_7;
		L_7 = InterlockedCompareExchangeImpl<RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*>((&((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields*)il2cpp_codegen_static_fields_for(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var))->___currentRegion_0), L_6, (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*)NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_8 = ((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields*)il2cpp_codegen_static_fields_for(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var))->___currentRegion_0;
		V_0 = L_8;
	}

IL_002d:
	{
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_9 = V_0;
		return L_9;
	}
}
// System.Void System.Globalization.RegionInfo::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo__ctor_mD496A2C9B302F95DF4062256AECE8AD304E5DA72 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, int32_t ___0_culture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_culture;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_GetCultureInfo_m7B3C1F8F350401E2FE485E2D1693BA2A0B7BEB6D(L_0, NULL);
		bool L_2;
		L_2 = RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = ___0_culture;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95DA3FC7722DD1C65280ACB8BF456EF76775963D)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegionInfo__ctor_mD496A2C9B302F95DF4062256AECE8AD304E5DA72_RuntimeMethod_var)));
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Globalization.RegionInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo__ctor_m3DB2F00BCDB453A9657C8BEF0D63ACEA373062A3 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_name;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegionInfo__ctor_m3DB2F00BCDB453A9657C8BEF0D63ACEA373062A3_RuntimeMethod_var)));
	}

IL_000f:
	{
		String_t* L_2 = ___0_name;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToUpperInvariant_mD73F658CDE1280A527231DC305B66CF09B64E5AB(L_2, NULL);
		bool L_4;
		L_4 = RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		String_t* L_5 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_GetCultureInfo_mF07467FB427362952D26EAC992010EB03CE41511(L_5, NULL);
		bool L_7;
		L_7 = RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE(__this, L_6, NULL);
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_8 = ___0_name;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EAC7821D3146E3E5AA5B53530F1797167C3D4A4)), L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegionInfo__ctor_m3DB2F00BCDB453A9657C8BEF0D63ACEA373062A3_RuntimeMethod_var)));
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Globalization.RegionInfo::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo__ctor_m85E194710DB7740ADC7F54FAD11ED4D1284C932B (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_ci, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51110E17CA94BC00F4A876802AC4AC26E7E482B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2B287AA9E20644FBF7B4A84D7867432285D7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83314EA460FCEFD3C214A42664EEA4D9E9280DF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB887A5015E73D94AAFD666C9F0C2D6965A1EF3F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC981BE9C1F04078473AFB89D43A49C223508D178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F468BEC5D3406D86F26A2D9F63332D43DEBE21);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_ci;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_007b;
		}
	}
	{
		__this->___regionId_1 = ((int32_t)244);
		__this->___iso2Name_2 = _stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iso2Name_2), (void*)_stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F);
		__this->___iso3Name_3 = _stringLiteral5C2B287AA9E20644FBF7B4A84D7867432285D7F6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iso3Name_3), (void*)_stringLiteral5C2B287AA9E20644FBF7B4A84D7867432285D7F6);
		__this->___win3Name_4 = _stringLiteralD0F468BEC5D3406D86F26A2D9F63332D43DEBE21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___win3Name_4), (void*)_stringLiteralD0F468BEC5D3406D86F26A2D9F63332D43DEBE21);
		String_t* L_2 = _stringLiteral83314EA460FCEFD3C214A42664EEA4D9E9280DF4;
		V_0 = L_2;
		__this->___englishName_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___englishName_5), (void*)L_2);
		String_t* L_3 = V_0;
		__this->___nativeName_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeName_6), (void*)L_3);
		__this->___currencySymbol_7 = _stringLiteral51110E17CA94BC00F4A876802AC4AC26E7E482B1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currencySymbol_7), (void*)_stringLiteral51110E17CA94BC00F4A876802AC4AC26E7E482B1);
		__this->___isoCurrencySymbol_8 = _stringLiteralB887A5015E73D94AAFD666C9F0C2D6965A1EF3F2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isoCurrencySymbol_8), (void*)_stringLiteralB887A5015E73D94AAFD666C9F0C2D6965A1EF3F2);
		String_t* L_4 = _stringLiteralC981BE9C1F04078473AFB89D43A49C223508D178;
		V_0 = L_4;
		__this->___currencyNativeName_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currencyNativeName_10), (void*)L_4);
		String_t* L_5 = V_0;
		__this->___currencyEnglishName_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currencyEnglishName_9), (void*)L_5);
		return;
	}

IL_007b:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___0_ci;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_008e;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_8 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB44AED1F8533DF887C42A9D9AA0A2AB246920D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegionInfo__ctor_m85E194710DB7740ADC7F54FAD11ED4D1284C932B_RuntimeMethod_var)));
	}

IL_008e:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = ___0_ci;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_ToUpperInvariant_mD73F658CDE1280A527231DC305B66CF09B64E5AB(L_10, NULL);
		bool L_12;
		L_12 = RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80(__this, L_11, NULL);
		return;
	}
}
// System.Boolean System.Globalization.RegionInfo::GetByTerritory(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_ci, const RuntimeMethod* method) 
{
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_ci;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE9AF4FDBD2FA6CD5CC4C6361F0BFDF49243FD16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegionInfo_GetByTerritory_m14111C93A3F4634959DE68FA70F44FAA919D81EE_RuntimeMethod_var)));
	}

IL_000e:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___0_ci;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture() */, L_2);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = ___0_ci;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (bool)0;
	}

IL_0020:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___0_ci;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpperInvariant_mD73F658CDE1280A527231DC305B66CF09B64E5AB(L_7, NULL);
		bool L_9;
		L_9 = RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80(__this, L_8, NULL);
		return L_9;
	}
}
// System.Boolean System.Globalization.RegionInfo::construct_internal_region_from_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef bool (*RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80_ftn) (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*, String_t*);
	using namespace il2cpp::icalls;
	return ((RegionInfo_construct_internal_region_from_name_mE1FD5A67E46E1CF0ADF84FEC0FA0841B246B3A80_ftn)mscorlib::System::Globalization::RegionInfo::construct_internal_region_from_name) (__this, ___0_name);
}
// System.String System.Globalization.RegionInfo::get_CurrencyEnglishName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_CurrencyEnglishName_m93A3AA212B285D1A96EA05A67CFC83893DC2DEF0 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyEnglishName_9;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_CurrencySymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_CurrencySymbol_m35D4F0F7416E92D7381A0783EC12D8C2ADB20E8D (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencySymbol_7;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_DisplayName_m9B6C469850812AAD2E0B199ECBD41BB9E4B55081 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___englishName_5;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_EnglishName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_EnglishName_m2DA91E0B3D4210D4510E984A9AA2E1160E689799 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___englishName_5;
		return L_0;
	}
}
// System.Int32 System.Globalization.RegionInfo::get_GeoId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegionInfo_get_GeoId_m95F33E279D8D13EE5E6775D1779A7A36457555E4 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___regionId_1;
		return L_0;
	}
}
// System.Boolean System.Globalization.RegionInfo::get_IsMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_get_IsMetric_m136D3C2117F970A189BEDFD24985CF3980219177 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB473A5ECB9EEEBFCB444E0D4B4269A1E0E33740B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___iso2Name_2;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralB473A5ECB9EEEBFCB444E0D4B4269A1E0E33740B, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		return (bool)1;
	}
}
// System.String System.Globalization.RegionInfo::get_ISOCurrencySymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_ISOCurrencySymbol_m21DE3924E3FA8BF3D343E1DDAD3532B8727E619D (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___isoCurrencySymbol_8;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_NativeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_NativeName_mF67CFBF78E37E57C6CCD5BFCF7389BA73D50519A (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___nativeName_6;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_CurrencyNativeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_CurrencyNativeName_m9C8894D11447E0D35B443E0698D36D1A9E8126A4 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyNativeName_10;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_Name_mF8A86651F3C6032DFE0537331AA480667F79AA7E (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___iso2Name_2;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_ThreeLetterISORegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_ThreeLetterISORegionName_m82CB89C053FB430968E895316FC889E9C8D1E156 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___iso3Name_3;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_ThreeLetterWindowsRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_ThreeLetterWindowsRegionName_m5CF4CF999127AAAA799E643D8C86AE24B2ABE1E8 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___win3Name_4;
		return L_0;
	}
}
// System.String System.Globalization.RegionInfo::get_TwoLetterISORegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_get_TwoLetterISORegionName_mFEF5A8E893AE5BEA1E7E93C06982745B0725C081 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___iso2Name_2;
		return L_0;
	}
}
// System.Boolean System.Globalization.RegionInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionInfo_Equals_m7A43FFFCC402C604AB267C698F63D12A275EB4F9 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = ((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*)IsInstClass((RuntimeObject*)L_0, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var));
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Globalization.RegionInfo::get_Name() */, __this);
		RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Globalization.RegionInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Globalization.RegionInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegionInfo_GetHashCode_mBFF4223CB4C15BCE9E5D6CC868D5B335793A3FC0 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Globalization.RegionInfo::get_Name() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String System.Globalization.RegionInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionInfo_ToString_m4506D2C52BC428BF22D1C32CDB3CA2CD09F413E0 (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Globalization.RegionInfo::get_Name() */, __this);
		return L_0;
	}
}
// System.Void System.Globalization.RegionInfo::ClearCachedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo_ClearCachedData_mFF8443777DC5A8CB40F2E1A8BF09BC2D6EED01BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields*)il2cpp_codegen_static_fields_for(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var))->___currentRegion_0 = (RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_StaticFields*)il2cpp_codegen_static_fields_for(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_il2cpp_TypeInfo_var))->___currentRegion_0), (void*)(RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836*)NULL);
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
// System.Void System.Diagnostics.ConditionalAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0* __this, String_t* ___0_conditionString, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_conditionString;
		__this->___U3CConditionStringU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConditionStringU3Ek__BackingField_0), (void*)L_0);
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
// System.Void System.Diagnostics.StackTraceHiddenAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceHiddenAttribute__ctor_m83DCA7FAFFB09C900AECA921EB946F4D2E3505D2 (StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggerStepThroughAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerStepThroughAttribute__ctor_m234010EF8ABF85EFCA7E148C1F707782432DB443 (DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggerHiddenAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerHiddenAttribute__ctor_m0FFFF90465675AA29346825F8E8F8C7355704F6D (DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggerNonUserCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerNonUserCodeAttribute__ctor_mCB1CDB28B1C8B3FFCBF13FDD091F4EBF4E92FEDD (DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_mEA1D84CE13056A4092BCB1B1DD5D664EDB71482D (DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029* __this, int32_t ___0_modes, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_modes;
		__this->___m_debuggingModes_0 = L_0;
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
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1 (DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_state;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_state;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}

IL_000e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___0_state;
		__this->___state_0 = L_3;
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
// System.Void System.Diagnostics.DebuggerTypeProxyAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA (DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA_RuntimeMethod_var)));
	}

IL_001a:
	{
		Type_t* L_3 = ___0_type;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->___typeName_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___typeName_0), (void*)L_4);
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
// System.Void System.Diagnostics.DebuggerDisplayAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerDisplayAttribute__ctor_mB04D0624105DB5AF34A45AD2CCF438C5B5C604CF (DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->___value_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		goto IL_001d;
	}

IL_0016:
	{
		String_t* L_1 = ___0_value;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
	}

IL_001d:
	{
		__this->___name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___type_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void System.Diagnostics.Debugger::NotifyOfCrossThreadDependency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_NotifyOfCrossThreadDependency_m25686501BF1D2BC1D0CD3E27743388EE92A03644 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Debugger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger__cctor_m4284657C52B9C3934A2CFFB642825EEC87DDFCA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var))->___DefaultCategory_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var))->___DefaultCategory_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// Conversion methods for marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com_back(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com_cleanup(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled)
{
}
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F (int32_t ___0_skip, bool ___1_needFileInfo, MethodBase_t** ___2_method, int32_t* ___3_iloffset, int32_t* ___4_native_offset, String_t** ___5_file, int32_t* ___6_line, int32_t* ___7_column, const RuntimeMethod* method) 
{
	typedef bool (*StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F_ftn) (int32_t, bool, MethodBase_t**, int32_t*, int32_t*, String_t**, int32_t*, int32_t*);
	using namespace il2cpp::icalls;
	return ((StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F_ftn)mscorlib::System::Diagnostics::StackFrame::get_frame_info) (___0_skip, ___1_needFileInfo, ___2_method, ___3_iloffset, ___4_native_offset, ___5_file, ___6_line, ___7_column);
}
// System.Void System.Diagnostics.StackFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrame__ctor_mC42596F07F5491246D6E1E0F5DA414AA7913CE0B (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		__this->___ilOffset_1 = (-1);
		__this->___nativeOffset_2 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodBase_t** L_0 = (&__this->___methodBase_5);
		int32_t* L_1 = (&__this->___ilOffset_1);
		int32_t* L_2 = (&__this->___nativeOffset_2);
		String_t** L_3 = (&__this->___fileName_6);
		int32_t* L_4 = (&__this->___lineNumber_7);
		int32_t* L_5 = (&__this->___columnNumber_8);
		bool L_6;
		L_6 = StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F(2, (bool)0, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, int32_t ___0_skipFrames, bool ___1_fNeedFileInfo, const RuntimeMethod* method) 
{
	{
		__this->___ilOffset_1 = (-1);
		__this->___nativeOffset_2 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_skipFrames;
		bool L_1 = ___1_fNeedFileInfo;
		MethodBase_t** L_2 = (&__this->___methodBase_5);
		int32_t* L_3 = (&__this->___ilOffset_1);
		int32_t* L_4 = (&__this->___nativeOffset_2);
		String_t** L_5 = (&__this->___fileName_6);
		int32_t* L_6 = (&__this->___lineNumber_7);
		int32_t* L_7 = (&__this->___columnNumber_8);
		bool L_8;
		L_8 = StackFrame_get_frame_info_m6D0A049A6ADDEC0F3158DABFF06B1386DB33298F(((int32_t)il2cpp_codegen_add(L_0, 2)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetFileLineNumber_m2AF9694B1A61CA6ABA27CC632BA2ADDC16179879 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lineNumber_7;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetFileName_m2DD06CC917C0B7120B8CC08C4AB9D78240139F4A (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___fileName_6;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
		String_t* L_0 = __this->___fileName_6;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = V_0;
		return L_1;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, __this);
		V_0 = L_2;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Security.SecurityException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetILOffset_mA88BF94C5C707524B0FD0F1BF4A3A2507ED57688 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___ilOffset_1;
		return L_0;
	}
}
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* StackFrame_GetMethod_m30DDF96CFCA2CC000F4B7FF0F956D2EA78560E7F (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		MethodBase_t* L_0 = __this->___methodBase_5;
		return L_0;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetNativeOffset_m9E66339B33662CB9116F37AFEAF4ABFB4B27105F (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___nativeOffset_2;
		return L_0;
	}
}
// System.Int64 System.Diagnostics.StackFrame::GetMethodAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___methodAddress_3;
		return L_0;
	}
}
// System.UInt32 System.Diagnostics.StackFrame::GetMethodIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___methodIndex_4;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___internalMethodName_9;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_ToString_m7C1464167966B8602EF1F97DFD333340E5CB40B3 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		MethodBase_t* L_1 = __this->___methodBase_5;
		bool L_2;
		L_2 = MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD(L_1, (MethodBase_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t* L_3 = V_0;
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		goto IL_0039;
	}

IL_0027:
	{
		StringBuilder_t* L_6 = V_0;
		MethodBase_t* L_7 = __this->___methodBase_5;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
	}

IL_0039:
	{
		StringBuilder_t* L_10 = V_0;
		String_t* L_11;
		L_11 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_11, NULL);
		int32_t L_13 = __this->___ilOffset_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		String_t* L_15;
		L_15 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		goto IL_0084;
	}

IL_0066:
	{
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		StringBuilder_t* L_20 = V_0;
		int32_t L_21 = __this->___ilOffset_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_20, L_21, NULL);
	}

IL_0084:
	{
		StringBuilder_t* L_23 = V_0;
		String_t* L_24;
		L_24 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
		StringBuilder_t* L_26 = V_0;
		String_t* L_27;
		L_27 = StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		int32_t L_30 = __this->___lineNumber_7;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		int32_t L_33 = __this->___columnNumber_8;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_29);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_29, _stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E, L_32, L_35, NULL);
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
// System.Void System.Diagnostics.StackTrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_mD22253A455F1F750410D5E48BF7E14994EDA12BD (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, bool ___0_fNeedFileInfo, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___0_fNeedFileInfo;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m7C03595A7D2ADA64E7CB5311C9563AF588DC8480 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___0_skipFrames, bool ___1_fNeedFileInfo, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_skipFrames;
		bool L_1 = ___1_fNeedFileInfo;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___0_skipFrames, bool ___1_fNeedFileInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_0 = NULL;
	List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* V_1 = NULL;
	{
		int32_t L_0 = ___0_skipFrames;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_2 = (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95*)il2cpp_codegen_object_new(List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B(L_2, List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_skipFrames;
		___0_skipFrames = ((int32_t)il2cpp_codegen_add(L_3, 2));
		goto IL_002d;
	}

IL_0021:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_4 = V_1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_inline(L_4, L_5, List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		int32_t L_6 = ___0_skipFrames;
		___0_skipFrames = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002d:
	{
		int32_t L_7 = ___0_skipFrames;
		bool L_8 = ___1_fNeedFileInfo;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_9 = (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*)il2cpp_codegen_object_new(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6(L_9, L_7, L_8, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_11 = V_0;
		NullCheck(L_11);
		MethodBase_t* L_12;
		L_12 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_11);
		bool L_13;
		L_13 = MethodBase_op_Inequality_mB7E4A01A8827865E97756445895D201687C09BB5(L_12, (MethodBase_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0021;
		}
	}

IL_0046:
	{
		bool L_14 = ___1_fNeedFileInfo;
		__this->___debug_info_2 = L_14;
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_15 = V_1;
		NullCheck(L_15);
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_16;
		L_16 = List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3(L_15, List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		__this->___frames_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_0), (void*)L_16);
		return;
	}
}
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mD87DF0D20142792EF523A9D0A5BBFE847C4FF9BE (Exception_t* ___0_e, int32_t ___1_skipFrames, bool ___2_fNeedFileInfo, const RuntimeMethod* method) 
{
	typedef StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* (*StackTrace_get_trace_mD87DF0D20142792EF523A9D0A5BBFE847C4FF9BE_ftn) (Exception_t*, int32_t, bool);
	using namespace il2cpp::icalls;
	return ((StackTrace_get_trace_mD87DF0D20142792EF523A9D0A5BBFE847C4FF9BE_ftn)mscorlib::System::Diagnostics::StackTrace::get_trace) (___0_e, ___1_skipFrames, ___2_fNeedFileInfo);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___0_e, bool ___1_fNeedFileInfo, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___0_e;
		bool L_1 = ___1_fNeedFileInfo;
		StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___0_e, int32_t ___1_skipFrames, bool ___2_fNeedFileInfo, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Exception_t* L_0 = ___0_e;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___1_skipFrames;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t* L_4 = ___0_e;
		int32_t L_5 = ___1_skipFrames;
		bool L_6 = ___2_fNeedFileInfo;
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_7;
		L_7 = StackTrace_get_trace_mD87DF0D20142792EF523A9D0A5BBFE847C4FF9BE(L_4, L_5, L_6, NULL);
		__this->___frames_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_0), (void*)L_7);
		Exception_t* L_8 = ___0_e;
		NullCheck(L_8);
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_9 = L_8->___captured_traces_14;
		__this->___captured_traces_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___captured_traces_1), (void*)L_9);
		return;
	}
}
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackTrace_get_FrameCount_mB840FEC17263C1DB248EF594E7D008798AF4BB80 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_0 = __this->___frames_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_1 = __this->___frames_0;
		NullCheck(L_1);
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_0011:
	{
		return 0;
	}
}
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* StackTrace_GetFrame_m019CFC0EAE6869E5100FBB84EC0348D885E2707B (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*)NULL;
	}

IL_000f:
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_3 = __this->___frames_0;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m7DD1B04A2F586280F4291C750E5B1795C75E1FFB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_3;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RuntimeAssembly_GetAotId_mE60698ACE0B9F738390B88A87E3173D7BBEB567E(NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Guid_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_1), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4), (void*)L_5);
	}

IL_0028:
	{
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_3 = (bool)1;
	}

IL_002e:
	{
		String_t* L_6 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4;
		return L_6;
	}
}
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___0_sb, bool ___1_separator, bool* ___2_isAsync, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Guid_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		bool* L_0 = ___2_isAsync;
		*((int8_t*)L_0) = (int8_t)0;
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_0186;
	}

IL_000c:
	{
		int32_t L_1 = V_1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_2;
		L_2 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, __this, L_1);
		V_2 = L_2;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_3 = V_2;
		NullCheck(L_3);
		MethodBase_t* L_4;
		L_4 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_3);
		bool L_5;
		L_5 = MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD(L_4, (MethodBase_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		bool L_6 = V_0;
		bool L_7 = ___1_separator;
		if (!((int32_t)((int32_t)L_6|(int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_8 = ___0_sb;
		String_t* L_9;
		L_9 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
	}

IL_0033:
	{
		StringBuilder_t* L_11 = ___0_sb;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline(L_13, NULL);
		V_3 = L_14;
		String_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_16 = ___0_sb;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_17, NULL);
		goto IL_0180;
	}

IL_0056:
	{
		StringBuilder_t* L_19 = ___0_sb;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_20 = V_2;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline(L_20, NULL);
		int64_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_22);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Diagnostics.StackFrame::GetNativeOffset() */, L_24);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_19);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_19, _stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992, L_23, L_27, NULL);
		goto IL_0180;
	}

IL_007d:
	{
		StringBuilder_t* L_29 = ___0_sb;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_30 = V_2;
		NullCheck(L_30);
		MethodBase_t* L_31;
		L_31 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_30);
		bool L_32 = V_0;
		bool L_33 = ___1_separator;
		bool* L_34 = ___2_isAsync;
		StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01(__this, L_29, L_31, (bool)((int32_t)((int32_t)L_32|(int32_t)L_33)), (&V_4), L_34, NULL);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_0182;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_36);
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_38 = ___0_sb;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_39 = V_2;
		NullCheck(L_39);
		int64_t L_40;
		L_40 = StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline(L_39, NULL);
		int64_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_41);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_43 = V_2;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Diagnostics.StackFrame::GetNativeOffset() */, L_43);
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_38);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_38, _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C, L_42, L_46, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_48 = V_2;
		NullCheck(L_48);
		uint32_t L_49;
		L_49 = StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline(L_48, NULL);
		if ((((int32_t)L_49) == ((int32_t)((int32_t)16777215))))
		{
			goto IL_00ff;
		}
	}
	{
		StringBuilder_t* L_50 = ___0_sb;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_51 = V_2;
		NullCheck(L_51);
		uint32_t L_52;
		L_52 = StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline(L_51, NULL);
		uint32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_50, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_54, NULL);
		goto IL_00ff;
	}

IL_00e8:
	{
		StringBuilder_t* L_56 = ___0_sb;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_57 = V_2;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_57);
		int32_t L_59 = L_58;
		RuntimeObject* L_60 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_56);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_56, _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C, L_60, NULL);
	}

IL_00ff:
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_62 = V_2;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C(L_62, NULL);
		V_5 = L_63;
		String_t* L_64 = V_5;
		NullCheck(L_64);
		Il2CppChar L_65;
		L_65 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_64, 0, NULL);
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0167;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_66 = V_2;
		NullCheck(L_66);
		MethodBase_t* L_67;
		L_67 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_66);
		NullCheck(L_67);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_68;
		L_68 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(10 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_67);
		NullCheck(L_68);
		Guid_t L_69;
		L_69 = VirtualFuncInvoker0< Guid_t >::Invoke(8 /* System.Guid System.Reflection.Module::get_ModuleVersionId() */, L_68);
		V_8 = L_69;
		String_t* L_70;
		L_70 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_8), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		V_6 = L_70;
		String_t* L_71;
		L_71 = StackTrace_GetAotId_m7DD1B04A2F586280F4291C750E5B1795C75E1FFB(NULL);
		V_7 = L_71;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_72);
		if ((!(((uint32_t)L_73) == ((uint32_t)(-1)))))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_74 = V_7;
		if (L_74)
		{
			goto IL_0157;
		}
	}

IL_0147:
	{
		String_t* L_75 = V_6;
		String_t* L_76;
		L_76 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4, L_75, NULL);
		V_5 = L_76;
		goto IL_0167;
	}

IL_0157:
	{
		String_t* L_77 = V_6;
		String_t* L_78 = V_7;
		String_t* L_79;
		L_79 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8, L_77, L_78, NULL);
		V_5 = L_79;
	}

IL_0167:
	{
		StringBuilder_t* L_80 = ___0_sb;
		String_t* L_81 = V_5;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_82 = V_2;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_82);
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_80);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_80, _stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4, L_81, L_85, NULL);
	}

IL_0180:
	{
		V_0 = (bool)1;
	}

IL_0182:
	{
		int32_t L_87 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0186:
	{
		int32_t L_88 = V_1;
		int32_t L_89;
		L_89 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_000c;
		}
	}
	{
		bool L_90 = V_0;
		return L_90;
	}
}
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase,System.Boolean,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___0_sb, MethodBase_t* ___1_mi, bool ___2_needsNewLine, bool* ___3_skipped, bool* ___4_isAsync, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	int32_t V_3 = 0;
	MethodInfo_t* V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	bool* G_B9_0 = NULL;
	bool* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	bool* G_B10_1 = NULL;
	{
		MethodBase_t* L_0 = ___1_mi;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_4);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		Type_t* L_6 = V_0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9;
		L_9 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(95 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_8, ((int32_t)62));
		V_2 = L_9;
		V_3 = 0;
		goto IL_0049;
	}

IL_002b:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MethodInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		MethodInfo_t* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_14);
		MethodBase_t* L_16 = ___1_mi;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0045;
		}
	}
	{
		MethodInfo_t* L_18 = V_4;
		___1_mi = L_18;
		goto IL_004f;
	}

IL_0045:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0049:
	{
		int32_t L_20 = V_3;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_004f:
	{
		bool* L_22 = ___4_isAsync;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25 = V_0;
		NullCheck(L_24);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_24, L_25);
		*((int8_t*)L_22) = (int8_t)L_26;
		bool* L_27 = ___3_skipped;
		MethodBase_t* L_28 = ___1_mi;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = CustomAttributeExtensions_IsDefined_m88E1A7B2E5D09A109B9E6C2830AC70BCD907FAF4(L_28, L_30, NULL);
		G_B8_0 = L_27;
		if (L_31)
		{
			G_B9_0 = L_27;
			goto IL_0088;
		}
	}
	{
		Type_t* L_32 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = CustomAttributeExtensions_IsDefined_m88E1A7B2E5D09A109B9E6C2830AC70BCD907FAF4(L_32, L_34, NULL);
		G_B10_0 = ((int32_t)(L_35));
		G_B10_1 = G_B8_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0089:
	{
		*((int8_t*)G_B10_1) = (int8_t)G_B10_0;
		bool* L_36 = ___3_skipped;
		int32_t L_37 = *((uint8_t*)L_36);
		if (!L_37)
		{
			goto IL_0090;
		}
	}
	{
		return;
	}

IL_0090:
	{
		bool* L_38 = ___4_isAsync;
		int32_t L_39 = *((uint8_t*)L_38);
		if (!L_39)
		{
			goto IL_009e;
		}
	}
	{
		StackTrace_ConvertAsyncStateMachineMethod_m7400401B4F938D08E899981328B3E532013414CB((&___1_mi), (&V_0), NULL);
	}

IL_009e:
	{
		bool L_40 = ___2_needsNewLine;
		if (!L_40)
		{
			goto IL_00ad;
		}
	}
	{
		StringBuilder_t* L_41 = ___0_sb;
		String_t* L_42;
		L_42 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_41);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_42, NULL);
	}

IL_00ad:
	{
		StringBuilder_t* L_44 = ___0_sb;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495, NULL);
		StringBuilder_t* L_46 = ___0_sb;
		Type_t* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		NullCheck(L_46);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, L_48, NULL);
		StringBuilder_t* L_50 = ___0_sb;
		NullCheck(L_50);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		StringBuilder_t* L_52 = ___0_sb;
		MethodBase_t* L_53 = ___1_mi;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_53);
		NullCheck(L_52);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_52, L_54, NULL);
		MethodBase_t* L_56 = ___1_mi;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_56);
		if (!L_57)
		{
			goto IL_0149;
		}
	}
	{
		MethodBase_t* L_58 = ___1_mi;
		NullCheck(((MethodInfo_t*)CastclassClass((RuntimeObject*)L_58, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t* L_59;
		L_59 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(39 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition() */, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_58, MethodInfo_t_il2cpp_TypeInfo_var)));
		___1_mi = L_59;
		MethodBase_t* L_60 = ___1_mi;
		NullCheck(L_60);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61;
		L_61 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_60);
		V_5 = L_61;
		StringBuilder_t* L_62 = ___0_sb;
		NullCheck(L_62);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_62, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_6 = 0;
		goto IL_0135;
	}

IL_010d:
	{
		int32_t L_64 = V_6;
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t* L_65 = ___0_sb;
		NullCheck(L_65);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_011e:
	{
		StringBuilder_t* L_67 = ___0_sb;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_68 = V_5;
		int32_t L_69 = V_6;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Type_t* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		String_t* L_72;
		L_72 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_71);
		NullCheck(L_67);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, L_72, NULL);
		int32_t L_74 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0135:
	{
		int32_t L_75 = V_6;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_76 = V_5;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t* L_77 = ___0_sb;
		NullCheck(L_77);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_77, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
	}

IL_0149:
	{
		MethodBase_t* L_79 = ___1_mi;
		NullCheck(L_79);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_80;
		L_80 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_79);
		V_1 = L_80;
		StringBuilder_t* L_81 = ___0_sb;
		NullCheck(L_81);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		V_7 = 0;
		goto IL_01d3;
	}

IL_0161:
	{
		int32_t L_83 = V_7;
		if ((((int32_t)L_83) <= ((int32_t)0)))
		{
			goto IL_0172;
		}
	}
	{
		StringBuilder_t* L_84 = ___0_sb;
		NullCheck(L_84);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_84, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0172:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_86 = V_1;
		int32_t L_87 = V_7;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_89);
		Type_t* L_90;
		L_90 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_89);
		V_8 = L_90;
		Type_t* L_91 = V_8;
		NullCheck(L_91);
		bool L_92;
		L_92 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_91);
		if (!L_92)
		{
			goto IL_0198;
		}
	}
	{
		Type_t* L_93 = V_8;
		NullCheck(L_93);
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_93);
		if (L_94)
		{
			goto IL_0198;
		}
	}
	{
		Type_t* L_95 = V_8;
		NullCheck(L_95);
		Type_t* L_96;
		L_96 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_95);
		V_8 = L_96;
	}

IL_0198:
	{
		StringBuilder_t* L_97 = ___0_sb;
		Type_t* L_98 = V_8;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		NullCheck(L_97);
		StringBuilder_t* L_100;
		L_100 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_97, L_99, NULL);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_101 = V_1;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_104);
		if (!L_105)
		{
			goto IL_01cd;
		}
	}
	{
		StringBuilder_t* L_106 = ___0_sb;
		NullCheck(L_106);
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_106, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_108 = ___0_sb;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_109 = V_1;
		int32_t L_110 = V_7;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		String_t* L_113;
		L_113 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_112);
		NullCheck(L_108);
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_108, L_113, NULL);
	}

IL_01cd:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_01d3:
	{
		int32_t L_116 = V_7;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_117 = V_1;
		NullCheck(L_117);
		if ((((int32_t)L_116) < ((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)))))
		{
			goto IL_0161;
		}
	}
	{
		StringBuilder_t* L_118 = ___0_sb;
		NullCheck(L_118);
		StringBuilder_t* L_119;
		L_119 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_118, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::ConvertAsyncStateMachineMethod(System.Reflection.MethodBase&,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_ConvertAsyncStateMachineMethod_m7400401B4F938D08E899981328B3E532013414CB (MethodBase_t** ___0_method, Type_t** ___1_declaringType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m107783465114525A503819A30C3499E3E40E9F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	int32_t V_3 = 0;
	MethodInfo_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		Type_t** L_0 = ___1_declaringType;
		Type_t* L_1 = *((Type_t**)L_0);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, (Type_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Type_t* L_5 = V_0;
		NullCheck(L_5);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_6;
		L_6 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(95 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_5, ((int32_t)62));
		V_1 = L_6;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_7 = V_1;
		if (L_7)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_8 = V_1;
		V_2 = L_8;
		V_3 = 0;
		goto IL_0081;
	}

IL_0025:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MethodInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		MethodInfo_t* L_13 = V_4;
		RuntimeObject* L_14;
		L_14 = CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m107783465114525A503819A30C3499E3E40E9F2C(L_13, CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m107783465114525A503819A30C3499E3E40E9F2C_RuntimeMethod_var);
		V_5 = L_14;
		RuntimeObject* L_15 = V_5;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		RuntimeObject* L_16 = V_5;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>::GetEnumerator() */, IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var, L_16);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_6;
					if (!L_18)
					{
						goto IL_007c;
					}
				}
				{
					RuntimeObject* L_19 = V_6;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_007c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_20 = V_6;
				NullCheck(L_20);
				AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4* L_21;
				L_21 = InterfaceFuncInvoker0< AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>::get_Current() */, IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				Type_t* L_22;
				L_22 = StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline(L_21, NULL);
				Type_t** L_23 = ___1_declaringType;
				Type_t* L_24 = *((Type_t**)L_23);
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_0066_1;
				}
			}
			{
				MethodBase_t** L_26 = ___0_method;
				MethodInfo_t* L_27 = V_4;
				*((RuntimeObject**)L_26) = (RuntimeObject*)L_27;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)L_27);
				Type_t** L_28 = ___1_declaringType;
				MethodInfo_t* L_29 = V_4;
				NullCheck(L_29);
				Type_t* L_30;
				L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
				*((RuntimeObject**)L_28) = (RuntimeObject*)L_30;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)(RuntimeObject*)L_30);
				goto IL_0087;
			}

IL_0066_1:
			{
				RuntimeObject* L_31 = V_6;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_007d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0081:
	{
		int32_t L_34 = V_3;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_35 = V_2;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0025;
		}
	}

IL_0087:
	{
		return;
	}
}
// System.String System.Diagnostics.StackTrace::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m46323EE6573660B32A02BA5BC774FC1D1F529717 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_1 = __this->___captured_traces_1;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_2 = __this->___captured_traces_1;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0057;
	}

IL_001b:
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		StringBuilder_t* L_7 = V_0;
		bool L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9(L_6, L_7, L_8, (&V_4), NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		String_t* L_13;
		L_13 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC, NULL);
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
	}

IL_0053:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0057:
	{
		int32_t L_21 = V_3;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001b;
		}
	}

IL_005d:
	{
		StringBuilder_t* L_23 = V_0;
		bool L_24 = V_1;
		bool L_25;
		L_25 = StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9(__this, L_23, L_24, (&V_5), NULL);
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
	}
}
// System.String System.Diagnostics.StackTrace::ToString(System.Diagnostics.StackTrace/TraceFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m8732EDFFAFD39EA9E34978B7563D19BD70CD8627 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___0_traceFormat, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.Tracing.EventAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute__ctor_mE3EE00CEF40B031F862D58BBEE97D5626D92F2E1 (EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882* __this, int32_t ___0_eventId, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_eventId;
		EventAttribute_set_EventId_mC5617BB069437135E936C4CC9138B426192C9153_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventAttribute::set_EventId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute_set_EventId_mC5617BB069437135E936C4CC9138B426192C9153 (EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEventIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventAttribute::set_Level(System.Diagnostics.Tracing.EventLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute_set_Level_m89A5925EAA7B867DFB3B670390E61A8C1BE7381B (EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLevelU3Ek__BackingField_1 = L_0;
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
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		EventSource_set_Name_m55128F99D84FDFE12B36CED0D6E9BC8A2C7D77B8_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m6DDF3ABD543CF9CB6493C593B06A772B5F6E50A6 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, String_t* ___0_eventSourceName, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_eventSourceName;
		EventSource_set_Name_m55128F99D84FDFE12B36CED0D6E9BC8A2C7D77B8_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::.ctor(System.Guid,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mA6FB74138AB52C540333000C0CEAD367D5072083 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, Guid_t ___0_eventSourceGuid, String_t* ___1_eventSourceName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___1_eventSourceName;
		EventSource__ctor_m6DDF3ABD543CF9CB6493C593B06A772B5F6E50A6(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Finalize_m4E94F5985E3D687A2ABCCE0EE9150174EE09D92E (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Diagnostics.Tracing.EventSource::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void System.Diagnostics.Tracing.EventSource::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_set_Name_m55128F99D84FDFE12B36CED0D6E9BC8A2C7D77B8 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_level, int64_t ___1_keywords, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Dispose_mF14781ABBB50FDB6CAEC8D7DC1B7896C96CCDED8 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Diagnostics.Tracing.EventSource::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Dispose_m9F164B3103C672CA687CDFCD08A01007AEE8062E (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m8609472BD078A398CF4CA9DBF4BBDA1C454096A6 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_eventId;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___1_arg1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		EventSource_WriteEvent_mD93F560C6627CA14D4EBC29243EF9790FECFE22F(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_mF3DADFC0459BB9C89B17BCECE51A57C3F4ED7D88 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_eventId;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___1_arg1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		EventSource_WriteEvent_mD93F560C6627CA14D4EBC29243EF9790FECFE22F(__this, L_0, L_6, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_arg1, int32_t ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_eventId;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___1_arg1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		int32_t L_11 = ___3_arg3;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		EventSource_WriteEvent_mD93F560C6627CA14D4EBC29243EF9790FECFE22F(__this, L_0, L_10, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_mD93F560C6627CA14D4EBC29243EF9790FECFE22F (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::WriteEventCore(System.Int32,System.Int32,System.Diagnostics.Tracing.EventSource/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, int32_t ___1_eventDataCount, EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* ___2_data, const RuntimeMethod* method) 
{
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
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_DataPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929 (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value;
		__this->___U3CDataPointerU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_value, const RuntimeMethod* method)
{
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*>(__this + _offset);
	EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline(_thisAdjusted, ___0_value, method);
}
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*>(__this + _offset);
	EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline(_thisAdjusted, ___0_value, method);
}
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Reserved(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799 (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReservedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*>(__this + _offset);
	EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.Tracing.EventSourceAttribute::set_Guid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSourceAttribute_set_Guid_mE9D8036126BA2AAB0FC2CE62C08A245A7EF6CE33 (EventSourceAttribute_t26715FCD425D9AA129790DCE4B1F310FD879958F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CGuidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGuidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSourceAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSourceAttribute_set_Name_m059BF0157E42299C4B01FE2E953BE811AC058757 (EventSourceAttribute_t26715FCD425D9AA129790DCE4B1F310FD879958F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSourceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSourceAttribute__ctor_m5EC6B0E45D34CCA699909C6D3D096487C8F5BD9B (EventSourceAttribute_t26715FCD425D9AA129790DCE4B1F310FD879958F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_culture;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568_RuntimeMethod_var)));
	}

IL_0014:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___0_culture;
		NullCheck(L_2);
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_3;
		L_3 = VirtualFuncInvoker0< CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* >::Invoke(12 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_2);
		__this->____compareInfo_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____compareInfo_0), (void*)L_3);
		return;
	}
}
// System.Void System.Collections.Comparer::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D, L_4, NULL);
		__this->____compareInfo_0 = ((CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57*)CastclassClass((RuntimeObject*)L_5, CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____compareInfo_0), (void*)((CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57*)CastclassClass((RuntimeObject*)L_5, CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Collections.Comparer::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_GetObjectData_mD1C091EEB209483F6231A4412ADFE30E0177FCC6 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer_GetObjectData_mD1C091EEB209483F6231A4412ADFE30E0177FCC6_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_3 = __this->____compareInfo_0;
		NullCheck(L_2);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_2, _stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D, L_3, NULL);
		return;
	}
}
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___0_a;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		RuntimeObject* L_3 = ___1_b;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		RuntimeObject* L_4 = ___0_a;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = ___1_b;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_8 = __this->____compareInfo_0;
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(6 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String) */, L_8, L_9, L_10);
		return L_11;
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___0_a;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
		RuntimeObject* L_13 = V_2;
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_14 = V_2;
		RuntimeObject* L_15 = ___1_b;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_14, L_15);
		return L_16;
	}

IL_0044:
	{
		RuntimeObject* L_17 = ___1_b;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_3;
		if (!L_18)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_19 = V_3;
		RuntimeObject* L_20 = ___0_a;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_19, L_20);
		return ((-L_21));
	}

IL_0057:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3037931DE899C4BCA58ECF059EF9BE27F54B681)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Comparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__cctor_m9874922732F56EE6677D109FE49CA124A9B27615 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* L_1 = (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653*)il2cpp_codegen_object_new(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568(L_1, L_0, NULL);
		((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___Default_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___Default_1), (void*)L_1);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* L_3 = (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653*)il2cpp_codegen_object_new(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568(L_3, L_2, NULL);
		((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___DefaultInvariant_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___DefaultInvariant_2), (void*)L_3);
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
// Conversion methods for marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			marshaled.____key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____key_0));
			(marshaled.____key_0)->AddRef();
		}
		else
		{
			marshaled.____key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____key_0);
		}
	}
	else
	{
		marshaled.____key_0 = NULL;
	}
	if (unmarshaled.____value_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			marshaled.____value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____value_1));
			(marshaled.____value_1)->AddRef();
		}
		else
		{
			marshaled.____value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____value_1);
		}
	}
	else
	{
		marshaled.____value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____key_0 != NULL)
	{
		unmarshaled.____key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____key_0), Il2CppIUnknown::IID, marshaled.____key_0);
		}
	}
	else
	{
		unmarshaled.____key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)NULL);
	}
	if (marshaled.____value_1 != NULL)
	{
		unmarshaled.____value_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____value_1), Il2CppIUnknown::IID, marshaled.____value_1);
		}
	}
	else
	{
		unmarshaled.____value_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled)
{
	if (marshaled.____key_0 != NULL)
	{
		(marshaled.____key_0)->Release();
		marshaled.____key_0 = NULL;
	}
	if (marshaled.____value_1 != NULL)
	{
		(marshaled.____value_1)->Release();
		marshaled.____value_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled)
{
	if (unmarshaled.____key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			marshaled.____key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____key_0));
			(marshaled.____key_0)->AddRef();
		}
		else
		{
			marshaled.____key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____key_0);
		}
	}
	else
	{
		marshaled.____key_0 = NULL;
	}
	if (unmarshaled.____value_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			marshaled.____value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____value_1));
			(marshaled.____value_1)->AddRef();
		}
		else
		{
			marshaled.____value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____value_1);
		}
	}
	else
	{
		marshaled.____value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com_back(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____key_0 != NULL)
	{
		unmarshaled.____key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____key_0), Il2CppIUnknown::IID, marshaled.____key_0);
		}
	}
	else
	{
		unmarshaled.____key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)NULL);
	}
	if (marshaled.____value_1 != NULL)
	{
		unmarshaled.____value_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____value_1), Il2CppIUnknown::IID, marshaled.____value_1);
		}
	}
	else
	{
		unmarshaled.____value_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com_cleanup(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled)
{
	if (marshaled.____key_0 != NULL)
	{
		(marshaled.____key_0)->Release();
		marshaled.____key_0 = NULL;
	}
	if (marshaled.____value_1 != NULL)
	{
		(marshaled.____value_1)->Release();
		marshaled.____value_1 = NULL;
	}
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		__this->____key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_value;
		__this->____value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*>(__this + _offset);
	DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA(_thisAdjusted, ___0_key, ___1_value, method);
}
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline(_thisAdjusted, method);
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
// System.Boolean System.Collections.HashHelpers::IsPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashHelpers_IsPrime_mE1421D059FBC1DF88DB8F7C23438BF89B0F8E633 (int32_t ___0_candidate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_candidate;
		if (!((int32_t)(L_0&1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___0_candidate;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)L_1));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		V_1 = 3;
		goto IL_001d;
	}

IL_0012:
	{
		int32_t L_3 = ___0_candidate;
		int32_t L_4 = V_1;
		if (((int32_t)(L_3%L_4)))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 2));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0023:
	{
		int32_t L_8 = ___0_candidate;
		return (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}
}
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_min;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472_RuntimeMethod_var)));
	}

IL_000f:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_12 = ___0_min;
		V_2 = ((int32_t)(L_12|1));
		goto IL_004b;
	}

IL_0035:
	{
		int32_t L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = HashHelpers_IsPrime_mE1421D059FBC1DF88DB8F7C23438BF89B0F8E633(L_13, NULL);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_15 = V_2;
		if (!((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, 1))%((int32_t)101))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0047:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_004b:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_19 = ___0_min;
		return L_19;
	}
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_oldSize;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)2146435069)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_oldSize;
		if ((((int32_t)((int32_t)2146435069)) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		return ((int32_t)2146435069);
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_3, NULL);
		return L_4;
	}
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_1 = (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*)il2cpp_codegen_object_new(ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5(L_1, ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_2;
		L_2 = InterlockedCompareExchangeImpl<ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*>((&((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1), L_1, (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*)NULL);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_3 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1;
		return L_3;
	}
}
// System.Void System.Collections.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_m9DF40233ECCED64A671EAAA6DD1819BFFAEE243F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_32_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_32_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0), (void*)L_1);
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
// System.Void System.Collections.ListDictionaryInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDictionaryInternal__ctor_mB7A6828B81425B52BE5C3F967471CFA703465FB0 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___head_0;
		V_0 = L_2;
		goto IL_0038;
	}

IL_001c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___key_0;
		RuntimeObject* L_5 = ___0_key;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___value_1;
		return L_8;
	}

IL_0031:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = V_0;
		NullCheck(L_9);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_10 = L_9->___next_2;
		V_0 = L_10;
	}

IL_0038:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_11 = V_0;
		if (L_11)
		{
			goto IL_001c;
		}
	}
	{
		return NULL;
	}
}
// System.Void System.Collections.ListDictionaryInternal::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDictionaryInternal_set_Item_mE92FAA3316C4236A957DAE30BD212672B3D56906 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_1 = NULL;
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_set_Item_mE92FAA3316C4236A957DAE30BD212672B3D56906_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->___version_1;
		__this->___version_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		V_0 = (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_3 = __this->___head_0;
		V_1 = L_3;
		goto IL_0043;
	}

IL_002c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___key_0;
		RuntimeObject* L_6 = ___0_key;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_6);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_8 = V_1;
		V_0 = L_8;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = V_1;
		NullCheck(L_9);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_10 = L_9->___next_2;
		V_1 = L_10;
	}

IL_0043:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_11 = V_1;
		if (L_11)
		{
			goto IL_002c;
		}
	}

IL_0046:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_13 = V_1;
		RuntimeObject* L_14 = ___1_value;
		NullCheck(L_13);
		L_13->___value_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___value_1), (void*)L_14);
		return;
	}

IL_0051:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_15 = (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)il2cpp_codegen_object_new(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		DictionaryNode__ctor_m9357A7727A8ED2BF9CDB7A674C49D0121DC00F22(L_15, NULL);
		V_2 = L_15;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_16 = V_2;
		RuntimeObject* L_17 = ___0_key;
		NullCheck(L_16);
		L_16->___key_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___key_0), (void*)L_17);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_18 = V_2;
		RuntimeObject* L_19 = ___1_value;
		NullCheck(L_18);
		L_18->___value_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___value_1), (void*)L_19);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_20 = V_0;
		if (!L_20)
		{
			goto IL_0071;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_21 = V_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_22 = V_2;
		NullCheck(L_21);
		L_21->___next_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___next_2), (void*)L_22);
		goto IL_0078;
	}

IL_0071:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_23 = V_2;
		__this->___head_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_0), (void*)L_23);
	}

IL_0078:
	{
		int32_t L_24 = __this->___count_2;
		__this->___count_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}
}
// System.Int32 System.Collections.ListDictionaryInternal::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListDictionaryInternal_get_Count_mC8F585CAB29896B42726AF57626B6D7814AFCFD9 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count_2;
		return L_0;
	}
}
// System.Object System.Collections.ListDictionaryInternal::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_get_SyncRoot_mFB2E704607FD4DB0FA2E58DC7DE5D8AF8D74BB8F (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_3);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_3;
		return L_4;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___head_0;
		V_0 = L_2;
		goto IL_0033;
	}

IL_001c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___key_0;
		RuntimeObject* L_5 = ___0_key;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)1;
	}

IL_002c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = V_0;
		NullCheck(L_7);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_8 = L_7->___next_2;
		V_0 = L_8;
	}

IL_0033:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = V_0;
		if (L_9)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.ListDictionaryInternal::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD_RuntimeMethod_var)));
	}

IL_0036:
	{
		RuntimeArray* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = ListDictionaryInternal_get_Count_mC8F585CAB29896B42726AF57626B6D7814AFCFD9_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_CopyTo_mE7251E7CE412FE943EAC5F2CA8A8416D9B7130DD_RuntimeMethod_var)));
	}

IL_0056:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_12 = __this->___head_0;
		V_0 = L_12;
		goto IL_0088;
	}

IL_005f:
	{
		RuntimeArray* L_13 = ___0_array;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___key_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___value_1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_18;
		memset((&L_18), 0, sizeof(L_18));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_18), L_15, L_17, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_19 = L_18;
		RuntimeObject* L_20 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21 = ___1_index;
		NullCheck(L_13);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_13, L_20, L_21, NULL);
		int32_t L_22 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_22, 1));
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_23 = V_0;
		NullCheck(L_23);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_24 = L_23->___next_2;
		V_0 = L_24;
	}

IL_0088:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_25 = V_0;
		if (L_25)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.ListDictionaryInternal::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_GetEnumerator_m56C225C8034FBD915EF5F40EA9C33E36FF5EF200 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* L_0 = (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6*)il2cpp_codegen_object_new(NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D(L_0, __this, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Collections.ListDictionaryInternal::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_System_Collections_IEnumerable_GetEnumerator_m5030CCE9F2F60B321D715C9E6B183E7B34030063 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* L_0 = (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6*)il2cpp_codegen_object_new(NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D(L_0, __this, NULL);
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
// System.Void System.Collections.ListDictionaryInternal/NodeEnumerator::.ctor(System.Collections.ListDictionaryInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_0 = ___0_list;
		__this->___list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_0), (void*)L_0);
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_1 = ___0_list;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		__this->___version_2 = L_2;
		__this->___start_3 = (bool)1;
		__this->___current_1 = (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Current_m45C08019148F71364CA1C72BC10465549DA1608D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.ListDictionaryInternal/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___key_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_4 = __this->___current_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___value_1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___key_0;
		return L_3;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969 (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___value_1;
		return L_3;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal/NodeEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version_2;
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_1 = __this->___list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->___start_3;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_5 = __this->___list_0;
		NullCheck(L_5);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_6 = L_5->___head_0;
		__this->___current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_6);
		__this->___start_3 = (bool)0;
		goto IL_0059;
	}

IL_0040:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = __this->___current_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_8 = __this->___current_1;
		NullCheck(L_8);
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = L_8->___next_2;
		__this->___current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_9);
	}

IL_0059:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_10 = __this->___current_1;
		return (bool)((!(((RuntimeObject*)(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.ListDictionaryInternal/NodeEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator_Reset_m52AD33268396FEAAB5D9161B2FB0A1CDE36B8826 (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version_2;
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_1 = __this->___list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_Reset_m52AD33268396FEAAB5D9161B2FB0A1CDE36B8826_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->___start_3 = (bool)1;
		__this->___current_1 = (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL);
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
// System.Void System.Collections.ListDictionaryInternal/DictionaryNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryNode__ctor_m9357A7727A8ED2BF9CDB7A674C49D0121DC00F22 (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* __this, const RuntimeMethod* method) 
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
// System.Void System.Collections.CompatibleComparer::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_mD070CC744D2BA684391418B77E61E24F8E735492 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_hashCodeProvider, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_hashCodeProvider;
		__this->____hcp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hcp_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_comparer;
		__this->____comparer_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_1), (void*)L_1);
		return;
	}
}
// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::get_HashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_0;
		return L_0;
	}
}
// System.Collections.IComparer System.Collections.CompatibleComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_1;
		return L_0;
	}
}
// System.Boolean System.Collections.CompatibleComparer::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompatibleComparer_Equals_m236C8A3AC0917198EAE468022DF973A75600A749 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		int32_t L_2;
		L_2 = CompatibleComparer_Compare_m2FA8636A804A278CFD91C474268DEFB615B77CD6(__this, L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.CompatibleComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_Compare_m2FA8636A804A278CFD91C474268DEFB615B77CD6 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___0_a;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		RuntimeObject* L_3 = ___1_b;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		RuntimeObject* L_4 = __this->____comparer_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer_1;
		RuntimeObject* L_6 = ___0_a;
		RuntimeObject* L_7 = ___1_b;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}

IL_0026:
	{
		RuntimeObject* L_9 = ___0_a;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		RuntimeObject* L_12 = ___1_b;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_11, L_12);
		return L_13;
	}

IL_0038:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3037931DE899C4BCA58ECF059EF9BE27F54B681)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibleComparer_Compare_m2FA8636A804A278CFD91C474268DEFB615B77CD6_RuntimeMethod_var)));
	}
}
// System.Int32 System.Collections.CompatibleComparer::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_GetHashCode_m2DCDE0BF85BBCEFF30F315567F74F892CCAE3FD4 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibleComparer_GetHashCode_m2DCDE0BF85BBCEFF30F315567F74F892CCAE3FD4_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____hcp_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return L_4;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->____hcp_0;
		RuntimeObject* L_6 = ___0_obj;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IHashCodeProvider::GetHashCode(System.Object) */, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var, L_5, L_6);
		return L_7;
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
// System.Void System.Collections.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mFCCBE2B4FFBD3F33D6FBE2D010C9A0CA976784CB (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	{
		Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF(__this, ((int32_t)32), (2.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Queue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mF3022386EC827D710D6C9E0E3FB564B8A467D708 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF(__this, L_0, (2.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, float ___1_growFactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF_RuntimeMethod_var)));
	}

IL_001a:
	{
		float L_2 = ___1_growFactor;
		if ((!(((double)((double)L_2)) >= ((double)(1.0)))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___1_growFactor;
		if ((((double)((double)L_3)) <= ((double)(10.0))))
		{
			goto IL_0056;
		}
	}

IL_0034:
	{
		int32_t L_4 = 1;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6 = ((int32_t)10);
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83B4C2882FD3AA7B5248EB993CD86C13E0BDF274)), L_5, L_7, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral847FE3059C3CD6F8719A86023405C3E0846C0821)), L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue__ctor_m0C6B9BD1DE04B4CB09706B181A0176CF5ACFD5AF_RuntimeMethod_var)));
	}

IL_0056:
	{
		int32_t L_10 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->____array_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_11);
		__this->____head_1 = 0;
		__this->____tail_2 = 0;
		__this->____size_3 = 0;
		float L_12 = ___1_growFactor;
		__this->____growFactor_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_12, (100.0f))));
		return;
	}
}
// System.Void System.Collections.Queue::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mC8D4457894462D84210E9032A7FF5663B1C7E5C8 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, RuntimeObject* ___0_col, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B2_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_col;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = ___0_col;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000c:
	{
		G_B3_0 = ((int32_t)32);
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		Queue__ctor_mF3022386EC827D710D6C9E0E3FB564B8A467D708(G_B3_1, G_B3_0, NULL);
		RuntimeObject* L_3 = ___0_col;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral040B337A5817FD39541437C95901315498072E63)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue__ctor_mC8D4457894462D84210E9032A7FF5663B1C7E5C8_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_5 = ___0_col;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		goto IL_0036;
	}

IL_002a:
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, __this, L_8);
	}

IL_0036:
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
		if (L_10)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Queue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_get_Count_mD40164CFB8392F3101A58C7F208615F1E14D65E1 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
// System.Object System.Collections.Queue::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_Clone_m6C0C28E96A5CED963EC8CEC1CCE1A8135F029A42 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____size_3;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_1 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)il2cpp_codegen_object_new(Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue__ctor_mF3022386EC827D710D6C9E0E3FB564B8A467D708(L_1, L_0, NULL);
		V_0 = L_1;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_2 = V_0;
		int32_t L_3 = __this->____size_3;
		NullCheck(L_2);
		L_2->____size_3 = L_3;
		int32_t L_4 = __this->____size_3;
		V_1 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array_0;
		NullCheck(L_5);
		int32_t L_6 = __this->____head_1;
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B3_0 = L_8;
		goto IL_0043;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array_0;
		NullCheck(L_9);
		int32_t L_10 = __this->____head_1;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10));
	}

IL_0043:
	{
		V_2 = G_B3_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____array_0;
		int32_t L_12 = __this->____head_1;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_13 = V_0;
		NullCheck(L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____array_0;
		int32_t L_15 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->____array_0;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_20 = V_0;
		NullCheck(L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20->____array_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = __this->____array_0;
		NullCheck(L_22);
		int32_t L_23 = __this->____head_1;
		int32_t L_24 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, 0, (RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), L_23)), L_24, NULL);
	}

IL_0087:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_25 = V_0;
		int32_t L_26 = __this->____version_5;
		NullCheck(L_25);
		L_25->____version_5 = L_26;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_27 = V_0;
		return L_27;
	}
}
// System.Object System.Collections.Queue::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_get_SyncRoot_mB5DF7B19BDE24380C17A5346F7BA721B6CBAF01C (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_6;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_6);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_6;
		return L_4;
	}
}
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeArray* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___1_index;
		int32_t L_10 = __this->____size_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_CopyTo_mF1ADF0681B8A28769891D1B0D4F761D7D0C500F3_RuntimeMethod_var)));
	}

IL_0056:
	{
		int32_t L_12 = __this->____size_3;
		V_0 = L_12;
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		return;
	}

IL_0061:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array_0;
		NullCheck(L_14);
		int32_t L_15 = __this->____head_1;
		int32_t L_16 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15))) < ((int32_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_17 = V_0;
		G_B13_0 = L_17;
		goto IL_0085;
	}

IL_0076:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = __this->____array_0;
		NullCheck(L_18);
		int32_t L_19 = __this->____head_1;
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), L_19));
	}

IL_0085:
	{
		V_1 = G_B13_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____array_0;
		int32_t L_21 = __this->____head_1;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_index;
		int32_t L_24 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, L_21, L_22, L_23, L_24, NULL);
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = __this->____array_0;
		RuntimeArray* L_29 = ___0_array;
		int32_t L_30 = ___1_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = __this->____array_0;
		NullCheck(L_31);
		int32_t L_32 = __this->____head_1;
		int32_t L_33 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, L_29, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_30, ((int32_t)(((RuntimeArray*)L_31)->max_length)))), L_32)), L_33, NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void System.Collections.Queue::Enqueue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_Enqueue_m0128D3EC88636F987C43B07A337E46D6734EEE0E (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array_0;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		NullCheck(L_2);
		int32_t L_3 = __this->____growFactor_4;
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)L_3)))/((int64_t)((int32_t)100)))));
		int32_t L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array_0;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4)))))
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array_0;
		NullCheck(L_6);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 4));
	}

IL_003f:
	{
		int32_t L_7 = V_0;
		Queue_SetCapacity_m0F22CA22FA5E6ECD22AACDA717C530BF02231CAC(__this, L_7, NULL);
	}

IL_0046:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array_0;
		int32_t L_9 = __this->____tail_2;
		RuntimeObject* L_10 = ___0_obj;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)L_10);
		int32_t L_11 = __this->____tail_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array_0;
		NullCheck(L_12);
		__this->____tail_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_11, 1))%((int32_t)(((RuntimeArray*)L_12)->max_length))));
		int32_t L_13 = __this->____size_3;
		__this->____size_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_GetEnumerator_m169D3B852872E27FF69FC5EDB9ABFA7B77CE0DF0 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* L_0 = (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED*)il2cpp_codegen_object_new(QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QueueEnumerator__ctor_mC05AAA2306368D630FDDEBC1FDFCDF18586393D8(L_0, __this, NULL);
		return L_0;
	}
}
// System.Object System.Collections.Queue::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_Dequeue_m89B22F0E9AD92C04919C8F98AE170E8D75A52B90 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Queue::get_Count() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_Dequeue_m89B22F0E9AD92C04919C8F98AE170E8D75A52B90_RuntimeMethod_var)));
	}

IL_0013:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		int32_t L_3 = __this->____head_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array_0;
		int32_t L_7 = __this->____head_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, NULL);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)NULL);
		int32_t L_8 = __this->____head_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array_0;
		NullCheck(L_9);
		__this->____head_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, 1))%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_10 = __this->____size_3;
		__this->____size_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return L_5;
	}
}
// System.Object System.Collections.Queue::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_Peek_m23547E6A2765C50351CC5C25499168C74A937BE3 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Queue::get_Count() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_Peek_m23547E6A2765C50351CC5C25499168C74A937BE3_RuntimeMethod_var)));
	}

IL_0013:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		int32_t L_3 = __this->____head_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Object System.Collections.Queue::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_GetElement_m2DDA15A3A9D73E3CB798BEBEEFA13B59FC9FE1F1 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____array_0;
		int32_t L_1 = __this->____head_1;
		int32_t L_2 = ___0_i;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array_0;
		NullCheck(L_3);
		NullCheck(L_0);
		int32_t L_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		RuntimeObject* L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void System.Collections.Queue::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_SetCapacity_m0F22CA22FA5E6ECD22AACDA717C530BF02231CAC (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B6_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size_3;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head_1;
		int32_t L_4 = __this->____tail_2;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array_0;
		int32_t L_6 = __this->____head_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->____size_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array_0;
		int32_t L_10 = __this->____head_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array_0;
		NullCheck(L_12);
		int32_t L_13 = __this->____head_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____array_0;
		NullCheck(L_16);
		int32_t L_17 = __this->____head_1;
		int32_t L_18 = __this->____tail_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		__this->____array_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_19);
		__this->____head_1 = 0;
		int32_t L_20 = __this->____size_3;
		int32_t L_21 = ___0_capacity;
		G_B5_0 = __this;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
	}
	{
		int32_t L_22 = __this->____size_3;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail_2 = G_B7_0;
		int32_t L_23 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
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
// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueEnumerator__ctor_mC05AAA2306368D630FDDEBC1FDFCDF18586393D8 (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ___0_q, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = ___0_q;
		__this->____q_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____q_0), (void*)L_0);
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_1 = __this->____q_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_5;
		__this->____version_2 = L_2;
		__this->____index_1 = 0;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_3 = __this->____q_0;
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3->____array_0;
		__this->____currentElement_3 = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)(RuntimeObject*)L_4);
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_5 = __this->____q_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->____size_3;
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		__this->____index_1 = (-1);
	}

IL_004a:
	{
		return;
	}
}
// System.Object System.Collections.Queue/QueueEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueEnumerator_Clone_m9A6EB2B1F905B3CE04B6DFFFB28848CF0CC741F9 (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueEnumerator_MoveNext_m81FC4568198C6B9B866F32938BB972F62003B884 (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_1 = __this->____q_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_5;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueueEnumerator_MoveNext_m81FC4568198C6B9B866F32938BB972F62003B884_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = __this->____index_1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_5 = __this->____q_0;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____array_0;
		__this->____currentElement_3 = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)(RuntimeObject*)L_6);
		return (bool)0;
	}

IL_003a:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_7 = __this->____q_0;
		int32_t L_8 = __this->____index_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = Queue_GetElement_m2DDA15A3A9D73E3CB798BEBEEFA13B59FC9FE1F1(L_7, L_8, NULL);
		__this->____currentElement_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_9);
		int32_t L_10 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = __this->____index_1;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_12 = __this->____q_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->____size_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		__this->____index_1 = (-1);
	}

IL_0079:
	{
		return (bool)1;
	}
}
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueEnumerator_get_Current_mCCBFFF155BA2BB78C2965260C96BCFDCBA860E6C (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentElement_3;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_1 = __this->____q_0;
		NullCheck(L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1->____array_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3 = __this->____index_1;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueueEnumerator_get_Current_mCCBFFF155BA2BB78C2965260C96BCFDCBA860E6C_RuntimeMethod_var)));
	}

IL_0026:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueueEnumerator_get_Current_mCCBFFF155BA2BB78C2965260C96BCFDCBA860E6C_RuntimeMethod_var)));
	}

IL_0031:
	{
		RuntimeObject* L_6 = __this->____currentElement_3;
		return L_6;
	}
}
// System.Void System.Collections.Queue/QueueEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueEnumerator_Reset_mD77CF947A155EA2626AC9EBF9DA1C0C8B3A3947D (QueueEnumerator_tA454AC08FDA03FCE3C9F57238527F1E666384DED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_1 = __this->____q_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_5;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueueEnumerator_Reset_mD77CF947A155EA2626AC9EBF9DA1C0C8B3A3947D_RuntimeMethod_var)));
	}

IL_001e:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_4 = __this->____q_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->____size_3;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		__this->____index_1 = (-1);
		goto IL_003b;
	}

IL_0034:
	{
		__this->____index_1 = 0;
	}

IL_003b:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_6 = __this->____q_0;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6->____array_0;
		__this->____currentElement_3 = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)(RuntimeObject*)L_7);
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
// System.Void System.Collections.Stack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m4E3FE5A70C400B82DAB9E38E61A934E4E4DE01A7 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->____array_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_0);
		__this->____size_1 = 0;
		__this->____version_2 = 0;
		return;
	}
}
// System.Void System.Collections.Stack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, int32_t ___0_initialCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_initialCapacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A09185860153B4BC6DD6BAFD7F3988481D6646F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_2 = ___0_initialCapacity;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		___0_initialCapacity = ((int32_t)10);
	}

IL_0023:
	{
		int32_t L_3 = ___0_initialCapacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->____array_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_4);
		__this->____size_1 = 0;
		__this->____version_2 = 0;
		return;
	}
}
// System.Int32 System.Collections.Stack::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_get_Count_m055BAF05AD795275B6B4BF41CB72350B65966F42 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Object System.Collections.Stack::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_get_SyncRoot_m82CE43D1A6B9FB5DE7ED43EF4639683A394C2F0D (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_3);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_3;
		return L_4;
	}
}
// System.Void System.Collections.Stack::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_Clear_m072E156916E3979C871855E94D9E174C5720F1FF (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____array_0;
		int32_t L_1 = __this->____size_1;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_1, NULL);
		__this->____size_1 = 0;
		int32_t L_2 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
// System.Object System.Collections.Stack::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_Clone_mDB477E4CD7604E77E2BB1FCB632CFFCE78B9909C (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_1 = (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47*)il2cpp_codegen_object_new(Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A(L_1, L_0, NULL);
		V_0 = L_1;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_2 = V_0;
		int32_t L_3 = __this->____size_1;
		NullCheck(L_2);
		L_2->____size_1 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array_0;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_5 = V_0;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____array_0;
		int32_t L_7 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_8 = V_0;
		int32_t L_9 = __this->____version_2;
		NullCheck(L_8);
		L_8->____version_2 = L_9;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeArray* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___1_index;
		int32_t L_10 = __this->____size_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_0056:
	{
		V_0 = 0;
		RuntimeArray* L_12 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_12, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_007e;
	}

IL_0064:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		int32_t L_15 = V_0;
		int32_t L_16 = ___1_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____array_0;
		int32_t L_18 = __this->____size_1;
		int32_t L_19 = V_0;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		RuntimeObject* L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_21);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, L_16))), (RuntimeObject*)L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007e:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->____size_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0064;
		}
	}
	{
		return;
	}

IL_0088:
	{
		RuntimeArray* L_25 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = __this->____array_0;
		int32_t L_27 = __this->____size_1;
		int32_t L_28 = V_0;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, L_28)), 1));
		RuntimeObject* L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_0;
		int32_t L_32 = ___1_index;
		NullCheck(L_25);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_25, L_30, ((int32_t)il2cpp_codegen_add(L_31, L_32)), NULL);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a6:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = __this->____size_1;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0088;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_GetEnumerator_mB4CE45FB1D15BF08D44D544F6C5E9BD0EC2ECE51 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* L_0 = (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522*)il2cpp_codegen_object_new(StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872(L_0, __this, NULL);
		return L_0;
	}
}
// System.Object System.Collections.Stack::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0_RuntimeMethod_var)));
	}

IL_0013:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		int32_t L_3 = __this->____size_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Object System.Collections.Stack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array_0;
		int32_t L_4 = __this->____size_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size_1 = L_5;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array_0;
		int32_t L_10 = __this->____size_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, NULL);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)NULL);
		return L_8;
	}
}
// System.Void System.Collections.Stack::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_Push_m1C40D68127367AAD24A0B246B1A51AAEC8DA149A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array_0;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		__this->____array_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_7);
	}

IL_003b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array_0;
		int32_t L_9 = __this->____size_1;
		V_1 = L_9;
		int32_t L_10 = V_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = ___0_obj;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject*)L_12);
		int32_t L_13 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
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
// System.Void System.Collections.Stack/StackEnumerator::.ctor(System.Collections.Stack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* ___0_stack, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_0 = ___0_stack;
		__this->____stack_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_0), (void*)L_0);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_1 = __this->____stack_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		__this->____version_2 = L_2;
		__this->____index_1 = ((int32_t)-2);
		__this->____currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)NULL);
		return;
	}
}
// System.Object System.Collections.Stack/StackEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackEnumerator_Clone_m5DEB8385FE52D4FCA935223B76F8AD67850FA8CE (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.Stack/StackEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->____version_2;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_1 = __this->____stack_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = __this->____index_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0063;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_5 = __this->____stack_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->____size_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = __this->____index_1;
		int32_t L_8 = ((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B4_0 = L_8;
		if (!L_8)
		{
			G_B5_0 = L_8;
			goto IL_0062;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_9 = __this->____stack_0;
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____array_0;
		int32_t L_11 = __this->____index_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->____currentElement_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_13);
		G_B5_0 = G_B4_0;
	}

IL_0062:
	{
		return (bool)G_B5_0;
	}

IL_0063:
	{
		int32_t L_14 = __this->____index_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_006e:
	{
		int32_t L_15 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int32_t L_16 = V_0;
		__this->____index_1 = L_16;
		int32_t L_17 = V_0;
		int32_t L_18 = ((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B9_0 = L_18;
		if (!L_18)
		{
			G_B10_0 = L_18;
			goto IL_00a1;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_19 = __this->____stack_0;
		NullCheck(L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19->____array_0;
		int32_t L_21 = __this->____index_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->____currentElement_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_23);
		return (bool)G_B9_0;
	}

IL_00a1:
	{
		__this->____currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)NULL);
		return (bool)G_B10_0;
	}
}
// System.Object System.Collections.Stack/StackEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_2 = __this->____index_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var)));
	}

IL_0029:
	{
		RuntimeObject* L_4 = __this->____currentElement_3;
		return L_4;
	}
}
// System.Void System.Collections.Stack/StackEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_1 = __this->____stack_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->____index_1 = ((int32_t)-2);
		__this->____currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)NULL);
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
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral461B901954DA68B031564E85615378AE7FACBEA9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_3 = ___0_capacity;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_4);
		return;
	}

IL_0033:
	{
		int32_t L_5 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____items_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_6);
		return;
	}
}
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_c;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeObject* L_2 = ___0_c;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_5);
		return;
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->____items_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_7);
		RuntimeObject* L_8 = ___0_c;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(28 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, __this, L_8);
		return;
	}
}
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size_1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		int32_t L_11 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_004c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		__this->____items_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_12);
		return;
	}

IL_0054:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____items_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_13);
	}

IL_0060:
	{
		return;
	}
}
// System.Int32 System.Collections.ArrayList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_get_Count_m0C8A956B9AADFEF064360B3A8EDF25487A00B62B (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_get_IsFixedSize_mC6BB8129ECB203917DD0F1E205F339DFA923C54C (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_get_IsReadOnly_m5D17B1E11EA4CEBBDD7A7D7DC9CE4D8ACDF8F8D4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object System.Collections.ArrayList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_get_SyncRoot_mF2A9D7F8C12B832BE65E0EABB4DD53F916469482 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_3);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_3;
		return L_4;
	}
}
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var)));
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		int32_t L_5 = ___0_index;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784_RuntimeMethod_var)));
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		int32_t L_5 = ___0_index;
		RuntimeObject* L_6 = ___1_value;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_6);
		int32_t L_7 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// System.Int32 System.Collections.ArrayList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_Add_mDE1DE6105251401C1C54A9E1B9423CC258F4B370 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size_1;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_0;
		int32_t L_4 = __this->____size_1;
		RuntimeObject* L_5 = ___0_value;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_AddRange_m2D5837BD97F926C79820D9E4F1ACAE8651BDA89F (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_c, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		RuntimeObject* L_1 = ___0_c;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(36 /* System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection) */, __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ArrayList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Clear_mC2EFEE814314A2BB15316852444B6F5877F5DA07 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		int32_t L_2 = __this->____size_1;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size_1 = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Object System.Collections.ArrayList::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_Clone_m4F7BE074DFF28EA5E8D8076A67AFAD53949212C4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_1, L_0, NULL);
		V_0 = L_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		int32_t L_3 = __this->____size_1;
		NullCheck(L_2);
		L_2->____size_1 = L_3;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		int32_t L_5 = __this->____version_2;
		NullCheck(L_4);
		L_4->____version_2 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____items_0;
		int32_t L_9 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = V_0;
		return L_10;
	}
}
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_Contains_m1892F05118EF9C353954B020324CFCACA77434F4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		V_1 = 0;
		goto IL_0046;
	}

IL_0026:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RuntimeObject* L_16 = ___0_item;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0046:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->____size_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5_RuntimeMethod_var)));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		RuntimeArray* L_5 = ___0_array;
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items_0;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items_0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_0;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(20 /* System.Void System.Collections.ArrayList::set_Capacity(System.Int32) */, __this, L_8);
	}

IL_003d:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_GetEnumerator_m805139F78BF3FEAE1E5C64339010BFE215EEC208 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* L_0 = (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA*)il2cpp_codegen_object_new(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_IndexOf_m43C4451177F92C838C7D4D95B06A27785F919760 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items_0;
		RuntimeObject* L_1 = ___0_value;
		int32_t L_2 = __this->____size_1;
		int32_t L_3;
		L_3 = Array_IndexOf_mA7DFA2E913CA86E09777E3E8693C98459803E38D((RuntimeArray*)L_0, L_1, 0, L_2, NULL);
		return L_3;
	}
}
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral916FA9BB612A639C6BF76F616B11B2D1BC0E68F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items_0;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->____size_1;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
	}

IL_003b:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		int32_t L_10 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items_0;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size_1;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0061:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____items_0;
		int32_t L_16 = ___0_index;
		RuntimeObject* L_17 = ___1_value;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		int32_t L_18 = __this->____size_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_index, RuntimeObject* ___1_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_c;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size_1;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___1_c;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_9 = __this->____size_1;
		int32_t L_10 = V_0;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size_1;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items_0;
		int32_t L_14 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____items_0;
		int32_t L_16 = ___0_index;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->____size_1;
		int32_t L_19 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, L_14, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
	}

IL_006f:
	{
		int32_t L_20 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_1 = L_21;
		RuntimeObject* L_22 = ___1_c;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_1;
		NullCheck(L_22);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_22, (RuntimeArray*)L_23, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = __this->____items_0;
		int32_t L_26 = ___0_index;
		NullCheck((RuntimeArray*)L_24);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_24, (RuntimeArray*)L_25, L_26, NULL);
		int32_t L_27 = __this->____size_1;
		int32_t L_28 = V_0;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		int32_t L_29 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a7:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Remove_m3B0F41422C022DB515CA68B086B0E075D5819BC2 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(34 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = __this->____size_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items_0;
		int32_t L_8 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size_1;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0051:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items_0;
		int32_t L_14 = __this->____size_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, NULL);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)NULL);
		int32_t L_15 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// System.Object[] System.Collections.ArrayList::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ArrayList_ToArray_m3FA9DC2B8EB238BB7895EDEAD45B0D69B1CAC9F5 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
// System.Array System.Collections.ArrayList::ToArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray* V_0 = NULL;
	{
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B_RuntimeMethod_var)));
	}

IL_0014:
	{
		Type_t* L_3 = ___0_type;
		int32_t L_4 = __this->____size_1;
		RuntimeArray* L_5;
		L_5 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_3, L_4, NULL);
		V_0 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items_0;
		RuntimeArray* L_7 = V_0;
		int32_t L_8 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, L_7, 0, L_8, NULL);
		RuntimeArray* L_9 = V_0;
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
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___0_list;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		__this->____index_1 = (-1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___0_list;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		__this->____version_2 = L_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = ___0_list;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		__this->____isArrayList_4 = L_7;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_8);
		return;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_Clone_mB8CAE8F92F790B72257148726FF453F8833228AB (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->____isArrayList_4;
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_5 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->____list_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size_1;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0060;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8 = __this->____list_0;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____items_0;
		int32_t L_10 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		__this->____index_1 = L_11;
		int32_t L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->____currentElement_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_14);
		return (bool)1;
	}

IL_0060:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_15);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = __this->____list_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->____size_1;
		__this->____index_1 = L_17;
		return (bool)0;
	}

IL_007e:
	{
		int32_t L_18 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_19 = __this->____list_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_19);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_00b7;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = __this->____list_0;
		int32_t L_22 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		__this->____index_1 = L_23;
		int32_t L_24 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_21, L_24);
		__this->____currentElement_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_25);
		return (bool)1;
	}

IL_00b7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_26 = __this->____list_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		__this->____index_1 = L_27;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_28);
		return (bool)0;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____currentElement_3;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		RuntimeObject* L_2 = V_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->____index_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_0023:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____version_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD_RuntimeMethod_var)));
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_4);
		__this->____index_1 = (-1);
		return;
	}
}
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__cctor_mBEC9A7DC7A482D2F74844D36DB12A98BF18B5CEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5), (void*)L_0);
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
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF((&((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields*)il2cpp_codegen_static_fields_for(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var))->___s_serializationInfoTable_21), LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, 0, (1.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m9E0D56D6ADE284D20176076FACBFA1628DD8EE80 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, L_0, (1.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, float ___1_loadFactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t G_B10_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_001a:
	{
		float L_2 = ___1_loadFactor;
		if ((!(((float)L_2) >= ((float)(0.100000001f)))))
		{
			goto IL_002a;
		}
	}
	{
		float L_3 = ___1_loadFactor;
		if ((((float)L_3) <= ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}

IL_002a:
	{
		double L_4 = (0.10000000000000001);
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_4);
		double L_6 = (1.0);
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B)), L_5, L_7, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F)), L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_005b:
	{
		float L_10 = ___1_loadFactor;
		__this->____loadFactor_14 = ((float)il2cpp_codegen_multiply((0.720000029f), L_10));
		int32_t L_11 = ___0_capacity;
		float L_12 = __this->____loadFactor_14;
		V_0 = ((double)((float)(((float)L_11)/L_12)));
		double L_13 = V_0;
		if ((!(((double)L_13) > ((double)(2147483647.0)))))
		{
			goto IL_008f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_008f:
	{
		double L_15 = V_0;
		if ((((double)L_15) > ((double)(3.0))))
		{
			goto IL_009e;
		}
	}
	{
		G_B10_0 = 3;
		goto IL_00a5;
	}

IL_009e:
	{
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(il2cpp_codegen_cast_double_to_int<int32_t>(L_16), NULL);
		G_B10_0 = L_17;
	}

IL_00a5:
	{
		V_1 = G_B10_0;
		int32_t L_18 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->____buckets_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_19);
		float L_20 = __this->____loadFactor_14;
		int32_t L_21 = V_1;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_20, ((float)L_21))));
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, float ___1_loadFactor, RuntimeObject* ___2_equalityComparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		float L_1 = ___1_loadFactor;
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___2_equalityComparer;
		__this->____keycomparer_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)L_2);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_equalityComparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_equalityComparer;
		Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB(__this, 0, (1.0f), L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, RuntimeObject* ___1_equalityComparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		RuntimeObject* L_1 = ___1_equalityComparer;
		Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB(__this, L_0, (1.0f), L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD50422D7B9D147207A33AB5BDC0B7CE963A51056 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, __this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, int32_t ___1_hashsize, uint32_t* ___2_seed, uint32_t* ___3_incr, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(23 /* System.Int32 System.Collections.Hashtable::GetHash(System.Object) */, __this, L_0);
		V_0 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		uint32_t* L_2 = ___2_seed;
		uint32_t L_3 = V_0;
		*((int32_t*)L_2) = (int32_t)L_3;
		uint32_t* L_4 = ___3_incr;
		uint32_t* L_5 = ___2_seed;
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = ___1_hashsize;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Add_mF9DD33B30614D8CCA5392AE6D00A040A7F0F19D5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Object System.Collections.Hashtable::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_Clone_mB2563D44229924F89AE7F351E657CDF87CD7BF7B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		int32_t L_1 = __this->____count_11;
		RuntimeObject* L_2 = __this->____keycomparer_19;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		V_1 = L_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = V_1;
		int32_t L_5 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_4);
		il2cpp_codegen_memory_barrier();
		L_4->____version_15 = L_5;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = V_1;
		float L_7 = __this->____loadFactor_14;
		NullCheck(L_6);
		L_6->____loadFactor_14 = L_7;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_8 = V_1;
		NullCheck(L_8);
		L_8->____count_11 = 0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		NullCheck(L_9);
		V_2 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_006d;
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___key_0;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = V_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = V_1;
		RuntimeObject* L_18 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___val_1;
		NullCheck(L_17);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_21);
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_23 = V_1;
		return L_23;
	}
}
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_Contains_m096438B2D1B051BAF09EEA1BB6A590A12DC1CA12 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(18 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		V_2 = L_2;
		RuntimeObject* L_3 = ___0_key;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		NullCheck(L_7);
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = V_2;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = V_5;
		RuntimeObject* L_13 = L_12.___key_0;
		if (L_13)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_5;
		int32_t L_15 = L_14.___hash_coll_2;
		uint32_t L_16 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_15&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_16)))))
		{
			goto IL_006c;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_17 = V_5;
		RuntimeObject* L_18 = L_17.___key_0;
		RuntimeObject* L_19 = ___0_key;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_18, L_19);
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		int32_t L_21 = V_6;
		uint32_t L_22 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_23 = V_2;
		NullCheck(L_23);
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_21), ((int64_t)(uint64_t)L_22)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_24 = V_5;
		int32_t L_25 = L_24.___hash_coll_2;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_4 = L_27;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = V_2;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0090:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Hashtable::CopyKeys(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_0033;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeArray* L_8 = ___0_array;
		RuntimeObject* L_9 = V_2;
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = L_10;
		___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_8);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_9, L_11, NULL);
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_1 = L_13;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyEntries(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_004c;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___val_1;
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&V_3), L_8, L_11, NULL);
		RuntimeArray* L_12 = ___0_array;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13 = V_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
		RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16 = ___1_arrayIndex;
		int32_t L_17 = L_16;
		___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_15, L_17, NULL);
	}

IL_004c:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_1 = L_19;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAA2F88999132DA5422C607B25387A98089B3B06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_5 = ___1_arrayIndex;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeArray* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___1_arrayIndex;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.Collections.Hashtable::get_Count() */, __this);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_005b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = ___1_arrayIndex;
		Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B(__this, L_12, L_13, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyValues(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_003e;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeArray* L_8 = ___0_array;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___val_1;
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_8);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_11, L_13, NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_1 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		V_2 = L_2;
		RuntimeObject* L_3 = ___0_key;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		NullCheck(L_7);
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_003b:
	{
		int32_t L_8 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		V_7 = L_8;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_2;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		bool L_13 = __this->____isWriterInProgress_16;
		il2cpp_codegen_memory_barrier();
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = V_7;
		int32_t L_15 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_006e;
		}
	}

IL_0065:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_8), NULL);
		goto IL_003b;
	}

IL_006e:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_5;
		RuntimeObject* L_17 = L_16.___key_0;
		if (L_17)
		{
			goto IL_0079;
		}
	}
	{
		return NULL;
	}

IL_0079:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_18 = V_5;
		int32_t L_19 = L_18.___hash_coll_2;
		uint32_t L_20 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_19&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_20)))))
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_21 = V_5;
		RuntimeObject* L_22 = L_21.___key_0;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_22, L_23);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_25 = V_5;
		RuntimeObject* L_26 = L_25.___val_1;
		return L_26;
	}

IL_00a3:
	{
		int32_t L_27 = V_6;
		uint32_t L_28 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_29 = V_2;
		NullCheck(L_29);
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_27), ((int64_t)(uint64_t)L_28)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_30 = V_5;
		int32_t L_31 = L_30.___hash_coll_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_32 = V_4;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		V_4 = L_33;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_34 = V_2;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_00ca:
	{
		return NULL;
	}
}
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_mDF3D54BA5F202F104D31EFAE9065380FEF8859EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, L_2, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		NullCheck(L_0);
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_newsize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		__this->____occupancy_12 = 0;
		int32_t L_0 = ___0_newsize;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_005a;
	}

IL_0012:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = V_2;
		RuntimeObject* L_7 = L_6.___key_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_8 = V_2;
		RuntimeObject* L_9 = L_8.___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_10 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = V_2;
		int32_t L_12 = L_11.___hash_coll_2;
		V_3 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = V_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_2;
		RuntimeObject* L_15 = L_14.___key_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_2;
		RuntimeObject* L_17 = L_16.___val_1;
		int32_t L_18 = V_3;
		Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B(__this, L_13, L_15, L_17, L_18, NULL);
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005a:
	{
		int32_t L_20 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_10;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_22 = V_0;
		__this->____buckets_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_22);
		float L_23 = __this->____loadFactor_14;
		int32_t L_24 = ___0_newsize;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_23, ((float)L_24))));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_System_Collections_IEnumerable_GetEnumerator_m1E7D435C0370CE614C891A645773762D0D04EC86 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_GetEnumerator_mFDC4AC74F7AB0A9DBDFC66B6A4A4EFFC8E33A453 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_GetHash_m459113F6E61C0DB4A4C015283CD15653D518E05A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____keycomparer_19;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____keycomparer_19;
		RuntimeObject* L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___0_key;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		return L_5;
	}
}
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_KeyEquals_m95D23B7F952AA10E9127A936B01A64995ACE54F6 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_item, RuntimeObject* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		RuntimeObject* L_1 = ___0_item;
		if ((!(((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeObject* L_3 = ___1_key;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		RuntimeObject* L_4 = __this->____keycomparer_19;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = __this->____keycomparer_19;
		RuntimeObject* L_6 = ___0_item;
		RuntimeObject* L_7 = ___1_key;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}

IL_0027:
	{
		RuntimeObject* L_9 = ___0_item;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_10 = ___0_item;
		RuntimeObject* L_11 = ___1_key;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		return L_12;
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Keys_mA9014B9C2DC73105DF8D383EDD50438A82E67D10 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____keys_17;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* L_1 = (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77*)il2cpp_codegen_object_new(KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD(L_1, __this, NULL);
		__this->____keys_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_17), (void*)L_1);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____keys_17;
		return L_2;
	}
}
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_nvalue, bool ___2_add, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____count_11;
		int32_t L_3 = __this->____loadsize_13;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937(__this, NULL);
		goto IL_0047;
	}

IL_0029:
	{
		int32_t L_4 = __this->____occupancy_12;
		int32_t L_5 = __this->____loadsize_13;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->____count_11;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0047;
		}
	}
	{
		Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5(__this, NULL);
	}

IL_0047:
	{
		RuntimeObject* L_7 = ___0_key;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = __this->____buckets_10;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), (&V_0), (&V_1), NULL);
		V_2 = L_9;
		V_3 = 0;
		V_4 = (-1);
		uint32_t L_10 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_10;
		NullCheck(L_11);
		V_5 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
	}

IL_006c:
	{
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = __this->____buckets_10;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		RuntimeObject* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_17 = __this->____buckets_10;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hash_coll_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_20 = V_5;
		V_4 = L_20;
	}

IL_00a4:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_10;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		RuntimeObject* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key_0;
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = __this->____buckets_10;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		RuntimeObject* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_27))))
		{
			goto IL_015e;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = __this->____buckets_10;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___hash_coll_2;
		if (((int64_t)(((int64_t)L_30)&((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_015e;
		}
	}

IL_00f1:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_32 = V_4;
		V_5 = L_32;
	}

IL_00fa:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_33 = __this->____buckets_10;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_35 = ___1_nvalue;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___val_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___val_1), (void*)L_35);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		RuntimeObject* L_38 = ___0_key;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___key_0 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___key_0), (void*)L_38);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_39 = __this->____buckets_10;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t* L_41 = (&((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___hash_coll_2);
		int32_t* L_42 = L_41;
		int32_t L_43 = *((int32_t*)L_42);
		uint32_t L_44 = V_2;
		*((int32_t*)L_42) = (int32_t)((int32_t)(L_43|(int32_t)L_44));
		int32_t L_45 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_015e:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_46 = __this->____buckets_10;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hash_coll_2;
		uint32_t L_49 = V_2;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_48&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_49)))))
		{
			goto IL_01e8;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_50 = __this->____buckets_10;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_0;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_52, L_53);
		if (!L_54)
		{
			goto IL_01e8;
		}
	}
	{
		bool L_55 = ___2_add;
		if (!L_55)
		{
			goto IL_01bc;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_56 = __this->____buckets_10;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		RuntimeObject* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___key_0;
		RuntimeObject* L_59 = ___0_key;
		String_t* L_60;
		L_60 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D)), L_58, L_59, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_61);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_01bc:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_62 = __this->____buckets_10;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		RuntimeObject* L_64 = ___1_nvalue;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___val_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___val_1), (void*)L_64);
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_01e8:
	{
		int32_t L_65 = V_4;
		if ((!(((uint32_t)L_65) == ((uint32_t)(-1)))))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_66 = __this->____buckets_10;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___hash_coll_2;
		if ((((int32_t)L_68) < ((int32_t)0)))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_69 = __this->____buckets_10;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t* L_71 = (&((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hash_coll_2);
		int32_t* L_72 = L_71;
		int32_t L_73 = *((int32_t*)L_72);
		*((int32_t*)L_72) = (int32_t)((int32_t)(L_73|((int32_t)-2147483648LL)));
		int32_t L_74 = __this->____occupancy_12;
		__this->____occupancy_12 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_022b:
	{
		int32_t L_75 = V_5;
		uint32_t L_76 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_77 = __this->____buckets_10;
		NullCheck(L_77);
		V_5 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_75), ((int64_t)(uint64_t)L_76)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))));
		int32_t L_78 = V_3;
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		V_3 = L_79;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_80 = __this->____buckets_10;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) == ((int32_t)(-1))))
		{
			goto IL_02b9;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_82 = __this->____buckets_10;
		int32_t L_83 = V_4;
		NullCheck(L_82);
		RuntimeObject* L_84 = ___1_nvalue;
		((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->___val_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->___val_1), (void*)L_84);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_85 = __this->____buckets_10;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		RuntimeObject* L_87 = ___0_key;
		((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___key_0 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___key_0), (void*)L_87);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_88 = __this->____buckets_10;
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t* L_90 = (&((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___hash_coll_2);
		int32_t* L_91 = L_90;
		int32_t L_92 = *((int32_t*)L_91);
		uint32_t L_93 = V_2;
		*((int32_t*)L_91) = (int32_t)((int32_t)(L_92|(int32_t)L_93));
		int32_t L_94 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_02b9:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_95 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_95);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_95, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___0_newBuckets, RuntimeObject* ___1_key, RuntimeObject* ___2_nvalue, int32_t ___3_hashcode, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_hashcode;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = ___0_newBuckets;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1))))));
		uint32_t L_3 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = ___0_newBuckets;
		NullCheck(L_4);
		V_2 = ((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
	}

IL_0016:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_5 = ___0_newBuckets;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___key_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = ___0_newBuckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_11))))
		{
			goto IL_0065;
		}
	}

IL_0038:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = ___0_newBuckets;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		RuntimeObject* L_14 = ___2_nvalue;
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___val_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___val_1), (void*)L_14);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = ___0_newBuckets;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___1_key;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_0), (void*)L_17);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_18 = ___0_newBuckets;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t* L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hash_coll_2);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___3_hashcode;
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_22|L_23));
		return;
	}

IL_0065:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = ___0_newBuckets;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hash_coll_2;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = ___0_newBuckets;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t* L_29 = (&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hash_coll_2);
		int32_t* L_30 = L_29;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_31|((int32_t)-2147483648LL)));
		int32_t L_32 = __this->____occupancy_12;
		__this->____occupancy_12 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0097:
	{
		int32_t L_33 = V_2;
		uint32_t L_34 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_35 = ___0_newBuckets;
		NullCheck(L_35);
		V_2 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_33), ((int64_t)(uint64_t)L_34)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))));
		goto IL_0016;
	}
}
// System.Void System.Collections.Hashtable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_key;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_3 = __this->____buckets_10;
		NullCheck(L_3);
		uint32_t L_4;
		L_4 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (&V_0), (&V_1), NULL);
		V_2 = L_4;
		V_3 = 0;
		uint32_t L_5 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = __this->____buckets_10;
		NullCheck(L_6);
		V_5 = ((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
	}

IL_0035:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = V_4;
		int32_t L_12 = L_11.___hash_coll_2;
		uint32_t L_13 = V_2;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_12&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_13)))))
		{
			goto IL_0102;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_4;
		RuntimeObject* L_15 = L_14.___key_0;
		RuntimeObject* L_16 = ___0_key;
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_15, L_16);
		if (!L_17)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_18 = __this->____buckets_10;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t* L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hash_coll_2);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_22&((int32_t)-2147483648LL)));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_23 = __this->____buckets_10;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hash_coll_2;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_26 = __this->____buckets_10;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = __this->____buckets_10;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key_0 = (RuntimeObject*)L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key_0), (void*)(RuntimeObject*)L_28);
		goto IL_00d1;
	}

IL_00be:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_29 = __this->____buckets_10;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key_0), (void*)NULL);
	}

IL_00d1:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_31 = __this->____buckets_10;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___val_1), (void*)NULL);
		int32_t L_33 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_0102:
	{
		int32_t L_34 = V_5;
		uint32_t L_35 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
		NullCheck(L_36);
		V_5 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_34), ((int64_t)(uint64_t)L_35)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_37 = V_4;
		int32_t L_38 = L_37.___hash_coll_2;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		V_3 = L_40;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_41 = __this->____buckets_10;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0035;
		}
	}

IL_0131:
	{
		return;
	}
}
// System.Object System.Collections.Hashtable::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_SyncRoot_mED003D6ED8C083913A6EC414AB950AE4EE42ED4F (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_20;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_20);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_20;
		return L_4;
	}
}
// System.Int32 System.Collections.Hashtable::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_get_Count_mA7BE8DF97C45F9046C93AC8F0C57EA31F1257999 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_11;
		return L_0;
	}
}
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* V_6 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(27 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, __this);
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0169:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0172;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0172:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				int32_t L_6 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				V_2 = L_6;
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___0_info;
				float L_8 = __this->____loadFactor_14;
				NullCheck(L_7);
				SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, L_8, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
				int32_t L_10 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_9, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_10, NULL);
				RuntimeObject* L_11 = __this->____keycomparer_19;
				V_3 = L_11;
				RuntimeObject* L_12 = V_3;
				if (L_12)
				{
					goto IL_0084_1;
				}
			}
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_13 = ___0_info;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				NullCheck(L_13);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_13, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL, L_15, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				NullCheck(L_16);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, NULL, L_18, NULL);
				goto IL_00e4_1;
			}

IL_0084_1:
			{
				RuntimeObject* L_19 = V_3;
				if (!((CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)IsInstSealed((RuntimeObject*)L_19, CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var)))
				{
					goto IL_00ce_1;
				}
			}
			{
				RuntimeObject* L_20 = V_3;
				V_6 = ((CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)IsInstSealed((RuntimeObject*)L_20, CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var));
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_21 = ___0_info;
				CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_22 = V_6;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				NullCheck(L_21);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_21, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_23, L_25, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = ___0_info;
				CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_27 = V_6;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline(L_27, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				NullCheck(L_26);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_26, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, L_28, L_30, NULL);
				goto IL_00e4_1;
			}

IL_00ce_1:
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_31 = ___0_info;
				RuntimeObject* L_32 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				NullCheck(L_31);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_31, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_32, L_34, NULL);
			}

IL_00e4_1:
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_35 = ___0_info;
				bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
				NullCheck(L_36);
				NullCheck(L_35);
				SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_35, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, ((int32_t)(((RuntimeArray*)L_36)->max_length)), NULL);
				int32_t L_37 = __this->____count_11;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_37);
				V_4 = L_38;
				int32_t L_39 = __this->____count_11;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_39);
				V_5 = L_40;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_4;
				Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4(__this, (RuntimeArray*)L_41, 0, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_5;
				Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF(__this, (RuntimeArray*)L_42, 0, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_43 = ___0_info;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				NullCheck(L_43);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_43, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, (RuntimeObject*)L_44, L_46, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_47 = ___0_info;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
				Type_t* L_50;
				L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
				NullCheck(L_47);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_47, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, (RuntimeObject*)L_48, L_50, NULL);
				int32_t L_51 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				int32_t L_52 = V_2;
				if ((((int32_t)L_51) == ((int32_t)L_52)))
				{
					goto IL_0167_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_53 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_53);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var)));
			}

IL_0167_1:
			{
				goto IL_0173;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0173:
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_6 = NULL;
	String_t* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_1;
		L_1 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_1, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_4 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0025:
	{
		V_1 = 0;
		V_2 = (RuntimeObject*)NULL;
		V_3 = (RuntimeObject*)NULL;
		V_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		V_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_6;
		L_6 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_5, NULL);
		V_6 = L_6;
		goto IL_020e;
	}

IL_003e:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_7 = V_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(L_7, NULL);
		V_7 = L_8;
		String_t* L_9 = V_7;
		uint32_t L_10;
		L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886(L_9, NULL);
		V_8 = L_10;
		uint32_t L_11 = V_8;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1613443821)))))
		{
			goto IL_007f;
		}
	}
	{
		uint32_t L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)891156946))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_13 = V_8;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1228509323))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_14 = V_8;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1613443821))))
		{
			goto IL_0125;
		}
	}
	{
		goto IL_020e;
	}

IL_007f:
	{
		uint32_t L_15 = V_8;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-1810657867)))))
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_16 = V_8;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1924324773))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_8;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1810657867))))
		{
			goto IL_010f;
		}
	}
	{
		goto IL_020e;
	}

IL_00a2:
	{
		uint32_t L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-938822048))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_19 = V_8;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)-811751054)))))
		{
			goto IL_020e;
		}
	}
	{
		String_t* L_20 = V_7;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, NULL);
		if (L_21)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_020e;
	}

IL_00cd:
	{
		String_t* L_22 = V_7;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		if (L_23)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020e;
	}

IL_00e3:
	{
		String_t* L_24 = V_7;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, NULL);
		if (L_25)
		{
			goto IL_0178;
		}
	}
	{
		goto IL_020e;
	}

IL_00f9:
	{
		String_t* L_26 = V_7;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL);
		if (L_27)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_020e;
	}

IL_010f:
	{
		String_t* L_28 = V_7;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, NULL);
		if (L_29)
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_020e;
	}

IL_0125:
	{
		String_t* L_30 = V_7;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, NULL);
		if (L_31)
		{
			goto IL_01d4;
		}
	}
	{
		goto IL_020e;
	}

IL_013b:
	{
		String_t* L_32 = V_7;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, NULL);
		if (L_33)
		{
			goto IL_01f2;
		}
	}
	{
		goto IL_020e;
	}

IL_0151:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_34 = V_0;
		NullCheck(L_34);
		float L_35;
		L_35 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_34, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, NULL);
		__this->____loadFactor_14 = L_35;
		goto IL_020e;
	}

IL_0167:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_36, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_1 = L_37;
		goto IL_020e;
	}

IL_0178:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		NullCheck(L_38);
		RuntimeObject* L_41;
		L_41 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_38, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_40, NULL);
		__this->____keycomparer_19 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_41, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		goto IL_020e;
	}

IL_019a:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		NullCheck(L_42);
		RuntimeObject* L_45;
		L_45 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_42, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_44, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_45, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01b7:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_46);
		RuntimeObject* L_49;
		L_49 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_46, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, L_48, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01d4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_50 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_50, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, L_52, NULL);
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_53, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01f2:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		NullCheck(L_54);
		RuntimeObject* L_57;
		L_57 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_54, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, L_56, NULL);
		V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_57, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
	}

IL_020e:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_58 = V_6;
		NullCheck(L_58);
		bool L_59;
		L_59 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_58, NULL);
		if (L_59)
		{
			goto IL_003e;
		}
	}
	{
		float L_60 = __this->____loadFactor_14;
		int32_t L_61 = V_1;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_60, ((float)L_61))));
		RuntimeObject* L_62 = __this->____keycomparer_19;
		if (L_62)
		{
			goto IL_0245;
		}
	}
	{
		RuntimeObject* L_63 = V_2;
		if (L_63)
		{
			goto IL_0238;
		}
	}
	{
		RuntimeObject* L_64 = V_3;
		if (!L_64)
		{
			goto IL_0245;
		}
	}

IL_0238:
	{
		RuntimeObject* L_65 = V_3;
		RuntimeObject* L_66 = V_2;
		CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_67 = (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)il2cpp_codegen_object_new(CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		CompatibleComparer__ctor_mD070CC744D2BA684391418B77E61E24F8E735492(L_67, L_65, L_66, NULL);
		__this->____keycomparer_19 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)L_67);
	}

IL_0245:
	{
		int32_t L_68 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_69 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_68);
		__this->____buckets_10 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_69);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = V_4;
		if (L_70)
		{
			goto IL_0260;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_71 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_71);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_71, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0260:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = V_5;
		if (L_72)
		{
			goto IL_026f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_73 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_73);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_026f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = V_4;
		NullCheck(L_74);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = V_5;
		NullCheck(L_75);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_0284;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_76 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_76, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AF22EA5A6A5A696D2456E9227B5745A698E05A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0284:
	{
		V_9 = 0;
		goto IL_02b2;
	}

IL_0289:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = V_4;
		int32_t L_78 = V_9;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		RuntimeObject* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		if (L_80)
		{
			goto IL_029b;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_81 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_81);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_81, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A42FCEEAC1D98507D8329C4992B135D890D96AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_029b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = V_4;
		int32_t L_83 = V_9;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = V_5;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		RuntimeObject* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_85, L_89, (bool)1, NULL);
		int32_t L_90 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_02b2:
	{
		int32_t L_91 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = V_4;
		NullCheck(L_92);
		if ((((int32_t)L_91) < ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)))))
		{
			goto IL_0289;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_93, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____version_15 = L_94;
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_95;
		L_95 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		NullCheck(L_95);
		bool L_96;
		L_96 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_95, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
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
// System.Void System.Collections.Hashtable/KeyCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_hashtable, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___0_hashtable;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Hashtable/KeyCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8 (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___1_arrayIndex;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeArray* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___1_arrayIndex;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____hashtable_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->____count_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_11)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_005b:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13 = __this->____hashtable_0;
		RuntimeArray* L_14 = ___0_array;
		int32_t L_15 = ___1_arrayIndex;
		NullCheck(L_13);
		Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4(L_13, L_14, L_15, NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable/KeyCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_GetEnumerator_mB5D64FA7602FCDC338B3B14FAB7728BC7BFF1B66 (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_1 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_1, L_0, 1, NULL);
		return L_1;
	}
}
// System.Object System.Collections.Hashtable/KeyCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_get_SyncRoot_m6F13C08AEF47BF3A079CE95E1E0CC3B8E205C30E (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(27 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.Hashtable/KeyCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mE0D7DA771777A99DBC8D6C477465529BCB0DBC4B (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count_11;
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
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_hashtable, int32_t ___1_getObjRetType, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___0_hashtable;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___0_hashtable;
		NullCheck(L_1);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = L_1->____buckets_10;
		NullCheck(L_2);
		__this->____bucket_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = ___0_hashtable;
		NullCheck(L_3);
		int32_t L_4 = L_3->____version_15;
		il2cpp_codegen_memory_barrier();
		__this->____version_2 = L_4;
		__this->____current_3 = (bool)0;
		int32_t L_5 = ___1_getObjRetType;
		__this->____getObjectRetType_4 = L_5;
		return;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_Clone_m85F090BFD61509B1F8B16A10E0DFB78606C96873 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentKey_5;
		return L_2;
	}
}
// System.Boolean System.Collections.Hashtable/HashtableEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = __this->____version_2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____hashtable_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_008c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = __this->____bucket_1;
		__this->____bucket_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____hashtable_0;
		NullCheck(L_5);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = L_5->____buckets_10;
		int32_t L_7 = __this->____bucket_1;
		NullCheck(L_6);
		RuntimeObject* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___key_0;
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = __this->____hashtable_0;
		NullCheck(L_11);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = L_11->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_12)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		__this->____currentKey_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentKey_5), (void*)L_13);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = __this->____hashtable_0;
		NullCheck(L_14);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = L_14->____buckets_10;
		int32_t L_16 = __this->____bucket_1;
		NullCheck(L_15);
		RuntimeObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___val_1;
		__this->____currentValue_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentValue_6), (void*)L_17);
		__this->____current_3 = (bool)1;
		return (bool)1;
	}

IL_008c:
	{
		int32_t L_18 = __this->____bucket_1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		__this->____current_3 = (bool)0;
		return (bool)0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Hashtable/HashtableEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentKey_5;
		RuntimeObject* L_3 = __this->____currentValue_6;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____currentKey_5;
		return L_3;
	}

IL_0023:
	{
		int32_t L_4 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = __this->____currentValue_6;
		return L_5;
	}

IL_0033:
	{
		RuntimeObject* L_6 = __this->____currentKey_5;
		RuntimeObject* L_7 = __this->____currentValue_6;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentValue_6;
		return L_2;
	}
}
// System.Void System.Collections.Hashtable/HashtableEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____hashtable_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876_RuntimeMethod_var)));
	}

IL_0020:
	{
		__this->____current_3 = (bool)0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____hashtable_0;
		NullCheck(L_4);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_5 = L_4->____buckets_10;
		NullCheck(L_5);
		__this->____bucket_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		__this->____currentKey_5 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentKey_5), (void*)NULL);
		__this->____currentValue_6 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentValue_6), (void*)NULL);
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
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, int32_t ___0_numOfBuckets, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(__this, 3, ((int64_t)(-1)), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_numOfBuckets;
		EventSource_WriteEvent_m8609472BD078A398CF4CA9DBF4BBDA1C454096A6(__this, 3, L_1, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__cctor_mD453FA4DF10AC2B540573340C4BA29CC5995643A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999*)il2cpp_codegen_object_new(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D(L_0, NULL);
		((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_1), (void*)L_0);
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
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, _stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m546AE2CB4D7CBD6EA8E321CD8F1AE3D53ACFD29C (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
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
// System.String System.Collections.Generic.KeyValuePair::PairToString(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_PairToString_mBD93B04A82B9F554147E6FF8E6B90C5480B38646 (RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)91), NULL);
		RuntimeObject* L_3 = ___0_key;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		RuntimeObject* L_5 = ___0_key;
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_5, NULL);
	}

IL_001c:
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RuntimeObject* L_9 = ___1_value;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		RuntimeObject* L_11 = ___1_value;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_11, NULL);
	}

IL_0033:
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)93), NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16;
		L_16 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_15, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Collections.Generic.IntrospectiveSortUtilities::FloorLog2PlusOne(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D (int32_t ___0_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_n;
		___0_n = ((int32_t)(L_1/2));
	}

IL_000d:
	{
		int32_t L_2 = ___0_n;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Collections.Generic.IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF (RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		String_t* L_1;
		L_1 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064)), L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF_RuntimeMethod_var)));
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
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m4ABF0097A06636549CB7BB4ED696CB0D3B98563E (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___0_x, uint8_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_x;
		uint8_t L_1 = ___1_y;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_m019849C226C9A0E22213E1EC02550F6739CFCF3B (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_b), NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::IndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___2_startIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___3_count;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6;
		L_6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0041:
	{
		int32_t L_8 = ___3_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___2_startIndex;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_11;
		L_11 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_13 = ___3_count;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		return (-1);
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_006f;
		}
	}

IL_006a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0078;
	}

IL_006f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_17);
		V_0 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0078:
	{
		uint8_t* L_18 = V_0;
		uint8_t L_19 = ___1_value;
		int32_t L_20 = ___2_startIndex;
		int32_t L_21 = ___3_count;
		int32_t L_22;
		L_22 = Buffer_IndexOfByte_mF43902211DC955885C828233F0D46BAC239B0ECC(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::LastIndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_LastIndexOf_m8A5A08F15AC6060CA70CC8AC280C32ADFBB749ED (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = ___2_startIndex;
		V_1 = L_2;
		goto IL_0017;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_array;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = ___1_value;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0013:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m9B113E83537F9F939D54627EAFAF81E463C1A468 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)((ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)IsInstClass((RuntimeObject*)L_0, ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_mC71878E73D9E43C3DA44DA3BD0FD34A1337556E7 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.ByteEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEqualityComparer__ctor_m6A7EE7FCB7B4275069DC078346C35ED9B6F71AAE (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD(__this, EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
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
// System.Int32 System.Collections.Generic.InternalStringComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_GetHashCode_m4EC162DE81A1F8235C20BD7ADFD2ED0BB12FD7C6 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___0_obj, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_obj;
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
		String_t* L_1 = ___0_obj;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.InternalStringComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalStringComparer_Equals_m788524086ADC25F1E939088DF22FF301DF3018B0 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___0_x, String_t* ___1_y, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___1_y;
		return (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		String_t* L_2 = ___0_x;
		String_t* L_3 = ___1_y;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		String_t* L_4 = ___0_x;
		String_t* L_5 = ___1_y;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.InternalStringComparer::IndexOf(System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_IndexOf_mE69D32A9D7690C656336174756E70C54C457067D (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, String_t* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___2_startIndex;
		V_1 = L_2;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_array;
		int32_t L_4 = V_1;
		String_t* L_5;
		L_5 = IL2CPP_ARRAY_UNSAFE_LOAD(L_3, L_4);
		String_t* L_6 = ___1_value;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0009;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Generic.InternalStringComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalStringComparer__ctor_m06A4CE888A27763DE6BD47DD2C2CF45C68736108 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C(__this, EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
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
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71943296949CB7F897DB641231533D430DE14FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130((&L_0), ((int32_t)140948152), (int16_t)((int32_t)23791), (int16_t)((int32_t)23993), (uint8_t)((int32_t)38), (uint8_t)((int32_t)18), (uint8_t)((int32_t)12), (uint8_t)((int32_t)15), (uint8_t)((int32_t)253), (uint8_t)((int32_t)129), (uint8_t)((int32_t)74), (uint8_t)((int32_t)68), /*hidden argument*/NULL);
		EventSource__ctor_mA6FB74138AB52C540333000C0CEAD367D5072083(__this, L_0, _stringLiteral71943296949CB7F897DB641231533D430DE14FF8, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, int32_t ___3_bucketId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var);
		intptr_t L_1 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_0));
		int8_t* L_2 = (int8_t*) (L_1 ? alloca(L_1) : NULL);
		memset(L_2, 0, L_1);
		V_0 = (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)(L_2);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_3 = V_0;
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_3, 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_4 = V_0;
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___0_bufferId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_4, L_5, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_6 = V_0;
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_6, 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_7 = V_0;
		uint32_t L_8 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_9 = V_0;
		uint32_t L_10 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_11;
		L_11 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___1_bufferSize)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10)), L_11, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_12 = V_0;
		uint32_t L_13 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)L_13)), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_14 = V_0;
		uint32_t L_15 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_15)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_16 = V_0;
		uint32_t L_17 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___2_poolId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_17)))), L_18, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_19 = V_0;
		uint32_t L_20 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_20)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_21 = V_0;
		uint32_t L_22 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_22)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_23 = V_0;
		uint32_t L_24 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___3_bucketId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_24)))), L_25, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_26 = V_0;
		uint32_t L_27 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_27)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_28 = V_0;
		EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631(__this, 1, 4, L_28, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, int32_t ___3_bucketId, int32_t ___4_reason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		if ((uintptr_t)((uintptr_t)5) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var);
		intptr_t L_1 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)5), (int32_t)L_0));
		int8_t* L_2 = (int8_t*) (L_1 ? alloca(L_1) : NULL);
		memset(L_2, 0, L_1);
		V_0 = (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)(L_2);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_3 = V_0;
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_3, 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_4 = V_0;
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___0_bufferId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_4, L_5, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_6 = V_0;
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_6, 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_7 = V_0;
		uint32_t L_8 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_9 = V_0;
		uint32_t L_10 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_11;
		L_11 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___1_bufferSize)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10)), L_11, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_12 = V_0;
		uint32_t L_13 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)L_13)), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_14 = V_0;
		uint32_t L_15 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_15)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_16 = V_0;
		uint32_t L_17 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___2_poolId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_17)))), L_18, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_19 = V_0;
		uint32_t L_20 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_20)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_21 = V_0;
		uint32_t L_22 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_22)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_23 = V_0;
		uint32_t L_24 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___3_bucketId)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_24)))), L_25, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_26 = V_0;
		uint32_t L_27 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_27)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_28 = V_0;
		uint32_t L_29 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_29)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_30 = V_0;
		uint32_t L_31 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_32;
		L_32 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___4_reason)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_31)))), L_32, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_33 = V_0;
		uint32_t L_34 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_34)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_35 = V_0;
		EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631(__this, 2, 5, L_35, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferReturned_m077FAF26488263C1FBFA74CF54A5B3966BB87D55 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bufferId;
		int32_t L_1 = ___1_bufferSize;
		int32_t L_2 = ___2_poolId;
		EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F(__this, 3, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferTrimmed(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bufferId;
		int32_t L_1 = ___1_bufferSize;
		int32_t L_2 = ___2_poolId;
		EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F(__this, 4, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferTrimPoll(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimPoll_mCB607EF91966BDFABAE587B19148849ACC5A45FA (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_milliseconds, int32_t ___1_pressure, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_milliseconds;
		int32_t L_1 = ___1_pressure;
		EventSource_WriteEvent_mF3DADFC0459BB9C89B17BCECE51A57C3F4ED7D88(__this, 5, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__cctor_m9E459A789B6EB88AFC218C00FCEE8FE321380663 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_0 = (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888*)il2cpp_codegen_object_new(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E(L_0, NULL);
		((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_1), (void*)L_0);
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
// System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_SelectBucketIndex_m9B3AC5D1921CE4B602233DBCF6CC49537CB8EE2E (int32_t ___0_bufferSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_bufferSize;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, 1))>>4));
		V_1 = 0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((uint32_t)L_2>>((int32_t)16)));
		V_1 = ((int32_t)16);
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((uint32_t)L_7>>4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 4));
	}

IL_0035:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((uint32_t)L_10>>2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 2));
	}

IL_0041:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((uint32_t)L_13>>1));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_15, (int32_t)L_16));
	}
}
// System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetMaxSizeForBucket_mEC1D6B6E8946CCDC2CC12176874A9DE8A0EA5E96 (int32_t ___0_binIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_binIndex;
		return ((int32_t)(((int32_t)16)<<((int32_t)(L_0&((int32_t)31)))));
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
// System.Int32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_0, NULL);
		return L_1;
	}
}
// System.UInt16 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0 (uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		uint16_t L_1 = ___0_value;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0>>8)), ((int32_t)((int32_t)L_1<<8)))));
	}
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
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
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mC01C8C5301C555C927118C5FAA3DCFC7D542487F (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)10000000))))))
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		if ((!(((uint64_t)L_1) >= ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_2 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)100000000000000LL))));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)14)));
		goto IL_003e;
	}

IL_002b:
	{
		uint64_t L_4 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int32_t)10000000)))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		goto IL_003e;
	}

IL_003b:
	{
		uint64_t L_6 = ___0_value;
		V_1 = ((int32_t)(uint32_t)L_6);
	}

IL_003e:
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_008a;
	}

IL_004e:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		goto IL_008a;
	}

IL_005c:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		goto IL_008a;
	}

IL_006a:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_008a;
	}

IL_0078:
	{
		uint32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)1000000)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 5));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 6));
	}

IL_008a:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mE01337E47EFAB38CB85A419CECA05B3535330A30 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000)));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_0017:
	{
		uint32_t L_3 = ___0_value;
		if ((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0047;
		}
	}
	{
		uint32_t L_4 = ___0_value;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0047;
	}

IL_0027:
	{
		uint32_t L_6 = ___0_value;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		goto IL_0047;
	}

IL_0035:
	{
		uint32_t L_8 = ___0_value;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		goto IL_0047;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountHexDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_m2A0168ACE924C7DFBCFFD60AF8FEA1C6CC0420B7 (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 8));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_2>>((int32_t)32)));
	}

IL_0011:
	{
		uint64_t L_3 = ___0_value;
		if ((!(((uint64_t)L_3) > ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		uint64_t L_5 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_5>>((int32_t)16)));
	}

IL_0024:
	{
		uint64_t L_6 = ___0_value;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		uint64_t L_8 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_8>>8));
	}

IL_0036:
	{
		uint64_t L_9 = ___0_value;
		if ((!(((uint64_t)L_9) > ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
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
		String_t* L_1 = ___0_s;
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
		String_t* L_7 = ___0_s;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CultureInfo_get_Territory_m41573C4628267F6EAD9E054500FC0E5CC8876E6C_inline (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___territory_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___internalMethodName_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___methodAddress_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___methodIndex_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline (StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CStateMachineTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventAttribute_set_EventId_mC5617BB069437135E936C4CC9138B426192C9153_inline (EventAttribute_t9015B21A2C903C10E9747B2A17BCA1EE47E5F882* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEventIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventSource_set_Name_m55128F99D84FDFE12B36CED0D6E9BC8A2C7D77B8_inline (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value;
		__this->___U3CDataPointerU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReservedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListDictionaryInternal_get_Count_mC8F585CAB29896B42726AF57626B6D7814AFCFD9_inline (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____HResult_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
