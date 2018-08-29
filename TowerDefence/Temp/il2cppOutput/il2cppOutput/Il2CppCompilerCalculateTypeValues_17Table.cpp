#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t40435393;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t4168896842;
// System.Xml.XPath.Expression
struct Expression_t1452783009;
// System.Xml.XPath.NodeSet
struct NodeSet_t3272593155;
// System.Xml.XPath.NodeTest
struct NodeTest_t747859056;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t787956054;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3667290188;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t698127628;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef EXPRESSION_T1452783009_H
#define EXPRESSION_T1452783009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Expression
struct  Expression_t1452783009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1452783009_H
#ifndef FUNCTIONARGUMENTS_T3573450773_H
#define FUNCTIONARGUMENTS_T3573450773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FunctionArguments
struct  FunctionArguments_t3573450773  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::_arg
	Expression_t1452783009 * ____arg_0;
	// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::_tail
	FunctionArguments_t3573450773 * ____tail_1;

public:
	inline static int32_t get_offset_of__arg_0() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____arg_0)); }
	inline Expression_t1452783009 * get__arg_0() const { return ____arg_0; }
	inline Expression_t1452783009 ** get_address_of__arg_0() { return &____arg_0; }
	inline void set__arg_0(Expression_t1452783009 * value)
	{
		____arg_0 = value;
		Il2CppCodeGenWriteBarrier((&____arg_0), value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____tail_1)); }
	inline FunctionArguments_t3573450773 * get__tail_1() const { return ____tail_1; }
	inline FunctionArguments_t3573450773 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(FunctionArguments_t3573450773 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier((&____tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTIONARGUMENTS_T3573450773_H
#ifndef XPATHEXPRESSION_T1723793351_H
#define XPATHEXPRESSION_T1723793351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathExpression
struct  XPathExpression_t1723793351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXPRESSION_T1723793351_H
#ifndef XPATHFUNCTIONS_T1481462947_H
#define XPATHFUNCTIONS_T1481462947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctions
struct  XPathFunctions_t1481462947  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONS_T1481462947_H
#ifndef XPATHITERATORCOMPARER_T1799213572_H
#define XPATHITERATORCOMPARER_T1799213572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathIteratorComparer
struct  XPathIteratorComparer_t1799213572  : public RuntimeObject
{
public:

public:
};

struct XPathIteratorComparer_t1799213572_StaticFields
{
public:
	// System.Xml.XPath.XPathIteratorComparer System.Xml.XPath.XPathIteratorComparer::Instance
	XPathIteratorComparer_t1799213572 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathIteratorComparer_t1799213572_StaticFields, ___Instance_0)); }
	inline XPathIteratorComparer_t1799213572 * get_Instance_0() const { return ___Instance_0; }
	inline XPathIteratorComparer_t1799213572 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathIteratorComparer_t1799213572 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITERATORCOMPARER_T1799213572_H
#ifndef XPATHNAVIGATORCOMPARER_T2421573191_H
#define XPATHNAVIGATORCOMPARER_T2421573191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigatorComparer
struct  XPathNavigatorComparer_t2421573191  : public RuntimeObject
{
public:

public:
};

struct XPathNavigatorComparer_t2421573191_StaticFields
{
public:
	// System.Xml.XPath.XPathNavigatorComparer System.Xml.XPath.XPathNavigatorComparer::Instance
	XPathNavigatorComparer_t2421573191 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathNavigatorComparer_t2421573191_StaticFields, ___Instance_0)); }
	inline XPathNavigatorComparer_t2421573191 * get_Instance_0() const { return ___Instance_0; }
	inline XPathNavigatorComparer_t2421573191 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathNavigatorComparer_t2421573191 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATORCOMPARER_T2421573191_H
#ifndef XPATHNODEITERATOR_T3667290188_H
#define XPATHNODEITERATOR_T3667290188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator
struct  XPathNodeIterator_t3667290188  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator::_count
	int32_t ____count_0;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(XPathNodeIterator_t3667290188, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNODEITERATOR_T3667290188_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#define U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct  U3CGetEnumeratorU3Ec__Iterator2_t90454087  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$PC
	int32_t ___U24PC_0;
	// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::<>f__this
	XPathNodeIterator_t3667290188 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U3CU3Ef__this_2)); }
	inline XPathNodeIterator_t3667290188 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(XPathNodeIterator_t3667290188 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifndef XPATHSORTELEMENT_T4237073177_H
#define XPATHSORTELEMENT_T4237073177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSortElement
struct  XPathSortElement_t4237073177  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathSortElement::Navigator
	XPathNavigator_t787956054 * ___Navigator_0;
	// System.Object[] System.Xml.XPath.XPathSortElement::Values
	ObjectU5BU5D_t2843939325* ___Values_1;

public:
	inline static int32_t get_offset_of_Navigator_0() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Navigator_0)); }
	inline XPathNavigator_t787956054 * get_Navigator_0() const { return ___Navigator_0; }
	inline XPathNavigator_t787956054 ** get_address_of_Navigator_0() { return &___Navigator_0; }
	inline void set_Navigator_0(XPathNavigator_t787956054 * value)
	{
		___Navigator_0 = value;
		Il2CppCodeGenWriteBarrier((&___Navigator_0), value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Values_1)); }
	inline ObjectU5BU5D_t2843939325* get_Values_1() const { return ___Values_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ObjectU5BU5D_t2843939325* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((&___Values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTELEMENT_T4237073177_H
#ifndef XPATHSORTERS_T698127628_H
#define XPATHSORTERS_T698127628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t698127628  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t2718874744 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t698127628, ____rgSorters_0)); }
	inline ArrayList_t2718874744 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t2718874744 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t2718874744 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier((&____rgSorters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTERS_T698127628_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef BASEITERATOR_T4168896842_H
#define BASEITERATOR_T4168896842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.BaseIterator
struct  BaseIterator_t4168896842  : public XPathNodeIterator_t3667290188
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::_nsm
	RuntimeObject* ____nsm_1;
	// System.Int32 System.Xml.XPath.BaseIterator::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of__nsm_1() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ____nsm_1)); }
	inline RuntimeObject* get__nsm_1() const { return ____nsm_1; }
	inline RuntimeObject** get_address_of__nsm_1() { return &____nsm_1; }
	inline void set__nsm_1(RuntimeObject* value)
	{
		____nsm_1 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEITERATOR_T4168896842_H
#ifndef COMPILEDEXPRESSION_T4018285681_H
#define COMPILEDEXPRESSION_T4018285681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.CompiledExpression
struct  CompiledExpression_t4018285681  : public XPathExpression_t1723793351
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::_nsm
	RuntimeObject* ____nsm_0;
	// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::_expr
	Expression_t1452783009 * ____expr_1;
	// System.Xml.XPath.XPathSorters System.Xml.XPath.CompiledExpression::_sorters
	XPathSorters_t698127628 * ____sorters_2;
	// System.String System.Xml.XPath.CompiledExpression::rawExpression
	String_t* ___rawExpression_3;

public:
	inline static int32_t get_offset_of__nsm_0() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____nsm_0)); }
	inline RuntimeObject* get__nsm_0() const { return ____nsm_0; }
	inline RuntimeObject** get_address_of__nsm_0() { return &____nsm_0; }
	inline void set__nsm_0(RuntimeObject* value)
	{
		____nsm_0 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_0), value);
	}

	inline static int32_t get_offset_of__expr_1() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____expr_1)); }
	inline Expression_t1452783009 * get__expr_1() const { return ____expr_1; }
	inline Expression_t1452783009 ** get_address_of__expr_1() { return &____expr_1; }
	inline void set__expr_1(Expression_t1452783009 * value)
	{
		____expr_1 = value;
		Il2CppCodeGenWriteBarrier((&____expr_1), value);
	}

	inline static int32_t get_offset_of__sorters_2() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____sorters_2)); }
	inline XPathSorters_t698127628 * get__sorters_2() const { return ____sorters_2; }
	inline XPathSorters_t698127628 ** get_address_of__sorters_2() { return &____sorters_2; }
	inline void set__sorters_2(XPathSorters_t698127628 * value)
	{
		____sorters_2 = value;
		Il2CppCodeGenWriteBarrier((&____sorters_2), value);
	}

	inline static int32_t get_offset_of_rawExpression_3() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ___rawExpression_3)); }
	inline String_t* get_rawExpression_3() const { return ___rawExpression_3; }
	inline String_t** get_address_of_rawExpression_3() { return &___rawExpression_3; }
	inline void set_rawExpression_3(String_t* value)
	{
		___rawExpression_3 = value;
		Il2CppCodeGenWriteBarrier((&___rawExpression_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDEXPRESSION_T4018285681_H
#ifndef EXPRBINARY_T2069694888_H
#define EXPRBINARY_T2069694888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBinary
struct  ExprBinary_t2069694888  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_left
	Expression_t1452783009 * ____left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_right
	Expression_t1452783009 * ____right_1;

public:
	inline static int32_t get_offset_of__left_0() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____left_0)); }
	inline Expression_t1452783009 * get__left_0() const { return ____left_0; }
	inline Expression_t1452783009 ** get_address_of__left_0() { return &____left_0; }
	inline void set__left_0(Expression_t1452783009 * value)
	{
		____left_0 = value;
		Il2CppCodeGenWriteBarrier((&____left_0), value);
	}

	inline static int32_t get_offset_of__right_1() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____right_1)); }
	inline Expression_t1452783009 * get__right_1() const { return ____right_1; }
	inline Expression_t1452783009 ** get_address_of__right_1() { return &____right_1; }
	inline void set__right_1(Expression_t1452783009 * value)
	{
		____right_1 = value;
		Il2CppCodeGenWriteBarrier((&____right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBINARY_T2069694888_H
#ifndef EXPRFUNCTIONCALL_T607199437_H
#define EXPRFUNCTIONCALL_T607199437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFunctionCall
struct  ExprFunctionCall_t607199437  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprFunctionCall::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprFunctionCall::resolvedName
	bool ___resolvedName_1;
	// System.Collections.ArrayList System.Xml.XPath.ExprFunctionCall::_args
	ArrayList_t2718874744 * ____args_2;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}

	inline static int32_t get_offset_of__args_2() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____args_2)); }
	inline ArrayList_t2718874744 * get__args_2() const { return ____args_2; }
	inline ArrayList_t2718874744 ** get_address_of__args_2() { return &____args_2; }
	inline void set__args_2(ArrayList_t2718874744 * value)
	{
		____args_2 = value;
		Il2CppCodeGenWriteBarrier((&____args_2), value);
	}
};

struct ExprFunctionCall_t607199437_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XPath.ExprFunctionCall::<>f__switch$map3C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3C_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3C_3() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437_StaticFields, ___U3CU3Ef__switchU24map3C_3)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3C_3() const { return ___U3CU3Ef__switchU24map3C_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3C_3() { return &___U3CU3Ef__switchU24map3C_3; }
	inline void set_U3CU3Ef__switchU24map3C_3(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3C_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3C_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFUNCTIONCALL_T607199437_H
#ifndef EXPRLITERAL_T2264229068_H
#define EXPRLITERAL_T2264229068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLiteral
struct  ExprLiteral_t2264229068  : public Expression_t1452783009
{
public:
	// System.String System.Xml.XPath.ExprLiteral::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprLiteral_t2264229068, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLITERAL_T2264229068_H
#ifndef EXPRNEG_T381818215_H
#define EXPRNEG_T381818215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNEG
struct  ExprNEG_t381818215  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprNEG_t381818215, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNEG_T381818215_H
#ifndef EXPRNUMBER_T3483239576_H
#define EXPRNUMBER_T3483239576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumber
struct  ExprNumber_t3483239576  : public Expression_t1452783009
{
public:
	// System.Double System.Xml.XPath.ExprNumber::_value
	double ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprNumber_t3483239576, ____value_0)); }
	inline double get__value_0() const { return ____value_0; }
	inline double* get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(double value)
	{
		____value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMBER_T3483239576_H
#ifndef EXPRPARENS_T795575662_H
#define EXPRPARENS_T795575662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprParens
struct  ExprParens_t795575662  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprParens_t795575662, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPARENS_T795575662_H
#ifndef EXPRVARIABLE_T1387751146_H
#define EXPRVARIABLE_T1387751146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprVariable
struct  ExprVariable_t1387751146  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprVariable::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprVariable::resolvedName
	bool ___resolvedName_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRVARIABLE_T1387751146_H
#ifndef NODESET_T3272593155_H
#define NODESET_T3272593155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeSet
struct  NodeSet_t3272593155  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODESET_T3272593155_H
#ifndef XPATHFUNCTION_T857746608_H
#define XPATHFUNCTION_T857746608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunction
struct  XPathFunction_t857746608  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTION_T857746608_H
#ifndef AXES_T1882171014_H
#define AXES_T1882171014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Axes
struct  Axes_t1882171014 
{
public:
	// System.Int32 System.Xml.XPath.Axes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axes_t1882171014, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXES_T1882171014_H
#ifndef AXISITERATOR_T3073253660_H
#define AXISITERATOR_T3073253660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisIterator
struct  AxisIterator_t3073253660  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;
	// System.Xml.XPath.NodeTest System.Xml.XPath.AxisIterator::_test
	NodeTest_t747859056 * ____test_4;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}

	inline static int32_t get_offset_of__test_4() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____test_4)); }
	inline NodeTest_t747859056 * get__test_4() const { return ____test_4; }
	inline NodeTest_t747859056 ** get_address_of__test_4() { return &____test_4; }
	inline void set__test_4(NodeTest_t747859056 * value)
	{
		____test_4 = value;
		Il2CppCodeGenWriteBarrier((&____test_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISITERATOR_T3073253660_H
#ifndef CHILDITERATOR_T3598849435_H
#define CHILDITERATOR_T3598849435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ChildIterator
struct  ChildIterator_t3598849435  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.ChildIterator::_nav
	XPathNavigator_t787956054 * ____nav_3;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(ChildIterator_t3598849435, ____nav_3)); }
	inline XPathNavigator_t787956054 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t787956054 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t787956054 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier((&____nav_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHILDITERATOR_T3598849435_H
#ifndef EXPRBOOLEAN_T3855188593_H
#define EXPRBOOLEAN_T3855188593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBoolean
struct  ExprBoolean_t3855188593  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBOOLEAN_T3855188593_H
#ifndef EXPRFILTER_T2551926938_H
#define EXPRFILTER_T2551926938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFilter
struct  ExprFilter_t2551926938  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::expr
	Expression_t1452783009 * ___expr_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::pred
	Expression_t1452783009 * ___pred_1;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___expr_0)); }
	inline Expression_t1452783009 * get_expr_0() const { return ___expr_0; }
	inline Expression_t1452783009 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t1452783009 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pred_1() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___pred_1)); }
	inline Expression_t1452783009 * get_pred_1() const { return ___pred_1; }
	inline Expression_t1452783009 ** get_address_of_pred_1() { return &___pred_1; }
	inline void set_pred_1(Expression_t1452783009 * value)
	{
		___pred_1 = value;
		Il2CppCodeGenWriteBarrier((&___pred_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFILTER_T2551926938_H
#ifndef EXPRNUMERIC_T370757872_H
#define EXPRNUMERIC_T370757872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumeric
struct  ExprNumeric_t370757872  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMERIC_T370757872_H
#ifndef EXPRROOT_T3091324302_H
#define EXPRROOT_T3091324302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprRoot
struct  ExprRoot_t3091324302  : public NodeSet_t3272593155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRROOT_T3091324302_H
#ifndef EXPRSLASH_T1263914658_H
#define EXPRSLASH_T1263914658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH
struct  ExprSLASH_t1263914658  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH_T1263914658_H
#ifndef EXPRSLASH2_T1762680492_H
#define EXPRSLASH2_T1762680492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH2
struct  ExprSLASH2_t1762680492  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH2::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

struct ExprSLASH2_t1762680492_StaticFields
{
public:
	// System.Xml.XPath.NodeTest System.Xml.XPath.ExprSLASH2::DescendantOrSelfStar
	NodeTest_t747859056 * ___DescendantOrSelfStar_2;

public:
	inline static int32_t get_offset_of_DescendantOrSelfStar_2() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492_StaticFields, ___DescendantOrSelfStar_2)); }
	inline NodeTest_t747859056 * get_DescendantOrSelfStar_2() const { return ___DescendantOrSelfStar_2; }
	inline NodeTest_t747859056 ** get_address_of_DescendantOrSelfStar_2() { return &___DescendantOrSelfStar_2; }
	inline void set_DescendantOrSelfStar_2(NodeTest_t747859056 * value)
	{
		___DescendantOrSelfStar_2 = value;
		Il2CppCodeGenWriteBarrier((&___DescendantOrSelfStar_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH2_T1762680492_H
#ifndef EXPRUNION_T1609753984_H
#define EXPRUNION_T1609753984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprUNION
struct  ExprUNION_t1609753984  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::right
	Expression_t1452783009 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___right_1)); }
	inline Expression_t1452783009 * get_right_1() const { return ___right_1; }
	inline Expression_t1452783009 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(Expression_t1452783009 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRUNION_T1609753984_H
#ifndef NODETEST_T747859056_H
#define NODETEST_T747859056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTest
struct  NodeTest_t747859056  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::_axis
	AxisSpecifier_t40435393 * ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(NodeTest_t747859056, ____axis_0)); }
	inline AxisSpecifier_t40435393 * get__axis_0() const { return ____axis_0; }
	inline AxisSpecifier_t40435393 ** get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(AxisSpecifier_t40435393 * value)
	{
		____axis_0 = value;
		Il2CppCodeGenWriteBarrier((&____axis_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETEST_T747859056_H
#ifndef PARENSITERATOR_T4020310733_H
#define PARENSITERATOR_T4020310733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParensIterator
struct  ParensIterator_t4020310733  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.ParensIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(ParensIterator_t4020310733, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENSITERATOR_T4020310733_H
#ifndef SIMPLEITERATOR_T809567201_H
#define SIMPLEITERATOR_T809567201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleIterator
struct  SimpleIterator_t809567201  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_nav
	XPathNavigator_t787956054 * ____nav_3;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_current
	XPathNavigator_t787956054 * ____current_4;
	// System.Boolean System.Xml.XPath.SimpleIterator::skipfirst
	bool ___skipfirst_5;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____nav_3)); }
	inline XPathNavigator_t787956054 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t787956054 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t787956054 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier((&____nav_3), value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____current_4)); }
	inline XPathNavigator_t787956054 * get__current_4() const { return ____current_4; }
	inline XPathNavigator_t787956054 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(XPathNavigator_t787956054 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((&____current_4), value);
	}

	inline static int32_t get_offset_of_skipfirst_5() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ___skipfirst_5)); }
	inline bool get_skipfirst_5() const { return ___skipfirst_5; }
	inline bool* get_address_of_skipfirst_5() { return &___skipfirst_5; }
	inline void set_skipfirst_5(bool value)
	{
		___skipfirst_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEITERATOR_T809567201_H
#ifndef WRAPPERITERATOR_T1258076988_H
#define WRAPPERITERATOR_T1258076988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.WrapperIterator
struct  WrapperIterator_t1258076988  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::iter
	XPathNodeIterator_t3667290188 * ___iter_3;

public:
	inline static int32_t get_offset_of_iter_3() { return static_cast<int32_t>(offsetof(WrapperIterator_t1258076988, ___iter_3)); }
	inline XPathNodeIterator_t3667290188 * get_iter_3() const { return ___iter_3; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_iter_3() { return &___iter_3; }
	inline void set_iter_3(XPathNodeIterator_t3667290188 * value)
	{
		___iter_3 = value;
		Il2CppCodeGenWriteBarrier((&___iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPERITERATOR_T1258076988_H
#ifndef XPATHBOOLEANFUNCTION_T57991257_H
#define XPATHBOOLEANFUNCTION_T57991257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathBooleanFunction
struct  XPathBooleanFunction_t57991257  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHBOOLEANFUNCTION_T57991257_H
#ifndef XPATHEXCEPTION_T2107611652_H
#define XPATHEXCEPTION_T2107611652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathException
struct  XPathException_t2107611652  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXCEPTION_T2107611652_H
#ifndef XPATHFUNCTIONCONCAT_T3351639595_H
#define XPATHFUNCTIONCONCAT_T3351639595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionConcat
struct  XPathFunctionConcat_t3351639595  : public XPathFunction_t857746608
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathFunctionConcat::rgs
	ArrayList_t2718874744 * ___rgs_0;

public:
	inline static int32_t get_offset_of_rgs_0() { return static_cast<int32_t>(offsetof(XPathFunctionConcat_t3351639595, ___rgs_0)); }
	inline ArrayList_t2718874744 * get_rgs_0() const { return ___rgs_0; }
	inline ArrayList_t2718874744 ** get_address_of_rgs_0() { return &___rgs_0; }
	inline void set_rgs_0(ArrayList_t2718874744 * value)
	{
		___rgs_0 = value;
		Il2CppCodeGenWriteBarrier((&___rgs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCONCAT_T3351639595_H
#ifndef XPATHFUNCTIONCONTAINS_T678583606_H
#define XPATHFUNCTIONCONTAINS_T678583606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionContains
struct  XPathFunctionContains_t678583606  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionContains::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionContains::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionContains_t678583606, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionContains_t678583606, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCONTAINS_T678583606_H
#ifndef XPATHFUNCTIONCOUNT_T4174407007_H
#define XPATHFUNCTIONCOUNT_T4174407007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionCount
struct  XPathFunctionCount_t4174407007  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionCount::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionCount_t4174407007, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCOUNT_T4174407007_H
#ifndef XPATHFUNCTIONID_T1670301333_H
#define XPATHFUNCTIONID_T1670301333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionId
struct  XPathFunctionId_t1670301333  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionId::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionId_t1670301333, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

struct XPathFunctionId_t1670301333_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathFunctionId::rgchWhitespace
	CharU5BU5D_t3528271667* ___rgchWhitespace_1;

public:
	inline static int32_t get_offset_of_rgchWhitespace_1() { return static_cast<int32_t>(offsetof(XPathFunctionId_t1670301333_StaticFields, ___rgchWhitespace_1)); }
	inline CharU5BU5D_t3528271667* get_rgchWhitespace_1() const { return ___rgchWhitespace_1; }
	inline CharU5BU5D_t3528271667** get_address_of_rgchWhitespace_1() { return &___rgchWhitespace_1; }
	inline void set_rgchWhitespace_1(CharU5BU5D_t3528271667* value)
	{
		___rgchWhitespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___rgchWhitespace_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONID_T1670301333_H
#ifndef XPATHFUNCTIONLANG_T242671679_H
#define XPATHFUNCTIONLANG_T242671679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLang
struct  XPathFunctionLang_t242671679  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionLang::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionLang_t242671679, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLANG_T242671679_H
#ifndef XPATHFUNCTIONLAST_T241688620_H
#define XPATHFUNCTIONLAST_T241688620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLast
struct  XPathFunctionLast_t241688620  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLAST_T241688620_H
#ifndef XPATHFUNCTIONLOCALNAME_T1807446049_H
#define XPATHFUNCTIONLOCALNAME_T1807446049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLocalName
struct  XPathFunctionLocalName_t1807446049  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionLocalName::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionLocalName_t1807446049, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLOCALNAME_T1807446049_H
#ifndef XPATHFUNCTIONNAME_T1405602168_H
#define XPATHFUNCTIONNAME_T1405602168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionName
struct  XPathFunctionName_t1405602168  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionName::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionName_t1405602168, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNAME_T1405602168_H
#ifndef XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#define XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNamespaceUri
struct  XPathFunctionNamespaceUri_t4077891083  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNamespaceUri::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNamespaceUri_t4077891083, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#ifndef XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#define XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNormalizeSpace
struct  XPathFunctionNormalizeSpace_t379159227  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNormalizeSpace::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNormalizeSpace_t379159227, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#ifndef XPATHFUNCTIONPOSITION_T1996792158_H
#define XPATHFUNCTIONPOSITION_T1996792158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionPosition
struct  XPathFunctionPosition_t1996792158  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONPOSITION_T1996792158_H
#ifndef XPATHFUNCTIONSTARTSWITH_T3734288208_H
#define XPATHFUNCTIONSTARTSWITH_T3734288208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionStartsWith
struct  XPathFunctionStartsWith_t3734288208  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t3734288208, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t3734288208, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTARTSWITH_T3734288208_H
#ifndef XPATHFUNCTIONSTRING_T3820712894_H
#define XPATHFUNCTIONSTRING_T3820712894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionString
struct  XPathFunctionString_t3820712894  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionString::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionString_t3820712894, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTRING_T3820712894_H
#ifndef XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#define XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionStringLength
struct  XPathFunctionStringLength_t1686187666  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStringLength::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionStringLength_t1686187666, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#ifndef XPATHFUNCTIONSUBSTRING_T3677332116_H
#define XPATHFUNCTIONSUBSTRING_T3677332116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstring
struct  XPathFunctionSubstring_t3677332116  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg1
	Expression_t1452783009 * ___arg1_1;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg2
	Expression_t1452783009 * ___arg2_2;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}

	inline static int32_t get_offset_of_arg2_2() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg2_2)); }
	inline Expression_t1452783009 * get_arg2_2() const { return ___arg2_2; }
	inline Expression_t1452783009 ** get_address_of_arg2_2() { return &___arg2_2; }
	inline void set_arg2_2(Expression_t1452783009 * value)
	{
		___arg2_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRING_T3677332116_H
#ifndef XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#define XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstringAfter
struct  XPathFunctionSubstringAfter_t2254953802  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringAfter::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringAfter::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringAfter_t2254953802, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringAfter_t2254953802, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#ifndef XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#define XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstringBefore
struct  XPathFunctionSubstringBefore_t3299707364  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t3299707364, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t3299707364, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#ifndef XPATHFUNCTIONTRANSLATE_T1071508611_H
#define XPATHFUNCTIONTRANSLATE_T1071508611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionTranslate
struct  XPathFunctionTranslate_t1071508611  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg1
	Expression_t1452783009 * ___arg1_1;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg2
	Expression_t1452783009 * ___arg2_2;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}

	inline static int32_t get_offset_of_arg2_2() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg2_2)); }
	inline Expression_t1452783009 * get_arg2_2() const { return ___arg2_2; }
	inline Expression_t1452783009 ** get_address_of_arg2_2() { return &___arg2_2; }
	inline void set_arg2_2(Expression_t1452783009 * value)
	{
		___arg2_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONTRANSLATE_T1071508611_H
#ifndef XPATHNAMESPACESCOPE_T4128811329_H
#define XPATHNAMESPACESCOPE_T4128811329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNamespaceScope
struct  XPathNamespaceScope_t4128811329 
{
public:
	// System.Int32 System.Xml.XPath.XPathNamespaceScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNamespaceScope_t4128811329, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAMESPACESCOPE_T4128811329_H
#ifndef XPATHNODETYPE_T3031007223_H
#define XPATHNODETYPE_T3031007223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeType
struct  XPathNodeType_t3031007223 
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNodeType_t3031007223, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNODETYPE_T3031007223_H
#ifndef XPATHNUMERICFUNCTION_T307051317_H
#define XPATHNUMERICFUNCTION_T307051317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNumericFunction
struct  XPathNumericFunction_t307051317  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNUMERICFUNCTION_T307051317_H
#ifndef XPATHRESULTTYPE_T2828988488_H
#define XPATHRESULTTYPE_T2828988488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathResultType
struct  XPathResultType_t2828988488 
{
public:
	// System.Int32 System.Xml.XPath.XPathResultType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathResultType_t2828988488, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHRESULTTYPE_T2828988488_H
#ifndef XMLDATATYPE_T3437356259_H
#define XMLDATATYPE_T3437356259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlDataType
struct  XmlDataType_t3437356259 
{
public:
	// System.Int32 System.Xml.XPath.XmlDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDataType_t3437356259, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATATYPE_T3437356259_H
#ifndef ANCESTORITERATOR_T1850150082_H
#define ANCESTORITERATOR_T1850150082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorIterator
struct  AncestorIterator_t1850150082  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.AncestorIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorIterator::navigators
	ArrayList_t2718874744 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___navigators_7)); }
	inline ArrayList_t2718874744 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t2718874744 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t2718874744 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier((&___navigators_7), value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCESTORITERATOR_T1850150082_H
#ifndef ANCESTORORSELFITERATOR_T2300071220_H
#define ANCESTORORSELFITERATOR_T2300071220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorOrSelfIterator
struct  AncestorOrSelfIterator_t2300071220  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.AncestorOrSelfIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorOrSelfIterator::navigators
	ArrayList_t2718874744 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorOrSelfIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___navigators_7)); }
	inline ArrayList_t2718874744 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t2718874744 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t2718874744 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier((&___navigators_7), value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCESTORORSELFITERATOR_T2300071220_H
#ifndef ATTRIBUTEITERATOR_T3778175417_H
#define ATTRIBUTEITERATOR_T3778175417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AttributeIterator
struct  AttributeIterator_t3778175417  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEITERATOR_T3778175417_H
#ifndef AXISSPECIFIER_T40435393_H
#define AXISSPECIFIER_T40435393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisSpecifier
struct  AxisSpecifier_t40435393  : public RuntimeObject
{
public:
	// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::_axis
	int32_t ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(AxisSpecifier_t40435393, ____axis_0)); }
	inline int32_t get__axis_0() const { return ____axis_0; }
	inline int32_t* get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(int32_t value)
	{
		____axis_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISSPECIFIER_T40435393_H
#ifndef DESCENDANTITERATOR_T2685366878_H
#define DESCENDANTITERATOR_T2685366878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantIterator
struct  DescendantIterator_t2685366878  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.DescendantIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantIterator_t2685366878, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantIterator_t2685366878, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCENDANTITERATOR_T2685366878_H
#ifndef DESCENDANTORSELFITERATOR_T4256219478_H
#define DESCENDANTORSELFITERATOR_T4256219478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantOrSelfIterator
struct  DescendantOrSelfIterator_t4256219478  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.DescendantOrSelfIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantOrSelfIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t4256219478, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t4256219478, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCENDANTORSELFITERATOR_T4256219478_H
#ifndef EQUALITYEXPR_T1646148531_H
#define EQUALITYEXPR_T1646148531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.EqualityExpr
struct  EqualityExpr_t1646148531  : public ExprBoolean_t3855188593
{
public:
	// System.Boolean System.Xml.XPath.EqualityExpr::trueVal
	bool ___trueVal_2;

public:
	inline static int32_t get_offset_of_trueVal_2() { return static_cast<int32_t>(offsetof(EqualityExpr_t1646148531, ___trueVal_2)); }
	inline bool get_trueVal_2() const { return ___trueVal_2; }
	inline bool* get_address_of_trueVal_2() { return &___trueVal_2; }
	inline void set_trueVal_2(bool value)
	{
		___trueVal_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYEXPR_T1646148531_H
#ifndef EXPRAND_T348538276_H
#define EXPRAND_T348538276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprAND
struct  ExprAND_t348538276  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRAND_T348538276_H
#ifndef EXPRDIV_T1961659563_H
#define EXPRDIV_T1961659563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprDIV
struct  ExprDIV_t1961659563  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRDIV_T1961659563_H
#ifndef EXPRMINUS_T3125292145_H
#define EXPRMINUS_T3125292145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMINUS
struct  ExprMINUS_t3125292145  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMINUS_T3125292145_H
#ifndef EXPRMOD_T1913835785_H
#define EXPRMOD_T1913835785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMOD
struct  ExprMOD_t1913835785  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMOD_T1913835785_H
#ifndef EXPRMULT_T118778748_H
#define EXPRMULT_T118778748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMULT
struct  ExprMULT_t118778748  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMULT_T118778748_H
#ifndef EXPROR_T3019581832_H
#define EXPROR_T3019581832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprOR
struct  ExprOR_t3019581832  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPROR_T3019581832_H
#ifndef EXPRPLUS_T1725353634_H
#define EXPRPLUS_T1725353634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprPLUS
struct  ExprPLUS_t1725353634  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPLUS_T1725353634_H
#ifndef FOLLOWINGITERATOR_T3658643279_H
#define FOLLOWINGITERATOR_T3658643279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingIterator
struct  FollowingIterator_t3658643279  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.FollowingIterator::_finished
	bool ____finished_6;

public:
	inline static int32_t get_offset_of__finished_6() { return static_cast<int32_t>(offsetof(FollowingIterator_t3658643279, ____finished_6)); }
	inline bool get__finished_6() const { return ____finished_6; }
	inline bool* get_address_of__finished_6() { return &____finished_6; }
	inline void set__finished_6(bool value)
	{
		____finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGITERATOR_T3658643279_H
#ifndef FOLLOWINGSIBLINGITERATOR_T3042855407_H
#define FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingSiblingIterator
struct  FollowingSiblingIterator_t3042855407  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifndef NAMESPACEITERATOR_T3101604877_H
#define NAMESPACEITERATOR_T3101604877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NamespaceIterator
struct  NamespaceIterator_t3101604877  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEITERATOR_T3101604877_H
#ifndef NODENAMETEST_T562814213_H
#define NODENAMETEST_T562814213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeNameTest
struct  NodeNameTest_t562814213  : public NodeTest_t747859056
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.NodeNameTest::_name
	XmlQualifiedName_t2760654312 * ____name_1;
	// System.Boolean System.Xml.XPath.NodeNameTest::resolvedName
	bool ___resolvedName_2;

public:
	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ____name_1)); }
	inline XmlQualifiedName_t2760654312 * get__name_1() const { return ____name_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(XmlQualifiedName_t2760654312 * value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}

	inline static int32_t get_offset_of_resolvedName_2() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ___resolvedName_2)); }
	inline bool get_resolvedName_2() const { return ___resolvedName_2; }
	inline bool* get_address_of_resolvedName_2() { return &___resolvedName_2; }
	inline void set_resolvedName_2(bool value)
	{
		___resolvedName_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODENAMETEST_T562814213_H
#ifndef NODETYPETEST_T4287533341_H
#define NODETYPETEST_T4287533341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTypeTest
struct  NodeTypeTest_t4287533341  : public NodeTest_t747859056
{
public:
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.NodeTypeTest::type
	int32_t ___type_1;
	// System.String System.Xml.XPath.NodeTypeTest::_param
	String_t* ____param_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of__param_2() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ____param_2)); }
	inline String_t* get__param_2() const { return ____param_2; }
	inline String_t** get_address_of__param_2() { return &____param_2; }
	inline void set__param_2(String_t* value)
	{
		____param_2 = value;
		Il2CppCodeGenWriteBarrier((&____param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETYPETEST_T4287533341_H
#ifndef PARENTITERATOR_T3536730964_H
#define PARENTITERATOR_T3536730964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParentIterator
struct  ParentIterator_t3536730964  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.ParentIterator::canMove
	bool ___canMove_6;

public:
	inline static int32_t get_offset_of_canMove_6() { return static_cast<int32_t>(offsetof(ParentIterator_t3536730964, ___canMove_6)); }
	inline bool get_canMove_6() const { return ___canMove_6; }
	inline bool* get_address_of_canMove_6() { return &___canMove_6; }
	inline void set_canMove_6(bool value)
	{
		___canMove_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTITERATOR_T3536730964_H
#ifndef PRECEDINGITERATOR_T2452812266_H
#define PRECEDINGITERATOR_T2452812266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingIterator
struct  PrecedingIterator_t2452812266  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGITERATOR_T2452812266_H
#ifndef PRECEDINGSIBLINGITERATOR_T3231156185_H
#define PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingSiblingIterator
struct  PrecedingSiblingIterator_t3231156185  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingSiblingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifndef RELATIONALEXPR_T3307137467_H
#define RELATIONALEXPR_T3307137467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.RelationalExpr
struct  RelationalExpr_t3307137467  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONALEXPR_T3307137467_H
#ifndef SELFITERATOR_T907214_H
#define SELFITERATOR_T907214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SelfIterator
struct  SelfIterator_t907214  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELFITERATOR_T907214_H
#ifndef XPATHFUNCTIONBOOLEAN_T2892373420_H
#define XPATHFUNCTIONBOOLEAN_T2892373420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionBoolean
struct  XPathFunctionBoolean_t2892373420  : public XPathBooleanFunction_t57991257
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionBoolean::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionBoolean_t2892373420, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONBOOLEAN_T2892373420_H
#ifndef XPATHFUNCTIONCEIL_T4176839285_H
#define XPATHFUNCTIONCEIL_T4176839285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionCeil
struct  XPathFunctionCeil_t4176839285  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionCeil::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionCeil_t4176839285, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCEIL_T4176839285_H
#ifndef XPATHFUNCTIONFALSE_T1021066162_H
#define XPATHFUNCTIONFALSE_T1021066162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionFalse
struct  XPathFunctionFalse_t1021066162  : public XPathBooleanFunction_t57991257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONFALSE_T1021066162_H
#ifndef XPATHFUNCTIONFLOOR_T3617095014_H
#define XPATHFUNCTIONFLOOR_T3617095014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionFloor
struct  XPathFunctionFloor_t3617095014  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionFloor::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionFloor_t3617095014, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONFLOOR_T3617095014_H
#ifndef XPATHFUNCTIONNOT_T3025979743_H
#define XPATHFUNCTIONNOT_T3025979743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNot
struct  XPathFunctionNot_t3025979743  : public XPathBooleanFunction_t57991257
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNot::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNot_t3025979743, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNOT_T3025979743_H
#ifndef XPATHFUNCTIONNUMBER_T699684043_H
#define XPATHFUNCTIONNUMBER_T699684043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNumber
struct  XPathFunctionNumber_t699684043  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNumber::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNumber_t699684043, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNUMBER_T699684043_H
#ifndef XPATHFUNCTIONROUND_T2668931994_H
#define XPATHFUNCTIONROUND_T2668931994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionRound
struct  XPathFunctionRound_t2668931994  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionRound::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionRound_t2668931994, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONROUND_T2668931994_H
#ifndef XPATHFUNCTIONSUM_T2229418177_H
#define XPATHFUNCTIONSUM_T2229418177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSum
struct  XPathFunctionSum_t2229418177  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSum::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSum_t2229418177, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUM_T2229418177_H
#ifndef XPATHFUNCTIONTRUE_T3806785954_H
#define XPATHFUNCTIONTRUE_T3806785954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionTrue
struct  XPathFunctionTrue_t3806785954  : public XPathBooleanFunction_t57991257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONTRUE_T3806785954_H
#ifndef XPATHSORTER_T36376808_H
#define XPATHSORTER_T36376808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter
struct  XPathSorter_t36376808  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::_expr
	Expression_t1452783009 * ____expr_0;
	// System.Collections.IComparer System.Xml.XPath.XPathSorter::_cmp
	RuntimeObject* ____cmp_1;
	// System.Xml.XPath.XmlDataType System.Xml.XPath.XPathSorter::_type
	int32_t ____type_2;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}

	inline static int32_t get_offset_of__cmp_1() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____cmp_1)); }
	inline RuntimeObject* get__cmp_1() const { return ____cmp_1; }
	inline RuntimeObject** get_address_of__cmp_1() { return &____cmp_1; }
	inline void set__cmp_1(RuntimeObject* value)
	{
		____cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&____cmp_1), value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTER_T36376808_H
#ifndef EXPREQ_T1453891107_H
#define EXPREQ_T1453891107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprEQ
struct  ExprEQ_t1453891107  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPREQ_T1453891107_H
#ifndef EXPRGE_T4135851367_H
#define EXPRGE_T4135851367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGE
struct  ExprGE_t4135851367  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGE_T4135851367_H
#ifndef EXPRGT_T1857306706_H
#define EXPRGT_T1857306706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGT
struct  ExprGT_t1857306706  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGT_T1857306706_H
#ifndef EXPRLE_T4135130471_H
#define EXPRLE_T4135130471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLE
struct  ExprLE_t4135130471  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLE_T4135130471_H
#ifndef EXPRLT_T1856585810_H
#define EXPRLT_T1856585810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLT
struct  ExprLT_t1856585810  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLT_T1856585810_H
#ifndef EXPRNE_T4135261543_H
#define EXPRNE_T4135261543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNE
struct  ExprNE_t4135261543  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNE_T4135261543_H
#ifndef NULLITERATOR_T2630925529_H
#define NULLITERATOR_T2630925529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NullIterator
struct  NullIterator_t2630925529  : public SelfIterator_t907214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLITERATOR_T2630925529_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (XPathNamespaceScope_t4128811329)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1700[4] = 
{
	XPathNamespaceScope_t4128811329::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (XPathNodeIterator_t3667290188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	XPathNodeIterator_t3667290188::get_offset_of__count_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (U3CGetEnumeratorU3Ec__Iterator2_t90454087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[3] = 
{
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U24PC_0(),
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U24current_1(),
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (XPathResultType_t2828988488)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1703[8] = 
{
	XPathResultType_t2828988488::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (XPathNodeType_t3031007223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1704[11] = 
{
	XPathNodeType_t3031007223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (XmlDataType_t3437356259)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1705[3] = 
{
	XmlDataType_t3437356259::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (XPathException_t2107611652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (XPathIteratorComparer_t1799213572), -1, sizeof(XPathIteratorComparer_t1799213572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1707[1] = 
{
	XPathIteratorComparer_t1799213572_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (XPathNavigatorComparer_t2421573191), -1, sizeof(XPathNavigatorComparer_t2421573191_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1708[1] = 
{
	XPathNavigatorComparer_t2421573191_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (XPathFunctions_t1481462947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (XPathFunction_t857746608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (XPathFunctionLast_t241688620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (XPathFunctionPosition_t1996792158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (XPathFunctionCount_t4174407007), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[1] = 
{
	XPathFunctionCount_t4174407007::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (XPathFunctionId_t1670301333), -1, sizeof(XPathFunctionId_t1670301333_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1714[2] = 
{
	XPathFunctionId_t1670301333::get_offset_of_arg0_0(),
	XPathFunctionId_t1670301333_StaticFields::get_offset_of_rgchWhitespace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (XPathFunctionLocalName_t1807446049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[1] = 
{
	XPathFunctionLocalName_t1807446049::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (XPathFunctionNamespaceUri_t4077891083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[1] = 
{
	XPathFunctionNamespaceUri_t4077891083::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (XPathFunctionName_t1405602168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[1] = 
{
	XPathFunctionName_t1405602168::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (XPathFunctionString_t3820712894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1718[1] = 
{
	XPathFunctionString_t3820712894::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (XPathFunctionConcat_t3351639595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1719[1] = 
{
	XPathFunctionConcat_t3351639595::get_offset_of_rgs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (XPathFunctionStartsWith_t3734288208), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[2] = 
{
	XPathFunctionStartsWith_t3734288208::get_offset_of_arg0_0(),
	XPathFunctionStartsWith_t3734288208::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (XPathFunctionContains_t678583606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[2] = 
{
	XPathFunctionContains_t678583606::get_offset_of_arg0_0(),
	XPathFunctionContains_t678583606::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (XPathFunctionSubstringBefore_t3299707364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[2] = 
{
	XPathFunctionSubstringBefore_t3299707364::get_offset_of_arg0_0(),
	XPathFunctionSubstringBefore_t3299707364::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (XPathFunctionSubstringAfter_t2254953802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1723[2] = 
{
	XPathFunctionSubstringAfter_t2254953802::get_offset_of_arg0_0(),
	XPathFunctionSubstringAfter_t2254953802::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (XPathFunctionSubstring_t3677332116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1724[3] = 
{
	XPathFunctionSubstring_t3677332116::get_offset_of_arg0_0(),
	XPathFunctionSubstring_t3677332116::get_offset_of_arg1_1(),
	XPathFunctionSubstring_t3677332116::get_offset_of_arg2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (XPathFunctionStringLength_t1686187666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[1] = 
{
	XPathFunctionStringLength_t1686187666::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (XPathFunctionNormalizeSpace_t379159227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[1] = 
{
	XPathFunctionNormalizeSpace_t379159227::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (XPathFunctionTranslate_t1071508611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1727[3] = 
{
	XPathFunctionTranslate_t1071508611::get_offset_of_arg0_0(),
	XPathFunctionTranslate_t1071508611::get_offset_of_arg1_1(),
	XPathFunctionTranslate_t1071508611::get_offset_of_arg2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (XPathBooleanFunction_t57991257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (XPathFunctionBoolean_t2892373420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[1] = 
{
	XPathFunctionBoolean_t2892373420::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (XPathFunctionNot_t3025979743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1730[1] = 
{
	XPathFunctionNot_t3025979743::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (XPathFunctionTrue_t3806785954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (XPathFunctionFalse_t1021066162), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (XPathFunctionLang_t242671679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1733[1] = 
{
	XPathFunctionLang_t242671679::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (XPathNumericFunction_t307051317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (XPathFunctionNumber_t699684043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1735[1] = 
{
	XPathFunctionNumber_t699684043::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (XPathFunctionSum_t2229418177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[1] = 
{
	XPathFunctionSum_t2229418177::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (XPathFunctionFloor_t3617095014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1737[1] = 
{
	XPathFunctionFloor_t3617095014::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (XPathFunctionCeil_t4176839285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1738[1] = 
{
	XPathFunctionCeil_t4176839285::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (XPathFunctionRound_t2668931994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1739[1] = 
{
	XPathFunctionRound_t2668931994::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (CompiledExpression_t4018285681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1740[4] = 
{
	CompiledExpression_t4018285681::get_offset_of__nsm_0(),
	CompiledExpression_t4018285681::get_offset_of__expr_1(),
	CompiledExpression_t4018285681::get_offset_of__sorters_2(),
	CompiledExpression_t4018285681::get_offset_of_rawExpression_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (XPathSortElement_t4237073177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1741[2] = 
{
	XPathSortElement_t4237073177::get_offset_of_Navigator_0(),
	XPathSortElement_t4237073177::get_offset_of_Values_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (XPathSorters_t698127628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1742[1] = 
{
	XPathSorters_t698127628::get_offset_of__rgSorters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (XPathSorter_t36376808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1743[3] = 
{
	XPathSorter_t36376808::get_offset_of__expr_0(),
	XPathSorter_t36376808::get_offset_of__cmp_1(),
	XPathSorter_t36376808::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (Expression_t1452783009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (ExprBinary_t2069694888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1745[2] = 
{
	ExprBinary_t2069694888::get_offset_of__left_0(),
	ExprBinary_t2069694888::get_offset_of__right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (ExprBoolean_t3855188593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { sizeof (ExprOR_t3019581832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { sizeof (ExprAND_t348538276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { sizeof (EqualityExpr_t1646148531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1749[1] = 
{
	EqualityExpr_t1646148531::get_offset_of_trueVal_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { sizeof (ExprEQ_t1453891107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { sizeof (ExprNE_t4135261543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { sizeof (RelationalExpr_t3307137467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { sizeof (ExprGT_t1857306706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1754 = { sizeof (ExprGE_t4135851367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1755 = { sizeof (ExprLT_t1856585810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1756 = { sizeof (ExprLE_t4135130471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1757 = { sizeof (ExprNumeric_t370757872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1758 = { sizeof (ExprPLUS_t1725353634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1759 = { sizeof (ExprMINUS_t3125292145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1760 = { sizeof (ExprMULT_t118778748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1761 = { sizeof (ExprDIV_t1961659563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1762 = { sizeof (ExprMOD_t1913835785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1763 = { sizeof (ExprNEG_t381818215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1763[1] = 
{
	ExprNEG_t381818215::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1764 = { sizeof (NodeSet_t3272593155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1765 = { sizeof (ExprUNION_t1609753984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1765[2] = 
{
	ExprUNION_t1609753984::get_offset_of_left_0(),
	ExprUNION_t1609753984::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1766 = { sizeof (ExprSLASH_t1263914658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1766[2] = 
{
	ExprSLASH_t1263914658::get_offset_of_left_0(),
	ExprSLASH_t1263914658::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1767 = { sizeof (ExprSLASH2_t1762680492), -1, sizeof(ExprSLASH2_t1762680492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1767[3] = 
{
	ExprSLASH2_t1762680492::get_offset_of_left_0(),
	ExprSLASH2_t1762680492::get_offset_of_right_1(),
	ExprSLASH2_t1762680492_StaticFields::get_offset_of_DescendantOrSelfStar_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1768 = { sizeof (ExprRoot_t3091324302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1769 = { sizeof (Axes_t1882171014)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1769[14] = 
{
	Axes_t1882171014::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1770 = { sizeof (AxisSpecifier_t40435393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1770[1] = 
{
	AxisSpecifier_t40435393::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1771 = { sizeof (NodeTest_t747859056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1771[1] = 
{
	NodeTest_t747859056::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1772 = { sizeof (NodeTypeTest_t4287533341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1772[2] = 
{
	NodeTypeTest_t4287533341::get_offset_of_type_1(),
	NodeTypeTest_t4287533341::get_offset_of__param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1773 = { sizeof (NodeNameTest_t562814213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1773[2] = 
{
	NodeNameTest_t562814213::get_offset_of__name_1(),
	NodeNameTest_t562814213::get_offset_of_resolvedName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1774 = { sizeof (ExprFilter_t2551926938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1774[2] = 
{
	ExprFilter_t2551926938::get_offset_of_expr_0(),
	ExprFilter_t2551926938::get_offset_of_pred_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1775 = { sizeof (ExprNumber_t3483239576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1775[1] = 
{
	ExprNumber_t3483239576::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1776 = { sizeof (ExprLiteral_t2264229068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1776[1] = 
{
	ExprLiteral_t2264229068::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1777 = { sizeof (ExprVariable_t1387751146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1777[2] = 
{
	ExprVariable_t1387751146::get_offset_of__name_0(),
	ExprVariable_t1387751146::get_offset_of_resolvedName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1778 = { sizeof (ExprParens_t795575662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1778[1] = 
{
	ExprParens_t795575662::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1779 = { sizeof (FunctionArguments_t3573450773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1779[2] = 
{
	FunctionArguments_t3573450773::get_offset_of__arg_0(),
	FunctionArguments_t3573450773::get_offset_of__tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1780 = { sizeof (ExprFunctionCall_t607199437), -1, sizeof(ExprFunctionCall_t607199437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1780[4] = 
{
	ExprFunctionCall_t607199437::get_offset_of__name_0(),
	ExprFunctionCall_t607199437::get_offset_of_resolvedName_1(),
	ExprFunctionCall_t607199437::get_offset_of__args_2(),
	ExprFunctionCall_t607199437_StaticFields::get_offset_of_U3CU3Ef__switchU24map3C_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1781 = { sizeof (BaseIterator_t4168896842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1781[2] = 
{
	BaseIterator_t4168896842::get_offset_of__nsm_1(),
	BaseIterator_t4168896842::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1782 = { sizeof (WrapperIterator_t1258076988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1782[1] = 
{
	WrapperIterator_t1258076988::get_offset_of_iter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1783 = { sizeof (SimpleIterator_t809567201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1783[3] = 
{
	SimpleIterator_t809567201::get_offset_of__nav_3(),
	SimpleIterator_t809567201::get_offset_of__current_4(),
	SimpleIterator_t809567201::get_offset_of_skipfirst_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1784 = { sizeof (SelfIterator_t907214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1785 = { sizeof (NullIterator_t2630925529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1786 = { sizeof (ParensIterator_t4020310733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1786[1] = 
{
	ParensIterator_t4020310733::get_offset_of__iter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1787 = { sizeof (ParentIterator_t3536730964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1787[1] = 
{
	ParentIterator_t3536730964::get_offset_of_canMove_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1788 = { sizeof (ChildIterator_t3598849435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1788[1] = 
{
	ChildIterator_t3598849435::get_offset_of__nav_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1789 = { sizeof (FollowingSiblingIterator_t3042855407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1790 = { sizeof (PrecedingSiblingIterator_t3231156185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1790[3] = 
{
	PrecedingSiblingIterator_t3231156185::get_offset_of_finished_6(),
	PrecedingSiblingIterator_t3231156185::get_offset_of_started_7(),
	PrecedingSiblingIterator_t3231156185::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1791 = { sizeof (AncestorIterator_t1850150082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1791[3] = 
{
	AncestorIterator_t1850150082::get_offset_of_currentPosition_6(),
	AncestorIterator_t1850150082::get_offset_of_navigators_7(),
	AncestorIterator_t1850150082::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1792 = { sizeof (AncestorOrSelfIterator_t2300071220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1792[3] = 
{
	AncestorOrSelfIterator_t2300071220::get_offset_of_currentPosition_6(),
	AncestorOrSelfIterator_t2300071220::get_offset_of_navigators_7(),
	AncestorOrSelfIterator_t2300071220::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1793 = { sizeof (DescendantIterator_t2685366878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1793[2] = 
{
	DescendantIterator_t2685366878::get_offset_of__depth_6(),
	DescendantIterator_t2685366878::get_offset_of__finished_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1794 = { sizeof (DescendantOrSelfIterator_t4256219478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1794[2] = 
{
	DescendantOrSelfIterator_t4256219478::get_offset_of__depth_6(),
	DescendantOrSelfIterator_t4256219478::get_offset_of__finished_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1795 = { sizeof (FollowingIterator_t3658643279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1795[1] = 
{
	FollowingIterator_t3658643279::get_offset_of__finished_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1796 = { sizeof (PrecedingIterator_t2452812266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1796[3] = 
{
	PrecedingIterator_t2452812266::get_offset_of_finished_6(),
	PrecedingIterator_t2452812266::get_offset_of_started_7(),
	PrecedingIterator_t2452812266::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1797 = { sizeof (NamespaceIterator_t3101604877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1798 = { sizeof (AttributeIterator_t3778175417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1799 = { sizeof (AxisIterator_t3073253660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1799[2] = 
{
	AxisIterator_t3073253660::get_offset_of__iter_3(),
	AxisIterator_t3073253660::get_offset_of__test_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
