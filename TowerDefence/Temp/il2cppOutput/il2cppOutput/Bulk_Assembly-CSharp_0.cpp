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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// BuildTowerUI
struct BuildTowerUI_t1193882323;
// Bullet
struct Bullet_t1042140031;
// Enemy
struct Enemy_t1765729589;
// EnemyController
struct EnemyController_t2191660454;
// GameController
struct GameController_t2330501625;
// Level
struct Level_t2237665516;
// LevelController
struct LevelController_t24418946;
// Level[]
struct LevelU5BU5D_t979096037;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<Level>
struct List_1_t3709740258;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<Wave>
struct List_1_t617310117;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.XmlAttribute
struct XmlAttribute_t1173852259;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2316283784;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlElement
struct XmlElement_t561603118;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1073099671;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Xml.XmlNodeList
struct XmlNodeList_t2551693786;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// Tool
struct Tool_t1803513125;
// Tower
struct Tower_t684557973;
// TowerBase
struct TowerBase_t3845528826;
// TowerController
struct TowerController_t1209427180;
// UIController
struct UIController_t2237998930;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// Wave
struct Wave_t3440202671;
// Wave[]
struct WaveU5BU5D_t3057734838;

extern RuntimeClass* Consts_t1749595333_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Global_t3766954217_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Level_t2237665516_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3709740258_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t617310117_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Tool_t1803513125_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityEvent_t2581268647_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Wave_t3440202671_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDocument_t2837193595_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlElement_t561603118_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1037147829;
extern String_t* _stringLiteral1118455496;
extern String_t* _stringLiteral1232840130;
extern String_t* _stringLiteral1340993750;
extern String_t* _stringLiteral1384078394;
extern String_t* _stringLiteral1423159511;
extern String_t* _stringLiteral1456732122;
extern String_t* _stringLiteral1706900036;
extern String_t* _stringLiteral1757920701;
extern String_t* _stringLiteral1791734578;
extern String_t* _stringLiteral18647363;
extern String_t* _stringLiteral1865126246;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral2074974049;
extern String_t* _stringLiteral2138554146;
extern String_t* _stringLiteral2156263134;
extern String_t* _stringLiteral2199399970;
extern String_t* _stringLiteral2312940265;
extern String_t* _stringLiteral232967261;
extern String_t* _stringLiteral2374226348;
extern String_t* _stringLiteral2412080975;
extern String_t* _stringLiteral2435378245;
extern String_t* _stringLiteral2468274268;
extern String_t* _stringLiteral2751327424;
extern String_t* _stringLiteral2761911771;
extern String_t* _stringLiteral2786280964;
extern String_t* _stringLiteral2830330995;
extern String_t* _stringLiteral2840704432;
extern String_t* _stringLiteral2912513414;
extern String_t* _stringLiteral3016458095;
extern String_t* _stringLiteral3069214231;
extern String_t* _stringLiteral3114103742;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral3449605702;
extern String_t* _stringLiteral3450982372;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614614;
extern String_t* _stringLiteral3452614615;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral3856665693;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral4235415207;
extern String_t* _stringLiteral4236235413;
extern String_t* _stringLiteral429233636;
extern String_t* _stringLiteral534609742;
extern String_t* _stringLiteral62725243;
extern const RuntimeMethod* Component_GetComponent_TisBuildTowerUI_t1193882323_m3737898957_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisEnemyController_t2191660454_m137582258_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisEnemy_t1765729589_m2345492309_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTowerBase_t3845528826_m1140679044_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTower_t684557973_m3060005019_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBullet_t1042140031_m448032725_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTowerBase_t3845528826_m3458220719_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m270033829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m445218281_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m4063777476_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m489004955_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m510774871_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m434487951_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1639925114_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3617993755_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const uint32_t BuildTowerUI_buttonClick_m2361544566_MetadataUsageId;
extern const uint32_t Bullet_Update_m2035088002_MetadataUsageId;
extern const uint32_t Consts__cctor_m142380206_MetadataUsageId;
extern const uint32_t EnemyController_CreateAnEnemy_m1159169057_MetadataUsageId;
extern const uint32_t EnemyController_FixedUpdate_m3496289429_MetadataUsageId;
extern const uint32_t EnemyController_GameStart_m2766783483_MetadataUsageId;
extern const uint32_t EnemyController_Update_m2232054175_MetadataUsageId;
extern const uint32_t EnemyController_removeOneEnemy_m461918337_MetadataUsageId;
extern const uint32_t Enemy_Update_m3583063749_MetadataUsageId;
extern const uint32_t Enemy_initPosNode_m4095106472_MetadataUsageId;
extern const uint32_t GameController_Awake_m4256893697_MetadataUsageId;
extern const uint32_t GameController_GameStart_m1393411697_MetadataUsageId;
extern const uint32_t GameController_SetState_m2618673732_MetadataUsageId;
extern const uint32_t GameController_Update_m217025042_MetadataUsageId;
extern const uint32_t Global__cctor_m1728533878_MetadataUsageId;
extern const uint32_t Level_GetLevelNum_m3235096416_MetadataUsageId;
extern const uint32_t Level_GetWaveCount_m3763534197_MetadataUsageId;
extern const uint32_t Level_GetWave_m2307046225_MetadataUsageId;
extern const uint32_t Tool_CreateXml_m3519597088_MetadataUsageId;
extern const uint32_t Tool_GetCurrentLevel_m2732142317_MetadataUsageId;
extern const uint32_t Tool_ReadXml_m258253307_MetadataUsageId;
extern const uint32_t Tool__cctor_m2036538212_MetadataUsageId;
extern const uint32_t TowerBase_ClickBase_m4156076465_MetadataUsageId;
extern const uint32_t TowerBase_ClickDownBase_m50500525_MetadataUsageId;
extern const uint32_t TowerBase_OnUpBase_m284916354_MetadataUsageId;
extern const uint32_t TowerBase_OutUpBase_m3669438539_MetadataUsageId;
extern const uint32_t TowerBase_Start_m3302656577_MetadataUsageId;
extern const uint32_t TowerController_BuildOneTower_m679573884_MetadataUsageId;
extern const uint32_t TowerController_Start_m3386038327_MetadataUsageId;
extern const uint32_t TowerController_Update_m3071148756_MetadataUsageId;
extern const uint32_t TowerController__ctor_m2310293811_MetadataUsageId;
extern const uint32_t Tower_SetController_m2546773177_MetadataUsageId;
extern const uint32_t Tower_ShootBullet_m11695103_MetadataUsageId;
extern const uint32_t Tower_Update_m1241663353_MetadataUsageId;
extern const uint32_t UIController_CreareBuildTower_m4226805718_MetadataUsageId;
extern const uint32_t UIController_ShowBuildTowerUI_m2264479490_MetadataUsageId;
extern const uint32_t UIController_buttonClick_m1587785281_MetadataUsageId;
extern const uint32_t Wave__ctor_m4074862251_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef CONSTS_T1749595333_H
#define CONSTS_T1749595333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595333  : public RuntimeObject
{
public:

public:
};

struct Consts_t1749595333_StaticFields
{
public:
	// System.String Consts::LevelDir
	String_t* ___LevelDir_0;

public:
	inline static int32_t get_offset_of_LevelDir_0() { return static_cast<int32_t>(offsetof(Consts_t1749595333_StaticFields, ___LevelDir_0)); }
	inline String_t* get_LevelDir_0() const { return ___LevelDir_0; }
	inline String_t** get_address_of_LevelDir_0() { return &___LevelDir_0; }
	inline void set_LevelDir_0(String_t* value)
	{
		___LevelDir_0 = value;
		Il2CppCodeGenWriteBarrier((&___LevelDir_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595333_H
#ifndef GLOBAL_T3766954217_H
#define GLOBAL_T3766954217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Global
struct  Global_t3766954217  : public RuntimeObject
{
public:

public:
};

struct Global_t3766954217_StaticFields
{
public:
	// UnityEngine.Events.UnityAction Global::action
	UnityAction_t3245792599 * ___action_0;
	// UnityEngine.Events.UnityEvent Global::uEvent
	UnityEvent_t2581268647 * ___uEvent_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(Global_t3766954217_StaticFields, ___action_0)); }
	inline UnityAction_t3245792599 * get_action_0() const { return ___action_0; }
	inline UnityAction_t3245792599 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_t3245792599 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}

	inline static int32_t get_offset_of_uEvent_1() { return static_cast<int32_t>(offsetof(Global_t3766954217_StaticFields, ___uEvent_1)); }
	inline UnityEvent_t2581268647 * get_uEvent_1() const { return ___uEvent_1; }
	inline UnityEvent_t2581268647 ** get_address_of_uEvent_1() { return &___uEvent_1; }
	inline void set_uEvent_1(UnityEvent_t2581268647 * value)
	{
		___uEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___uEvent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBAL_T3766954217_H
#ifndef LEVEL_T2237665516_H
#define LEVEL_T2237665516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Level
struct  Level_t2237665516  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Wave> Level::waveList
	List_1_t617310117 * ___waveList_1;
	// System.String Level::levelText
	String_t* ___levelText_2;

public:
	inline static int32_t get_offset_of_waveList_1() { return static_cast<int32_t>(offsetof(Level_t2237665516, ___waveList_1)); }
	inline List_1_t617310117 * get_waveList_1() const { return ___waveList_1; }
	inline List_1_t617310117 ** get_address_of_waveList_1() { return &___waveList_1; }
	inline void set_waveList_1(List_1_t617310117 * value)
	{
		___waveList_1 = value;
		Il2CppCodeGenWriteBarrier((&___waveList_1), value);
	}

	inline static int32_t get_offset_of_levelText_2() { return static_cast<int32_t>(offsetof(Level_t2237665516, ___levelText_2)); }
	inline String_t* get_levelText_2() const { return ___levelText_2; }
	inline String_t** get_address_of_levelText_2() { return &___levelText_2; }
	inline void set_levelText_2(String_t* value)
	{
		___levelText_2 = value;
		Il2CppCodeGenWriteBarrier((&___levelText_2), value);
	}
};

struct Level_t2237665516_StaticFields
{
public:
	// System.Int32 Level::currentLevel
	int32_t ___currentLevel_0;

public:
	inline static int32_t get_offset_of_currentLevel_0() { return static_cast<int32_t>(offsetof(Level_t2237665516_StaticFields, ___currentLevel_0)); }
	inline int32_t get_currentLevel_0() const { return ___currentLevel_0; }
	inline int32_t* get_address_of_currentLevel_0() { return &___currentLevel_0; }
	inline void set_currentLevel_0(int32_t value)
	{
		___currentLevel_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL_T2237665516_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3709740258_H
#define LIST_1_T3709740258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Level>
struct  List_1_t3709740258  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LevelU5BU5D_t979096037* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____items_1)); }
	inline LevelU5BU5D_t979096037* get__items_1() const { return ____items_1; }
	inline LevelU5BU5D_t979096037** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LevelU5BU5D_t979096037* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3709740258, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3709740258_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LevelU5BU5D_t979096037* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3709740258_StaticFields, ___EmptyArray_4)); }
	inline LevelU5BU5D_t979096037* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LevelU5BU5D_t979096037** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LevelU5BU5D_t979096037* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3709740258_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T617310117_H
#define LIST_1_T617310117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Wave>
struct  List_1_t617310117  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WaveU5BU5D_t3057734838* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t617310117, ____items_1)); }
	inline WaveU5BU5D_t3057734838* get__items_1() const { return ____items_1; }
	inline WaveU5BU5D_t3057734838** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WaveU5BU5D_t3057734838* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t617310117, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t617310117, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t617310117_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WaveU5BU5D_t3057734838* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t617310117_StaticFields, ___EmptyArray_4)); }
	inline WaveU5BU5D_t3057734838* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WaveU5BU5D_t3057734838** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WaveU5BU5D_t3057734838* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T617310117_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map2B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2B_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map2B_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2B_4() const { return ___U3CU3Ef__switchU24map2B_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2B_4() { return &___U3CU3Ef__switchU24map2B_4; }
	inline void set_U3CU3Ef__switchU24map2B_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2B_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2B_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef XMLNODELIST_T2551693786_H
#define XMLNODELIST_T2551693786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t2551693786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T2551693786_H
#ifndef TOOL_T1803513125_H
#define TOOL_T1803513125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tool
struct  Tool_t1803513125  : public RuntimeObject
{
public:

public:
};

struct Tool_t1803513125_StaticFields
{
public:
	// System.Collections.Generic.List`1<Level> Tool::levelList
	List_1_t3709740258 * ___levelList_0;
	// Level Tool::currentLevel
	Level_t2237665516 * ___currentLevel_1;

public:
	inline static int32_t get_offset_of_levelList_0() { return static_cast<int32_t>(offsetof(Tool_t1803513125_StaticFields, ___levelList_0)); }
	inline List_1_t3709740258 * get_levelList_0() const { return ___levelList_0; }
	inline List_1_t3709740258 ** get_address_of_levelList_0() { return &___levelList_0; }
	inline void set_levelList_0(List_1_t3709740258 * value)
	{
		___levelList_0 = value;
		Il2CppCodeGenWriteBarrier((&___levelList_0), value);
	}

	inline static int32_t get_offset_of_currentLevel_1() { return static_cast<int32_t>(offsetof(Tool_t1803513125_StaticFields, ___currentLevel_1)); }
	inline Level_t2237665516 * get_currentLevel_1() const { return ___currentLevel_1; }
	inline Level_t2237665516 ** get_address_of_currentLevel_1() { return &___currentLevel_1; }
	inline void set_currentLevel_1(Level_t2237665516 * value)
	{
		___currentLevel_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentLevel_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOL_T1803513125_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef WAVE_T3440202671_H
#define WAVE_T3440202671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wave
struct  Wave_t3440202671  : public RuntimeObject
{
public:
	// System.Int32 Wave::enemyType
	int32_t ___enemyType_0;
	// System.Int32 Wave::enemyCount
	int32_t ___enemyCount_1;

public:
	inline static int32_t get_offset_of_enemyType_0() { return static_cast<int32_t>(offsetof(Wave_t3440202671, ___enemyType_0)); }
	inline int32_t get_enemyType_0() const { return ___enemyType_0; }
	inline int32_t* get_address_of_enemyType_0() { return &___enemyType_0; }
	inline void set_enemyType_0(int32_t value)
	{
		___enemyType_0 = value;
	}

	inline static int32_t get_offset_of_enemyCount_1() { return static_cast<int32_t>(offsetof(Wave_t3440202671, ___enemyCount_1)); }
	inline int32_t get_enemyCount_1() const { return ___enemyCount_1; }
	inline int32_t* get_address_of_enemyCount_1() { return &___enemyCount_1; }
	inline void set_enemyCount_1(int32_t value)
	{
		___enemyCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAVE_T3440202671_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.XmlAttribute System.Xml.XmlDocument::nsNodeXml
	XmlAttribute_t1173852259 * ___nsNodeXml_16;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_17;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_18;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_24;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_25;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_nsNodeXml_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nsNodeXml_16)); }
	inline XmlAttribute_t1173852259 * get_nsNodeXml_16() const { return ___nsNodeXml_16; }
	inline XmlAttribute_t1173852259 ** get_address_of_nsNodeXml_16() { return &___nsNodeXml_16; }
	inline void set_nsNodeXml_16(XmlAttribute_t1173852259 * value)
	{
		___nsNodeXml_16 = value;
		Il2CppCodeGenWriteBarrier((&___nsNodeXml_16), value);
	}

	inline static int32_t get_offset_of_schemas_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_17)); }
	inline XmlSchemaSet_t266093086 * get_schemas_17() const { return ___schemas_17; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_17() { return &___schemas_17; }
	inline void set_schemas_17(XmlSchemaSet_t266093086 * value)
	{
		___schemas_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_17), value);
	}

	inline static int32_t get_offset_of_schemaInfo_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_18)); }
	inline RuntimeObject* get_schemaInfo_18() const { return ___schemaInfo_18; }
	inline RuntimeObject** get_address_of_schemaInfo_18() { return &___schemaInfo_18; }
	inline void set_schemaInfo_18(RuntimeObject* value)
	{
		___schemaInfo_18 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_18), value);
	}

	inline static int32_t get_offset_of_loadMode_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_19)); }
	inline bool get_loadMode_19() const { return ___loadMode_19; }
	inline bool* get_address_of_loadMode_19() { return &___loadMode_19; }
	inline void set_loadMode_19(bool value)
	{
		___loadMode_19 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_20() const { return ___NodeChanged_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_20() { return &___NodeChanged_20; }
	inline void set_NodeChanged_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_20), value);
	}

	inline static int32_t get_offset_of_NodeChanging_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_21() const { return ___NodeChanging_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_21() { return &___NodeChanging_21; }
	inline void set_NodeChanging_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_21), value);
	}

	inline static int32_t get_offset_of_NodeInserted_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_22() const { return ___NodeInserted_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_22() { return &___NodeInserted_22; }
	inline void set_NodeInserted_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_22), value);
	}

	inline static int32_t get_offset_of_NodeInserting_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_23() const { return ___NodeInserting_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_23() { return &___NodeInserting_23; }
	inline void set_NodeInserting_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_24() const { return ___NodeRemoved_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_24() { return &___NodeRemoved_24; }
	inline void set_NodeRemoved_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_24), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_25() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_25)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_25() const { return ___NodeRemoving_25; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_25() { return &___NodeRemoving_25; }
	inline void set_NodeRemoving_25(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_25 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_25), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENEMYSTATE_T1542584413_H
#define ENEMYSTATE_T1542584413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy/EnemyState
struct  EnemyState_t1542584413 
{
public:
	// System.Int32 Enemy/EnemyState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnemyState_t1542584413, ___value___1)); }
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
#endif // ENEMYSTATE_T1542584413_H
#ifndef GAMESTATE_T1271042524_H
#define GAMESTATE_T1271042524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/GameState
struct  GameState_t1271042524 
{
public:
	// System.Int32 GameController/GameState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameState_t1271042524, ___value___1)); }
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
#endif // GAMESTATE_T1271042524_H
#ifndef XMLELEMENT_T561603118_H
#define XMLELEMENT_T561603118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlElement
struct  XmlElement_t561603118  : public XmlLinkedNode_t1437094927
{
public:
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t2316283784 * ___attributes_6;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t1073099671 * ___name_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_8;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty_9;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	RuntimeObject* ___schemaInfo_10;

public:
	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___attributes_6)); }
	inline XmlAttributeCollection_t2316283784 * get_attributes_6() const { return ___attributes_6; }
	inline XmlAttributeCollection_t2316283784 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(XmlAttributeCollection_t2316283784 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___name_7)); }
	inline XmlNameEntry_t1073099671 * get_name_7() const { return ___name_7; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(XmlNameEntry_t1073099671 * value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_8), value);
	}

	inline static int32_t get_offset_of_isNotEmpty_9() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___isNotEmpty_9)); }
	inline bool get_isNotEmpty_9() const { return ___isNotEmpty_9; }
	inline bool* get_address_of_isNotEmpty_9() { return &___isNotEmpty_9; }
	inline void set_isNotEmpty_9(bool value)
	{
		___isNotEmpty_9 = value;
	}

	inline static int32_t get_offset_of_schemaInfo_10() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___schemaInfo_10)); }
	inline RuntimeObject* get_schemaInfo_10() const { return ___schemaInfo_10; }
	inline RuntimeObject** get_address_of_schemaInfo_10() { return &___schemaInfo_10; }
	inline void set_schemaInfo_10(RuntimeObject* value)
	{
		___schemaInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLELEMENT_T561603118_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BUILDTOWERUI_T1193882323_H
#define BUILDTOWERUI_T1193882323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuildTowerUI
struct  BuildTowerUI_t1193882323  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform BuildTowerUI::controller
	Transform_t3600365921 * ___controller_4;
	// UnityEngine.Transform BuildTowerUI::towerBase
	Transform_t3600365921 * ___towerBase_5;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(BuildTowerUI_t1193882323, ___controller_4)); }
	inline Transform_t3600365921 * get_controller_4() const { return ___controller_4; }
	inline Transform_t3600365921 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Transform_t3600365921 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((&___controller_4), value);
	}

	inline static int32_t get_offset_of_towerBase_5() { return static_cast<int32_t>(offsetof(BuildTowerUI_t1193882323, ___towerBase_5)); }
	inline Transform_t3600365921 * get_towerBase_5() const { return ___towerBase_5; }
	inline Transform_t3600365921 ** get_address_of_towerBase_5() { return &___towerBase_5; }
	inline void set_towerBase_5(Transform_t3600365921 * value)
	{
		___towerBase_5 = value;
		Il2CppCodeGenWriteBarrier((&___towerBase_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTOWERUI_T1193882323_H
#ifndef BULLET_T1042140031_H
#define BULLET_T1042140031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t1042140031  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Bullet::shootTarget
	GameObject_t1113636619 * ___shootTarget_4;
	// Tower Bullet::controller
	Tower_t684557973 * ___controller_5;
	// System.Single Bullet::targetScele
	float ___targetScele_6;
	// System.Single Bullet::currentScale
	float ___currentScale_7;
	// UnityEngine.Vector3 Bullet::director
	Vector3_t3722313464  ___director_8;

public:
	inline static int32_t get_offset_of_shootTarget_4() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___shootTarget_4)); }
	inline GameObject_t1113636619 * get_shootTarget_4() const { return ___shootTarget_4; }
	inline GameObject_t1113636619 ** get_address_of_shootTarget_4() { return &___shootTarget_4; }
	inline void set_shootTarget_4(GameObject_t1113636619 * value)
	{
		___shootTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&___shootTarget_4), value);
	}

	inline static int32_t get_offset_of_controller_5() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___controller_5)); }
	inline Tower_t684557973 * get_controller_5() const { return ___controller_5; }
	inline Tower_t684557973 ** get_address_of_controller_5() { return &___controller_5; }
	inline void set_controller_5(Tower_t684557973 * value)
	{
		___controller_5 = value;
		Il2CppCodeGenWriteBarrier((&___controller_5), value);
	}

	inline static int32_t get_offset_of_targetScele_6() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___targetScele_6)); }
	inline float get_targetScele_6() const { return ___targetScele_6; }
	inline float* get_address_of_targetScele_6() { return &___targetScele_6; }
	inline void set_targetScele_6(float value)
	{
		___targetScele_6 = value;
	}

	inline static int32_t get_offset_of_currentScale_7() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___currentScale_7)); }
	inline float get_currentScale_7() const { return ___currentScale_7; }
	inline float* get_address_of_currentScale_7() { return &___currentScale_7; }
	inline void set_currentScale_7(float value)
	{
		___currentScale_7 = value;
	}

	inline static int32_t get_offset_of_director_8() { return static_cast<int32_t>(offsetof(Bullet_t1042140031, ___director_8)); }
	inline Vector3_t3722313464  get_director_8() const { return ___director_8; }
	inline Vector3_t3722313464 * get_address_of_director_8() { return &___director_8; }
	inline void set_director_8(Vector3_t3722313464  value)
	{
		___director_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLET_T1042140031_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Enemy::PosNode
	GameObject_t1113636619 * ___PosNode_4;
	// System.Int32 Enemy::moveIndex
	int32_t ___moveIndex_5;
	// UnityEngine.Vector3 Enemy::nextPos
	Vector3_t3722313464  ___nextPos_6;
	// Enemy/EnemyState Enemy::enemyState
	int32_t ___enemyState_7;
	// System.Single Enemy::speed
	float ___speed_8;
	// EnemyController Enemy::enemyController
	EnemyController_t2191660454 * ___enemyController_9;

public:
	inline static int32_t get_offset_of_PosNode_4() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___PosNode_4)); }
	inline GameObject_t1113636619 * get_PosNode_4() const { return ___PosNode_4; }
	inline GameObject_t1113636619 ** get_address_of_PosNode_4() { return &___PosNode_4; }
	inline void set_PosNode_4(GameObject_t1113636619 * value)
	{
		___PosNode_4 = value;
		Il2CppCodeGenWriteBarrier((&___PosNode_4), value);
	}

	inline static int32_t get_offset_of_moveIndex_5() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___moveIndex_5)); }
	inline int32_t get_moveIndex_5() const { return ___moveIndex_5; }
	inline int32_t* get_address_of_moveIndex_5() { return &___moveIndex_5; }
	inline void set_moveIndex_5(int32_t value)
	{
		___moveIndex_5 = value;
	}

	inline static int32_t get_offset_of_nextPos_6() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___nextPos_6)); }
	inline Vector3_t3722313464  get_nextPos_6() const { return ___nextPos_6; }
	inline Vector3_t3722313464 * get_address_of_nextPos_6() { return &___nextPos_6; }
	inline void set_nextPos_6(Vector3_t3722313464  value)
	{
		___nextPos_6 = value;
	}

	inline static int32_t get_offset_of_enemyState_7() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyState_7)); }
	inline int32_t get_enemyState_7() const { return ___enemyState_7; }
	inline int32_t* get_address_of_enemyState_7() { return &___enemyState_7; }
	inline void set_enemyState_7(int32_t value)
	{
		___enemyState_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_enemyController_9() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyController_9)); }
	inline EnemyController_t2191660454 * get_enemyController_9() const { return ___enemyController_9; }
	inline EnemyController_t2191660454 ** get_address_of_enemyController_9() { return &___enemyController_9; }
	inline void set_enemyController_9(EnemyController_t2191660454 * value)
	{
		___enemyController_9 = value;
		Il2CppCodeGenWriteBarrier((&___enemyController_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
#ifndef ENEMYCONTROLLER_T2191660454_H
#define ENEMYCONTROLLER_T2191660454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2191660454  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyController::enemyPrefabs
	List_1_t2585711361 * ___enemyPrefabs_4;
	// UnityEngine.GameObject EnemyController::posNodes
	GameObject_t1113636619 * ___posNodes_5;
	// System.Single EnemyController::waveDuraction
	float ___waveDuraction_6;
	// System.Single EnemyController::enemyDuraction
	float ___enemyDuraction_7;
	// System.Boolean EnemyController::isRunning
	bool ___isRunning_8;
	// System.Single EnemyController::createEnemyTime
	float ___createEnemyTime_9;
	// System.Int32 EnemyController::createEnemyCount
	int32_t ___createEnemyCount_10;
	// System.Single EnemyController::createWaveTime
	float ___createWaveTime_11;
	// System.Int32 EnemyController::createWaveCount
	int32_t ___createWaveCount_12;
	// Level EnemyController::currentLevel
	Level_t2237665516 * ___currentLevel_13;
	// Wave EnemyController::currentWave
	Wave_t3440202671 * ___currentWave_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyController::enemyList
	List_1_t2585711361 * ___enemyList_15;

public:
	inline static int32_t get_offset_of_enemyPrefabs_4() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___enemyPrefabs_4)); }
	inline List_1_t2585711361 * get_enemyPrefabs_4() const { return ___enemyPrefabs_4; }
	inline List_1_t2585711361 ** get_address_of_enemyPrefabs_4() { return &___enemyPrefabs_4; }
	inline void set_enemyPrefabs_4(List_1_t2585711361 * value)
	{
		___enemyPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((&___enemyPrefabs_4), value);
	}

	inline static int32_t get_offset_of_posNodes_5() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___posNodes_5)); }
	inline GameObject_t1113636619 * get_posNodes_5() const { return ___posNodes_5; }
	inline GameObject_t1113636619 ** get_address_of_posNodes_5() { return &___posNodes_5; }
	inline void set_posNodes_5(GameObject_t1113636619 * value)
	{
		___posNodes_5 = value;
		Il2CppCodeGenWriteBarrier((&___posNodes_5), value);
	}

	inline static int32_t get_offset_of_waveDuraction_6() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___waveDuraction_6)); }
	inline float get_waveDuraction_6() const { return ___waveDuraction_6; }
	inline float* get_address_of_waveDuraction_6() { return &___waveDuraction_6; }
	inline void set_waveDuraction_6(float value)
	{
		___waveDuraction_6 = value;
	}

	inline static int32_t get_offset_of_enemyDuraction_7() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___enemyDuraction_7)); }
	inline float get_enemyDuraction_7() const { return ___enemyDuraction_7; }
	inline float* get_address_of_enemyDuraction_7() { return &___enemyDuraction_7; }
	inline void set_enemyDuraction_7(float value)
	{
		___enemyDuraction_7 = value;
	}

	inline static int32_t get_offset_of_isRunning_8() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___isRunning_8)); }
	inline bool get_isRunning_8() const { return ___isRunning_8; }
	inline bool* get_address_of_isRunning_8() { return &___isRunning_8; }
	inline void set_isRunning_8(bool value)
	{
		___isRunning_8 = value;
	}

	inline static int32_t get_offset_of_createEnemyTime_9() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___createEnemyTime_9)); }
	inline float get_createEnemyTime_9() const { return ___createEnemyTime_9; }
	inline float* get_address_of_createEnemyTime_9() { return &___createEnemyTime_9; }
	inline void set_createEnemyTime_9(float value)
	{
		___createEnemyTime_9 = value;
	}

	inline static int32_t get_offset_of_createEnemyCount_10() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___createEnemyCount_10)); }
	inline int32_t get_createEnemyCount_10() const { return ___createEnemyCount_10; }
	inline int32_t* get_address_of_createEnemyCount_10() { return &___createEnemyCount_10; }
	inline void set_createEnemyCount_10(int32_t value)
	{
		___createEnemyCount_10 = value;
	}

	inline static int32_t get_offset_of_createWaveTime_11() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___createWaveTime_11)); }
	inline float get_createWaveTime_11() const { return ___createWaveTime_11; }
	inline float* get_address_of_createWaveTime_11() { return &___createWaveTime_11; }
	inline void set_createWaveTime_11(float value)
	{
		___createWaveTime_11 = value;
	}

	inline static int32_t get_offset_of_createWaveCount_12() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___createWaveCount_12)); }
	inline int32_t get_createWaveCount_12() const { return ___createWaveCount_12; }
	inline int32_t* get_address_of_createWaveCount_12() { return &___createWaveCount_12; }
	inline void set_createWaveCount_12(int32_t value)
	{
		___createWaveCount_12 = value;
	}

	inline static int32_t get_offset_of_currentLevel_13() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___currentLevel_13)); }
	inline Level_t2237665516 * get_currentLevel_13() const { return ___currentLevel_13; }
	inline Level_t2237665516 ** get_address_of_currentLevel_13() { return &___currentLevel_13; }
	inline void set_currentLevel_13(Level_t2237665516 * value)
	{
		___currentLevel_13 = value;
		Il2CppCodeGenWriteBarrier((&___currentLevel_13), value);
	}

	inline static int32_t get_offset_of_currentWave_14() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___currentWave_14)); }
	inline Wave_t3440202671 * get_currentWave_14() const { return ___currentWave_14; }
	inline Wave_t3440202671 ** get_address_of_currentWave_14() { return &___currentWave_14; }
	inline void set_currentWave_14(Wave_t3440202671 * value)
	{
		___currentWave_14 = value;
		Il2CppCodeGenWriteBarrier((&___currentWave_14), value);
	}

	inline static int32_t get_offset_of_enemyList_15() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___enemyList_15)); }
	inline List_1_t2585711361 * get_enemyList_15() const { return ___enemyList_15; }
	inline List_1_t2585711361 ** get_address_of_enemyList_15() { return &___enemyList_15; }
	inline void set_enemyList_15(List_1_t2585711361 * value)
	{
		___enemyList_15 = value;
		Il2CppCodeGenWriteBarrier((&___enemyList_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYCONTROLLER_T2191660454_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameController::mainCamera
	GameObject_t1113636619 * ___mainCamera_4;
	// UnityEngine.GameObject GameController::plane
	GameObject_t1113636619 * ___plane_5;
	// GameController/GameState GameController::gameState
	int32_t ___gameState_6;
	// UnityEngine.Events.UnityEvent GameController::actionEvent
	UnityEvent_t2581268647 * ___actionEvent_7;
	// UnityEngine.GameObject GameController::levelLabel
	GameObject_t1113636619 * ___levelLabel_8;

public:
	inline static int32_t get_offset_of_mainCamera_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___mainCamera_4)); }
	inline GameObject_t1113636619 * get_mainCamera_4() const { return ___mainCamera_4; }
	inline GameObject_t1113636619 ** get_address_of_mainCamera_4() { return &___mainCamera_4; }
	inline void set_mainCamera_4(GameObject_t1113636619 * value)
	{
		___mainCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_4), value);
	}

	inline static int32_t get_offset_of_plane_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___plane_5)); }
	inline GameObject_t1113636619 * get_plane_5() const { return ___plane_5; }
	inline GameObject_t1113636619 ** get_address_of_plane_5() { return &___plane_5; }
	inline void set_plane_5(GameObject_t1113636619 * value)
	{
		___plane_5 = value;
		Il2CppCodeGenWriteBarrier((&___plane_5), value);
	}

	inline static int32_t get_offset_of_gameState_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___gameState_6)); }
	inline int32_t get_gameState_6() const { return ___gameState_6; }
	inline int32_t* get_address_of_gameState_6() { return &___gameState_6; }
	inline void set_gameState_6(int32_t value)
	{
		___gameState_6 = value;
	}

	inline static int32_t get_offset_of_actionEvent_7() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___actionEvent_7)); }
	inline UnityEvent_t2581268647 * get_actionEvent_7() const { return ___actionEvent_7; }
	inline UnityEvent_t2581268647 ** get_address_of_actionEvent_7() { return &___actionEvent_7; }
	inline void set_actionEvent_7(UnityEvent_t2581268647 * value)
	{
		___actionEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___actionEvent_7), value);
	}

	inline static int32_t get_offset_of_levelLabel_8() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___levelLabel_8)); }
	inline GameObject_t1113636619 * get_levelLabel_8() const { return ___levelLabel_8; }
	inline GameObject_t1113636619 ** get_address_of_levelLabel_8() { return &___levelLabel_8; }
	inline void set_levelLabel_8(GameObject_t1113636619 * value)
	{
		___levelLabel_8 = value;
		Il2CppCodeGenWriteBarrier((&___levelLabel_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef LEVELCONTROLLER_T24418946_H
#define LEVELCONTROLLER_T24418946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelController
struct  LevelController_t24418946  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELCONTROLLER_T24418946_H
#ifndef TOWER_T684557973_H
#define TOWER_T684557973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tower
struct  Tower_t684557973  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Tower::controller
	Transform_t3600365921 * ___controller_4;
	// EnemyController Tower::enemyController
	EnemyController_t2191660454 * ___enemyController_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Tower::enemyList
	List_1_t2585711361 * ___enemyList_6;
	// System.Single Tower::attackDistance
	float ___attackDistance_7;
	// UnityEngine.GameObject Tower::attackTarget
	GameObject_t1113636619 * ___attackTarget_8;
	// UnityEngine.Vector3 Tower::targetVector
	Vector3_t3722313464  ___targetVector_9;
	// UnityEngine.Vector3 Tower::currentVector
	Vector3_t3722313464  ___currentVector_10;
	// UnityEngine.GameObject Tower::bulletPrefab
	GameObject_t1113636619 * ___bulletPrefab_11;
	// System.Single Tower::shootDuraction
	float ___shootDuraction_12;
	// System.Single Tower::shootNotTime
	float ___shootNotTime_13;
	// UnityEngine.GameObject Tower::shootPoint
	GameObject_t1113636619 * ___shootPoint_14;
	// UnityEngine.GameObject Tower::gun
	GameObject_t1113636619 * ___gun_15;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___controller_4)); }
	inline Transform_t3600365921 * get_controller_4() const { return ___controller_4; }
	inline Transform_t3600365921 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Transform_t3600365921 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((&___controller_4), value);
	}

	inline static int32_t get_offset_of_enemyController_5() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___enemyController_5)); }
	inline EnemyController_t2191660454 * get_enemyController_5() const { return ___enemyController_5; }
	inline EnemyController_t2191660454 ** get_address_of_enemyController_5() { return &___enemyController_5; }
	inline void set_enemyController_5(EnemyController_t2191660454 * value)
	{
		___enemyController_5 = value;
		Il2CppCodeGenWriteBarrier((&___enemyController_5), value);
	}

	inline static int32_t get_offset_of_enemyList_6() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___enemyList_6)); }
	inline List_1_t2585711361 * get_enemyList_6() const { return ___enemyList_6; }
	inline List_1_t2585711361 ** get_address_of_enemyList_6() { return &___enemyList_6; }
	inline void set_enemyList_6(List_1_t2585711361 * value)
	{
		___enemyList_6 = value;
		Il2CppCodeGenWriteBarrier((&___enemyList_6), value);
	}

	inline static int32_t get_offset_of_attackDistance_7() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___attackDistance_7)); }
	inline float get_attackDistance_7() const { return ___attackDistance_7; }
	inline float* get_address_of_attackDistance_7() { return &___attackDistance_7; }
	inline void set_attackDistance_7(float value)
	{
		___attackDistance_7 = value;
	}

	inline static int32_t get_offset_of_attackTarget_8() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___attackTarget_8)); }
	inline GameObject_t1113636619 * get_attackTarget_8() const { return ___attackTarget_8; }
	inline GameObject_t1113636619 ** get_address_of_attackTarget_8() { return &___attackTarget_8; }
	inline void set_attackTarget_8(GameObject_t1113636619 * value)
	{
		___attackTarget_8 = value;
		Il2CppCodeGenWriteBarrier((&___attackTarget_8), value);
	}

	inline static int32_t get_offset_of_targetVector_9() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___targetVector_9)); }
	inline Vector3_t3722313464  get_targetVector_9() const { return ___targetVector_9; }
	inline Vector3_t3722313464 * get_address_of_targetVector_9() { return &___targetVector_9; }
	inline void set_targetVector_9(Vector3_t3722313464  value)
	{
		___targetVector_9 = value;
	}

	inline static int32_t get_offset_of_currentVector_10() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___currentVector_10)); }
	inline Vector3_t3722313464  get_currentVector_10() const { return ___currentVector_10; }
	inline Vector3_t3722313464 * get_address_of_currentVector_10() { return &___currentVector_10; }
	inline void set_currentVector_10(Vector3_t3722313464  value)
	{
		___currentVector_10 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_11() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___bulletPrefab_11)); }
	inline GameObject_t1113636619 * get_bulletPrefab_11() const { return ___bulletPrefab_11; }
	inline GameObject_t1113636619 ** get_address_of_bulletPrefab_11() { return &___bulletPrefab_11; }
	inline void set_bulletPrefab_11(GameObject_t1113636619 * value)
	{
		___bulletPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___bulletPrefab_11), value);
	}

	inline static int32_t get_offset_of_shootDuraction_12() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___shootDuraction_12)); }
	inline float get_shootDuraction_12() const { return ___shootDuraction_12; }
	inline float* get_address_of_shootDuraction_12() { return &___shootDuraction_12; }
	inline void set_shootDuraction_12(float value)
	{
		___shootDuraction_12 = value;
	}

	inline static int32_t get_offset_of_shootNotTime_13() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___shootNotTime_13)); }
	inline float get_shootNotTime_13() const { return ___shootNotTime_13; }
	inline float* get_address_of_shootNotTime_13() { return &___shootNotTime_13; }
	inline void set_shootNotTime_13(float value)
	{
		___shootNotTime_13 = value;
	}

	inline static int32_t get_offset_of_shootPoint_14() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___shootPoint_14)); }
	inline GameObject_t1113636619 * get_shootPoint_14() const { return ___shootPoint_14; }
	inline GameObject_t1113636619 ** get_address_of_shootPoint_14() { return &___shootPoint_14; }
	inline void set_shootPoint_14(GameObject_t1113636619 * value)
	{
		___shootPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___shootPoint_14), value);
	}

	inline static int32_t get_offset_of_gun_15() { return static_cast<int32_t>(offsetof(Tower_t684557973, ___gun_15)); }
	inline GameObject_t1113636619 * get_gun_15() const { return ___gun_15; }
	inline GameObject_t1113636619 ** get_address_of_gun_15() { return &___gun_15; }
	inline void set_gun_15(GameObject_t1113636619 * value)
	{
		___gun_15 = value;
		Il2CppCodeGenWriteBarrier((&___gun_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOWER_T684557973_H
#ifndef TOWERBASE_T3845528826_H
#define TOWERBASE_T3845528826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TowerBase
struct  TowerBase_t3845528826  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color TowerBase::color
	Color_t2555686324  ___color_4;
	// UnityEngine.Transform TowerBase::controller
	Transform_t3600365921 * ___controller_5;

public:
	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TowerBase_t3845528826, ___color_4)); }
	inline Color_t2555686324  get_color_4() const { return ___color_4; }
	inline Color_t2555686324 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color_t2555686324  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_controller_5() { return static_cast<int32_t>(offsetof(TowerBase_t3845528826, ___controller_5)); }
	inline Transform_t3600365921 * get_controller_5() const { return ___controller_5; }
	inline Transform_t3600365921 ** get_address_of_controller_5() { return &___controller_5; }
	inline void set_controller_5(Transform_t3600365921 * value)
	{
		___controller_5 = value;
		Il2CppCodeGenWriteBarrier((&___controller_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOWERBASE_T3845528826_H
#ifndef TOWERCONTROLLER_T1209427180_H
#define TOWERCONTROLLER_T1209427180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TowerController
struct  TowerController_t1209427180  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TowerController::towerBasePosNodes
	GameObject_t1113636619 * ___towerBasePosNodes_4;
	// UnityEngine.GameObject TowerController::towerBasePrefab
	GameObject_t1113636619 * ___towerBasePrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TowerController::towerPrefabs
	List_1_t2585711361 * ___towerPrefabs_6;
	// UnityEngine.GameObject TowerController::rayHitObj
	GameObject_t1113636619 * ___rayHitObj_7;
	// System.Int32 TowerController::targetMask
	int32_t ___targetMask_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TowerController::towerBaseList
	List_1_t2585711361 * ___towerBaseList_9;

public:
	inline static int32_t get_offset_of_towerBasePosNodes_4() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___towerBasePosNodes_4)); }
	inline GameObject_t1113636619 * get_towerBasePosNodes_4() const { return ___towerBasePosNodes_4; }
	inline GameObject_t1113636619 ** get_address_of_towerBasePosNodes_4() { return &___towerBasePosNodes_4; }
	inline void set_towerBasePosNodes_4(GameObject_t1113636619 * value)
	{
		___towerBasePosNodes_4 = value;
		Il2CppCodeGenWriteBarrier((&___towerBasePosNodes_4), value);
	}

	inline static int32_t get_offset_of_towerBasePrefab_5() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___towerBasePrefab_5)); }
	inline GameObject_t1113636619 * get_towerBasePrefab_5() const { return ___towerBasePrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_towerBasePrefab_5() { return &___towerBasePrefab_5; }
	inline void set_towerBasePrefab_5(GameObject_t1113636619 * value)
	{
		___towerBasePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___towerBasePrefab_5), value);
	}

	inline static int32_t get_offset_of_towerPrefabs_6() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___towerPrefabs_6)); }
	inline List_1_t2585711361 * get_towerPrefabs_6() const { return ___towerPrefabs_6; }
	inline List_1_t2585711361 ** get_address_of_towerPrefabs_6() { return &___towerPrefabs_6; }
	inline void set_towerPrefabs_6(List_1_t2585711361 * value)
	{
		___towerPrefabs_6 = value;
		Il2CppCodeGenWriteBarrier((&___towerPrefabs_6), value);
	}

	inline static int32_t get_offset_of_rayHitObj_7() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___rayHitObj_7)); }
	inline GameObject_t1113636619 * get_rayHitObj_7() const { return ___rayHitObj_7; }
	inline GameObject_t1113636619 ** get_address_of_rayHitObj_7() { return &___rayHitObj_7; }
	inline void set_rayHitObj_7(GameObject_t1113636619 * value)
	{
		___rayHitObj_7 = value;
		Il2CppCodeGenWriteBarrier((&___rayHitObj_7), value);
	}

	inline static int32_t get_offset_of_targetMask_8() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___targetMask_8)); }
	inline int32_t get_targetMask_8() const { return ___targetMask_8; }
	inline int32_t* get_address_of_targetMask_8() { return &___targetMask_8; }
	inline void set_targetMask_8(int32_t value)
	{
		___targetMask_8 = value;
	}

	inline static int32_t get_offset_of_towerBaseList_9() { return static_cast<int32_t>(offsetof(TowerController_t1209427180, ___towerBaseList_9)); }
	inline List_1_t2585711361 * get_towerBaseList_9() const { return ___towerBaseList_9; }
	inline List_1_t2585711361 ** get_address_of_towerBaseList_9() { return &___towerBaseList_9; }
	inline void set_towerBaseList_9(List_1_t2585711361 * value)
	{
		___towerBaseList_9 = value;
		Il2CppCodeGenWriteBarrier((&___towerBaseList_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOWERCONTROLLER_T1209427180_H
#ifndef UICONTROLLER_T2237998930_H
#define UICONTROLLER_T2237998930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2237998930  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject UIController::canvas
	GameObject_t1113636619 * ___canvas_4;
	// UnityEngine.GameObject UIController::buildTowerUIPrefab
	GameObject_t1113636619 * ___buildTowerUIPrefab_5;
	// UnityEngine.GameObject UIController::currentMenu
	GameObject_t1113636619 * ___currentMenu_6;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(UIController_t2237998930, ___canvas_4)); }
	inline GameObject_t1113636619 * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_t1113636619 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_t1113636619 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_4), value);
	}

	inline static int32_t get_offset_of_buildTowerUIPrefab_5() { return static_cast<int32_t>(offsetof(UIController_t2237998930, ___buildTowerUIPrefab_5)); }
	inline GameObject_t1113636619 * get_buildTowerUIPrefab_5() const { return ___buildTowerUIPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_buildTowerUIPrefab_5() { return &___buildTowerUIPrefab_5; }
	inline void set_buildTowerUIPrefab_5(GameObject_t1113636619 * value)
	{
		___buildTowerUIPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___buildTowerUIPrefab_5), value);
	}

	inline static int32_t get_offset_of_currentMenu_6() { return static_cast<int32_t>(offsetof(UIController_t2237998930, ___currentMenu_6)); }
	inline GameObject_t1113636619 * get_currentMenu_6() const { return ___currentMenu_6; }
	inline GameObject_t1113636619 ** get_address_of_currentMenu_6() { return &___currentMenu_6; }
	inline void set_currentMenu_6(GameObject_t1113636619 * value)
	{
		___currentMenu_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentMenu_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICONTROLLER_T2237998930_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Component_SendMessage_m3707514258 (Component_t1923634451 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Normalize_m2941713846 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void Tower::CollisionAttack(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Tower_CollisionAttack_m165119970 (Tower_t684557973 * __this, GameObject_t1113636619 * ___enemyTarget0, const RuntimeMethod* method);
// System.Void Bullet::PlayBombAnimate()
extern "C" IL2CPP_METHOD_ATTR void Bullet_PlayBombAnimate_m3111143632 (Bullet_t1042140031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Enemy::setState(Enemy/EnemyState)
extern "C" IL2CPP_METHOD_ATTR void Enemy_setState_m1097935534 (Enemy_t1765729589 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Enemy::moveNextPos()
extern "C" IL2CPP_METHOD_ATTR void Enemy_moveNextPos_m4041372534 (Enemy_t1765729589 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void EnemyController::removeOneEnemy(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void EnemyController_removeOneEnemy_m461918337 (EnemyController_t2191660454 * __this, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void EnemyController::GameStart()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_GameStart_m2766783483 (EnemyController_t2191660454 * __this, const RuntimeMethod* method);
// System.Void EnemyController::CreateAnEnemy(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EnemyController_CreateAnEnemy_m1159169057 (EnemyController_t2191660454 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void EnemyController::CreateAnWave()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_CreateAnWave_m3659136724 (EnemyController_t2191660454 * __this, const RuntimeMethod* method);
// Level Tool::GetCurrentLevel()
extern "C" IL2CPP_METHOD_ATTR Level_t2237665516 * Tool_GetCurrentLevel_m2732142317 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m2812834599 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t1113636619 * List_1_get_Item_m3743125852 (List_1_t2585711361 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t1765729589 * Component_GetComponent_TisEnemy_t1765729589_m2345492309 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_t1765729589 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Enemy::initPosNode(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Enemy_initPosNode_m4095106472 (Enemy_t1765729589 * __this, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method);
// System.Void Enemy::setController(EnemyController)
extern "C" IL2CPP_METHOD_ATTR void Enemy_setController_m2871789118 (Enemy_t1765729589 * __this, EnemyController_t2191660454 * ___ctl0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 Level::GetWaveCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Level_GetWaveCount_m3763534197 (Level_t2237665516 * __this, const RuntimeMethod* method);
// Wave Level::GetWave(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Wave_t3440202671 * Level_GetWave_m2307046225 (Level_t2237665516 * __this, int32_t ___waveIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_m4063777476 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void Tool::ReadXml(System.String)
extern "C" IL2CPP_METHOD_ATTR void Tool_ReadXml_m258253307 (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void GameController::SetState(GameController/GameState)
extern "C" IL2CPP_METHOD_ATTR void GameController_SetState_m2618673732 (GameController_t2330501625 * __this, int32_t ___state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponent_TisText_t1901882714_m4196288697 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent__ctor_m431206565 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m3797620966 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Wave>::get_Item(System.Int32)
inline Wave_t3440202671 * List_1_get_Item_m3617993755 (List_1_t617310117 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Wave_t3440202671 * (*) (List_1_t617310117 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<Wave>::get_Count()
inline int32_t List_1_get_Count_m434487951 (List_1_t617310117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t617310117 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlDocument::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlDocument__ctor_m664597982 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::SelectSingleNode(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlNode_SelectSingleNode_m2944339946 (XmlNode_t3767805227 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.XmlNodeList System.Xml.XmlNode::SelectNodes(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlNodeList_t2551693786 * XmlNode_SelectNodes_m3596713167 (XmlNode_t3767805227 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Wave>::.ctor()
inline void List_1__ctor_m510774871 (List_1_t617310117 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t617310117 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void Wave::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Wave__ctor_m4074862251 (Wave_t3440202671 * __this, String_t* ___type0, String_t* ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Wave>::Add(!0)
inline void List_1_Add_m445218281 (List_1_t617310117 * __this, Wave_t3440202671 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t617310117 *, Wave_t3440202671 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Level::.ctor(System.Collections.Generic.List`1<Wave>,System.String)
extern "C" IL2CPP_METHOD_ATTR void Level__ctor_m3391596110 (Level_t2237665516 * __this, List_1_t617310117 * ___list0, String_t* ___text1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Level>::Add(!0)
inline void List_1_Add_m270033829 (List_1_t3709740258 * __this, Level_t2237665516 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3709740258 *, Level_t2237665516 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlElement_t561603118 * XmlDocument_CreateElement_m2961417808 (XmlDocument_t2837193595 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 Level::GetLevelNum()
extern "C" IL2CPP_METHOD_ATTR int32_t Level_GetLevelNum_m3235096416 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Level>::get_Item(System.Int32)
inline Level_t2237665516 * List_1_get_Item_m1639925114 (List_1_t3709740258 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Level_t2237665516 * (*) (List_1_t3709740258 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Level>::.ctor()
inline void List_1__ctor_m489004955 (List_1_t3709740258 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3709740258 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<EnemyController>()
inline EnemyController_t2191660454 * Component_GetComponent_TisEnemyController_t2191660454_m137582258 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  EnemyController_t2191660454 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void Tower::ShootBullet()
extern "C" IL2CPP_METHOD_ATTR void Tower_ShootBullet_m11695103 (Tower_t684557973 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_t1042140031 * GameObject_GetComponent_TisBullet_t1042140031_m448032725 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_t1042140031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void Bullet::SetShootTarget(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Bullet_SetShootTarget_m1392721162 (Bullet_t1042140031 * __this, GameObject_t1113636619 * ___target0, const RuntimeMethod* method);
// System.Void Bullet::SetController(Tower)
extern "C" IL2CPP_METHOD_ATTR void Bullet_SetController_m4218499205 (Bullet_t1042140031 * __this, Tower_t684557973 * ___ctl0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m2651633905 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Material_get_color_m3827673574 (Material_t340375123 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m1424466557 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<TowerBase>()
inline TowerBase_t3845528826 * GameObject_GetComponent_TisTowerBase_t3845528826_m3458220719 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  TowerBase_t3845528826 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void TowerBase::setController(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void TowerBase_setController_m2138086074 (TowerBase_t3845528826 * __this, Transform_t3600365921 * ___ctl0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TowerBase>()
inline TowerBase_t3845528826 * Component_GetComponent_TisTowerBase_t3845528826_m1140679044 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TowerBase_t3845528826 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void TowerBase::OutUpBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_OutUpBase_m3669438539 (TowerBase_t3845528826 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1893809531 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, float p2, int32_t p3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void TowerBase::OnUpBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_OnUpBase_m284916354 (TowerBase_t3845528826 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void TowerBase::ClickBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_ClickBase_m4156076465 (TowerBase_t3845528826 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void TowerBase::ClickDownBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_ClickDownBase_m50500525 (TowerBase_t3845528826 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Tower>()
inline Tower_t684557973 * Component_GetComponent_TisTower_t684557973_m3060005019 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Tower_t684557973 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Tower::SetController(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Tower_SetController_m2546773177 (Tower_t684557973 * __this, Transform_t3600365921 * ___ctl0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_WorldToScreenPoint_m3726311023 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m906392898 (Vector3_t3722313464 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UIController::CreareBuildTower(UnityEngine.Vector3,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void UIController_CreareBuildTower_m4226805718 (UIController_t2237998930 * __this, Vector3_t3722313464  ___pos0, Transform_t3600365921 * ___tra1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BuildTowerUI>()
inline BuildTowerUI_t1193882323 * Component_GetComponent_TisBuildTowerUI_t1193882323_m3737898957 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BuildTowerUI_t1193882323 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void BuildTowerUI::setControllerAndTowerBase(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI_setControllerAndTowerBase_m1087126066 (BuildTowerUI_t1193882323 * __this, Transform_t3600365921 * ___ctl0, Transform_t3600365921 * ___tra1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method);
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
// System.Void BuildTowerUI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI__ctor_m1647868735 (BuildTowerUI_t1193882323 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuildTowerUI::Start()
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI_Start_m656700025 (BuildTowerUI_t1193882323 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void BuildTowerUI::Update()
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI_Update_m1608488149 (BuildTowerUI_t1193882323 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void BuildTowerUI::buttonClick(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI_buttonClick_m2361544566 (BuildTowerUI_t1193882323 * __this, int32_t ___towerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildTowerUI_buttonClick_m2361544566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		int32_t L_0 = ___towerId0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral534609742, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_0;
		int32_t L_6 = ___towerId0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = V_0;
		Transform_t3600365921 * L_10 = __this->get_towerBase_5();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		Transform_t3600365921 * L_11 = __this->get_controller_4();
		ObjectU5BU5D_t2843939325* L_12 = V_0;
		NullCheck(L_11);
		Component_SendMessage_m3707514258(L_11, _stringLiteral1384078394, (RuntimeObject *)(RuntimeObject *)L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuildTowerUI::setControllerAndTowerBase(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void BuildTowerUI_setControllerAndTowerBase_m1087126066 (BuildTowerUI_t1193882323 * __this, Transform_t3600365921 * ___ctl0, Transform_t3600365921 * ___tra1, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___ctl0;
		__this->set_controller_4(L_0);
		Transform_t3600365921 * L_1 = ___tra1;
		__this->set_towerBase_5(L_1);
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
// System.Void Bullet::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Bullet__ctor_m2787309514 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Bullet::Start()
extern "C" IL2CPP_METHOD_ATTR void Bullet_Start_m1480719556 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localScale_m129152068(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		__this->set_targetScele_6(L_2);
		float L_3 = __this->get_targetScele_6();
		__this->set_currentScale_7(L_3);
		return;
	}
}
// System.Void Bullet::Update()
extern "C" IL2CPP_METHOD_ATTR void Bullet_Update_m2035088002 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Update_m2035088002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_shootTarget_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00dc;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_shootTarget_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_Normalize_m2941713846(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->set_director_8(L_8);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = __this->get_director_8();
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Translate_m1810197270(L_9, L_13, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = Transform_get_position_m36019626(L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_shootTarget_4();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		float L_19 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t3722313464  L_21 = Transform_get_localScale_m129152068(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		float L_22 = (&V_0)->get_x_2();
		GameObject_t1113636619 * L_23 = __this->get_shootTarget_4();
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_localScale_m129152068(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = (&V_1)->get_x_2();
		if ((!(((float)L_19) <= ((float)((float)il2cpp_codegen_add((float)((float)((float)L_22/(float)(2.0f))), (float)((float)((float)L_26/(float)(2.0f)))))))))
		{
			goto IL_00dc;
		}
	}
	{
		Tower_t684557973 * L_27 = __this->get_controller_5();
		GameObject_t1113636619 * L_28 = __this->get_shootTarget_4();
		NullCheck(L_27);
		Tower_CollisionAttack_m165119970(L_27, L_28, /*hidden argument*/NULL);
		Bullet_PlayBombAnimate_m3111143632(__this, /*hidden argument*/NULL);
		__this->set_shootTarget_4((GameObject_t1113636619 *)NULL);
	}

IL_00dc:
	{
		float L_29 = __this->get_currentScale_7();
		float L_30 = __this->get_targetScele_6();
		float L_31 = __this->get_currentScale_7();
		__this->set_currentScale_7(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_31)), (float)(0.2f))))));
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_33 = __this->get_currentScale_7();
		float L_34 = __this->get_currentScale_7();
		float L_35 = __this->get_currentScale_7();
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_m3053443106(L_32, L_36, /*hidden argument*/NULL);
		float L_37 = __this->get_currentScale_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_38 = fabsf(((float)il2cpp_codegen_subtract((float)L_37, (float)(1.0f))));
		if ((!(((float)L_38) < ((float)(0.1f)))))
		{
			goto IL_014f;
		}
	}
	{
		__this->set_targetScele_6((0.4f));
		GameObject_t1113636619 * L_39 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
	}

IL_014f:
	{
		return;
	}
}
// System.Void Bullet::SetController(Tower)
extern "C" IL2CPP_METHOD_ATTR void Bullet_SetController_m4218499205 (Bullet_t1042140031 * __this, Tower_t684557973 * ___ctl0, const RuntimeMethod* method)
{
	{
		Tower_t684557973 * L_0 = ___ctl0;
		__this->set_controller_5(L_0);
		return;
	}
}
// System.Void Bullet::SetShootTarget(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Bullet_SetShootTarget_m1392721162 (Bullet_t1042140031 * __this, GameObject_t1113636619 * ___target0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___target0;
		__this->set_shootTarget_4(L_0);
		return;
	}
}
// System.Void Bullet::PlayBombAnimate()
extern "C" IL2CPP_METHOD_ATTR void Bullet_PlayBombAnimate_m3111143632 (Bullet_t1042140031 * __this, const RuntimeMethod* method)
{
	{
		__this->set_targetScele_6((1.0f));
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
// System.Void Consts::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Consts__cctor_m142380206 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Consts__cctor_m142380206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral1791734578, /*hidden argument*/NULL);
		((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->set_LevelDir_0(L_1);
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
// System.Void Enemy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_8((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Awake()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Awake_m1837176820 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		Enemy_setState_m1097935534(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Start()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Enemy::initPosNode(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Enemy_initPosNode_m4095106472 (Enemy_t1765729589 * __this, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_initPosNode_m4095106472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___obj0;
		__this->set_PosNode_4(L_0);
		Enemy_setState_m1097935534(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4235415207, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Update()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Update_m3583063749 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_m3583063749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_PosNode_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_2 = __this->get_enemyState_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_nextPos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_6 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_speed_8();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_6) <= ((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8))))))
		{
			goto IL_004e;
		}
	}
	{
		Enemy_moveNextPos_m4041372534(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_004e:
	{
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = __this->get_nextPos_6();
		float L_13 = __this->get_speed_8();
		float L_14 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_m3387557959(L_9, L_15, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void Enemy::moveNextPos()
extern "C" IL2CPP_METHOD_ATTR void Enemy_moveNextPos_m4041372534 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_moveIndex_5();
		GameObject_t1113636619 * L_1 = __this->get_PosNode_4();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Transform_get_childCount_m3145433196(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		Enemy_setState_m1097935534(__this, 3, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0027:
	{
		GameObject_t1113636619 * L_4 = __this->get_PosNode_4();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_moveIndex_5();
		NullCheck(L_5);
		Transform_t3600365921 * L_7 = Transform_GetChild_m1092972975(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		__this->set_nextPos_6(L_9);
		int32_t L_10 = __this->get_moveIndex_5();
		__this->set_moveIndex_5(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_005b:
	{
		return;
	}
}
// System.Void Enemy::setState(Enemy/EnemyState)
extern "C" IL2CPP_METHOD_ATTR void Enemy_setState_m1097935534 (Enemy_t1765729589 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_enemyState_7();
		int32_t L_1 = ___state0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_008f;
	}

IL_0011:
	{
		int32_t L_2 = ___state0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_008a;
	}

IL_002e:
	{
		goto IL_008f;
	}

IL_0033:
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_PosNode_4();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_GetChild_m1092972975(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		__this->set_nextPos_6(L_10);
		goto IL_008f;
	}

IL_006f:
	{
		goto IL_008f;
	}

IL_0074:
	{
		EnemyController_t2191660454 * L_11 = __this->get_enemyController_9();
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		EnemyController_removeOneEnemy_m461918337(L_11, L_12, /*hidden argument*/NULL);
		goto IL_008f;
	}

IL_008a:
	{
		goto IL_008f;
	}

IL_008f:
	{
		int32_t L_13 = ___state0;
		__this->set_enemyState_7(L_13);
		return;
	}
}
// System.Void Enemy::setController(EnemyController)
extern "C" IL2CPP_METHOD_ATTR void Enemy_setController_m2871789118 (Enemy_t1765729589 * __this, EnemyController_t2191660454 * ___ctl0, const RuntimeMethod* method)
{
	{
		EnemyController_t2191660454 * L_0 = ___ctl0;
		__this->set_enemyController_9(L_0);
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
// System.Void EnemyController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EnemyController__ctor_m162774262 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::Start()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_Start_m1137308130 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void EnemyController::Update()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_Update_m2232054175 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_Update_m2232054175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		EnemyController_GameStart_m2766783483(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void EnemyController::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_FixedUpdate_m3496289429 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_FixedUpdate_m3496289429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isRunning_8();
		if (!L_0)
		{
			goto IL_00a8;
		}
	}
	{
		float L_1 = __this->get_createEnemyTime_9();
		float L_2 = __this->get_enemyDuraction_7();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_createEnemyTime_9((0.0f));
		Wave_t3440202671 * L_3 = __this->get_currentWave_14();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_enemyType_0();
		EnemyController_CreateAnEnemy_m1159169057(__this, L_4, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_003d:
	{
		float L_5 = __this->get_createEnemyTime_9();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_createEnemyTime_9(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
	}

IL_004f:
	{
		int32_t L_7 = __this->get_createEnemyCount_10();
		if (L_7)
		{
			goto IL_00a8;
		}
	}
	{
		float L_8 = __this->get_createWaveTime_11();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_createWaveTime_11(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		float L_10 = __this->get_createWaveTime_11();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3449605702, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		float L_14 = __this->get_createWaveTime_11();
		float L_15 = __this->get_waveDuraction_6();
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_00a8;
		}
	}
	{
		__this->set_createWaveTime_11((0.0f));
		EnemyController_CreateAnWave_m3659136724(__this, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void EnemyController::GameStart()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_GameStart_m2766783483 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_GameStart_m2766783483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tool_t1803513125_il2cpp_TypeInfo_var);
		Level_t2237665516 * L_0 = Tool_GetCurrentLevel_m2732142317(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentLevel_13(L_0);
		__this->set_isRunning_8((bool)1);
		EnemyController_CreateAnWave_m3659136724(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::CreateAnEnemy(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EnemyController_CreateAnEnemy_m1159169057 (EnemyController_t2191660454 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_CreateAnEnemy_m1159169057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		int32_t L_0 = ___type0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral232967261, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_createEnemyCount_10();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3114103742, L_6, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		List_1_t2585711361 * L_8 = __this->get_enemyPrefabs_4();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m2812834599(L_8, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1865126246, L_11, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_createEnemyCount_10();
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		List_1_t2585711361 * L_14 = __this->get_enemyPrefabs_4();
		int32_t L_15 = ___type0;
		NullCheck(L_14);
		GameObject_t1113636619 * L_16 = List_1_get_Item_m3743125852(L_14, L_15, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_17 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_17;
		GameObject_t1113636619 * L_18 = V_0;
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_parent_m786917804(L_19, L_20, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = V_0;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Enemy_t1765729589 * L_23 = Component_GetComponent_TisEnemy_t1765729589_m2345492309(L_22, /*hidden argument*/Component_GetComponent_TisEnemy_t1765729589_m2345492309_RuntimeMethod_var);
		GameObject_t1113636619 * L_24 = __this->get_posNodes_5();
		NullCheck(L_23);
		Enemy_initPosNode_m4095106472(L_23, L_24, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_25 = V_0;
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = GameObject_get_transform_m1369836730(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Enemy_t1765729589 * L_27 = Component_GetComponent_TisEnemy_t1765729589_m2345492309(L_26, /*hidden argument*/Component_GetComponent_TisEnemy_t1765729589_m2345492309_RuntimeMethod_var);
		NullCheck(L_27);
		Enemy_setController_m2871789118(L_27, __this, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_createEnemyCount_10();
		__this->set_createEnemyCount_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)));
		List_1_t2585711361 * L_29 = __this->get_enemyList_15();
		GameObject_t1113636619 * L_30 = V_0;
		NullCheck(L_29);
		List_1_Add_m2765963565(L_29, L_30, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_00be:
	{
		return;
	}
}
// System.Void EnemyController::CreateAnWave()
extern "C" IL2CPP_METHOD_ATTR void EnemyController_CreateAnWave_m3659136724 (EnemyController_t2191660454 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_createWaveCount_12();
		Level_t2237665516 * L_1 = __this->get_currentLevel_13();
		NullCheck(L_1);
		int32_t L_2 = Level_GetWaveCount_m3763534197(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_isRunning_8((bool)0);
		goto IL_0058;
	}

IL_0022:
	{
		Level_t2237665516 * L_3 = __this->get_currentLevel_13();
		int32_t L_4 = __this->get_createWaveCount_12();
		NullCheck(L_3);
		Wave_t3440202671 * L_5 = Level_GetWave_m2307046225(L_3, L_4, /*hidden argument*/NULL);
		__this->set_currentWave_14(L_5);
		Wave_t3440202671 * L_6 = __this->get_currentWave_14();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_enemyCount_1();
		__this->set_createEnemyCount_10(L_7);
		int32_t L_8 = __this->get_createWaveCount_12();
		__this->set_createWaveCount_12(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0058:
	{
		return;
	}
}
// System.Void EnemyController::removeOneEnemy(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void EnemyController_removeOneEnemy_m461918337 (EnemyController_t2191660454 * __this, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_removeOneEnemy_m461918337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		List_1_t2585711361 * L_1 = __this->get_enemyList_15();
		GameObject_t1113636619 * L_2 = ___obj0;
		NullCheck(L_1);
		List_1_Remove_m4063777476(L_1, L_2, /*hidden argument*/List_1_Remove_m4063777476_RuntimeMethod_var);
		List_1_t2585711361 * L_3 = __this->get_enemyList_15();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m2812834599(L_3, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2761911771, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
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
// System.Void GameController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameController__ctor_m1587060996 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Awake()
extern "C" IL2CPP_METHOD_ATTR void GameController_Awake_m4256893697 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Awake_m4256893697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Consts_t1749595333_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->get_LevelDir_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral429233636, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tool_t1803513125_il2cpp_TypeInfo_var);
		Tool_ReadXml_m258253307(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C" IL2CPP_METHOD_ATTR void GameController_Start_m1173294274 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_mainCamera_4();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_plane_5();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_LookAt_m3649447396(L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::GameStart(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameController_GameStart_m1393411697 (GameController_t2330501625 * __this, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_GameStart_m1393411697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2751327424, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C" IL2CPP_METHOD_ATTR void GameController_Update_m217025042 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Update_m217025042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1037147829, /*hidden argument*/NULL);
		GameController_SetState_m2618673732(__this, 2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		int32_t L_1 = __this->get_gameState_6();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}

IL_0029:
	{
		return;
	}
}
// System.Void GameController::SetState(GameController/GameState)
extern "C" IL2CPP_METHOD_ATTR void GameController_SetState_m2618673732 (GameController_t2330501625 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_SetState_m2618673732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_gameState_6();
		int32_t L_1 = ___state0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0075;
	}

IL_0011:
	{
		int32_t L_2 = ___state0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___state0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_0070;
	}

IL_0024:
	{
		goto IL_0075;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2830330995, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tool_t1803513125_il2cpp_TypeInfo_var);
		Level_t2237665516 * L_4 = Tool_GetCurrentLevel_m2732142317(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = L_4->get_levelText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2412080975, L_5, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_levelLabel_8();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Text_t1901882714 * L_9 = Component_GetComponent_TisText_t1901882714_m4196288697(L_8, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		Level_t2237665516 * L_10 = Tool_GetCurrentLevel_m2732142317(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = L_10->get_levelText_2();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		goto IL_0075;
	}

IL_0070:
	{
		goto IL_0075;
	}

IL_0075:
	{
		int32_t L_12 = ___state0;
		__this->set_gameState_6(L_12);
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
// System.Void Global::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Global__cctor_m1728533878 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Global__cctor_m1728533878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_t2581268647 * L_0 = (UnityEvent_t2581268647 *)il2cpp_codegen_object_new(UnityEvent_t2581268647_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m431206565(L_0, /*hidden argument*/NULL);
		((Global_t3766954217_StaticFields*)il2cpp_codegen_static_fields_for(Global_t3766954217_il2cpp_TypeInfo_var))->set_uEvent_1(L_0);
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
// System.Void Level::.ctor(System.Collections.Generic.List`1<Wave>,System.String)
extern "C" IL2CPP_METHOD_ATTR void Level__ctor_m3391596110 (Level_t2237665516 * __this, List_1_t617310117 * ___list0, String_t* ___text1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t617310117 * L_0 = ___list0;
		__this->set_waveList_1(L_0);
		String_t* L_1 = ___text1;
		__this->set_levelText_2(L_1);
		return;
	}
}
// System.Void Level::SetLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Level_SetLevel_m404238470 (RuntimeObject * __this /* static, unused */, int32_t ___level0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 Level::GetLevelNum()
extern "C" IL2CPP_METHOD_ATTR int32_t Level_GetLevelNum_m3235096416 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_GetLevelNum_m3235096416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral1232840130, /*hidden argument*/NULL);
		return L_0;
	}
}
// Wave Level::GetWave(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Wave_t3440202671 * Level_GetWave_m2307046225 (Level_t2237665516 * __this, int32_t ___waveIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_GetWave_m2307046225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t617310117 * L_0 = __this->get_waveList_1();
		int32_t L_1 = ___waveIndex0;
		NullCheck(L_0);
		Wave_t3440202671 * L_2 = List_1_get_Item_m3617993755(L_0, L_1, /*hidden argument*/List_1_get_Item_m3617993755_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Level::GetWaveCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Level_GetWaveCount_m3763534197 (Level_t2237665516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_GetWaveCount_m3763534197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t617310117 * L_0 = __this->get_waveList_1();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m434487951(L_0, /*hidden argument*/List_1_get_Count_m434487951_RuntimeMethod_var);
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
// System.Void LevelController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LevelController__ctor_m3999760241 (LevelController_t24418946 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Tool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tool__ctor_m4190622037 (Tool_t1803513125 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tool::ReadXml(System.String)
extern "C" IL2CPP_METHOD_ATTR void Tool_ReadXml_m258253307 (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tool_ReadXml_m258253307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlNodeList_t2551693786 * V_1 = NULL;
	XmlElement_t561603118 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XmlNode_t3767805227 * V_4 = NULL;
	XmlNodeList_t2551693786 * V_5 = NULL;
	List_1_t617310117 * V_6 = NULL;
	XmlElement_t561603118 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	XmlNode_t3767805227 * V_9 = NULL;
	XmlNode_t3767805227 * V_10 = NULL;
	Wave_t3440202671 * V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Level_t2237665516 * V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2156263134, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		bool L_3 = File_Exists_m3943585060(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_017d;
		}
	}
	{
		XmlDocument_t2837193595 * L_4 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m664597982(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		XmlDocument_t2837193595 * L_5 = V_0;
		String_t* L_6 = ___path0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void System.Xml.XmlDocument::Load(System.String) */, L_5, L_6);
		XmlDocument_t2837193595 * L_7 = V_0;
		NullCheck(L_7);
		XmlNode_t3767805227 * L_8 = XmlNode_SelectSingleNode_m2944339946(L_7, _stringLiteral1340993750, /*hidden argument*/NULL);
		NullCheck(L_8);
		XmlNodeList_t2551693786 * L_9 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_8);
		V_1 = L_9;
		XmlNodeList_t2551693786 * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_10);
		V_3 = L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0157;
		}

IL_0045:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			V_2 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_13, XmlElement_t561603118_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_14 = V_2;
			NullCheck(L_14);
			String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(45 /* System.String System.Xml.XmlElement::GetAttribute(System.String) */, L_14, _stringLiteral3454449607);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2074974049, L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			XmlElement_t561603118 * L_17 = V_2;
			NullCheck(L_17);
			XmlNode_t3767805227 * L_18 = XmlNode_SelectSingleNode_m2944339946(L_17, _stringLiteral3987835854, /*hidden argument*/NULL);
			V_4 = L_18;
			XmlElement_t561603118 * L_19 = V_2;
			NullCheck(L_19);
			XmlNodeList_t2551693786 * L_20 = XmlNode_SelectNodes_m3596713167(L_19, _stringLiteral2435378245, /*hidden argument*/NULL);
			V_5 = L_20;
			XmlNode_t3767805227 * L_21 = V_4;
			NullCheck(L_21);
			String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_21);
			String_t* L_23 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2786280964, L_22, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			List_1_t617310117 * L_24 = (List_1_t617310117 *)il2cpp_codegen_object_new(List_1_t617310117_il2cpp_TypeInfo_var);
			List_1__ctor_m510774871(L_24, /*hidden argument*/List_1__ctor_m510774871_RuntimeMethod_var);
			V_6 = L_24;
			XmlNodeList_t2551693786 * L_25 = V_5;
			NullCheck(L_25);
			RuntimeObject* L_26 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_25);
			V_8 = L_26;
		}

IL_00ab:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0113;
			}

IL_00b0:
			{
				RuntimeObject* L_27 = V_8;
				NullCheck(L_27);
				RuntimeObject * L_28 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_27);
				V_7 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_28, XmlElement_t561603118_il2cpp_TypeInfo_var));
				XmlElement_t561603118 * L_29 = V_7;
				NullCheck(L_29);
				String_t* L_30 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(45 /* System.String System.Xml.XmlElement::GetAttribute(System.String) */, L_29, _stringLiteral3454449607);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_31 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3856665693, L_30, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
				Debug_Log_m4051431634(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
				XmlElement_t561603118 * L_32 = V_7;
				NullCheck(L_32);
				XmlNode_t3767805227 * L_33 = XmlNode_SelectSingleNode_m2944339946(L_32, _stringLiteral3243520166, /*hidden argument*/NULL);
				V_9 = L_33;
				XmlElement_t561603118 * L_34 = V_7;
				NullCheck(L_34);
				XmlNode_t3767805227 * L_35 = XmlNode_SelectSingleNode_m2944339946(L_34, _stringLiteral2002595880, /*hidden argument*/NULL);
				V_10 = L_35;
				XmlNode_t3767805227 * L_36 = V_9;
				NullCheck(L_36);
				String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_36);
				XmlNode_t3767805227 * L_38 = V_10;
				NullCheck(L_38);
				String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_38);
				Wave_t3440202671 * L_40 = (Wave_t3440202671 *)il2cpp_codegen_object_new(Wave_t3440202671_il2cpp_TypeInfo_var);
				Wave__ctor_m4074862251(L_40, L_37, L_39, /*hidden argument*/NULL);
				V_11 = L_40;
				List_1_t617310117 * L_41 = V_6;
				Wave_t3440202671 * L_42 = V_11;
				NullCheck(L_41);
				List_1_Add_m445218281(L_41, L_42, /*hidden argument*/List_1_Add_m445218281_RuntimeMethod_var);
			}

IL_0113:
			{
				RuntimeObject* L_43 = V_8;
				NullCheck(L_43);
				bool L_44 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00b0;
				}
			}

IL_011f:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0124);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0124;
		}

FINALLY_0124:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_45 = V_8;
				RuntimeObject* L_46 = ((RuntimeObject*)IsInst((RuntimeObject*)L_45, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				V_12 = L_46;
				if (!L_46)
				{
					goto IL_013a;
				}
			}

IL_0133:
			{
				RuntimeObject* L_47 = V_12;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_47);
			}

IL_013a:
			{
				IL2CPP_END_FINALLY(292)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(292)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_013b:
		{
			List_1_t617310117 * L_48 = V_6;
			XmlNode_t3767805227 * L_49 = V_4;
			NullCheck(L_49);
			String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_49);
			Level_t2237665516 * L_51 = (Level_t2237665516 *)il2cpp_codegen_object_new(Level_t2237665516_il2cpp_TypeInfo_var);
			Level__ctor_m3391596110(L_51, L_48, L_50, /*hidden argument*/NULL);
			V_13 = L_51;
			IL2CPP_RUNTIME_CLASS_INIT(Tool_t1803513125_il2cpp_TypeInfo_var);
			List_1_t3709740258 * L_52 = ((Tool_t1803513125_StaticFields*)il2cpp_codegen_static_fields_for(Tool_t1803513125_il2cpp_TypeInfo_var))->get_levelList_0();
			Level_t2237665516 * L_53 = V_13;
			NullCheck(L_52);
			List_1_Add_m270033829(L_52, L_53, /*hidden argument*/List_1_Add_m270033829_RuntimeMethod_var);
		}

IL_0157:
		{
			RuntimeObject* L_54 = V_3;
			NullCheck(L_54);
			bool L_55 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_54);
			if (L_55)
			{
				goto IL_0045;
			}
		}

IL_0162:
		{
			IL2CPP_LEAVE(0x17D, FINALLY_0167);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0167;
	}

FINALLY_0167:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_56 = V_3;
			RuntimeObject* L_57 = ((RuntimeObject*)IsInst((RuntimeObject*)L_56, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_14 = L_57;
			if (!L_57)
			{
				goto IL_017c;
			}
		}

IL_0175:
		{
			RuntimeObject* L_58 = V_14;
			NullCheck(L_58);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_58);
		}

IL_017c:
		{
			IL2CPP_END_FINALLY(359)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(359)
	{
		IL2CPP_JUMP_TBL(0x17D, IL_017d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_017d:
	{
		return;
	}
}
// System.Void Tool::CreateXml(System.String)
extern "C" IL2CPP_METHOD_ATTR void Tool_CreateXml_m3519597088 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tool_CreateXml_m3519597088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	XmlElement_t561603118 * V_2 = NULL;
	XmlElement_t561603118 * V_3 = NULL;
	XmlElement_t561603118 * V_4 = NULL;
	XmlElement_t561603118 * V_5 = NULL;
	{
		String_t* L_0 = ___filePath0;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1456732122, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_2 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m664597982(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlDocument_t2837193595 * L_3 = V_0;
		NullCheck(L_3);
		XmlElement_t561603118 * L_4 = XmlDocument_CreateElement_m2961417808(L_3, _stringLiteral1706900036, /*hidden argument*/NULL);
		V_1 = L_4;
		XmlDocument_t2837193595 * L_5 = V_0;
		NullCheck(L_5);
		XmlElement_t561603118 * L_6 = XmlDocument_CreateElement_m2961417808(L_5, _stringLiteral1757920701, /*hidden argument*/NULL);
		V_2 = L_6;
		XmlElement_t561603118 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(46 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_7, _stringLiteral3454449607, _stringLiteral3452614544);
		XmlElement_t561603118 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(46 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_8, _stringLiteral62725243, _stringLiteral2374226348);
		XmlDocument_t2837193595 * L_9 = V_0;
		NullCheck(L_9);
		XmlElement_t561603118 * L_10 = XmlDocument_CreateElement_m2961417808(L_9, _stringLiteral3452614616, /*hidden argument*/NULL);
		V_3 = L_10;
		XmlElement_t561603118 * L_11 = V_3;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlNode::set_InnerText(System.String) */, L_11, _stringLiteral3452614544);
		XmlDocument_t2837193595 * L_12 = V_0;
		NullCheck(L_12);
		XmlElement_t561603118 * L_13 = XmlDocument_CreateElement_m2961417808(L_12, _stringLiteral3452614615, /*hidden argument*/NULL);
		V_4 = L_13;
		XmlElement_t561603118 * L_14 = V_4;
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlNode::set_InnerText(System.String) */, L_14, _stringLiteral3452614544);
		XmlDocument_t2837193595 * L_15 = V_0;
		NullCheck(L_15);
		XmlElement_t561603118 * L_16 = XmlDocument_CreateElement_m2961417808(L_15, _stringLiteral3452614614, /*hidden argument*/NULL);
		V_5 = L_16;
		XmlElement_t561603118 * L_17 = V_5;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlNode::set_InnerText(System.String) */, L_17, _stringLiteral3452614544);
		XmlElement_t561603118 * L_18 = V_2;
		XmlElement_t561603118 * L_19 = V_3;
		NullCheck(L_18);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(32 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_18, L_19);
		XmlElement_t561603118 * L_20 = V_2;
		XmlElement_t561603118 * L_21 = V_4;
		NullCheck(L_20);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(32 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_20, L_21);
		XmlElement_t561603118 * L_22 = V_2;
		XmlElement_t561603118 * L_23 = V_5;
		NullCheck(L_22);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(32 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_22, L_23);
		XmlElement_t561603118 * L_24 = V_1;
		XmlElement_t561603118 * L_25 = V_2;
		NullCheck(L_24);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(32 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_24, L_25);
		XmlDocument_t2837193595 * L_26 = V_0;
		XmlElement_t561603118 * L_27 = V_1;
		NullCheck(L_26);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(32 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_26, L_27);
		XmlDocument_t2837193595 * L_28 = V_0;
		String_t* L_29 = ___filePath0;
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void System.Xml.XmlDocument::Save(System.String) */, L_28, L_29);
	}

IL_00cd:
	{
		return;
	}
}
// Level Tool::GetCurrentLevel()
extern "C" IL2CPP_METHOD_ATTR Level_t2237665516 * Tool_GetCurrentLevel_m2732142317 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tool_GetCurrentLevel_m2732142317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = Level_GetLevelNum_m3235096416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1423159511, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tool_t1803513125_il2cpp_TypeInfo_var);
		List_1_t3709740258 * L_5 = ((Tool_t1803513125_StaticFields*)il2cpp_codegen_static_fields_for(Tool_t1803513125_il2cpp_TypeInfo_var))->get_levelList_0();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Level_t2237665516 * L_7 = List_1_get_Item_m1639925114(L_5, L_6, /*hidden argument*/List_1_get_Item_m1639925114_RuntimeMethod_var);
		((Tool_t1803513125_StaticFields*)il2cpp_codegen_static_fields_for(Tool_t1803513125_il2cpp_TypeInfo_var))->set_currentLevel_1(L_7);
		Level_t2237665516 * L_8 = ((Tool_t1803513125_StaticFields*)il2cpp_codegen_static_fields_for(Tool_t1803513125_il2cpp_TypeInfo_var))->get_currentLevel_1();
		return L_8;
	}
}
// System.Void Tool::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Tool__cctor_m2036538212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tool__cctor_m2036538212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3709740258 * L_0 = (List_1_t3709740258 *)il2cpp_codegen_object_new(List_1_t3709740258_il2cpp_TypeInfo_var);
		List_1__ctor_m489004955(L_0, /*hidden argument*/List_1__ctor_m489004955_RuntimeMethod_var);
		((Tool_t1803513125_StaticFields*)il2cpp_codegen_static_fields_for(Tool_t1803513125_il2cpp_TypeInfo_var))->set_levelList_0(L_0);
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
// System.Void Tower::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tower__ctor_m3089942816 (Tower_t684557973 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tower::Awake()
extern "C" IL2CPP_METHOD_ATTR void Tower_Awake_m7862352 (Tower_t684557973 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_3();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (10.0f), L_2, (100.0f), /*hidden argument*/NULL);
		__this->set_currentVector_10(L_3);
		return;
	}
}
// System.Void Tower::Start()
extern "C" IL2CPP_METHOD_ATTR void Tower_Start_m3992360074 (Tower_t684557973 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Tower::SetController(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Tower_SetController_m2546773177 (Tower_t684557973 * __this, Transform_t3600365921 * ___ctl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tower_SetController_m2546773177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = ___ctl0;
		__this->set_controller_4(L_0);
		Transform_t3600365921 * L_1 = ___ctl0;
		NullCheck(L_1);
		EnemyController_t2191660454 * L_2 = Component_GetComponent_TisEnemyController_t2191660454_m137582258(L_1, /*hidden argument*/Component_GetComponent_TisEnemyController_t2191660454_m137582258_RuntimeMethod_var);
		__this->set_enemyController_5(L_2);
		EnemyController_t2191660454 * L_3 = __this->get_enemyController_5();
		NullCheck(L_3);
		List_1_t2585711361 * L_4 = L_3->get_enemyList_15();
		__this->set_enemyList_6(L_4);
		return;
	}
}
// System.Void Tower::Update()
extern "C" IL2CPP_METHOD_ATTR void Tower_Update_m1241663353 (Tower_t684557973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tower_Update_m1241663353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	{
		List_1_t2585711361 * L_0 = __this->get_enemyList_6();
		if (!L_0)
		{
			goto IL_0093;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_attackTarget_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_0023:
	{
		List_1_t2585711361 * L_3 = __this->get_enemyList_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_5 = List_1_get_Item_m3743125852(L_3, L_4, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_1 = L_5;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = V_1;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_11 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = V_2;
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1118455496, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		float L_16 = V_2;
		float L_17 = __this->get_attackDistance_7();
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_007e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4236235413, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = V_1;
		__this->set_attackTarget_8(L_18);
	}

IL_007e:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_20 = V_0;
		List_1_t2585711361 * L_21 = __this->get_enemyList_6();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m2812834599(L_21, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0023;
		}
	}

IL_0093:
	{
		GameObject_t1113636619 * L_23 = __this->get_attackTarget_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0169;
		}
	}
	{
		GameObject_t1113636619 * L_25 = __this->get_attackTarget_8();
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = GameObject_get_transform_m1369836730(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		float L_28 = (&V_3)->get_x_2();
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		float L_31 = (&V_4)->get_y_3();
		GameObject_t1113636619 * L_32 = __this->get_attackTarget_8();
		NullCheck(L_32);
		Transform_t3600365921 * L_33 = GameObject_get_transform_m1369836730(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		float L_35 = (&V_5)->get_z_4();
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), L_28, L_31, L_35, /*hidden argument*/NULL);
		__this->set_targetVector_9(L_36);
		Vector3_t3722313464  L_37 = __this->get_currentVector_10();
		Vector3_t3722313464  L_38 = __this->get_targetVector_9();
		Vector3_t3722313464  L_39 = __this->get_currentVector_10();
		Vector3_t3722313464  L_40 = __this->get_targetVector_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_41 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_37, L_38, ((float)il2cpp_codegen_multiply((float)L_41, (float)(0.2f))), /*hidden argument*/NULL);
		__this->set_currentVector_10(L_42);
		Transform_t3600365921 * L_43 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_44 = __this->get_currentVector_10();
		NullCheck(L_43);
		Transform_LookAt_m3649447396(L_43, L_44, /*hidden argument*/NULL);
		Transform_t3600365921 * L_45 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t3722313464  L_46 = Transform_get_position_m36019626(L_45, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_47 = __this->get_attackTarget_8();
		NullCheck(L_47);
		Transform_t3600365921 * L_48 = GameObject_get_transform_m1369836730(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = Transform_get_position_m36019626(L_48, /*hidden argument*/NULL);
		float L_50 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_46, L_49, /*hidden argument*/NULL);
		V_6 = L_50;
		float L_51 = V_6;
		float L_52 = __this->get_attackDistance_7();
		if ((!(((float)L_51) > ((float)L_52))))
		{
			goto IL_0169;
		}
	}
	{
		__this->set_attackTarget_8((GameObject_t1113636619 *)NULL);
	}

IL_0169:
	{
		GameObject_t1113636619 * L_53 = __this->get_attackTarget_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_54 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01b2;
		}
	}
	{
		float L_55 = __this->get_shootNotTime_13();
		float L_56 = __this->get_shootDuraction_12();
		if ((!(((float)L_55) > ((float)L_56))))
		{
			goto IL_01a0;
		}
	}
	{
		__this->set_shootNotTime_13((0.0f));
		Tower_ShootBullet_m11695103(__this, /*hidden argument*/NULL);
		goto IL_01b2;
	}

IL_01a0:
	{
		float L_57 = __this->get_shootNotTime_13();
		float L_58 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_shootNotTime_13(((float)il2cpp_codegen_add((float)L_57, (float)L_58)));
	}

IL_01b2:
	{
		return;
	}
}
// System.Void Tower::ShootBullet()
extern "C" IL2CPP_METHOD_ATTR void Tower_ShootBullet_m11695103 (Tower_t684557973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tower_ShootBullet_m11695103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_t1113636619 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_shootPoint_14();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = __this->get_bulletPrefab_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_4 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_1 = L_4;
		GameObject_t1113636619 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Transform_get_parent_m835071599(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_parent_m786917804(L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = V_0;
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_1;
		NullCheck(L_12);
		Bullet_t1042140031 * L_13 = GameObject_GetComponent_TisBullet_t1042140031_m448032725(L_12, /*hidden argument*/GameObject_GetComponent_TisBullet_t1042140031_m448032725_RuntimeMethod_var);
		GameObject_t1113636619 * L_14 = __this->get_attackTarget_8();
		NullCheck(L_13);
		Bullet_SetShootTarget_m1392721162(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = V_1;
		NullCheck(L_15);
		Bullet_t1042140031 * L_16 = GameObject_GetComponent_TisBullet_t1042140031_m448032725(L_15, /*hidden argument*/GameObject_GetComponent_TisBullet_t1042140031_m448032725_RuntimeMethod_var);
		NullCheck(L_16);
		Bullet_SetController_m4218499205(L_16, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tower::CollisionAttack(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Tower_CollisionAttack_m165119970 (Tower_t684557973 * __this, GameObject_t1113636619 * ___enemyTarget0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Tower::BullletEnd(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Tower_BullletEnd_m2092951308 (Tower_t684557973 * __this, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
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
// System.Void TowerBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TowerBase__ctor_m3948353653 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerBase::Start()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_Start_m3302656577 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerBase_Start_m3302656577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t340375123 * L_2 = Renderer_get_material_m4171603682(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Color_t2555686324  L_3 = Material_get_color_m3827673574(L_2, /*hidden argument*/NULL);
		__this->set_color_4(L_3);
		return;
	}
}
// System.Void TowerBase::Update()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_Update_m3047303972 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TowerBase::ClickBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_ClickBase_m4156076465 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerBase_ClickBase_m4156076465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t340375123 * L_2 = Renderer_get_material_m4171603682(L_1, /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_m1794818007(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerBase::ClickDownBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_ClickDownBase_m50500525 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerBase_ClickDownBase_m50500525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral18647363, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = __this->get_controller_5();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_SendMessage_m3707514258(L_0, _stringLiteral2199399970, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerBase::OnUpBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_OnUpBase_m284916354 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerBase_OnUpBase_m284916354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t340375123 * L_2 = Renderer_get_material_m4171603682(L_1, /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_m1794818007(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerBase::OutUpBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_OutUpBase_m3669438539 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerBase_OutUpBase_m3669438539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t340375123 * L_2 = Renderer_get_material_m4171603682(L_1, /*hidden argument*/NULL);
		Color_t2555686324  L_3 = __this->get_color_4();
		NullCheck(L_2);
		Material_set_color_m1794818007(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerBase::ClickEndBase()
extern "C" IL2CPP_METHOD_ATTR void TowerBase_ClickEndBase_m1225888527 (TowerBase_t3845528826 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TowerBase::setController(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void TowerBase_setController_m2138086074 (TowerBase_t3845528826 * __this, Transform_t3600365921 * ___ctl0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___ctl0;
		__this->set_controller_5(L_0);
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
// System.Void TowerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TowerController__ctor_m2310293811 (TowerController_t1209427180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerController__ctor_m2310293811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_towerBaseList_9(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TowerController::Start()
extern "C" IL2CPP_METHOD_ATTR void TowerController_Start_m3386038327 (TowerController_t1209427180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerController_Start_m3386038327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_006b;
	}

IL_0007:
	{
		GameObject_t1113636619 * L_0 = __this->get_towerBasePrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_1 = L_1;
		GameObject_t1113636619 * L_2 = V_1;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m786917804(L_3, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_towerBasePosNodes_4();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Transform_t3600365921 * L_10 = Transform_GetChild_m1092972975(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3387557959(L_6, L_12, /*hidden argument*/NULL);
		List_1_t2585711361 * L_13 = __this->get_towerBaseList_9();
		GameObject_t1113636619 * L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m2765963565(L_13, L_14, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		GameObject_t1113636619 * L_15 = V_1;
		NullCheck(L_15);
		TowerBase_t3845528826 * L_16 = GameObject_GetComponent_TisTowerBase_t3845528826_m3458220719(L_15, /*hidden argument*/GameObject_GetComponent_TisTowerBase_t3845528826_m3458220719_RuntimeMethod_var);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		TowerBase_setController_m2138086074(L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_19 = V_0;
		GameObject_t1113636619 * L_20 = __this->get_towerBasePosNodes_4();
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = Transform_get_childCount_m3145433196(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TowerController::Update()
extern "C" IL2CPP_METHOD_ATTR void TowerController_Update_m3071148756 (TowerController_t1209427180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerController_Update_m3071148756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ray_t3785851493  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastHit_t1056001966  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0007:
	{
		List_1_t2585711361 * L_0 = __this->get_towerBaseList_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_2 = List_1_get_Item_m3743125852(L_0, L_1, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		TowerBase_t3845528826 * L_4 = Component_GetComponent_TisTowerBase_t3845528826_m1140679044(L_3, /*hidden argument*/Component_GetComponent_TisTowerBase_t3845528826_m1140679044_RuntimeMethod_var);
		NullCheck(L_4);
		TowerBase_OutUpBase_m3669438539(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		List_1_t2585711361 * L_7 = __this->get_towerBaseList_9();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2812834599(L_7, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0007;
		}
	}
	{
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		Ray_t3785851493  L_11 = Camera_ScreenPointToRay_m3764635188(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Ray_t3785851493  L_12 = V_1;
		bool L_13 = Physics_Raycast_m1893809531(NULL /*static, unused*/, L_12, (RaycastHit_t1056001966 *)(&V_2), (100.0f), 1, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00be;
		}
	}
	{
		Transform_t3600365921 * L_14 = RaycastHit_get_transform_m942054759((RaycastHit_t1056001966 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Component_get_tag_m2716693327(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, _stringLiteral2840704432, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		Transform_t3600365921 * L_17 = RaycastHit_get_transform_m942054759((RaycastHit_t1056001966 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_17);
		TowerBase_t3845528826 * L_18 = Component_GetComponent_TisTowerBase_t3845528826_m1140679044(L_17, /*hidden argument*/Component_GetComponent_TisTowerBase_t3845528826_m1140679044_RuntimeMethod_var);
		NullCheck(L_18);
		TowerBase_OnUpBase_m284916354(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_t3600365921 * L_20 = RaycastHit_get_transform_m942054759((RaycastHit_t1056001966 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		TowerBase_t3845528826 * L_21 = Component_GetComponent_TisTowerBase_t3845528826_m1140679044(L_20, /*hidden argument*/Component_GetComponent_TisTowerBase_t3845528826_m1140679044_RuntimeMethod_var);
		NullCheck(L_21);
		TowerBase_ClickBase_m4156076465(L_21, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		Transform_t3600365921 * L_23 = RaycastHit_get_transform_m942054759((RaycastHit_t1056001966 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_23);
		TowerBase_t3845528826 * L_24 = Component_GetComponent_TisTowerBase_t3845528826_m1140679044(L_23, /*hidden argument*/Component_GetComponent_TisTowerBase_t3845528826_m1140679044_RuntimeMethod_var);
		NullCheck(L_24);
		TowerBase_ClickDownBase_m50500525(L_24, /*hidden argument*/NULL);
	}

IL_00be:
	{
		return;
	}
}
// System.Void TowerController::BuildOneTower(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void TowerController_BuildOneTower_m679573884 (TowerController_t1209427180 * __this, ObjectU5BU5D_t2843939325* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TowerController_BuildOneTower_m679573884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_t2950945753_il2cpp_TypeInfo_var))));
		ObjectU5BU5D_t2843939325* L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_5, Transform_t3600365921_il2cpp_TypeInfo_var));
		List_1_t2585711361 * L_6 = __this->get_towerPrefabs_6();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_8 = List_1_get_Item_m3743125852(L_6, L_7, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_t1113636619 * L_10 = V_2;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_m786917804(L_11, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_2;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = V_1;
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, (0.5f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_m3387557959(L_14, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = V_2;
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Tower_t684557973 * L_22 = Component_GetComponent_TisTower_t684557973_m3060005019(L_21, /*hidden argument*/Component_GetComponent_TisTower_t684557973_m3060005019_RuntimeMethod_var);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Tower_SetController_m2546773177(L_22, L_23, /*hidden argument*/NULL);
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
// System.Void UIController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIController__ctor_m1552036494 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIController::Start()
extern "C" IL2CPP_METHOD_ATTR void UIController_Start_m2129252938 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UIController::Update()
extern "C" IL2CPP_METHOD_ATTR void UIController_Update_m3616445404 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UIController::ShowBuildTowerUI(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void UIController_ShowBuildTowerUI_m2264479490 (UIController_t2237998930 * __this, Transform_t3600365921 * ___tra0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIController_ShowBuildTowerUI_m2264479490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = ___tra0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t3722313464  L_4 = Camera_WorldToScreenPoint_m3726311023(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		GameObject_t1113636619 * L_5 = __this->get_currentMenu_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		GameObject_t1113636619 * L_7 = __this->get_currentMenu_6();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		bool L_10 = Vector3_Equals_m906392898((Vector3_t3722313464 *)(&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2468274268, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_004f:
	{
		GameObject_t1113636619 * L_11 = __this->get_currentMenu_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		GameObject_t1113636619 * L_13 = __this->get_currentMenu_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_1;
		Transform_t3600365921 * L_15 = ___tra0;
		UIController_CreareBuildTower_m4226805718(__this, L_14, L_15, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_0078:
	{
		Vector3_t3722313464  L_16 = V_1;
		Transform_t3600365921 * L_17 = ___tra0;
		UIController_CreareBuildTower_m4226805718(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UIController::CreareBuildTower(UnityEngine.Vector3,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void UIController_CreareBuildTower_m4226805718 (UIController_t2237998930 * __this, Vector3_t3722313464  ___pos0, Transform_t3600365921 * ___tra1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIController_CreareBuildTower_m4226805718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ___pos0;
		Vector3_t3722313464  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2312940265, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_buildTowerUIPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		__this->set_currentMenu_6(L_5);
		GameObject_t1113636619 * L_6 = __this->get_currentMenu_6();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = ___pos0;
		NullCheck(L_7);
		Transform_set_position_m3387557959(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_currentMenu_6();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = __this->get_canvas_4();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_parent_m786917804(L_10, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = __this->get_currentMenu_6();
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		BuildTowerUI_t1193882323 * L_15 = Component_GetComponent_TisBuildTowerUI_t1193882323_m3737898957(L_14, /*hidden argument*/Component_GetComponent_TisBuildTowerUI_t1193882323_m3737898957_RuntimeMethod_var);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = ___tra1;
		NullCheck(L_15);
		BuildTowerUI_setControllerAndTowerBase_m1087126066(L_15, L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIController::buttonClick(System.String)
extern "C" IL2CPP_METHOD_ATTR void UIController_buttonClick_m1587785281 (UIController_t2237998930 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIController_buttonClick_m1587785281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3016458095, /*hidden argument*/NULL);
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2912513414, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_003f;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2138554146, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_currentMenu_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003f:
	{
		goto IL_0044;
	}

IL_0044:
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
// System.Void Wave::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Wave__ctor_m4074862251 (Wave_t3440202671 * __this, String_t* ___type0, String_t* ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wave__ctor_m4074862251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___type0;
		int32_t* L_1 = __this->get_address_of_enemyType_0();
		Int32_TryParse_m2404707562(NULL /*static, unused*/, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___count1;
		int32_t* L_3 = __this->get_address_of_enemyCount_1();
		Int32_TryParse_m2404707562(NULL /*static, unused*/, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_enemyType_0();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3450982372, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_enemyCount_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3069214231, L_10, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
