#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Naninovel.Async.IAwaiter`1<Naninovel.Async.AsyncUnit>
struct IAwaiter_1_tC810BA3359AAE9BD6CDE3AE016DB7CBE5AEAC7FC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Naninovel.UI.CustomUI/FontChangeConfiguration>
struct List_1_t3B7FD0E6CE3C41EB006298CC1F44FEEACB8C9FEB;
// Naninovel.LiteralMap`1<System.Type>
struct LiteralMap_1_t0A373787D7B676A6BD89788B8FE86155F1264498;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Naninovel.Tweener`1<Naninovel.FloatTween>
struct Tweener_1_t736F83656659C0BE75694209B70FD88D114AA272;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BonusManager
struct BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243;
// Naninovel.BooleanParameter
struct BooleanParameter_tA9DA60DB40938BBBB165C4F5B60E677A60287E4D;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CircleSlider
struct CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058;
// Naninovel.Command
struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Naninovel.UI.CustomUI
struct CustomUI_t6CAE1C8CFC2854096438B1BF93E08723907430A9;
// Naninovel.DynamicValue
struct DynamicValue_tB59DCDAE86B0F0A717B10C1CCF70C7FB15AD7FAD;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Naninovel.Async.IAwaiter
struct IAwaiter_t9FBB15ABCCD94BDF578511AC8A3CECE0EF498286;
// Naninovel.ICommandParameter
struct ICommandParameter_tF4E3D0A7DF46E39BB7A3150BC281BB948AC5A384;
// Naninovel.ICustomVariableManager
struct ICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Naninovel.IInputManager
struct IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30;
// Naninovel.IScriptPlayer
struct IScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F;
// Naninovel.IStateManager
struct IStateManager_tA3A1853A4361BD8B812E85896E0E4700FA96474E;
// Naninovel.IUIManager
struct IUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// JustRotate
struct JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758;
// Naninovel.UI.MapRegulation
struct MapRegulation_t6834338072F169F30BF11D89F198E429E79F6A0B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Naninovel.Parsing.NamedValueParser
struct NamedValueParser_t07431B6D4F3F29C15F86A5DDDB42F77A204D1687;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PressedBtn
struct PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893;
// Naninovel.UI.QuestLog
struct QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderRunTo1
struct SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3;
// SliderValuePass
struct SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// Naninovel.StringParameter
struct StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Naninovel.UI.questMapClose
struct questMapClose_t453360FB42447EFF599ED4BD6D295C774F34440A;
// Naninovel.UI.questMapOpen
struct questMapOpen_tF28DA74DD24C039E22E5C53C8FDE2322F493EDC9;
// BonusManager/<Spin>d__8
struct U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410;
// BonusManager/<SpinWheels>d__7
struct U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24A546E135FB2F65C9A13DB1409E2212FC37AA51;
IL2CPP_EXTERN_C String_t* _stringLiteral3D91F7BE96124FBDD2F485D09E1D5135A1593FEB;
IL2CPP_EXTERN_C String_t* _stringLiteral542DA4593460E8F4646EBBBACBC43F372D0E162E;
IL2CPP_EXTERN_C String_t* _stringLiteral68125ECC376DA1D423A1293EAE6E46DD88019E0A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4D7CE9835EDEC6F156E23F102E8CFDDE46684B;
IL2CPP_EXTERN_C String_t* _stringLiteralB365593634C7C77D2F83FB300AB5534F78A5E288;
IL2CPP_EXTERN_C String_t* _stringLiteralCA15ADE2C1E656F5FCD7C63764BCA696E3AE2BB7;
IL2CPP_EXTERN_C String_t* _stringLiteralCD6B3BBB6B188B24A77AC8A8D25A7F1A64ED8831;
IL2CPP_EXTERN_C String_t* _stringLiteralE490872E817F1D81695B22176961C1DC6CD4AC91;
IL2CPP_EXTERN_C String_t* _stringLiteralE88B6CC4F96BF4BB966A456C83711D3110387B2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF77EABE8120E00AE99435ED6EEB4F67B7F5C7E54;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_mCC3BAD27A07B9463A5A6D64B4162A9BAFEC001DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IUIManager_GetUI_TisQuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2_m4CEB015AE913CDB904AE02952676B8AFC491DB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpinU3Ed__8_System_Collections_IEnumerator_Reset_m7CB571DC6835DA46D82A79DD71F06E394584770E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpinWheelsU3Ed__7_System_Collections_IEnumerator_Reset_mFF4C31A2492E8CFDEE0EAE4DA7AA607B22AB1D45_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// Naninovel.Nullable`1<System.String>
struct Nullable_1_t8891F09061D1E35F1E924938F73F08530D2BA30C  : public RuntimeObject
{
	// TValue Naninovel.Nullable`1::value
	String_t* ___value_0;
	// System.Boolean Naninovel.Nullable`1::hasValue
	bool ___hasValue_1;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// BonusManager/<Spin>d__8
struct U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410  : public RuntimeObject
{
	// System.Int32 BonusManager/<Spin>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BonusManager/<Spin>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BonusManager BonusManager/<Spin>d__8::<>4__this
	BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* ___U3CU3E4__this_2;
	// UnityEngine.GameObject BonusManager/<Spin>d__8::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_3;
	// Naninovel.ICustomVariableManager BonusManager/<Spin>d__8::<variableManager>5__2
	RuntimeObject* ___U3CvariableManagerU3E5__2_4;
	// System.Int32 BonusManager/<Spin>d__8::<i>5__3
	int32_t ___U3CiU3E5__3_5;
};

// BonusManager/<SpinWheels>d__7
struct U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91  : public RuntimeObject
{
	// System.Int32 BonusManager/<SpinWheels>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BonusManager/<SpinWheels>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BonusManager BonusManager/<SpinWheels>d__7::<>4__this
	BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* ___U3CU3E4__this_2;
};

// Naninovel.CommandParameter`1<System.String>
struct CommandParameter_1_tDC507714CB5BF4DA33266C3D6C796C836F65891F  : public Nullable_1_t8891F09061D1E35F1E924938F73F08530D2BA30C
{
	// Naninovel.Parsing.NamedValueParser Naninovel.CommandParameter`1::parser
	NamedValueParser_t07431B6D4F3F29C15F86A5DDDB42F77A204D1687* ___parser_2;
	// Naninovel.DynamicValue Naninovel.CommandParameter`1::dynamicValue
	DynamicValue_tB59DCDAE86B0F0A717B10C1CCF70C7FB15AD7FAD* ___dynamicValue_3;
};

// Naninovel.Async.AsyncUnit
struct AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457__padding[1];
	};
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1 
{
	// System.String Naninovel.PlaybackSpot::scriptName
	String_t* ___scriptName_1;
	// System.Int32 Naninovel.PlaybackSpot::lineIndex
	int32_t ___lineIndex_2;
	// System.Int32 Naninovel.PlaybackSpot::inlineIndex
	int32_t ___inlineIndex_3;
};
// Native definition for P/Invoke marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1_marshaled_pinvoke
{
	char* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};
// Native definition for COM marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1_marshaled_com
{
	Il2CppChar* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Naninovel.UniTask`1<Naninovel.Async.AsyncUnit>
struct UniTask_1_t8644ADA1B984E0BD3BE7F3F5D9E152964908FF6E 
{
	// T Naninovel.UniTask`1::result
	AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457 ___result_0;
	// Naninovel.Async.IAwaiter`1<T> Naninovel.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;
};

// Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC 
{
	// System.Threading.CancellationToken Naninovel.AsyncToken::<CancellationToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCancellationTokenU3Ek__BackingField_0;
	// System.Threading.CancellationToken Naninovel.AsyncToken::<CompletionToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCompletionTokenU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC_marshaled_pinvoke
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___U3CCancellationTokenU3Ek__BackingField_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___U3CCompletionTokenU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC_marshaled_com
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___U3CCancellationTokenU3Ek__BackingField_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___U3CCompletionTokenU3Ek__BackingField_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// Naninovel.Command
struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230  : public RuntimeObject
{
	// Naninovel.BooleanParameter Naninovel.Command::Wait
	BooleanParameter_tA9DA60DB40938BBBB165C4F5B60E677A60287E4D* ___Wait_2;
	// Naninovel.StringParameter Naninovel.Command::ConditionalExpression
	StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* ___ConditionalExpression_3;
	// Naninovel.PlaybackSpot Naninovel.Command::playbackSpot
	PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1 ___playbackSpot_4;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Naninovel.StringParameter
struct StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53  : public CommandParameter_1_tDC507714CB5BF4DA33266C3D6C796C836F65891F
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

// Naninovel.UI.MapRegulation
struct MapRegulation_t6834338072F169F30BF11D89F198E429E79F6A0B  : public Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230
{
	// UnityEngine.GameObject Naninovel.UI.MapRegulation::questTextHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questTextHolder_6;
	// UnityEngine.UI.Text Naninovel.UI.MapRegulation::questText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___questText_7;
	// Naninovel.StringParameter Naninovel.UI.MapRegulation::missionName
	StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* ___missionName_8;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F 
{
	// Naninovel.Async.IAwaiter Naninovel.UniTask::awaiter
	RuntimeObject* ___awaiter_1;
};
// Native definition for P/Invoke marshalling of Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_marshaled_pinvoke
{
	RuntimeObject* ___awaiter_1;
};
// Native definition for COM marshalling of Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_marshaled_com
{
	RuntimeObject* ___awaiter_1;
};

// Naninovel.UI.questMapClose
struct questMapClose_t453360FB42447EFF599ED4BD6D295C774F34440A  : public Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230
{
	// Naninovel.UI.QuestLog Naninovel.UI.questMapClose::questMap
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* ___questMap_6;
};

// Naninovel.UI.questMapOpen
struct questMapOpen_tF28DA74DD24C039E22E5C53C8FDE2322F493EDC9  : public Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230
{
	// Naninovel.UI.QuestLog Naninovel.UI.questMapOpen::questMap
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* ___questMap_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BonusManager
struct BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BonusManager::firstWheel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___firstWheel_4;
	// UnityEngine.GameObject BonusManager::secondWheel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___secondWheel_5;
	// UnityEngine.GameObject BonusManager::thirdWheel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thirdWheel_6;
	// System.Int32 BonusManager::_randomValue
	int32_t ____randomValue_7;
	// System.Single BonusManager::_timeInterval
	float ____timeInterval_8;
	// System.Int32 BonusManager::_finalAngle
	int32_t ____finalAngle_9;
};

// CircleSlider
struct CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CircleSlider::b
	bool ___b_4;
	// UnityEngine.UI.Image CircleSlider::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// System.Single CircleSlider::speed
	float ___speed_6;
	// System.Single CircleSlider::time
	float ___time_7;
	// UnityEngine.UI.Text CircleSlider::progress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progress_8;
};

// JustRotate
struct JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean JustRotate::canRotate
	bool ___canRotate_4;
	// System.Single JustRotate::speed
	float ___speed_5;
};

// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource PlayAudio::ass
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ass_4;
};

// PressedBtn
struct PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PressedBtn::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_4;
	// UnityEngine.Transform PressedBtn::myIcon
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___myIcon_5;
};

// SliderRunTo1
struct SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SliderRunTo1::b
	bool ___b_4;
	// UnityEngine.UI.Slider SliderRunTo1::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// System.Single SliderRunTo1::speed
	float ___speed_6;
	// System.Single SliderRunTo1::time
	float ___time_7;
};

// SliderValuePass
struct SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SliderValuePass::progress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progress_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// Naninovel.ScriptableUIBehaviour
struct ScriptableUIBehaviour_t3788ED8333C913FB90E25DEDCAA9F0B3492FB0B6  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Action`1<System.Boolean> Naninovel.ScriptableUIBehaviour::OnVisibilityChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnVisibilityChanged_4;
	// UnityEngine.CanvasGroup Naninovel.ScriptableUIBehaviour::<CanvasGroup>k__BackingField
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___U3CCanvasGroupU3Ek__BackingField_6;
	// System.Boolean Naninovel.ScriptableUIBehaviour::disableInteraction
	bool ___disableInteraction_7;
	// System.Boolean Naninovel.ScriptableUIBehaviour::visibleOnAwake
	bool ___visibleOnAwake_8;
	// System.Boolean Naninovel.ScriptableUIBehaviour::controlOpacity
	bool ___controlOpacity_9;
	// System.Single Naninovel.ScriptableUIBehaviour::fadeTime
	float ___fadeTime_10;
	// System.Boolean Naninovel.ScriptableUIBehaviour::ignoreTimeScale
	bool ___ignoreTimeScale_11;
	// UnityEngine.GameObject Naninovel.ScriptableUIBehaviour::focusObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusObject_12;
	// Naninovel.ScriptableUIBehaviour/FocusMode Naninovel.ScriptableUIBehaviour::focusMode
	int32_t ___focusMode_13;
	// UnityEngine.Events.UnityEvent Naninovel.ScriptableUIBehaviour::onShow
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onShow_14;
	// UnityEngine.Events.UnityEvent Naninovel.ScriptableUIBehaviour::onHide
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onHide_15;
	// Naninovel.Tweener`1<Naninovel.FloatTween> Naninovel.ScriptableUIBehaviour::fadeTweener
	Tweener_1_t736F83656659C0BE75694209B70FD88D114AA272* ___fadeTweener_16;
	// UnityEngine.RectTransform Naninovel.ScriptableUIBehaviour::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_17;
	// UnityEngine.Canvas Naninovel.ScriptableUIBehaviour::topmostCanvasCache
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___topmostCanvasCache_18;
	// System.Boolean Naninovel.ScriptableUIBehaviour::visibleSelf
	bool ___visibleSelf_19;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// Naninovel.UI.CustomUI
struct CustomUI_t6CAE1C8CFC2854096438B1BF93E08723907430A9  : public ScriptableUIBehaviour_t3788ED8333C913FB90E25DEDCAA9F0B3492FB0B6
{
	// System.Boolean Naninovel.UI.CustomUI::hideOnLoad
	bool ___hideOnLoad_20;
	// System.Boolean Naninovel.UI.CustomUI::hideInThumbnail
	bool ___hideInThumbnail_21;
	// System.Boolean Naninovel.UI.CustomUI::saveVisibilityState
	bool ___saveVisibilityState_22;
	// System.Boolean Naninovel.UI.CustomUI::blockInputWhenVisible
	bool ___blockInputWhenVisible_23;
	// System.String[] Naninovel.UI.CustomUI::allowedSamplers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allowedSamplers_24;
	// System.Boolean Naninovel.UI.CustomUI::modalUI
	bool ___modalUI_25;
	// System.Collections.Generic.List`1<Naninovel.UI.CustomUI/FontChangeConfiguration> Naninovel.UI.CustomUI::fontChangeConfiguration
	List_1_t3B7FD0E6CE3C41EB006298CC1F44FEEACB8C9FEB* ___fontChangeConfiguration_26;
	// Naninovel.IStateManager Naninovel.UI.CustomUI::stateManager
	RuntimeObject* ___stateManager_27;
	// Naninovel.IInputManager Naninovel.UI.CustomUI::inputManager
	RuntimeObject* ___inputManager_28;
	// Naninovel.IUIManager Naninovel.UI.CustomUI::uiManager
	RuntimeObject* ___uiManager_29;
	// Naninovel.IScriptPlayer Naninovel.UI.CustomUI::scriptPlayer
	RuntimeObject* ___scriptPlayer_30;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// Naninovel.UI.QuestLog
struct QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2  : public CustomUI_t6CAE1C8CFC2854096438B1BF93E08723907430A9
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BonusManager/<Spin>d__8

// BonusManager/<Spin>d__8

// BonusManager/<SpinWheels>d__7

// BonusManager/<SpinWheels>d__7

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Single

// System.Single

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// Naninovel.AsyncToken

// Naninovel.AsyncToken

// Naninovel.Command
struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230_StaticFields
{
	// Naninovel.LiteralMap`1<System.Type> Naninovel.Command::commandTypesCache
	LiteralMap_1_t0A373787D7B676A6BD89788B8FE86155F1264498* ___commandTypesCache_5;
};

// Naninovel.Command

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Naninovel.StringParameter

// Naninovel.StringParameter

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Naninovel.UI.MapRegulation

// Naninovel.UI.MapRegulation

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_StaticFields
{
	// Naninovel.UniTask`1<Naninovel.Async.AsyncUnit> Naninovel.UniTask::DefaultAsyncUnitTask
	UniTask_1_t8644ADA1B984E0BD3BE7F3F5D9E152964908FF6E ___DefaultAsyncUnitTask_0;
	// Naninovel.UniTask Naninovel.UniTask::CanceledUniTask
	UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F ___CanceledUniTask_2;
};

// Naninovel.UniTask

// Naninovel.UI.questMapClose

// Naninovel.UI.questMapClose

// Naninovel.UI.questMapOpen

// Naninovel.UI.questMapOpen

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BonusManager

// BonusManager

// CircleSlider

// CircleSlider

// JustRotate

// JustRotate

// PlayAudio

// PlayAudio

// PressedBtn

// PressedBtn

// SliderRunTo1

// SliderRunTo1

// SliderValuePass

// SliderValuePass

// Naninovel.ScriptableUIBehaviour
struct ScriptableUIBehaviour_t3788ED8333C913FB90E25DEDCAA9F0B3492FB0B6_StaticFields
{
	// UnityEngine.GameObject Naninovel.ScriptableUIBehaviour::<FocusOnNavigation>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CFocusOnNavigationU3Ek__BackingField_5;
};

// Naninovel.ScriptableUIBehaviour

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// Naninovel.UI.CustomUI

// Naninovel.UI.CustomUI

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// Naninovel.UI.QuestLog

// Naninovel.UI.QuestLog

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void PressedBtn::OnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) ;
// System.Void PressedBtn::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void BonusManager/<SpinWheels>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinWheelsU3Ed__7__ctor_mB5489C5D51FD9D99C97BDF849F8F66FB93FDB9DB (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void BonusManager/<Spin>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinU3Ed__8__ctor_m73E44CDDD784645155CB24CC006E97A725B563CA (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BonusManager::SpinWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BonusManager_SpinWheels_m31C7A1EF62CB7642C35BA3F38C7563F924A957EF (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BonusManager::Spin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BonusManager_Spin_m7E2BB691C9D5AC3BD839CD68C3C5D4DA72E852AA (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.ICustomVariableManager>()
inline RuntimeObject* Engine_GetService_TisICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_mCC3BAD27A07B9463A5A6D64B4162A9BAFEC001DB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean Naninovel.Command::Assigned(Naninovel.ICommandParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Command_Assigned_m787FB2F488EFA41F711D031359994A8579B59766 (RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String Naninovel.StringParameter::op_Implicit(Naninovel.StringParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringParameter_op_Implicit_mA26269B2A9DF03D2298F2E0511170C0C301F6B11 (StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* ___0_param, const RuntimeMethod* method) ;
// Naninovel.UniTask Naninovel.UniTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E (const RuntimeMethod* method) ;
// System.Void Naninovel.Command::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A (Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.UI.CustomUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUI__ctor_m71016544F78E21EB42DEFBA6FBF4445E1ECB59B0 (CustomUI_t6CAE1C8CFC2854096438B1BF93E08723907430A9* __this, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.IUIManager>()
inline RuntimeObject* Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void CircleSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider_Start_m6AE9A64452308957253285B8C3F01CB999F756DC (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void CircleSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider_Update_mEAE72D122EA1F00E41FF9062651F48B48E83D1FA (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(b)
		bool L_0 = __this->___b_4;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		// time+=Time.deltaTime*speed;
		float L_1 = __this->___time_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___speed_6;
		__this->___time_7 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// image.fillAmount= time;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___image_5;
		float L_5 = __this->___time_7;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, L_5, NULL);
		// if(progress)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___progress_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// progress.text = (int)(image.fillAmount*100)+"%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___progress_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___image_5;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_9, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_10, (100.0f))));
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
	}

IL_006e:
	{
		// if(time>1)
		float L_13 = __this->___time_7;
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// time=0;
		__this->___time_7 = (0.0f);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void CircleSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider__ctor_m62FA48BB6ADA7D3F0CF5A3D515E64F662E85C0F0 (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	{
		// public bool b=true;
		__this->___b_4 = (bool)1;
		// public float speed=0.5f;
		__this->___speed_6 = (0.5f);
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
// System.Void JustRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JustRotate_Update_mCF011C9447F4A8F52F83B8FEAA7463FDDFAF5452 (JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758* __this, const RuntimeMethod* method) 
{
	{
		// if(canRotate)
		bool L_0 = __this->___canRotate_4;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// transform.Rotate(speed*Vector3.forward*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_2 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_6, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void JustRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JustRotate__ctor_mCB13490E96F212DED7A9E79F59828664A3077904 (JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758* __this, const RuntimeMethod* method) 
{
	{
		// public bool canRotate=true;
		__this->___canRotate_4 = (bool)1;
		// public float speed=10;
		__this->___speed_5 = (10.0f);
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
// System.Void PlayAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_Start_m86A14EA0830911AFD81D145AB2E7F7AEE7C6C77B (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayAudio::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_Play_mC9765105BF490EA9F3816CC17DEAA7720FB002FB (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		// ass.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ass_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio__ctor_mFB4A06CE9F21D57E725F284B2C55494834E2B421 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
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
// System.Void PressedBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_Start_m63FAB8454BD7EBF556ED9D63B7FCDC2B13CDB2B4 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_4), (void*)L_0);
		// if(transform.childCount>0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// myIcon = transform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		__this->___myIcon_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myIcon_5), (void*)L_4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(myIcon!=null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myIcon_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// myIcon.localScale = Vector3.one ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myIcon_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myIcon != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myIcon_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// myIcon.localScale = Vector3.one * 1.2f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myIcon_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (1.20000005f), NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerDown_mBF113802FF349AA8B498B4A3A396093927063471 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnPressed();
		PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerClick_mF0B5834FE4812C4298947F9C267B49BF1B4FF910 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerEnter_m36DE7E1BBC84EEDDBA9424A6DFF518EDD25E50EE (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnPressed();
		PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerExit_m495852C731419224916A6FA058390A3B2F6726FD (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnClick();
		PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn__ctor_m826378726FDD4C7643097873E46960675F3E8BF5 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
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
// System.Void SliderRunTo1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1_Start_m4AAB1FDA12B530B7C49D304B95198889B57DDC14 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void SliderRunTo1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1_Update_m4DA8480B33A0D072A98B99ABBAA544C539DD0330 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	{
		// if(b)
		bool L_0 = __this->___b_4;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// time+=Time.deltaTime*speed;
		float L_1 = __this->___time_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___speed_6;
		__this->___time_7 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// slider.value = time;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_5;
		float L_5 = __this->___time_7;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// if(time>1)
		float L_6 = __this->___time_7;
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// b = false;
		__this->___b_4 = (bool)0;
		// time=0;
		__this->___time_7 = (0.0f);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void SliderRunTo1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1__ctor_m56F8C938A45BC24AF24076F32B8918CDEE61FBC6 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	{
		// public bool b=true;
		__this->___b_4 = (bool)1;
		// public float speed=0.5f;
		__this->___speed_6 = (0.5f);
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
// System.Void SliderValuePass::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass_Start_m0FEC6932F01B69FD1BB800F684C7C97F5FFE6CFC (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// progress = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___progress_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progress_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SliderValuePass::UpdateProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass_UpdateProgress_mD6E59B90095418375D083F59CC8DB2AD902B576B (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, float ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// progress.text = Mathf.Round( content*100) +"%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___progress_4;
		float L_1 = ___0_content;
		float L_2;
		L_2 = bankers_roundf(((float)il2cpp_codegen_multiply(L_1, (100.0f))));
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void SliderValuePass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass__ctor_m9BA53DA42B8045C5FD6D811719B5C782930CA890 (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, const RuntimeMethod* method) 
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
// System.Void BonusManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BonusManager_Start_mD12B785DAD6452B2717E39AD835FA777DB6A7B9F (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BonusManager::SpinWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BonusManager_SpinWheels_m31C7A1EF62CB7642C35BA3F38C7563F924A957EF (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* L_0 = (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91*)il2cpp_codegen_object_new(U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpinWheelsU3Ed__7__ctor_mB5489C5D51FD9D99C97BDF849F8F66FB93FDB9DB(L_0, 0, NULL);
		U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BonusManager::Spin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BonusManager_Spin_m7E2BB691C9D5AC3BD839CD68C3C5D4DA72E852AA (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* L_0 = (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410*)il2cpp_codegen_object_new(U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpinU3Ed__8__ctor_m73E44CDDD784645155CB24CC006E97A725B563CA(L_0, 0, NULL);
		U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_gameObject;
		NullCheck(L_2);
		L_2->___gameObject_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___gameObject_3), (void*)L_3);
		return L_2;
	}
}
// System.Void BonusManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BonusManager_OnStart_mFBD4A5D10E79843FD4428BBDB4A3B7A686E45930 (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpinWheels());
		RuntimeObject* L_0;
		L_0 = BonusManager_SpinWheels_m31C7A1EF62CB7642C35BA3F38C7563F924A957EF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BonusManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BonusManager__ctor_m6D4F7FAA0F6AB96B27E518C0AA44035376A9C06C (BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* __this, const RuntimeMethod* method) 
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
// System.Void BonusManager/<SpinWheels>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinWheelsU3Ed__7__ctor_mB5489C5D51FD9D99C97BDF849F8F66FB93FDB9DB (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BonusManager/<SpinWheels>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinWheelsU3Ed__7_System_IDisposable_Dispose_m572FE391310729219B96120A0CCD73932993753A (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BonusManager/<SpinWheels>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpinWheelsU3Ed__7_MoveNext_m9EF067318ECAA034D4C7D1F4917F02983BBB3B9E (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0088;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Spin(firstWheel));
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_3 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_4 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___firstWheel_4;
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = BonusManager_Spin_m7E2BB691C9D5AC3BD839CD68C3C5D4DA72E852AA(L_4, L_6, NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_7, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Spin(secondWheel));
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_10 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_11 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___secondWheel_5;
		NullCheck(L_11);
		RuntimeObject* L_14;
		L_14 = BonusManager_Spin_m7E2BB691C9D5AC3BD839CD68C3C5D4DA72E852AA(L_11, L_13, NULL);
		NullCheck(L_10);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_10, L_14, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0088:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Spin(thirdWheel));
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_17 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_18 = V_1;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___thirdWheel_6;
		NullCheck(L_18);
		RuntimeObject* L_21;
		L_21 = BonusManager_Spin_m7E2BB691C9D5AC3BD839CD68C3C5D4DA72E852AA(L_18, L_20, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BonusManager/<SpinWheels>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpinWheelsU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE93396F09FE89A801A0BC30899A7E1D9752BF0F2 (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BonusManager/<SpinWheels>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinWheelsU3Ed__7_System_Collections_IEnumerator_Reset_mFF4C31A2492E8CFDEE0EAE4DA7AA607B22AB1D45 (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpinWheelsU3Ed__7_System_Collections_IEnumerator_Reset_mFF4C31A2492E8CFDEE0EAE4DA7AA607B22AB1D45_RuntimeMethod_var)));
	}
}
// System.Object BonusManager/<SpinWheels>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpinWheelsU3Ed__7_System_Collections_IEnumerator_get_Current_m9F28F0F372377202547539A7DE92F8B9B852E0D7 (U3CSpinWheelsU3Ed__7_t75D68F45814E0E2279DA11FF671B9E2066B9CD91* __this, const RuntimeMethod* method) 
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
// System.Void BonusManager/<Spin>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinU3Ed__8__ctor_m73E44CDDD784645155CB24CC006E97A725B563CA (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BonusManager/<Spin>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinU3Ed__8_System_IDisposable_Dispose_m9D5BC23A1C9D7015026AFC9BA7134F57DC83B8EB (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BonusManager/<Spin>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpinU3Ed__8_MoveNext_mE4185BF7D7E441E704E814ED2C7C9E451E3BE01C (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_mCC3BAD27A07B9463A5A6D64B4162A9BAFEC001DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D91F7BE96124FBDD2F485D09E1D5135A1593FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral542DA4593460E8F4646EBBBACBC43F372D0E162E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68125ECC376DA1D423A1293EAE6E46DD88019E0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB365593634C7C77D2F83FB300AB5534F78A5E288);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA15ADE2C1E656F5FCD7C63764BCA696E3AE2BB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD6B3BBB6B188B24A77AC8A8D25A7F1A64ED8831);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE490872E817F1D81695B22176961C1DC6CD4AC91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE88B6CC4F96BF4BB966A456C83711D3110387B2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77EABE8120E00AE99435ED6EEB4F67B7F5C7E54);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ed;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _finalAngle = 0;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_4 = V_1;
		NullCheck(L_4);
		L_4->____finalAngle_9 = 0;
		// _randomValue = Random.Range(20,30);
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_5 = V_1;
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)20), ((int32_t)30), NULL);
		NullCheck(L_5);
		L_5->____randomValue_7 = L_6;
		// _timeInterval = 0.1f;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_7 = V_1;
		NullCheck(L_7);
		L_7->____timeInterval_8 = (0.100000001f);
		// var variableManager = Engine.GetService<ICustomVariableManager>();
		il2cpp_codegen_runtime_class_init_inline(Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Engine_GetService_TisICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_mCC3BAD27A07B9463A5A6D64B4162A9BAFEC001DB(Engine_GetService_TisICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_mCC3BAD27A07B9463A5A6D64B4162A9BAFEC001DB_RuntimeMethod_var);
		__this->___U3CvariableManagerU3E5__2_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvariableManagerU3E5__2_4), (void*)L_8);
		// var _playerCoint = variableManager.GetVariableValue("playerCoint");
		RuntimeObject* L_9 = __this->___U3CvariableManagerU3E5__2_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Naninovel.ICustomVariableManager::GetVariableValue(System.String) */, ICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_il2cpp_TypeInfo_var, L_9, _stringLiteral3D91F7BE96124FBDD2F485D09E1D5135A1593FEB);
		V_2 = L_10;
		// for (int i = 0; i < _randomValue; i++)
		__this->___U3CiU3E5__3_5 = 0;
		goto IL_0104;
	}

IL_006a:
	{
		// gameObject.transform.Rotate(0,0,22.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___gameObject_3;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_12, (0.0f), (0.0f), (22.5f), NULL);
		// if (i > Mathf.RoundToInt(_randomValue * 0.5f))
		int32_t L_13 = __this->___U3CiU3E5__3_5;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->____randomValue_7;
		int32_t L_16;
		L_16 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_15), (0.5f))), NULL);
		if ((((int32_t)L_13) <= ((int32_t)L_16)))
		{
			goto IL_00ae;
		}
	}
	{
		// _timeInterval = 0.2f;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_17 = V_1;
		NullCheck(L_17);
		L_17->____timeInterval_8 = (0.200000003f);
	}

IL_00ae:
	{
		// if (i > Mathf.RoundToInt(_randomValue * 0.85f))
		int32_t L_18 = __this->___U3CiU3E5__3_5;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____randomValue_7;
		int32_t L_21;
		L_21 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_20), (0.850000024f))), NULL);
		if ((((int32_t)L_18) <= ((int32_t)L_21)))
		{
			goto IL_00d3;
		}
	}
	{
		// _timeInterval = 0.4f;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_22 = V_1;
		NullCheck(L_22);
		L_22->____timeInterval_8 = (0.400000006f);
	}

IL_00d3:
	{
		// yield return new WaitForSeconds(_timeInterval);
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->____timeInterval_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_25 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_25, L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < _randomValue; i++)
		int32_t L_26 = __this->___U3CiU3E5__3_5;
		V_3 = L_26;
		int32_t L_27 = V_3;
		__this->___U3CiU3E5__3_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0104:
	{
		// for (int i = 0; i < _randomValue; i++)
		int32_t L_28 = __this->___U3CiU3E5__3_5;
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->____randomValue_7;
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_006a;
		}
	}
	{
		// if (Mathf.RoundToInt(gameObject.transform.eulerAngles.z) % 45 != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___gameObject_3;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_32, NULL);
		float L_34 = L_33.___z_4;
		int32_t L_35;
		L_35 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_34, NULL);
		if (!((int32_t)(L_35%((int32_t)45))))
		{
			goto IL_0153;
		}
	}
	{
		// gameObject.transform.Rotate(0,0,22.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___gameObject_3;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_37, (0.0f), (0.0f), (22.5f), NULL);
	}

IL_0153:
	{
		// _finalAngle = Mathf.RoundToInt(gameObject.transform.eulerAngles.z);
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_38 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___gameObject_3;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_40, NULL);
		float L_42 = L_41.___z_4;
		int32_t L_43;
		L_43 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_42, NULL);
		NullCheck(L_38);
		L_38->____finalAngle_9 = L_43;
		// _playerCoint = _finalAngle.ToString();
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_44 = V_1;
		NullCheck(L_44);
		int32_t* L_45 = (&L_44->____finalAngle_9);
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_45, NULL);
		V_2 = L_46;
		// variableManager.SetVariableValue("playerCoint", _playerCoint);
		RuntimeObject* L_47 = __this->___U3CvariableManagerU3E5__2_4;
		String_t* L_48 = V_2;
		NullCheck(L_47);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Naninovel.ICustomVariableManager::SetVariableValue(System.String,System.String) */, ICustomVariableManager_tD3CAB6A3C2850C91B7D2B22F0F41AD1DAA4A6303_il2cpp_TypeInfo_var, L_47, _stringLiteral3D91F7BE96124FBDD2F485D09E1D5135A1593FEB, L_48);
		// Debug.Log(_playerCoint);
		String_t* L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_49, NULL);
		// switch (_finalAngle)
		BonusManager_tCA57FE21FEDDA07B4AABCADF2EFC3065CA4F3243* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->____finalAngle_9;
		V_3 = L_51;
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)135))))
		{
			goto IL_01cf;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) > ((int32_t)((int32_t)45))))
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_54 = V_3;
		if (!L_54)
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)45))))
		{
			goto IL_0231;
		}
	}
	{
		goto IL_031f;
	}

IL_01b7:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)90))))
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)135))))
		{
			goto IL_0279;
		}
	}
	{
		goto IL_031f;
	}

IL_01cf:
	{
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) > ((int32_t)((int32_t)225))))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_59 = V_3;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)180))))
		{
			goto IL_029d;
		}
	}
	{
		int32_t L_60 = V_3;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)225))))
		{
			goto IL_02be;
		}
	}
	{
		goto IL_031f;
	}

IL_01f2:
	{
		int32_t L_61 = V_3;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)270))))
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)315))))
		{
			goto IL_0300;
		}
	}
	{
		goto IL_031f;
	}

IL_020d:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "1 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___gameObject_3;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_64, NULL);
		NullCheck(L_65);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66;
		L_66 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_65, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_66);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_66, _stringLiteralF77EABE8120E00AE99435ED6EEB4F67B7F5C7E54);
		// break;
		goto IL_031f;
	}

IL_0231:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "2 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___gameObject_3;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_68, NULL);
		NullCheck(L_69);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70;
		L_70 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_69, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, _stringLiteral542DA4593460E8F4646EBBBACBC43F372D0E162E);
		// break;
		goto IL_031f;
	}

IL_0255:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "3 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___gameObject_3;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_72, NULL);
		NullCheck(L_73);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_74;
		L_74 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_73, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_74);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_74, _stringLiteral68125ECC376DA1D423A1293EAE6E46DD88019E0A);
		// break;
		goto IL_031f;
	}

IL_0279:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "4 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___gameObject_3;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_75, NULL);
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_76, NULL);
		NullCheck(L_77);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78;
		L_78 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_77, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_78);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, _stringLiteralCA15ADE2C1E656F5FCD7C63764BCA696E3AE2BB7);
		// break;
		goto IL_031f;
	}

IL_029d:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "5 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = __this->___gameObject_3;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_79, NULL);
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_80, NULL);
		NullCheck(L_81);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_82;
		L_82 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_81, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_82);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_82, _stringLiteralCD6B3BBB6B188B24A77AC8A8D25A7F1A64ED8831);
		// break;
		goto IL_031f;
	}

IL_02be:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "6 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___gameObject_3;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_84, NULL);
		NullCheck(L_85);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86;
		L_86 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_85, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_86);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, _stringLiteralE88B6CC4F96BF4BB966A456C83711D3110387B2F);
		// break;
		goto IL_031f;
	}

IL_02df:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "7 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___gameObject_3;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_88, NULL);
		NullCheck(L_89);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90;
		L_90 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_89, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_90, _stringLiteralE490872E817F1D81695B22176961C1DC6CD4AC91);
		// break;
		goto IL_031f;
	}

IL_0300:
	{
		// gameObject.transform.parent.GetComponentInChildren<Text>().text = "8 Win";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = __this->___gameObject_3;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_92, NULL);
		NullCheck(L_93);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_94;
		L_94 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_93, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		NullCheck(L_94);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_94, _stringLiteralB365593634C7C77D2F83FB300AB5534F78A5E288);
	}

IL_031f:
	{
		// }
		return (bool)0;
	}
}
// System.Object BonusManager/<Spin>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpinU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6F32461072D7FF630409DA34C55899CD04C45E40 (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BonusManager/<Spin>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinU3Ed__8_System_Collections_IEnumerator_Reset_m7CB571DC6835DA46D82A79DD71F06E394584770E (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpinU3Ed__8_System_Collections_IEnumerator_Reset_m7CB571DC6835DA46D82A79DD71F06E394584770E_RuntimeMethod_var)));
	}
}
// System.Object BonusManager/<Spin>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpinU3Ed__8_System_Collections_IEnumerator_get_Current_m95C16C109A0EF47B4E4607884209CFBEDF6C2041 (U3CSpinU3Ed__8_tDEBB0E0A193409C0B417A650DC6F124E8674C410* __this, const RuntimeMethod* method) 
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
// Naninovel.UniTask Naninovel.UI.MapRegulation::ExecuteAsync(Naninovel.AsyncToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F MapRegulation_ExecuteAsync_mECAAB4F34B921140CF37E5EC1228BAD8BCF426DE (MapRegulation_t6834338072F169F30BF11D89F198E429E79F6A0B* __this, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC ___0_asyncToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A546E135FB2F65C9A13DB1409E2212FC37AA51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Assigned(missionName))
		StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* L_0 = __this->___missionName_8;
		bool L_1;
		L_1 = Command_Assigned_m787FB2F488EFA41F711D031359994A8579B59766(L_0, NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// if (questText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___questText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// questTextHolder = GameObject.Find("TextOfQuest");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral24A546E135FB2F65C9A13DB1409E2212FC37AA51, NULL);
		__this->___questTextHolder_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questTextHolder_6), (void*)L_4);
		// questText = questTextHolder.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___questTextHolder_6;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6;
		L_6 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_5, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___questText_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questText_7), (void*)L_6);
	}

IL_003c:
	{
		// questText.text = missionName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___questText_7;
		StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* L_8 = __this->___missionName_8;
		String_t* L_9;
		L_9 = StringParameter_op_Implicit_mA26269B2A9DF03D2298F2E0511170C0C301F6B11(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
	}

IL_0052:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_10;
		L_10 = UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E(NULL);
		return L_10;
	}
}
// System.Void Naninovel.UI.MapRegulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapRegulation__ctor_mCD64A371B9CC24BF8C2EAAF8D51789A473698620 (MapRegulation_t6834338072F169F30BF11D89F198E429E79F6A0B* __this, const RuntimeMethod* method) 
{
	{
		Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A(__this, NULL);
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
// System.String Naninovel.UI.QuestLog::get_PanelId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestLog_get_PanelId_mA6D0D99AE0A1A63AF16BCEA3596BA8D729181D22 (QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C4D7CE9835EDEC6F156E23F102E8CFDDE46684B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string PanelId => "QuestLog"; // Unique identifier for your custom UI panel
		return _stringLiteral7C4D7CE9835EDEC6F156E23F102E8CFDDE46684B;
	}
}
// System.Void Naninovel.UI.QuestLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestLog__ctor_mF719D4D20DC9A7EF09A602011B87B9A5EBF67D1F (QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* __this, const RuntimeMethod* method) 
{
	{
		CustomUI__ctor_m71016544F78E21EB42DEFBA6FBF4445E1ECB59B0(__this, NULL);
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
// Naninovel.UniTask Naninovel.UI.questMapClose::ExecuteAsync(Naninovel.AsyncToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F questMapClose_ExecuteAsync_mC79EA42D228E703AB0A8BA290ED7661DDEE0A27A (questMapClose_t453360FB42447EFF599ED4BD6D295C774F34440A* __this, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC ___0_asyncToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUIManager_GetUI_TisQuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2_m4CEB015AE913CDB904AE02952676B8AFC491DB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* G_B4_0 = NULL;
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* G_B3_0 = NULL;
	{
		// if (questMap == null)
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_0 = __this->___questMap_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// questMap = Engine.GetService<IUIManager>().GetUI<QuestLog>();
		il2cpp_codegen_runtime_class_init_inline(Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72(Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		NullCheck(L_2);
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_3;
		L_3 = GenericInterfaceFuncInvoker0< QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* >::Invoke(IUIManager_GetUI_TisQuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2_m4CEB015AE913CDB904AE02952676B8AFC491DB7A_RuntimeMethod_var, L_2);
		__this->___questMap_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questMap_6), (void*)L_3);
	}

IL_001e:
	{
		// questMap?.Hide();
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_4 = __this->___questMap_6;
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_002a;
		}
	}
	{
		goto IL_002f;
	}

IL_002a:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(48 /* System.Void Naninovel.ScriptableUIBehaviour::Hide() */, G_B4_0);
	}

IL_002f:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_6;
		L_6 = UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E(NULL);
		return L_6;
	}
}
// System.Void Naninovel.UI.questMapClose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void questMapClose__ctor_m073D4F536F7AFE67F20F1DEF47BDAF4B6146E56B (questMapClose_t453360FB42447EFF599ED4BD6D295C774F34440A* __this, const RuntimeMethod* method) 
{
	{
		Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A(__this, NULL);
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
// Naninovel.UniTask Naninovel.UI.questMapOpen::ExecuteAsync(Naninovel.AsyncToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F questMapOpen_ExecuteAsync_m731F653A5D755633F159AD57E8496F5C9F6C3843 (questMapOpen_tF28DA74DD24C039E22E5C53C8FDE2322F493EDC9* __this, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC ___0_asyncToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUIManager_GetUI_TisQuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2_m4CEB015AE913CDB904AE02952676B8AFC491DB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* G_B4_0 = NULL;
	QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* G_B3_0 = NULL;
	{
		// if (questMap == null)
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_0 = __this->___questMap_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// questMap = Engine.GetService<IUIManager>().GetUI<QuestLog>();
		il2cpp_codegen_runtime_class_init_inline(Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72(Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		NullCheck(L_2);
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_3;
		L_3 = GenericInterfaceFuncInvoker0< QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* >::Invoke(IUIManager_GetUI_TisQuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2_m4CEB015AE913CDB904AE02952676B8AFC491DB7A_RuntimeMethod_var, L_2);
		__this->___questMap_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questMap_6), (void*)L_3);
	}

IL_001e:
	{
		// questMap?.Show();
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_4 = __this->___questMap_6;
		QuestLog_t4AAF95BD9054CCB47B1C12F4BC9FD694F87028B2* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_002a;
		}
	}
	{
		goto IL_002f;
	}

IL_002a:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(47 /* System.Void Naninovel.ScriptableUIBehaviour::Show() */, G_B4_0);
	}

IL_002f:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_6;
		L_6 = UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E(NULL);
		return L_6;
	}
}
// System.Void Naninovel.UI.questMapOpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void questMapOpen__ctor_mD33086A3583C82B39ED1BC5B263376D153FAD25A (questMapOpen_tF28DA74DD24C039E22E5C53C8FDE2322F493EDC9* __this, const RuntimeMethod* method) 
{
	{
		Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
