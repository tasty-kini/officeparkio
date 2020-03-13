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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// IBoard
struct IBoard_t5292534945A48BE20FF78099BCECD6495137EB99;
// IOSBoard
struct IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89;
// StandardBoard
struct StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu/ABGroupData>
struct List_1_t6F768299811391E2030E78481306FC3FE40004D0;
// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>
struct List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E;
// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>
struct List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// Tastypill.Debug.DebugButton
struct DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545;
// Tastypill.Debug.DebugFloat
struct DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F;
// Tastypill.Debug.DebugLabel
struct DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250;
// Tastypill.Debug.DebugMenu
struct DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB;
// Tastypill.Debug.DebugMenu/<Start>d__26
struct U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778;
// Tastypill.Debug.DebugMenu/ABGroupData[]
struct ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B;
// Tastypill.Debug.DebugMenu/DebugMenuEvent
struct DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB;
// Tastypill.Debug.DebugSlider
struct DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560;
// Tastypill.Debug.DebugSlider/JSONData[]
struct JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9;
// Tastypill.Debug.DebugSlider[]
struct DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12;
// UniClipboard
struct UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasGroup
struct CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F_il2cpp_TypeInfo_var;
extern RuntimeClass* DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IBoard_t5292534945A48BE20FF78099BCECD6495137EB99_il2cpp_TypeInfo_var;
extern RuntimeClass* IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_il2cpp_TypeInfo_var;
extern RuntimeClass* StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778_il2cpp_TypeInfo_var;
extern RuntimeClass* UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral219394940266687AC7EC23D8A1E0860BE544AD14;
extern String_t* _stringLiteral3562C614309D5112677698660325AD1A1584349E;
extern String_t* _stringLiteral72A780534589758B37D47F39B73C3B3B778FC3A7;
extern String_t* _stringLiteral88564BD571E32C04903846C04A4553D3BA048824;
extern String_t* _stringLiteralAECF42EB86BFE100C3E80087072BBE0E05A4D44F;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDD230193F2797E37F352A557B31805D5CFCD4F74;
extern String_t* _stringLiteralE745FE7D0106A0DAFD5C8CF69E1C78455C37943E;
extern String_t* _stringLiteralE9B20B46F743EA957CD340F2FFFC8AF4302D5C01;
extern const RuntimeMethod* Component_GetComponent_TisCanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_m7E8ADD0E80ACBD9FACB9074DEE3565237F1A88AA_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var;
extern const RuntimeMethod* DebugMenu_ClearSaveData_m6485E6EA1AD1F567187903C9590B44BAF5B8A772_RuntimeMethod_var;
extern const RuntimeMethod* DebugMenu_CopySettingsToClipboard_m2FD137231F5AA63D968065564F4D8C87CA251728_RuntimeMethod_var;
extern const RuntimeMethod* DebugMenu_ForceCrash_m66DCCEF9BBEB7F193F31FBFBDBE45BAE42D4225C_RuntimeMethod_var;
extern const RuntimeMethod* DebugMenu_LoadSettingsFromClipboard_m1D423EAC9EF73B0DECE22C0611A1670AC45D6ACE_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mCF823690A6651F1C586EB06A3CD7695ADEA11470_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mB34E2C6BDA315A1EC1BE3E2EBBD53D72FA11A6D6_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m7936D96C3BAB4053ED9FCF6D25BA25FD2FBB672F_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545_mC3EC2F9748277DBE01F583FAEA8513C381125BE7_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250_m9E2853C119AD3466D08D6DC68C58C52ABD2B54D7_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560_mF25AB8014695A3D92C7485373E595AB56747E526_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mC951DBE0F7EA8F2C5590027845E1C298D771AA7B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mA2DD06BF030C57C7D87F4D00478437A836E20B0A_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m83BD91D8B3B3A71BCF2FAF38AB5FE5D6C2784611_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
extern const RuntimeMethod* StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ed__26_System_Collections_IEnumerator_Reset_mCABF33E9F41446079062EDA32A3DD951E594B954_RuntimeMethod_var;
extern const RuntimeType* GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_0_0_0_var;
extern const uint32_t DebugFloat_op_Implicit_m29A40F05DD9B1E67E21FAEC352F740ABEE86F0EB_MetadataUsageId;
extern const uint32_t DebugMenu_CopySettingsToClipboard_m2FD137231F5AA63D968065564F4D8C87CA251728_MetadataUsageId;
extern const uint32_t DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364_MetadataUsageId;
extern const uint32_t DebugMenu_CreateDebugLabel_mD23FD0A50AAD3725A43A971A1FD44FDF9DB2AE13_MetadataUsageId;
extern const uint32_t DebugMenu_CreateDebugSlider_m18B6FD941FA46A3DD633A71884F053B5338305C3_MetadataUsageId;
extern const uint32_t DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696_MetadataUsageId;
extern const uint32_t DebugMenu_OnEnable_m8EBAF2F48DCF443014E0072B2C9E026870EF6A8B_MetadataUsageId;
extern const uint32_t DebugMenu_OverrideDefaultData_mB7F9F8556DE57ED82E3EEB110EBA279CD5792FA6_MetadataUsageId;
extern const uint32_t DebugMenu_SaveSliderValues_m62B1556FE9528A377F82A1F02D01B5CE7FCFAC77_MetadataUsageId;
extern const uint32_t DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0_MetadataUsageId;
extern const uint32_t DebugMenu_Start_mBE01C84DB227B63E922DFAB8CA55BC0B2D469927_MetadataUsageId;
extern const uint32_t DebugMenu_ToggleDebugMenu_mA0130A4F69A6AE928FE44B2EE2B9CF4CD02D6F8F_MetadataUsageId;
extern const uint32_t DebugMenu_Update_m610B5D39167831EF602377518D8771197E523CF0_MetadataUsageId;
extern const uint32_t DebugSlider_HandleSliderChanged_m6855FB45105D04706E6705BE4BCD171E4B171D2C_MetadataUsageId;
extern const uint32_t DebugSlider_Init_mA112267E76FE0B1B67A87756DC239BA371E85D80_MetadataUsageId;
extern const uint32_t DebugSlider_SaveFloatValue_m34A6C0023BC2F155F88BB440AD7DA58C22F09962_MetadataUsageId;
extern const uint32_t StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206_MetadataUsageId;
extern const uint32_t StandardBoard_GetText_m27EA4AF77DFDD8882AD8C1C37BD2670360E09774_MetadataUsageId;
extern const uint32_t StandardBoard_SetText_m753A02BB8D11E74D4D0956CF107685D240CC256C_MetadataUsageId;
extern const uint32_t StandardBoard__cctor_mAE64951C08D5A529BFAE662B05C2597372E674C0_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__26_MoveNext_m52D0638A0D39F61BBD88B5F1024DB58162787CE1_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__26_System_Collections_IEnumerator_Reset_mCABF33E9F41446079062EDA32A3DD951E594B954_MetadataUsageId;
extern const uint32_t UniClipboard_GetText_m9524F1C395F00F4B320F5CBEC7A988F33D8BC7A2_MetadataUsageId;
extern const uint32_t UniClipboard_SetText_m9408DBC0ABDF6BFB97ACFA3A6C634868C2B2DAF8_MetadataUsageId;
extern const uint32_t UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


#ifndef U3CMODULEU3E_TA956C68605AEBA6CF6937C6110638C3A74FD6992_H
#define U3CMODULEU3E_TA956C68605AEBA6CF6937C6110638C3A74FD6992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA956C68605AEBA6CF6937C6110638C3A74FD6992 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TA956C68605AEBA6CF6937C6110638C3A74FD6992_H
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
#ifndef IOSBOARD_T2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89_H
#define IOSBOARD_T2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSBoard
struct  IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSBOARD_T2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89_H
#ifndef STANDARDBOARD_TC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_H
#define STANDARDBOARD_TC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StandardBoard
struct  StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2  : public RuntimeObject
{
public:

public:
};

struct StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields
{
public:
	// System.Reflection.PropertyInfo StandardBoard::m_systemCopyBufferProperty
	PropertyInfo_t * ___m_systemCopyBufferProperty_0;

public:
	inline static int32_t get_offset_of_m_systemCopyBufferProperty_0() { return static_cast<int32_t>(offsetof(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields, ___m_systemCopyBufferProperty_0)); }
	inline PropertyInfo_t * get_m_systemCopyBufferProperty_0() const { return ___m_systemCopyBufferProperty_0; }
	inline PropertyInfo_t ** get_address_of_m_systemCopyBufferProperty_0() { return &___m_systemCopyBufferProperty_0; }
	inline void set_m_systemCopyBufferProperty_0(PropertyInfo_t * value)
	{
		___m_systemCopyBufferProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_systemCopyBufferProperty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDBOARD_TC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_H
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
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifndef LIST_1_T6F768299811391E2030E78481306FC3FE40004D0_H
#define LIST_1_T6F768299811391E2030E78481306FC3FE40004D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu_ABGroupData>
struct  List_1_t6F768299811391E2030E78481306FC3FE40004D0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6F768299811391E2030E78481306FC3FE40004D0, ____items_1)); }
	inline ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* get__items_1() const { return ____items_1; }
	inline ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6F768299811391E2030E78481306FC3FE40004D0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6F768299811391E2030E78481306FC3FE40004D0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6F768299811391E2030E78481306FC3FE40004D0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t6F768299811391E2030E78481306FC3FE40004D0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6F768299811391E2030E78481306FC3FE40004D0_StaticFields, ____emptyArray_5)); }
	inline ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ABGroupDataU5BU5D_t8D600C8348A04171D6F44A48CF6F7F756E24E64B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T6F768299811391E2030E78481306FC3FE40004D0_H
#ifndef LIST_1_TDCCD5EA95C7124207FDBF021937826784BE2716E_H
#define LIST_1_TDCCD5EA95C7124207FDBF021937826784BE2716E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider_JSONData>
struct  List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E, ____items_1)); }
	inline JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* get__items_1() const { return ____items_1; }
	inline JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E_StaticFields, ____emptyArray_5)); }
	inline JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JSONDataU5BU5D_t52E3A3EF564F960F8D8646E72F3F04FA8A94AAE9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TDCCD5EA95C7124207FDBF021937826784BE2716E_H
#ifndef LIST_1_TB7D75CF74DED3908AE1E7E30802C89B875771733_H
#define LIST_1_TB7D75CF74DED3908AE1E7E30802C89B875771733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>
struct  List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733, ____items_1)); }
	inline DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* get__items_1() const { return ____items_1; }
	inline DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733_StaticFields, ____emptyArray_5)); }
	inline DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DebugSliderU5BU5D_tABA03972E7C03E6226B088451A98728BAAD24D12* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TB7D75CF74DED3908AE1E7E30802C89B875771733_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef DEBUGFLOAT_T2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F_H
#define DEBUGFLOAT_T2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugFloat
struct  DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F  : public RuntimeObject
{
public:
	// System.Single Tastypill.Debug.DebugFloat::value
	float ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGFLOAT_T2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F_H
#ifndef U3CSTARTU3ED__26_TE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778_H
#define U3CSTARTU3ED__26_TE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugMenu_<Start>d__26
struct  U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778  : public RuntimeObject
{
public:
	// System.Int32 Tastypill.Debug.DebugMenu_<Start>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tastypill.Debug.DebugMenu_<Start>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Tastypill.Debug.DebugMenu Tastypill.Debug.DebugMenu_<Start>d__26::<>4__this
	DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * ___U3CU3E4__this_2;
	// System.Boolean Tastypill.Debug.DebugMenu_<Start>d__26::<overrideDataUsed>5__1
	bool ___U3CoverrideDataUsedU3E5__1_3;
	// System.Int32 Tastypill.Debug.DebugMenu_<Start>d__26::<i>5__2
	int32_t ___U3CiU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778, ___U3CU3E4__this_2)); }
	inline DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CoverrideDataUsedU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778, ___U3CoverrideDataUsedU3E5__1_3)); }
	inline bool get_U3CoverrideDataUsedU3E5__1_3() const { return ___U3CoverrideDataUsedU3E5__1_3; }
	inline bool* get_address_of_U3CoverrideDataUsedU3E5__1_3() { return &___U3CoverrideDataUsedU3E5__1_3; }
	inline void set_U3CoverrideDataUsedU3E5__1_3(bool value)
	{
		___U3CoverrideDataUsedU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3ED__26_TE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778_H
#ifndef UNICLIPBOARD_T4C9B7E50D13734BDB2FBB435FCF371C701665BD6_H
#define UNICLIPBOARD_T4C9B7E50D13734BDB2FBB435FCF371C701665BD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniClipboard
struct  UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6  : public RuntimeObject
{
public:

public:
};

struct UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_StaticFields
{
public:
	// IBoard UniClipboard::_board
	RuntimeObject* ____board_0;

public:
	inline static int32_t get_offset_of__board_0() { return static_cast<int32_t>(offsetof(UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_StaticFields, ____board_0)); }
	inline RuntimeObject* get__board_0() const { return ____board_0; }
	inline RuntimeObject** get_address_of__board_0() { return &____board_0; }
	inline void set__board_0(RuntimeObject* value)
	{
		____board_0 = value;
		Il2CppCodeGenWriteBarrier((&____board_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICLIPBOARD_T4C9B7E50D13734BDB2FBB435FCF371C701665BD6_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T71D2A32B9325545E41AA8E8261C557F23DA1EC49_H
#define ENUMERATOR_T71D2A32B9325545E41AA8E8261C557F23DA1EC49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<Tastypill.Debug.DebugSlider>
struct  Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49, ___list_0)); }
	inline List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * get_list_0() const { return ___list_0; }
	inline List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49, ___current_3)); }
	inline DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * get_current_3() const { return ___current_3; }
	inline DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T71D2A32B9325545E41AA8E8261C557F23DA1EC49_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#define MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((&___fontAsset_1), value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteAsset_2), value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((&___material_3), value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackMaterial_6), value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
#endif // MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#ifndef TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#define TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TC6AC19F231736A53E4E73CA41E8BE25BCCE04293_H
#define TMP_RICHTEXTTAGSTACK_1_TC6AC19F231736A53E4E73CA41E8BE25BCCE04293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TC6AC19F231736A53E4E73CA41E8BE25BCCE04293_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TD5CFAF6390F82194115C110DC92A2CFB29529106_H
#define TMP_RICHTEXTTAGSTACK_1_TD5CFAF6390F82194115C110DC92A2CFB29529106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TD5CFAF6390F82194115C110DC92A2CFB29529106_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#define TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultItem_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#ifndef SLIDERDATA_T834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_H
#define SLIDERDATA_T834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugMenu_SliderData
struct  SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 
{
public:
	// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider_JSONData> Tastypill.Debug.DebugMenu_SliderData::sliderData
	List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData_0;

public:
	inline static int32_t get_offset_of_sliderData_0() { return static_cast<int32_t>(offsetof(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7, ___sliderData_0)); }
	inline List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * get_sliderData_0() const { return ___sliderData_0; }
	inline List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E ** get_address_of_sliderData_0() { return &___sliderData_0; }
	inline void set_sliderData_0(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * value)
	{
		___sliderData_0 = value;
		Il2CppCodeGenWriteBarrier((&___sliderData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Tastypill.Debug.DebugMenu/SliderData
struct SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_pinvoke
{
	List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData_0;
};
// Native definition for COM marshalling of Tastypill.Debug.DebugMenu/SliderData
struct SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_com
{
	List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData_0;
};
#endif // SLIDERDATA_T834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_H
#ifndef JSONDATA_T948971CCA2636195DE2C52EA08683EBAB90AB823_H
#define JSONDATA_T948971CCA2636195DE2C52EA08683EBAB90AB823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugSlider_JSONData
struct  JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 
{
public:
	// System.String Tastypill.Debug.DebugSlider_JSONData::sliderPref
	String_t* ___sliderPref_0;
	// System.Single Tastypill.Debug.DebugSlider_JSONData::sliderValue
	float ___sliderValue_1;

public:
	inline static int32_t get_offset_of_sliderPref_0() { return static_cast<int32_t>(offsetof(JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823, ___sliderPref_0)); }
	inline String_t* get_sliderPref_0() const { return ___sliderPref_0; }
	inline String_t** get_address_of_sliderPref_0() { return &___sliderPref_0; }
	inline void set_sliderPref_0(String_t* value)
	{
		___sliderPref_0 = value;
		Il2CppCodeGenWriteBarrier((&___sliderPref_0), value);
	}

	inline static int32_t get_offset_of_sliderValue_1() { return static_cast<int32_t>(offsetof(JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823, ___sliderValue_1)); }
	inline float get_sliderValue_1() const { return ___sliderValue_1; }
	inline float* get_address_of_sliderValue_1() { return &___sliderValue_1; }
	inline void set_sliderValue_1(float value)
	{
		___sliderValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Tastypill.Debug.DebugSlider/JSONData
struct JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_pinvoke
{
	char* ___sliderPref_0;
	float ___sliderValue_1;
};
// Native definition for COM marshalling of Tastypill.Debug.DebugSlider/JSONData
struct JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_com
{
	Il2CppChar* ___sliderPref_0;
	float ___sliderValue_1;
};
#endif // JSONDATA_T948971CCA2636195DE2C52EA08683EBAB90AB823_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
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
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#define DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifndef UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#define UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#define SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef ABTESTGROUP_TAB46180BEF4827C3A87FCBEFEE1983FA0BEDC9A4_H
#define ABTESTGROUP_TAB46180BEF4827C3A87FCBEFEE1983FA0BEDC9A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ABManager_ABTESTGROUP
struct  ABTESTGROUP_tAB46180BEF4827C3A87FCBEFEE1983FA0BEDC9A4 
{
public:
	// System.Int32 ABManager_ABTESTGROUP::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ABTESTGROUP_tAB46180BEF4827C3A87FCBEFEE1983FA0BEDC9A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABTESTGROUP_TAB46180BEF4827C3A87FCBEFEE1983FA0BEDC9A4_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#define COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#ifndef EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#define EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#ifndef FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#define FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#ifndef FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#define FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#define TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#define TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#ifndef TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#define TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#ifndef TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#define TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#ifndef TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#define TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#ifndef TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#define TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#ifndef TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#define TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#ifndef TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#define TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#ifndef VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#define VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#ifndef VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#define VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#ifndef FORCEDCRASHCATEGORY_T687D9CE1C66EC07B71E6AE33A1F4067A0654F2E3_H
#define FORCEDCRASHCATEGORY_T687D9CE1C66EC07B71E6AE33A1F4067A0654F2E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Diagnostics.ForcedCrashCategory
struct  ForcedCrashCategory_t687D9CE1C66EC07B71E6AE33A1F4067A0654F2E3 
{
public:
	// System.Int32 UnityEngine.Diagnostics.ForcedCrashCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForcedCrashCategory_t687D9CE1C66EC07B71E6AE33A1F4067A0654F2E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEDCRASHCATEGORY_T687D9CE1C66EC07B71E6AE33A1F4067A0654F2E3_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#define RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#ifndef BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#define BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#ifndef COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#define COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifndef FILLMETHOD_T0DB7332683118B7C7D2748BE74CFBF19CD19F8C5_H
#define FILLMETHOD_T0DB7332683118B7C7D2748BE74CFBF19CD19F8C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T0DB7332683118B7C7D2748BE74CFBF19CD19F8C5_H
#ifndef TYPE_T96B8A259B84ADA5E7D3B1F13AEAE22175937F38A_H
#define TYPE_T96B8A259B84ADA5E7D3B1F13AEAE22175937F38A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T96B8A259B84ADA5E7D3B1F13AEAE22175937F38A_H
#ifndef MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#define MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifndef SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#define SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable_SelectionState
struct  SelectionState_tF089B96B46A592693753CBF23C52A3887632D210 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_tF089B96B46A592693753CBF23C52A3887632D210, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifndef TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#define TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifndef DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#define DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider_Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_TAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#define TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#define TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#define TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#ifndef ABGROUPDATA_T64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_H
#define ABGROUPDATA_T64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugMenu_ABGroupData
struct  ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C 
{
public:
	// System.String Tastypill.Debug.DebugMenu_ABGroupData::JSONData
	String_t* ___JSONData_0;
	// ABManager_ABTESTGROUP Tastypill.Debug.DebugMenu_ABGroupData::testGroup
	int32_t ___testGroup_1;

public:
	inline static int32_t get_offset_of_JSONData_0() { return static_cast<int32_t>(offsetof(ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C, ___JSONData_0)); }
	inline String_t* get_JSONData_0() const { return ___JSONData_0; }
	inline String_t** get_address_of_JSONData_0() { return &___JSONData_0; }
	inline void set_JSONData_0(String_t* value)
	{
		___JSONData_0 = value;
		Il2CppCodeGenWriteBarrier((&___JSONData_0), value);
	}

	inline static int32_t get_offset_of_testGroup_1() { return static_cast<int32_t>(offsetof(ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C, ___testGroup_1)); }
	inline int32_t get_testGroup_1() const { return ___testGroup_1; }
	inline int32_t* get_address_of_testGroup_1() { return &___testGroup_1; }
	inline void set_testGroup_1(int32_t value)
	{
		___testGroup_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Tastypill.Debug.DebugMenu/ABGroupData
struct ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_pinvoke
{
	char* ___JSONData_0;
	int32_t ___testGroup_1;
};
// Native definition for COM marshalling of Tastypill.Debug.DebugMenu/ABGroupData
struct ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_com
{
	Il2CppChar* ___JSONData_0;
	int32_t ___testGroup_1;
};
#endif // ABGROUPDATA_T64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#define NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#define WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_27), value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___sizeStack_39 = value;
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___indentStack_40 = value;
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___styleStack_42 = value;
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___baselineStack_43 = value;
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___actionStack_44 = value;
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((&___currentFontAsset_48), value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((&___currentSpriteAsset_49), value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((&___currentMaterial_50), value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
#endif // WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#ifndef DEBUGMENUEVENT_T7CF7E4A14E994641BBEC2248BD050B70FF2648CB_H
#define DEBUGMENUEVENT_T7CF7E4A14E994641BBEC2248BD050B70FF2648CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugMenu_DebugMenuEvent
struct  DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGMENUEVENT_T7CF7E4A14E994641BBEC2248BD050B70FF2648CB_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#define UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#define CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifndef CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#define CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef DEBUGBUTTON_TB211DED03AE271E485933CC21972CA60F7B1D545_H
#define DEBUGBUTTON_TB211DED03AE271E485933CC21972CA60F7B1D545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugButton
struct  DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image Tastypill.Debug.DebugButton::buttonImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___buttonImage_4;
	// TMPro.TextMeshProUGUI Tastypill.Debug.DebugButton::buttonText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___buttonText_5;
	// UnityEngine.UI.Button Tastypill.Debug.DebugButton::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_6;

public:
	inline static int32_t get_offset_of_buttonImage_4() { return static_cast<int32_t>(offsetof(DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545, ___buttonImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_buttonImage_4() const { return ___buttonImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_buttonImage_4() { return &___buttonImage_4; }
	inline void set_buttonImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___buttonImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___buttonImage_4), value);
	}

	inline static int32_t get_offset_of_buttonText_5() { return static_cast<int32_t>(offsetof(DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545, ___buttonText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_buttonText_5() const { return ___buttonText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_buttonText_5() { return &___buttonText_5; }
	inline void set_buttonText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___buttonText_5 = value;
		Il2CppCodeGenWriteBarrier((&___buttonText_5), value);
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545, ___button_6)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_6() const { return ___button_6; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier((&___button_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGBUTTON_TB211DED03AE271E485933CC21972CA60F7B1D545_H
#ifndef DEBUGLABEL_T28524D88DCA52E018913DCC4A025F4ED99BED250_H
#define DEBUGLABEL_T28524D88DCA52E018913DCC4A025F4ED99BED250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugLabel
struct  DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshProUGUI Tastypill.Debug.DebugLabel::label
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___label_4;
	// UnityEngine.UI.Image Tastypill.Debug.DebugLabel::bgImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___bgImage_5;

public:
	inline static int32_t get_offset_of_label_4() { return static_cast<int32_t>(offsetof(DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250, ___label_4)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_label_4() const { return ___label_4; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_label_4() { return &___label_4; }
	inline void set_label_4(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___label_4 = value;
		Il2CppCodeGenWriteBarrier((&___label_4), value);
	}

	inline static int32_t get_offset_of_bgImage_5() { return static_cast<int32_t>(offsetof(DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250, ___bgImage_5)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_bgImage_5() const { return ___bgImage_5; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_bgImage_5() { return &___bgImage_5; }
	inline void set_bgImage_5(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___bgImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___bgImage_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLABEL_T28524D88DCA52E018913DCC4A025F4ED99BED250_H
#ifndef DEBUGMENU_T880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_H
#define DEBUGMENU_T880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugMenu
struct  DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Tastypill.Debug.DebugMenu::debugMenuOpen
	bool ___debugMenuOpen_5;
	// System.Boolean Tastypill.Debug.DebugMenu::DISABLE_FOR_RELEASE
	bool ___DISABLE_FOR_RELEASE_6;
	// System.String Tastypill.Debug.DebugMenu::defaultJSONObject
	String_t* ___defaultJSONObject_7;
	// System.Boolean Tastypill.Debug.DebugMenu::useDefaultData
	bool ___useDefaultData_8;
	// Tastypill.Debug.DebugMenu_SliderData Tastypill.Debug.DebugMenu::defaultData
	SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  ___defaultData_9;
	// System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu_ABGroupData> Tastypill.Debug.DebugMenu::abTestGroups
	List_1_t6F768299811391E2030E78481306FC3FE40004D0 * ___abTestGroups_10;
	// UnityEngine.Transform Tastypill.Debug.DebugMenu::vertLayout
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___vertLayout_12;
	// UnityEngine.RectTransform Tastypill.Debug.DebugMenu::menuOverlay
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___menuOverlay_13;
	// UnityEngine.RectTransform Tastypill.Debug.DebugMenu::menuWipe
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___menuWipe_14;
	// UnityEngine.GameObject Tastypill.Debug.DebugMenu::buttonPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___buttonPrefab_15;
	// UnityEngine.GameObject Tastypill.Debug.DebugMenu::colorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___colorPrefab_16;
	// UnityEngine.GameObject Tastypill.Debug.DebugMenu::labelPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___labelPrefab_17;
	// UnityEngine.GameObject Tastypill.Debug.DebugMenu::sliderPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sliderPrefab_18;
	// System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider> Tastypill.Debug.DebugMenu::sliders
	List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * ___sliders_19;
	// System.Collections.Generic.List`1<System.String> Tastypill.Debug.DebugMenu::registeredSliders
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___registeredSliders_20;
	// Tastypill.Debug.DebugMenu_SliderData Tastypill.Debug.DebugMenu::sliderData
	SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  ___sliderData_21;
	// UnityEngine.Canvas Tastypill.Debug.DebugMenu::canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___canvas_22;
	// UnityEngine.CanvasGroup Tastypill.Debug.DebugMenu::cGroup
	CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * ___cGroup_23;
	// UnityEngine.RectTransform Tastypill.Debug.DebugMenu::canvasRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___canvasRect_24;

public:
	inline static int32_t get_offset_of_debugMenuOpen_5() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___debugMenuOpen_5)); }
	inline bool get_debugMenuOpen_5() const { return ___debugMenuOpen_5; }
	inline bool* get_address_of_debugMenuOpen_5() { return &___debugMenuOpen_5; }
	inline void set_debugMenuOpen_5(bool value)
	{
		___debugMenuOpen_5 = value;
	}

	inline static int32_t get_offset_of_DISABLE_FOR_RELEASE_6() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___DISABLE_FOR_RELEASE_6)); }
	inline bool get_DISABLE_FOR_RELEASE_6() const { return ___DISABLE_FOR_RELEASE_6; }
	inline bool* get_address_of_DISABLE_FOR_RELEASE_6() { return &___DISABLE_FOR_RELEASE_6; }
	inline void set_DISABLE_FOR_RELEASE_6(bool value)
	{
		___DISABLE_FOR_RELEASE_6 = value;
	}

	inline static int32_t get_offset_of_defaultJSONObject_7() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___defaultJSONObject_7)); }
	inline String_t* get_defaultJSONObject_7() const { return ___defaultJSONObject_7; }
	inline String_t** get_address_of_defaultJSONObject_7() { return &___defaultJSONObject_7; }
	inline void set_defaultJSONObject_7(String_t* value)
	{
		___defaultJSONObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultJSONObject_7), value);
	}

	inline static int32_t get_offset_of_useDefaultData_8() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___useDefaultData_8)); }
	inline bool get_useDefaultData_8() const { return ___useDefaultData_8; }
	inline bool* get_address_of_useDefaultData_8() { return &___useDefaultData_8; }
	inline void set_useDefaultData_8(bool value)
	{
		___useDefaultData_8 = value;
	}

	inline static int32_t get_offset_of_defaultData_9() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___defaultData_9)); }
	inline SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  get_defaultData_9() const { return ___defaultData_9; }
	inline SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * get_address_of_defaultData_9() { return &___defaultData_9; }
	inline void set_defaultData_9(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  value)
	{
		___defaultData_9 = value;
	}

	inline static int32_t get_offset_of_abTestGroups_10() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___abTestGroups_10)); }
	inline List_1_t6F768299811391E2030E78481306FC3FE40004D0 * get_abTestGroups_10() const { return ___abTestGroups_10; }
	inline List_1_t6F768299811391E2030E78481306FC3FE40004D0 ** get_address_of_abTestGroups_10() { return &___abTestGroups_10; }
	inline void set_abTestGroups_10(List_1_t6F768299811391E2030E78481306FC3FE40004D0 * value)
	{
		___abTestGroups_10 = value;
		Il2CppCodeGenWriteBarrier((&___abTestGroups_10), value);
	}

	inline static int32_t get_offset_of_vertLayout_12() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___vertLayout_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_vertLayout_12() const { return ___vertLayout_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_vertLayout_12() { return &___vertLayout_12; }
	inline void set_vertLayout_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___vertLayout_12 = value;
		Il2CppCodeGenWriteBarrier((&___vertLayout_12), value);
	}

	inline static int32_t get_offset_of_menuOverlay_13() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___menuOverlay_13)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_menuOverlay_13() const { return ___menuOverlay_13; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_menuOverlay_13() { return &___menuOverlay_13; }
	inline void set_menuOverlay_13(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___menuOverlay_13 = value;
		Il2CppCodeGenWriteBarrier((&___menuOverlay_13), value);
	}

	inline static int32_t get_offset_of_menuWipe_14() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___menuWipe_14)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_menuWipe_14() const { return ___menuWipe_14; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_menuWipe_14() { return &___menuWipe_14; }
	inline void set_menuWipe_14(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___menuWipe_14 = value;
		Il2CppCodeGenWriteBarrier((&___menuWipe_14), value);
	}

	inline static int32_t get_offset_of_buttonPrefab_15() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___buttonPrefab_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_buttonPrefab_15() const { return ___buttonPrefab_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_buttonPrefab_15() { return &___buttonPrefab_15; }
	inline void set_buttonPrefab_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___buttonPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((&___buttonPrefab_15), value);
	}

	inline static int32_t get_offset_of_colorPrefab_16() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___colorPrefab_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_colorPrefab_16() const { return ___colorPrefab_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_colorPrefab_16() { return &___colorPrefab_16; }
	inline void set_colorPrefab_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___colorPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((&___colorPrefab_16), value);
	}

	inline static int32_t get_offset_of_labelPrefab_17() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___labelPrefab_17)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_labelPrefab_17() const { return ___labelPrefab_17; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_labelPrefab_17() { return &___labelPrefab_17; }
	inline void set_labelPrefab_17(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___labelPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((&___labelPrefab_17), value);
	}

	inline static int32_t get_offset_of_sliderPrefab_18() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___sliderPrefab_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sliderPrefab_18() const { return ___sliderPrefab_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sliderPrefab_18() { return &___sliderPrefab_18; }
	inline void set_sliderPrefab_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sliderPrefab_18 = value;
		Il2CppCodeGenWriteBarrier((&___sliderPrefab_18), value);
	}

	inline static int32_t get_offset_of_sliders_19() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___sliders_19)); }
	inline List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * get_sliders_19() const { return ___sliders_19; }
	inline List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 ** get_address_of_sliders_19() { return &___sliders_19; }
	inline void set_sliders_19(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * value)
	{
		___sliders_19 = value;
		Il2CppCodeGenWriteBarrier((&___sliders_19), value);
	}

	inline static int32_t get_offset_of_registeredSliders_20() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___registeredSliders_20)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_registeredSliders_20() const { return ___registeredSliders_20; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_registeredSliders_20() { return &___registeredSliders_20; }
	inline void set_registeredSliders_20(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___registeredSliders_20 = value;
		Il2CppCodeGenWriteBarrier((&___registeredSliders_20), value);
	}

	inline static int32_t get_offset_of_sliderData_21() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___sliderData_21)); }
	inline SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  get_sliderData_21() const { return ___sliderData_21; }
	inline SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * get_address_of_sliderData_21() { return &___sliderData_21; }
	inline void set_sliderData_21(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  value)
	{
		___sliderData_21 = value;
	}

	inline static int32_t get_offset_of_canvas_22() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___canvas_22)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_canvas_22() const { return ___canvas_22; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_canvas_22() { return &___canvas_22; }
	inline void set_canvas_22(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___canvas_22 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_22), value);
	}

	inline static int32_t get_offset_of_cGroup_23() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___cGroup_23)); }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * get_cGroup_23() const { return ___cGroup_23; }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 ** get_address_of_cGroup_23() { return &___cGroup_23; }
	inline void set_cGroup_23(CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * value)
	{
		___cGroup_23 = value;
		Il2CppCodeGenWriteBarrier((&___cGroup_23), value);
	}

	inline static int32_t get_offset_of_canvasRect_24() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB, ___canvasRect_24)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_canvasRect_24() const { return ___canvasRect_24; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_canvasRect_24() { return &___canvasRect_24; }
	inline void set_canvasRect_24(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___canvasRect_24 = value;
		Il2CppCodeGenWriteBarrier((&___canvasRect_24), value);
	}
};

struct DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields
{
public:
	// Tastypill.Debug.DebugMenu Tastypill.Debug.DebugMenu::instance
	DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * ___instance_4;
	// System.Boolean Tastypill.Debug.DebugMenu::defaultDataOveridden
	bool ___defaultDataOveridden_11;
	// Tastypill.Debug.DebugMenu_DebugMenuEvent Tastypill.Debug.DebugMenu::debugMenuOpened
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * ___debugMenuOpened_25;
	// Tastypill.Debug.DebugMenu_DebugMenuEvent Tastypill.Debug.DebugMenu::debugMenuClosed
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * ___debugMenuClosed_26;
	// Tastypill.Debug.DebugMenu_DebugMenuEvent Tastypill.Debug.DebugMenu::debugMenuCreated
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * ___debugMenuCreated_27;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields, ___instance_4)); }
	inline DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * get_instance_4() const { return ___instance_4; }
	inline DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_defaultDataOveridden_11() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields, ___defaultDataOveridden_11)); }
	inline bool get_defaultDataOveridden_11() const { return ___defaultDataOveridden_11; }
	inline bool* get_address_of_defaultDataOveridden_11() { return &___defaultDataOveridden_11; }
	inline void set_defaultDataOveridden_11(bool value)
	{
		___defaultDataOveridden_11 = value;
	}

	inline static int32_t get_offset_of_debugMenuOpened_25() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields, ___debugMenuOpened_25)); }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * get_debugMenuOpened_25() const { return ___debugMenuOpened_25; }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB ** get_address_of_debugMenuOpened_25() { return &___debugMenuOpened_25; }
	inline void set_debugMenuOpened_25(DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * value)
	{
		___debugMenuOpened_25 = value;
		Il2CppCodeGenWriteBarrier((&___debugMenuOpened_25), value);
	}

	inline static int32_t get_offset_of_debugMenuClosed_26() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields, ___debugMenuClosed_26)); }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * get_debugMenuClosed_26() const { return ___debugMenuClosed_26; }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB ** get_address_of_debugMenuClosed_26() { return &___debugMenuClosed_26; }
	inline void set_debugMenuClosed_26(DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * value)
	{
		___debugMenuClosed_26 = value;
		Il2CppCodeGenWriteBarrier((&___debugMenuClosed_26), value);
	}

	inline static int32_t get_offset_of_debugMenuCreated_27() { return static_cast<int32_t>(offsetof(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields, ___debugMenuCreated_27)); }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * get_debugMenuCreated_27() const { return ___debugMenuCreated_27; }
	inline DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB ** get_address_of_debugMenuCreated_27() { return &___debugMenuCreated_27; }
	inline void set_debugMenuCreated_27(DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * value)
	{
		___debugMenuCreated_27 = value;
		Il2CppCodeGenWriteBarrier((&___debugMenuCreated_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGMENU_T880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_H
#ifndef DEBUGSLIDER_T56497233EBD0EE8EA75B1F1343B429C627E1D560_H
#define DEBUGSLIDER_T56497233EBD0EE8EA75B1F1343B429C627E1D560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tastypill.Debug.DebugSlider
struct  DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Tastypill.Debug.DebugFloat Tastypill.Debug.DebugSlider::floatValue
	DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___floatValue_4;
	// TMPro.TextMeshProUGUI Tastypill.Debug.DebugSlider::titleLabel
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___titleLabel_5;
	// TMPro.TextMeshProUGUI Tastypill.Debug.DebugSlider::valueLabel
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___valueLabel_6;
	// UnityEngine.UI.Image Tastypill.Debug.DebugSlider::sliderHandle
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___sliderHandle_7;
	// UnityEngine.UI.Image Tastypill.Debug.DebugSlider::sliderBG
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___sliderBG_8;
	// UnityEngine.UI.Slider Tastypill.Debug.DebugSlider::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_9;
	// Tastypill.Debug.DebugSlider_JSONData Tastypill.Debug.DebugSlider::jsonData
	JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  ___jsonData_10;

public:
	inline static int32_t get_offset_of_floatValue_4() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___floatValue_4)); }
	inline DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * get_floatValue_4() const { return ___floatValue_4; }
	inline DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F ** get_address_of_floatValue_4() { return &___floatValue_4; }
	inline void set_floatValue_4(DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * value)
	{
		___floatValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___floatValue_4), value);
	}

	inline static int32_t get_offset_of_titleLabel_5() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___titleLabel_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_titleLabel_5() const { return ___titleLabel_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_titleLabel_5() { return &___titleLabel_5; }
	inline void set_titleLabel_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___titleLabel_5 = value;
		Il2CppCodeGenWriteBarrier((&___titleLabel_5), value);
	}

	inline static int32_t get_offset_of_valueLabel_6() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___valueLabel_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_valueLabel_6() const { return ___valueLabel_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_valueLabel_6() { return &___valueLabel_6; }
	inline void set_valueLabel_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___valueLabel_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueLabel_6), value);
	}

	inline static int32_t get_offset_of_sliderHandle_7() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___sliderHandle_7)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_sliderHandle_7() const { return ___sliderHandle_7; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_sliderHandle_7() { return &___sliderHandle_7; }
	inline void set_sliderHandle_7(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___sliderHandle_7 = value;
		Il2CppCodeGenWriteBarrier((&___sliderHandle_7), value);
	}

	inline static int32_t get_offset_of_sliderBG_8() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___sliderBG_8)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_sliderBG_8() const { return ___sliderBG_8; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_sliderBG_8() { return &___sliderBG_8; }
	inline void set_sliderBG_8(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___sliderBG_8 = value;
		Il2CppCodeGenWriteBarrier((&___sliderBG_8), value);
	}

	inline static int32_t get_offset_of_slider_9() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___slider_9)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_9() const { return ___slider_9; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_9() { return &___slider_9; }
	inline void set_slider_9(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_9 = value;
		Il2CppCodeGenWriteBarrier((&___slider_9), value);
	}

	inline static int32_t get_offset_of_jsonData_10() { return static_cast<int32_t>(offsetof(DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560, ___jsonData_10)); }
	inline JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  get_jsonData_10() const { return ___jsonData_10; }
	inline JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 * get_address_of_jsonData_10() { return &___jsonData_10; }
	inline void set_jsonData_10(JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  value)
	{
		___jsonData_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGSLIDER_T56497233EBD0EE8EA75B1F1343B429C627E1D560_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#define SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_5;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable_SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_5)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_7)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_8)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_11)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_17)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_List_4)); }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifndef BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#define BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_18;

public:
	inline static int32_t get_offset_of_m_OnClick_18() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_18)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_18() const { return ___m_OnClick_18; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_18() { return &___m_OnClick_18; }
	inline void set_m_OnClick_18(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#define SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_18;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_19;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_20;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_21;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_22;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_23;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_24;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_25;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_30;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_31;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_32;

public:
	inline static int32_t get_offset_of_m_FillRect_18() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_18)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_18() const { return ___m_FillRect_18; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_18() { return &___m_FillRect_18; }
	inline void set_m_FillRect_18(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_18), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_19() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_19)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_19() const { return ___m_HandleRect_19; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_19() { return &___m_HandleRect_19; }
	inline void set_m_HandleRect_19(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_19), value);
	}

	inline static int32_t get_offset_of_m_Direction_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_20)); }
	inline int32_t get_m_Direction_20() const { return ___m_Direction_20; }
	inline int32_t* get_address_of_m_Direction_20() { return &___m_Direction_20; }
	inline void set_m_Direction_20(int32_t value)
	{
		___m_Direction_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_21)); }
	inline float get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline float* get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(float value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_22)); }
	inline float get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline float* get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(float value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_23)); }
	inline bool get_m_WholeNumbers_23() const { return ___m_WholeNumbers_23; }
	inline bool* get_address_of_m_WholeNumbers_23() { return &___m_WholeNumbers_23; }
	inline void set_m_WholeNumbers_23(bool value)
	{
		___m_WholeNumbers_23 = value;
	}

	inline static int32_t get_offset_of_m_Value_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_24)); }
	inline float get_m_Value_24() const { return ___m_Value_24; }
	inline float* get_address_of_m_Value_24() { return &___m_Value_24; }
	inline void set_m_Value_24(float value)
	{
		___m_Value_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_25)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_FillImage_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_26)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_26() const { return ___m_FillImage_26; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_26() { return &___m_FillImage_26; }
	inline void set_m_FillImage_26(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_26), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_27)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_27() const { return ___m_FillTransform_27; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_27() { return &___m_FillTransform_27; }
	inline void set_m_FillTransform_27(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_27), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_28)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_28() const { return ___m_FillContainerRect_28; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_28() { return &___m_FillContainerRect_28; }
	inline void set_m_FillContainerRect_28(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_29() const { return ___m_HandleTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_29() { return &___m_HandleTransform_29; }
	inline void set_m_HandleTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_29), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_30() const { return ___m_HandleContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_30() { return &___m_HandleContainerRect_30; }
	inline void set_m_HandleContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_30), value);
	}

	inline static int32_t get_offset_of_m_Offset_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_31)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_31() const { return ___m_Offset_31; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_31() { return &___m_Offset_31; }
	inline void set_m_Offset_31(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_31 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_32)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_32() const { return ___m_Tracker_32; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_32() { return &___m_Tracker_32; }
	inline void set_m_Tracker_32(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T0654A41304B5CE7074CA86F4E66CB681D0D52C09_H
#ifndef TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#define TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_30;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_31;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_32;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_33;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_34;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_35;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_36;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_37;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * ___m_materialReferenceIndexLookup_38;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_39;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_40;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_41;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_42;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_43;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_44;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_45;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_46;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_49;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_50;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_51;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_52;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_53;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_54;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_55;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_56;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_57;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_58;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_59;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_60;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_61;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_62;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_63;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_64;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_65;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_66;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_sizeStack_67;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_68;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_69;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_70;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_71;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_72;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_74;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_75;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_76;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_77;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_78;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_79;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_80;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_81;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_82;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_83;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_84;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_85;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_86;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_87;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_88;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_89;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_90;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_91;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_92;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_93;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_94;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_95;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_96;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_97;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_98;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_99;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_100;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_101;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_102;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_103;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_104;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_105;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_106;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_107;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_108;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_109;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_110;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_111;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_113;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_114;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_115;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_116;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_117;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_118;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_119;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_120;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_121;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_122;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_123;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_124;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_125;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_126;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_127;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_128;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_129;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_130;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_131;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_132;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_133;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_134;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_135;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_136;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_137;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_138;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_139;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_140;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_141;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_142;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_143;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_144;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_145;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_146;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_147;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_148;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_149;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_150;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_151;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_152;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_153;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_154;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_155;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_156;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_157;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_158;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_159;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_160;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_161;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_162;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_163;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_164;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_165;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_166;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_167;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_168;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_169;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_170;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_171;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_172;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_173;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_174;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_175;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_indentStack_176;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_177;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_178;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_179;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_180;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_181;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_182;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_183;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_184;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_185;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_186;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_187;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_188;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_189;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_190;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_191;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_192;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_193;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_194;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_195;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_196;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_197;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_198;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_199;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_200;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_201;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_202;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_203;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_204;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_205;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_206;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_207;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_208;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_209;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_210;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_211;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_212;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___m_styleStack_213;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___m_actionStack_214;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_215;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_216;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_baselineOffsetStack_217;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_218;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_219;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_220;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_221;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_222;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_223;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_224;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_225;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_226;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_227;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_228;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_229;

public:
	inline static int32_t get_offset_of_m_text_30() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_30)); }
	inline String_t* get_m_text_30() const { return ___m_text_30; }
	inline String_t** get_address_of_m_text_30() { return &___m_text_30; }
	inline void set_m_text_30(String_t* value)
	{
		___m_text_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_30), value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_31() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_31)); }
	inline bool get_m_isRightToLeft_31() const { return ___m_isRightToLeft_31; }
	inline bool* get_address_of_m_isRightToLeft_31() { return &___m_isRightToLeft_31; }
	inline void set_m_isRightToLeft_31(bool value)
	{
		___m_isRightToLeft_31 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_32() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_32)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_32() const { return ___m_fontAsset_32; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_32() { return &___m_fontAsset_32; }
	inline void set_m_fontAsset_32(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontAsset_32), value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_33() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_33)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_33() const { return ___m_currentFontAsset_33; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_33() { return &___m_currentFontAsset_33; }
	inline void set_m_currentFontAsset_33(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentFontAsset_33), value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_34)); }
	inline bool get_m_isSDFShader_34() const { return ___m_isSDFShader_34; }
	inline bool* get_address_of_m_isSDFShader_34() { return &___m_isSDFShader_34; }
	inline void set_m_isSDFShader_34(bool value)
	{
		___m_isSDFShader_34 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_35() const { return ___m_sharedMaterial_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_35() { return &___m_sharedMaterial_35; }
	inline void set_m_sharedMaterial_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_sharedMaterial_35), value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_36)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_36() const { return ___m_currentMaterial_36; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_36() { return &___m_currentMaterial_36; }
	inline void set_m_currentMaterial_36(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentMaterial_36), value);
	}

	inline static int32_t get_offset_of_m_materialReferences_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_37)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_37() const { return ___m_materialReferences_37; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_37() { return &___m_materialReferences_37; }
	inline void set_m_materialReferences_37(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferences_37), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_38)); }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * get_m_materialReferenceIndexLookup_38() const { return ___m_materialReferenceIndexLookup_38; }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 ** get_address_of_m_materialReferenceIndexLookup_38() { return &___m_materialReferenceIndexLookup_38; }
	inline void set_m_materialReferenceIndexLookup_38(Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * value)
	{
		___m_materialReferenceIndexLookup_38 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferenceIndexLookup_38), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_39)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_39() const { return ___m_materialReferenceStack_39; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_39() { return &___m_materialReferenceStack_39; }
	inline void set_m_materialReferenceStack_39(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_39 = value;
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_40)); }
	inline int32_t get_m_currentMaterialIndex_40() const { return ___m_currentMaterialIndex_40; }
	inline int32_t* get_address_of_m_currentMaterialIndex_40() { return &___m_currentMaterialIndex_40; }
	inline void set_m_currentMaterialIndex_40(int32_t value)
	{
		___m_currentMaterialIndex_40 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_41)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_41() const { return ___m_fontSharedMaterials_41; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_41() { return &___m_fontSharedMaterials_41; }
	inline void set_m_fontSharedMaterials_41(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontSharedMaterials_41), value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_42() const { return ___m_fontMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_42() { return &___m_fontMaterial_42; }
	inline void set_m_fontMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterial_42), value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_43)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_43() const { return ___m_fontMaterials_43; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_43() { return &___m_fontMaterials_43; }
	inline void set_m_fontMaterials_43(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterials_43), value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_44)); }
	inline bool get_m_isMaterialDirty_44() const { return ___m_isMaterialDirty_44; }
	inline bool* get_address_of_m_isMaterialDirty_44() { return &___m_isMaterialDirty_44; }
	inline void set_m_isMaterialDirty_44(bool value)
	{
		___m_isMaterialDirty_44 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_45)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_45() const { return ___m_fontColor32_45; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_45() { return &___m_fontColor32_45; }
	inline void set_m_fontColor32_45(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_45 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_46)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_46() const { return ___m_fontColor_46; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_46() { return &___m_fontColor_46; }
	inline void set_m_fontColor_46(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_46 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_48)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_48() const { return ___m_underlineColor_48; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_48() { return &___m_underlineColor_48; }
	inline void set_m_underlineColor_48(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_48 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_49() const { return ___m_strikethroughColor_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_49() { return &___m_strikethroughColor_49; }
	inline void set_m_strikethroughColor_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_49 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_50)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_50() const { return ___m_highlightColor_50; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_50() { return &___m_highlightColor_50; }
	inline void set_m_highlightColor_50(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_50 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_51)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_51() const { return ___m_highlightPadding_51; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_51() { return &___m_highlightPadding_51; }
	inline void set_m_highlightPadding_51(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_51 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_52)); }
	inline bool get_m_enableVertexGradient_52() const { return ___m_enableVertexGradient_52; }
	inline bool* get_address_of_m_enableVertexGradient_52() { return &___m_enableVertexGradient_52; }
	inline void set_m_enableVertexGradient_52(bool value)
	{
		___m_enableVertexGradient_52 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_53)); }
	inline int32_t get_m_colorMode_53() const { return ___m_colorMode_53; }
	inline int32_t* get_address_of_m_colorMode_53() { return &___m_colorMode_53; }
	inline void set_m_colorMode_53(int32_t value)
	{
		___m_colorMode_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_54)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_54() const { return ___m_fontColorGradient_54; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_54() { return &___m_fontColorGradient_54; }
	inline void set_m_fontColorGradient_54(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_54 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_55)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_55() const { return ___m_fontColorGradientPreset_55; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_55() { return &___m_fontColorGradientPreset_55; }
	inline void set_m_fontColorGradientPreset_55(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontColorGradientPreset_55), value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_56)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_56() const { return ___m_spriteAsset_56; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_56() { return &___m_spriteAsset_56; }
	inline void set_m_spriteAsset_56(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAsset_56), value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_57)); }
	inline bool get_m_tintAllSprites_57() const { return ___m_tintAllSprites_57; }
	inline bool* get_address_of_m_tintAllSprites_57() { return &___m_tintAllSprites_57; }
	inline void set_m_tintAllSprites_57(bool value)
	{
		___m_tintAllSprites_57 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_58)); }
	inline bool get_m_tintSprite_58() const { return ___m_tintSprite_58; }
	inline bool* get_address_of_m_tintSprite_58() { return &___m_tintSprite_58; }
	inline void set_m_tintSprite_58(bool value)
	{
		___m_tintSprite_58 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_59)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_59() const { return ___m_spriteColor_59; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_59() { return &___m_spriteColor_59; }
	inline void set_m_spriteColor_59(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_59 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_60)); }
	inline bool get_m_overrideHtmlColors_60() const { return ___m_overrideHtmlColors_60; }
	inline bool* get_address_of_m_overrideHtmlColors_60() { return &___m_overrideHtmlColors_60; }
	inline void set_m_overrideHtmlColors_60(bool value)
	{
		___m_overrideHtmlColors_60 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_61)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_61() const { return ___m_faceColor_61; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_61() { return &___m_faceColor_61; }
	inline void set_m_faceColor_61(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_61 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_62)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_62() const { return ___m_outlineColor_62; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_62() { return &___m_outlineColor_62; }
	inline void set_m_outlineColor_62(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_62 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_63)); }
	inline float get_m_outlineWidth_63() const { return ___m_outlineWidth_63; }
	inline float* get_address_of_m_outlineWidth_63() { return &___m_outlineWidth_63; }
	inline void set_m_outlineWidth_63(float value)
	{
		___m_outlineWidth_63 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_64)); }
	inline float get_m_fontSize_64() const { return ___m_fontSize_64; }
	inline float* get_address_of_m_fontSize_64() { return &___m_fontSize_64; }
	inline void set_m_fontSize_64(float value)
	{
		___m_fontSize_64 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_65)); }
	inline float get_m_currentFontSize_65() const { return ___m_currentFontSize_65; }
	inline float* get_address_of_m_currentFontSize_65() { return &___m_currentFontSize_65; }
	inline void set_m_currentFontSize_65(float value)
	{
		___m_currentFontSize_65 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_66)); }
	inline float get_m_fontSizeBase_66() const { return ___m_fontSizeBase_66; }
	inline float* get_address_of_m_fontSizeBase_66() { return &___m_fontSizeBase_66; }
	inline void set_m_fontSizeBase_66(float value)
	{
		___m_fontSizeBase_66 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_67)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_sizeStack_67() const { return ___m_sizeStack_67; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_sizeStack_67() { return &___m_sizeStack_67; }
	inline void set_m_sizeStack_67(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_sizeStack_67 = value;
	}

	inline static int32_t get_offset_of_m_fontWeight_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_68)); }
	inline int32_t get_m_fontWeight_68() const { return ___m_fontWeight_68; }
	inline int32_t* get_address_of_m_fontWeight_68() { return &___m_fontWeight_68; }
	inline void set_m_fontWeight_68(int32_t value)
	{
		___m_fontWeight_68 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_69)); }
	inline int32_t get_m_FontWeightInternal_69() const { return ___m_FontWeightInternal_69; }
	inline int32_t* get_address_of_m_FontWeightInternal_69() { return &___m_FontWeightInternal_69; }
	inline void set_m_FontWeightInternal_69(int32_t value)
	{
		___m_FontWeightInternal_69 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_70)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_70() const { return ___m_FontWeightStack_70; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_70() { return &___m_FontWeightStack_70; }
	inline void set_m_FontWeightStack_70(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_70 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_71)); }
	inline bool get_m_enableAutoSizing_71() const { return ___m_enableAutoSizing_71; }
	inline bool* get_address_of_m_enableAutoSizing_71() { return &___m_enableAutoSizing_71; }
	inline void set_m_enableAutoSizing_71(bool value)
	{
		___m_enableAutoSizing_71 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_72)); }
	inline float get_m_maxFontSize_72() const { return ___m_maxFontSize_72; }
	inline float* get_address_of_m_maxFontSize_72() { return &___m_maxFontSize_72; }
	inline void set_m_maxFontSize_72(float value)
	{
		___m_maxFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_73)); }
	inline float get_m_minFontSize_73() const { return ___m_minFontSize_73; }
	inline float* get_address_of_m_minFontSize_73() { return &___m_minFontSize_73; }
	inline void set_m_minFontSize_73(float value)
	{
		___m_minFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_74)); }
	inline float get_m_fontSizeMin_74() const { return ___m_fontSizeMin_74; }
	inline float* get_address_of_m_fontSizeMin_74() { return &___m_fontSizeMin_74; }
	inline void set_m_fontSizeMin_74(float value)
	{
		___m_fontSizeMin_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_75)); }
	inline float get_m_fontSizeMax_75() const { return ___m_fontSizeMax_75; }
	inline float* get_address_of_m_fontSizeMax_75() { return &___m_fontSizeMax_75; }
	inline void set_m_fontSizeMax_75(float value)
	{
		___m_fontSizeMax_75 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_76)); }
	inline int32_t get_m_fontStyle_76() const { return ___m_fontStyle_76; }
	inline int32_t* get_address_of_m_fontStyle_76() { return &___m_fontStyle_76; }
	inline void set_m_fontStyle_76(int32_t value)
	{
		___m_fontStyle_76 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_77)); }
	inline int32_t get_m_FontStyleInternal_77() const { return ___m_FontStyleInternal_77; }
	inline int32_t* get_address_of_m_FontStyleInternal_77() { return &___m_FontStyleInternal_77; }
	inline void set_m_FontStyleInternal_77(int32_t value)
	{
		___m_FontStyleInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_78)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_78() const { return ___m_fontStyleStack_78; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_78() { return &___m_fontStyleStack_78; }
	inline void set_m_fontStyleStack_78(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_78 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_79)); }
	inline bool get_m_isUsingBold_79() const { return ___m_isUsingBold_79; }
	inline bool* get_address_of_m_isUsingBold_79() { return &___m_isUsingBold_79; }
	inline void set_m_isUsingBold_79(bool value)
	{
		___m_isUsingBold_79 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_80)); }
	inline int32_t get_m_textAlignment_80() const { return ___m_textAlignment_80; }
	inline int32_t* get_address_of_m_textAlignment_80() { return &___m_textAlignment_80; }
	inline void set_m_textAlignment_80(int32_t value)
	{
		___m_textAlignment_80 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_81)); }
	inline int32_t get_m_lineJustification_81() const { return ___m_lineJustification_81; }
	inline int32_t* get_address_of_m_lineJustification_81() { return &___m_lineJustification_81; }
	inline void set_m_lineJustification_81(int32_t value)
	{
		___m_lineJustification_81 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_82)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_82() const { return ___m_lineJustificationStack_82; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_82() { return &___m_lineJustificationStack_82; }
	inline void set_m_lineJustificationStack_82(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_82 = value;
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_83)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_83() const { return ___m_textContainerLocalCorners_83; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_83() { return &___m_textContainerLocalCorners_83; }
	inline void set_m_textContainerLocalCorners_83(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_83 = value;
		Il2CppCodeGenWriteBarrier((&___m_textContainerLocalCorners_83), value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_84)); }
	inline float get_m_characterSpacing_84() const { return ___m_characterSpacing_84; }
	inline float* get_address_of_m_characterSpacing_84() { return &___m_characterSpacing_84; }
	inline void set_m_characterSpacing_84(float value)
	{
		___m_characterSpacing_84 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_85)); }
	inline float get_m_cSpacing_85() const { return ___m_cSpacing_85; }
	inline float* get_address_of_m_cSpacing_85() { return &___m_cSpacing_85; }
	inline void set_m_cSpacing_85(float value)
	{
		___m_cSpacing_85 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_86)); }
	inline float get_m_monoSpacing_86() const { return ___m_monoSpacing_86; }
	inline float* get_address_of_m_monoSpacing_86() { return &___m_monoSpacing_86; }
	inline void set_m_monoSpacing_86(float value)
	{
		___m_monoSpacing_86 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_87)); }
	inline float get_m_wordSpacing_87() const { return ___m_wordSpacing_87; }
	inline float* get_address_of_m_wordSpacing_87() { return &___m_wordSpacing_87; }
	inline void set_m_wordSpacing_87(float value)
	{
		___m_wordSpacing_87 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_88)); }
	inline float get_m_lineSpacing_88() const { return ___m_lineSpacing_88; }
	inline float* get_address_of_m_lineSpacing_88() { return &___m_lineSpacing_88; }
	inline void set_m_lineSpacing_88(float value)
	{
		___m_lineSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_89)); }
	inline float get_m_lineSpacingDelta_89() const { return ___m_lineSpacingDelta_89; }
	inline float* get_address_of_m_lineSpacingDelta_89() { return &___m_lineSpacingDelta_89; }
	inline void set_m_lineSpacingDelta_89(float value)
	{
		___m_lineSpacingDelta_89 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_90)); }
	inline float get_m_lineHeight_90() const { return ___m_lineHeight_90; }
	inline float* get_address_of_m_lineHeight_90() { return &___m_lineHeight_90; }
	inline void set_m_lineHeight_90(float value)
	{
		___m_lineHeight_90 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_91)); }
	inline float get_m_lineSpacingMax_91() const { return ___m_lineSpacingMax_91; }
	inline float* get_address_of_m_lineSpacingMax_91() { return &___m_lineSpacingMax_91; }
	inline void set_m_lineSpacingMax_91(float value)
	{
		___m_lineSpacingMax_91 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_92)); }
	inline float get_m_paragraphSpacing_92() const { return ___m_paragraphSpacing_92; }
	inline float* get_address_of_m_paragraphSpacing_92() { return &___m_paragraphSpacing_92; }
	inline void set_m_paragraphSpacing_92(float value)
	{
		___m_paragraphSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_93)); }
	inline float get_m_charWidthMaxAdj_93() const { return ___m_charWidthMaxAdj_93; }
	inline float* get_address_of_m_charWidthMaxAdj_93() { return &___m_charWidthMaxAdj_93; }
	inline void set_m_charWidthMaxAdj_93(float value)
	{
		___m_charWidthMaxAdj_93 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_94)); }
	inline float get_m_charWidthAdjDelta_94() const { return ___m_charWidthAdjDelta_94; }
	inline float* get_address_of_m_charWidthAdjDelta_94() { return &___m_charWidthAdjDelta_94; }
	inline void set_m_charWidthAdjDelta_94(float value)
	{
		___m_charWidthAdjDelta_94 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_95)); }
	inline bool get_m_enableWordWrapping_95() const { return ___m_enableWordWrapping_95; }
	inline bool* get_address_of_m_enableWordWrapping_95() { return &___m_enableWordWrapping_95; }
	inline void set_m_enableWordWrapping_95(bool value)
	{
		___m_enableWordWrapping_95 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_96)); }
	inline bool get_m_isCharacterWrappingEnabled_96() const { return ___m_isCharacterWrappingEnabled_96; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_96() { return &___m_isCharacterWrappingEnabled_96; }
	inline void set_m_isCharacterWrappingEnabled_96(bool value)
	{
		___m_isCharacterWrappingEnabled_96 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_97)); }
	inline bool get_m_isNonBreakingSpace_97() const { return ___m_isNonBreakingSpace_97; }
	inline bool* get_address_of_m_isNonBreakingSpace_97() { return &___m_isNonBreakingSpace_97; }
	inline void set_m_isNonBreakingSpace_97(bool value)
	{
		___m_isNonBreakingSpace_97 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_98)); }
	inline bool get_m_isIgnoringAlignment_98() const { return ___m_isIgnoringAlignment_98; }
	inline bool* get_address_of_m_isIgnoringAlignment_98() { return &___m_isIgnoringAlignment_98; }
	inline void set_m_isIgnoringAlignment_98(bool value)
	{
		___m_isIgnoringAlignment_98 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_99)); }
	inline float get_m_wordWrappingRatios_99() const { return ___m_wordWrappingRatios_99; }
	inline float* get_address_of_m_wordWrappingRatios_99() { return &___m_wordWrappingRatios_99; }
	inline void set_m_wordWrappingRatios_99(float value)
	{
		___m_wordWrappingRatios_99 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_100)); }
	inline int32_t get_m_overflowMode_100() const { return ___m_overflowMode_100; }
	inline int32_t* get_address_of_m_overflowMode_100() { return &___m_overflowMode_100; }
	inline void set_m_overflowMode_100(int32_t value)
	{
		___m_overflowMode_100 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_101)); }
	inline int32_t get_m_firstOverflowCharacterIndex_101() const { return ___m_firstOverflowCharacterIndex_101; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_101() { return &___m_firstOverflowCharacterIndex_101; }
	inline void set_m_firstOverflowCharacterIndex_101(int32_t value)
	{
		___m_firstOverflowCharacterIndex_101 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_102)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_102() const { return ___m_linkedTextComponent_102; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_102() { return &___m_linkedTextComponent_102; }
	inline void set_m_linkedTextComponent_102(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_102 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkedTextComponent_102), value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_103)); }
	inline bool get_m_isLinkedTextComponent_103() const { return ___m_isLinkedTextComponent_103; }
	inline bool* get_address_of_m_isLinkedTextComponent_103() { return &___m_isLinkedTextComponent_103; }
	inline void set_m_isLinkedTextComponent_103(bool value)
	{
		___m_isLinkedTextComponent_103 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_104)); }
	inline bool get_m_isTextTruncated_104() const { return ___m_isTextTruncated_104; }
	inline bool* get_address_of_m_isTextTruncated_104() { return &___m_isTextTruncated_104; }
	inline void set_m_isTextTruncated_104(bool value)
	{
		___m_isTextTruncated_104 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_105)); }
	inline bool get_m_enableKerning_105() const { return ___m_enableKerning_105; }
	inline bool* get_address_of_m_enableKerning_105() { return &___m_enableKerning_105; }
	inline void set_m_enableKerning_105(bool value)
	{
		___m_enableKerning_105 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_106)); }
	inline bool get_m_enableExtraPadding_106() const { return ___m_enableExtraPadding_106; }
	inline bool* get_address_of_m_enableExtraPadding_106() { return &___m_enableExtraPadding_106; }
	inline void set_m_enableExtraPadding_106(bool value)
	{
		___m_enableExtraPadding_106 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_107)); }
	inline bool get_checkPaddingRequired_107() const { return ___checkPaddingRequired_107; }
	inline bool* get_address_of_checkPaddingRequired_107() { return &___checkPaddingRequired_107; }
	inline void set_checkPaddingRequired_107(bool value)
	{
		___checkPaddingRequired_107 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_108)); }
	inline bool get_m_isRichText_108() const { return ___m_isRichText_108; }
	inline bool* get_address_of_m_isRichText_108() { return &___m_isRichText_108; }
	inline void set_m_isRichText_108(bool value)
	{
		___m_isRichText_108 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_109)); }
	inline bool get_m_parseCtrlCharacters_109() const { return ___m_parseCtrlCharacters_109; }
	inline bool* get_address_of_m_parseCtrlCharacters_109() { return &___m_parseCtrlCharacters_109; }
	inline void set_m_parseCtrlCharacters_109(bool value)
	{
		___m_parseCtrlCharacters_109 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_110)); }
	inline bool get_m_isOverlay_110() const { return ___m_isOverlay_110; }
	inline bool* get_address_of_m_isOverlay_110() { return &___m_isOverlay_110; }
	inline void set_m_isOverlay_110(bool value)
	{
		___m_isOverlay_110 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_111)); }
	inline bool get_m_isOrthographic_111() const { return ___m_isOrthographic_111; }
	inline bool* get_address_of_m_isOrthographic_111() { return &___m_isOrthographic_111; }
	inline void set_m_isOrthographic_111(bool value)
	{
		___m_isOrthographic_111 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_112)); }
	inline bool get_m_isCullingEnabled_112() const { return ___m_isCullingEnabled_112; }
	inline bool* get_address_of_m_isCullingEnabled_112() { return &___m_isCullingEnabled_112; }
	inline void set_m_isCullingEnabled_112(bool value)
	{
		___m_isCullingEnabled_112 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_113)); }
	inline bool get_m_ignoreRectMaskCulling_113() const { return ___m_ignoreRectMaskCulling_113; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_113() { return &___m_ignoreRectMaskCulling_113; }
	inline void set_m_ignoreRectMaskCulling_113(bool value)
	{
		___m_ignoreRectMaskCulling_113 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_114)); }
	inline bool get_m_ignoreCulling_114() const { return ___m_ignoreCulling_114; }
	inline bool* get_address_of_m_ignoreCulling_114() { return &___m_ignoreCulling_114; }
	inline void set_m_ignoreCulling_114(bool value)
	{
		___m_ignoreCulling_114 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_115)); }
	inline int32_t get_m_horizontalMapping_115() const { return ___m_horizontalMapping_115; }
	inline int32_t* get_address_of_m_horizontalMapping_115() { return &___m_horizontalMapping_115; }
	inline void set_m_horizontalMapping_115(int32_t value)
	{
		___m_horizontalMapping_115 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_116)); }
	inline int32_t get_m_verticalMapping_116() const { return ___m_verticalMapping_116; }
	inline int32_t* get_address_of_m_verticalMapping_116() { return &___m_verticalMapping_116; }
	inline void set_m_verticalMapping_116(int32_t value)
	{
		___m_verticalMapping_116 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_117)); }
	inline float get_m_uvLineOffset_117() const { return ___m_uvLineOffset_117; }
	inline float* get_address_of_m_uvLineOffset_117() { return &___m_uvLineOffset_117; }
	inline void set_m_uvLineOffset_117(float value)
	{
		___m_uvLineOffset_117 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_118)); }
	inline int32_t get_m_renderMode_118() const { return ___m_renderMode_118; }
	inline int32_t* get_address_of_m_renderMode_118() { return &___m_renderMode_118; }
	inline void set_m_renderMode_118(int32_t value)
	{
		___m_renderMode_118 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_119)); }
	inline int32_t get_m_geometrySortingOrder_119() const { return ___m_geometrySortingOrder_119; }
	inline int32_t* get_address_of_m_geometrySortingOrder_119() { return &___m_geometrySortingOrder_119; }
	inline void set_m_geometrySortingOrder_119(int32_t value)
	{
		___m_geometrySortingOrder_119 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_120)); }
	inline bool get_m_VertexBufferAutoSizeReduction_120() const { return ___m_VertexBufferAutoSizeReduction_120; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_120() { return &___m_VertexBufferAutoSizeReduction_120; }
	inline void set_m_VertexBufferAutoSizeReduction_120(bool value)
	{
		___m_VertexBufferAutoSizeReduction_120 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_121)); }
	inline int32_t get_m_firstVisibleCharacter_121() const { return ___m_firstVisibleCharacter_121; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_121() { return &___m_firstVisibleCharacter_121; }
	inline void set_m_firstVisibleCharacter_121(int32_t value)
	{
		___m_firstVisibleCharacter_121 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_122)); }
	inline int32_t get_m_maxVisibleCharacters_122() const { return ___m_maxVisibleCharacters_122; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_122() { return &___m_maxVisibleCharacters_122; }
	inline void set_m_maxVisibleCharacters_122(int32_t value)
	{
		___m_maxVisibleCharacters_122 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_123)); }
	inline int32_t get_m_maxVisibleWords_123() const { return ___m_maxVisibleWords_123; }
	inline int32_t* get_address_of_m_maxVisibleWords_123() { return &___m_maxVisibleWords_123; }
	inline void set_m_maxVisibleWords_123(int32_t value)
	{
		___m_maxVisibleWords_123 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_124)); }
	inline int32_t get_m_maxVisibleLines_124() const { return ___m_maxVisibleLines_124; }
	inline int32_t* get_address_of_m_maxVisibleLines_124() { return &___m_maxVisibleLines_124; }
	inline void set_m_maxVisibleLines_124(int32_t value)
	{
		___m_maxVisibleLines_124 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_125)); }
	inline bool get_m_useMaxVisibleDescender_125() const { return ___m_useMaxVisibleDescender_125; }
	inline bool* get_address_of_m_useMaxVisibleDescender_125() { return &___m_useMaxVisibleDescender_125; }
	inline void set_m_useMaxVisibleDescender_125(bool value)
	{
		___m_useMaxVisibleDescender_125 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_126)); }
	inline int32_t get_m_pageToDisplay_126() const { return ___m_pageToDisplay_126; }
	inline int32_t* get_address_of_m_pageToDisplay_126() { return &___m_pageToDisplay_126; }
	inline void set_m_pageToDisplay_126(int32_t value)
	{
		___m_pageToDisplay_126 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_127)); }
	inline bool get_m_isNewPage_127() const { return ___m_isNewPage_127; }
	inline bool* get_address_of_m_isNewPage_127() { return &___m_isNewPage_127; }
	inline void set_m_isNewPage_127(bool value)
	{
		___m_isNewPage_127 = value;
	}

	inline static int32_t get_offset_of_m_margin_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_128)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_128() const { return ___m_margin_128; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_128() { return &___m_margin_128; }
	inline void set_m_margin_128(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_128 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_129)); }
	inline float get_m_marginLeft_129() const { return ___m_marginLeft_129; }
	inline float* get_address_of_m_marginLeft_129() { return &___m_marginLeft_129; }
	inline void set_m_marginLeft_129(float value)
	{
		___m_marginLeft_129 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_130)); }
	inline float get_m_marginRight_130() const { return ___m_marginRight_130; }
	inline float* get_address_of_m_marginRight_130() { return &___m_marginRight_130; }
	inline void set_m_marginRight_130(float value)
	{
		___m_marginRight_130 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_131)); }
	inline float get_m_marginWidth_131() const { return ___m_marginWidth_131; }
	inline float* get_address_of_m_marginWidth_131() { return &___m_marginWidth_131; }
	inline void set_m_marginWidth_131(float value)
	{
		___m_marginWidth_131 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_132)); }
	inline float get_m_marginHeight_132() const { return ___m_marginHeight_132; }
	inline float* get_address_of_m_marginHeight_132() { return &___m_marginHeight_132; }
	inline void set_m_marginHeight_132(float value)
	{
		___m_marginHeight_132 = value;
	}

	inline static int32_t get_offset_of_m_width_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_133)); }
	inline float get_m_width_133() const { return ___m_width_133; }
	inline float* get_address_of_m_width_133() { return &___m_width_133; }
	inline void set_m_width_133(float value)
	{
		___m_width_133 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_134)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_134() const { return ___m_textInfo_134; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_134() { return &___m_textInfo_134; }
	inline void set_m_textInfo_134(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_134 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfo_134), value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_135)); }
	inline bool get_m_havePropertiesChanged_135() const { return ___m_havePropertiesChanged_135; }
	inline bool* get_address_of_m_havePropertiesChanged_135() { return &___m_havePropertiesChanged_135; }
	inline void set_m_havePropertiesChanged_135(bool value)
	{
		___m_havePropertiesChanged_135 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_136)); }
	inline bool get_m_isUsingLegacyAnimationComponent_136() const { return ___m_isUsingLegacyAnimationComponent_136; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_136() { return &___m_isUsingLegacyAnimationComponent_136; }
	inline void set_m_isUsingLegacyAnimationComponent_136(bool value)
	{
		___m_isUsingLegacyAnimationComponent_136 = value;
	}

	inline static int32_t get_offset_of_m_transform_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_137)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_137() const { return ___m_transform_137; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_137() { return &___m_transform_137; }
	inline void set_m_transform_137(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_137 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_137), value);
	}

	inline static int32_t get_offset_of_m_rectTransform_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_138)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_138() const { return ___m_rectTransform_138; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_138() { return &___m_rectTransform_138; }
	inline void set_m_rectTransform_138(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_138 = value;
		Il2CppCodeGenWriteBarrier((&___m_rectTransform_138), value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_139)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_139() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_139; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_139() { return &___U3CautoSizeTextContainerU3Ek__BackingField_139; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_139(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_139 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_140)); }
	inline bool get_m_autoSizeTextContainer_140() const { return ___m_autoSizeTextContainer_140; }
	inline bool* get_address_of_m_autoSizeTextContainer_140() { return &___m_autoSizeTextContainer_140; }
	inline void set_m_autoSizeTextContainer_140(bool value)
	{
		___m_autoSizeTextContainer_140 = value;
	}

	inline static int32_t get_offset_of_m_mesh_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_141)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_141() const { return ___m_mesh_141; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_141() { return &___m_mesh_141; }
	inline void set_m_mesh_141(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_141 = value;
		Il2CppCodeGenWriteBarrier((&___m_mesh_141), value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_142)); }
	inline bool get_m_isVolumetricText_142() const { return ___m_isVolumetricText_142; }
	inline bool* get_address_of_m_isVolumetricText_142() { return &___m_isVolumetricText_142; }
	inline void set_m_isVolumetricText_142(bool value)
	{
		___m_isVolumetricText_142 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_143)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_143() const { return ___m_spriteAnimator_143; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_143() { return &___m_spriteAnimator_143; }
	inline void set_m_spriteAnimator_143(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_143 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAnimator_143), value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_144)); }
	inline float get_m_flexibleHeight_144() const { return ___m_flexibleHeight_144; }
	inline float* get_address_of_m_flexibleHeight_144() { return &___m_flexibleHeight_144; }
	inline void set_m_flexibleHeight_144(float value)
	{
		___m_flexibleHeight_144 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_145)); }
	inline float get_m_flexibleWidth_145() const { return ___m_flexibleWidth_145; }
	inline float* get_address_of_m_flexibleWidth_145() { return &___m_flexibleWidth_145; }
	inline void set_m_flexibleWidth_145(float value)
	{
		___m_flexibleWidth_145 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_146)); }
	inline float get_m_minWidth_146() const { return ___m_minWidth_146; }
	inline float* get_address_of_m_minWidth_146() { return &___m_minWidth_146; }
	inline void set_m_minWidth_146(float value)
	{
		___m_minWidth_146 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_147)); }
	inline float get_m_minHeight_147() const { return ___m_minHeight_147; }
	inline float* get_address_of_m_minHeight_147() { return &___m_minHeight_147; }
	inline void set_m_minHeight_147(float value)
	{
		___m_minHeight_147 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_148)); }
	inline float get_m_maxWidth_148() const { return ___m_maxWidth_148; }
	inline float* get_address_of_m_maxWidth_148() { return &___m_maxWidth_148; }
	inline void set_m_maxWidth_148(float value)
	{
		___m_maxWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_149)); }
	inline float get_m_maxHeight_149() const { return ___m_maxHeight_149; }
	inline float* get_address_of_m_maxHeight_149() { return &___m_maxHeight_149; }
	inline void set_m_maxHeight_149(float value)
	{
		___m_maxHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_150)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_150() const { return ___m_LayoutElement_150; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_150() { return &___m_LayoutElement_150; }
	inline void set_m_LayoutElement_150(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_150 = value;
		Il2CppCodeGenWriteBarrier((&___m_LayoutElement_150), value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_151)); }
	inline float get_m_preferredWidth_151() const { return ___m_preferredWidth_151; }
	inline float* get_address_of_m_preferredWidth_151() { return &___m_preferredWidth_151; }
	inline void set_m_preferredWidth_151(float value)
	{
		___m_preferredWidth_151 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_152)); }
	inline float get_m_renderedWidth_152() const { return ___m_renderedWidth_152; }
	inline float* get_address_of_m_renderedWidth_152() { return &___m_renderedWidth_152; }
	inline void set_m_renderedWidth_152(float value)
	{
		___m_renderedWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_153)); }
	inline bool get_m_isPreferredWidthDirty_153() const { return ___m_isPreferredWidthDirty_153; }
	inline bool* get_address_of_m_isPreferredWidthDirty_153() { return &___m_isPreferredWidthDirty_153; }
	inline void set_m_isPreferredWidthDirty_153(bool value)
	{
		___m_isPreferredWidthDirty_153 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_154)); }
	inline float get_m_preferredHeight_154() const { return ___m_preferredHeight_154; }
	inline float* get_address_of_m_preferredHeight_154() { return &___m_preferredHeight_154; }
	inline void set_m_preferredHeight_154(float value)
	{
		___m_preferredHeight_154 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_155)); }
	inline float get_m_renderedHeight_155() const { return ___m_renderedHeight_155; }
	inline float* get_address_of_m_renderedHeight_155() { return &___m_renderedHeight_155; }
	inline void set_m_renderedHeight_155(float value)
	{
		___m_renderedHeight_155 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_156)); }
	inline bool get_m_isPreferredHeightDirty_156() const { return ___m_isPreferredHeightDirty_156; }
	inline bool* get_address_of_m_isPreferredHeightDirty_156() { return &___m_isPreferredHeightDirty_156; }
	inline void set_m_isPreferredHeightDirty_156(bool value)
	{
		___m_isPreferredHeightDirty_156 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_157)); }
	inline bool get_m_isCalculatingPreferredValues_157() const { return ___m_isCalculatingPreferredValues_157; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_157() { return &___m_isCalculatingPreferredValues_157; }
	inline void set_m_isCalculatingPreferredValues_157(bool value)
	{
		___m_isCalculatingPreferredValues_157 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_158)); }
	inline int32_t get_m_recursiveCount_158() const { return ___m_recursiveCount_158; }
	inline int32_t* get_address_of_m_recursiveCount_158() { return &___m_recursiveCount_158; }
	inline void set_m_recursiveCount_158(int32_t value)
	{
		___m_recursiveCount_158 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_159)); }
	inline int32_t get_m_layoutPriority_159() const { return ___m_layoutPriority_159; }
	inline int32_t* get_address_of_m_layoutPriority_159() { return &___m_layoutPriority_159; }
	inline void set_m_layoutPriority_159(int32_t value)
	{
		___m_layoutPriority_159 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_160)); }
	inline bool get_m_isCalculateSizeRequired_160() const { return ___m_isCalculateSizeRequired_160; }
	inline bool* get_address_of_m_isCalculateSizeRequired_160() { return &___m_isCalculateSizeRequired_160; }
	inline void set_m_isCalculateSizeRequired_160(bool value)
	{
		___m_isCalculateSizeRequired_160 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_161)); }
	inline bool get_m_isLayoutDirty_161() const { return ___m_isLayoutDirty_161; }
	inline bool* get_address_of_m_isLayoutDirty_161() { return &___m_isLayoutDirty_161; }
	inline void set_m_isLayoutDirty_161(bool value)
	{
		___m_isLayoutDirty_161 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_162)); }
	inline bool get_m_verticesAlreadyDirty_162() const { return ___m_verticesAlreadyDirty_162; }
	inline bool* get_address_of_m_verticesAlreadyDirty_162() { return &___m_verticesAlreadyDirty_162; }
	inline void set_m_verticesAlreadyDirty_162(bool value)
	{
		___m_verticesAlreadyDirty_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_163)); }
	inline bool get_m_layoutAlreadyDirty_163() const { return ___m_layoutAlreadyDirty_163; }
	inline bool* get_address_of_m_layoutAlreadyDirty_163() { return &___m_layoutAlreadyDirty_163; }
	inline void set_m_layoutAlreadyDirty_163(bool value)
	{
		___m_layoutAlreadyDirty_163 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_164)); }
	inline bool get_m_isAwake_164() const { return ___m_isAwake_164; }
	inline bool* get_address_of_m_isAwake_164() { return &___m_isAwake_164; }
	inline void set_m_isAwake_164(bool value)
	{
		___m_isAwake_164 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_165)); }
	inline bool get_m_isWaitingOnResourceLoad_165() const { return ___m_isWaitingOnResourceLoad_165; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_165() { return &___m_isWaitingOnResourceLoad_165; }
	inline void set_m_isWaitingOnResourceLoad_165(bool value)
	{
		___m_isWaitingOnResourceLoad_165 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_166)); }
	inline bool get_m_isInputParsingRequired_166() const { return ___m_isInputParsingRequired_166; }
	inline bool* get_address_of_m_isInputParsingRequired_166() { return &___m_isInputParsingRequired_166; }
	inline void set_m_isInputParsingRequired_166(bool value)
	{
		___m_isInputParsingRequired_166 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_167)); }
	inline int32_t get_m_inputSource_167() const { return ___m_inputSource_167; }
	inline int32_t* get_address_of_m_inputSource_167() { return &___m_inputSource_167; }
	inline void set_m_inputSource_167(int32_t value)
	{
		___m_inputSource_167 = value;
	}

	inline static int32_t get_offset_of_old_text_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_168)); }
	inline String_t* get_old_text_168() const { return ___old_text_168; }
	inline String_t** get_address_of_old_text_168() { return &___old_text_168; }
	inline void set_old_text_168(String_t* value)
	{
		___old_text_168 = value;
		Il2CppCodeGenWriteBarrier((&___old_text_168), value);
	}

	inline static int32_t get_offset_of_m_fontScale_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_169)); }
	inline float get_m_fontScale_169() const { return ___m_fontScale_169; }
	inline float* get_address_of_m_fontScale_169() { return &___m_fontScale_169; }
	inline void set_m_fontScale_169(float value)
	{
		___m_fontScale_169 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_170)); }
	inline float get_m_fontScaleMultiplier_170() const { return ___m_fontScaleMultiplier_170; }
	inline float* get_address_of_m_fontScaleMultiplier_170() { return &___m_fontScaleMultiplier_170; }
	inline void set_m_fontScaleMultiplier_170(float value)
	{
		___m_fontScaleMultiplier_170 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_171)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_171() const { return ___m_htmlTag_171; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_171() { return &___m_htmlTag_171; }
	inline void set_m_htmlTag_171(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_171 = value;
		Il2CppCodeGenWriteBarrier((&___m_htmlTag_171), value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_172)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_172() const { return ___m_xmlAttribute_172; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_172() { return &___m_xmlAttribute_172; }
	inline void set_m_xmlAttribute_172(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_172 = value;
		Il2CppCodeGenWriteBarrier((&___m_xmlAttribute_172), value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_173)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_173() const { return ___m_attributeParameterValues_173; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_173() { return &___m_attributeParameterValues_173; }
	inline void set_m_attributeParameterValues_173(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_173 = value;
		Il2CppCodeGenWriteBarrier((&___m_attributeParameterValues_173), value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_174)); }
	inline float get_tag_LineIndent_174() const { return ___tag_LineIndent_174; }
	inline float* get_address_of_tag_LineIndent_174() { return &___tag_LineIndent_174; }
	inline void set_tag_LineIndent_174(float value)
	{
		___tag_LineIndent_174 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_175)); }
	inline float get_tag_Indent_175() const { return ___tag_Indent_175; }
	inline float* get_address_of_tag_Indent_175() { return &___tag_Indent_175; }
	inline void set_tag_Indent_175(float value)
	{
		___tag_Indent_175 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_176)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_indentStack_176() const { return ___m_indentStack_176; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_indentStack_176() { return &___m_indentStack_176; }
	inline void set_m_indentStack_176(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_indentStack_176 = value;
	}

	inline static int32_t get_offset_of_tag_NoParsing_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_177)); }
	inline bool get_tag_NoParsing_177() const { return ___tag_NoParsing_177; }
	inline bool* get_address_of_tag_NoParsing_177() { return &___tag_NoParsing_177; }
	inline void set_tag_NoParsing_177(bool value)
	{
		___tag_NoParsing_177 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_178)); }
	inline bool get_m_isParsingText_178() const { return ___m_isParsingText_178; }
	inline bool* get_address_of_m_isParsingText_178() { return &___m_isParsingText_178; }
	inline void set_m_isParsingText_178(bool value)
	{
		___m_isParsingText_178 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_179)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_179() const { return ___m_FXMatrix_179; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_179() { return &___m_FXMatrix_179; }
	inline void set_m_FXMatrix_179(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_179 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_180)); }
	inline bool get_m_isFXMatrixSet_180() const { return ___m_isFXMatrixSet_180; }
	inline bool* get_address_of_m_isFXMatrixSet_180() { return &___m_isFXMatrixSet_180; }
	inline void set_m_isFXMatrixSet_180(bool value)
	{
		___m_isFXMatrixSet_180 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_181)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_181() const { return ___m_TextParsingBuffer_181; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_181() { return &___m_TextParsingBuffer_181; }
	inline void set_m_TextParsingBuffer_181(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_181 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextParsingBuffer_181), value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_182)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_182() const { return ___m_internalCharacterInfo_182; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_182() { return &___m_internalCharacterInfo_182; }
	inline void set_m_internalCharacterInfo_182(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_182 = value;
		Il2CppCodeGenWriteBarrier((&___m_internalCharacterInfo_182), value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_183)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_183() const { return ___m_input_CharArray_183; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_183() { return &___m_input_CharArray_183; }
	inline void set_m_input_CharArray_183(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_183 = value;
		Il2CppCodeGenWriteBarrier((&___m_input_CharArray_183), value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_184)); }
	inline int32_t get_m_charArray_Length_184() const { return ___m_charArray_Length_184; }
	inline int32_t* get_address_of_m_charArray_Length_184() { return &___m_charArray_Length_184; }
	inline void set_m_charArray_Length_184(int32_t value)
	{
		___m_charArray_Length_184 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_185)); }
	inline int32_t get_m_totalCharacterCount_185() const { return ___m_totalCharacterCount_185; }
	inline int32_t* get_address_of_m_totalCharacterCount_185() { return &___m_totalCharacterCount_185; }
	inline void set_m_totalCharacterCount_185(int32_t value)
	{
		___m_totalCharacterCount_185 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_186)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_186() const { return ___m_SavedWordWrapState_186; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_186() { return &___m_SavedWordWrapState_186; }
	inline void set_m_SavedWordWrapState_186(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_186 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_187)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_187() const { return ___m_SavedLineState_187; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_187() { return &___m_SavedLineState_187; }
	inline void set_m_SavedLineState_187(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_187 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_188)); }
	inline int32_t get_m_characterCount_188() const { return ___m_characterCount_188; }
	inline int32_t* get_address_of_m_characterCount_188() { return &___m_characterCount_188; }
	inline void set_m_characterCount_188(int32_t value)
	{
		___m_characterCount_188 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_189)); }
	inline int32_t get_m_firstCharacterOfLine_189() const { return ___m_firstCharacterOfLine_189; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_189() { return &___m_firstCharacterOfLine_189; }
	inline void set_m_firstCharacterOfLine_189(int32_t value)
	{
		___m_firstCharacterOfLine_189 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_190)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_190() const { return ___m_firstVisibleCharacterOfLine_190; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_190() { return &___m_firstVisibleCharacterOfLine_190; }
	inline void set_m_firstVisibleCharacterOfLine_190(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_190 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_191)); }
	inline int32_t get_m_lastCharacterOfLine_191() const { return ___m_lastCharacterOfLine_191; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_191() { return &___m_lastCharacterOfLine_191; }
	inline void set_m_lastCharacterOfLine_191(int32_t value)
	{
		___m_lastCharacterOfLine_191 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_192)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_192() const { return ___m_lastVisibleCharacterOfLine_192; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_192() { return &___m_lastVisibleCharacterOfLine_192; }
	inline void set_m_lastVisibleCharacterOfLine_192(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_192 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_193)); }
	inline int32_t get_m_lineNumber_193() const { return ___m_lineNumber_193; }
	inline int32_t* get_address_of_m_lineNumber_193() { return &___m_lineNumber_193; }
	inline void set_m_lineNumber_193(int32_t value)
	{
		___m_lineNumber_193 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_194)); }
	inline int32_t get_m_lineVisibleCharacterCount_194() const { return ___m_lineVisibleCharacterCount_194; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_194() { return &___m_lineVisibleCharacterCount_194; }
	inline void set_m_lineVisibleCharacterCount_194(int32_t value)
	{
		___m_lineVisibleCharacterCount_194 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_195)); }
	inline int32_t get_m_pageNumber_195() const { return ___m_pageNumber_195; }
	inline int32_t* get_address_of_m_pageNumber_195() { return &___m_pageNumber_195; }
	inline void set_m_pageNumber_195(int32_t value)
	{
		___m_pageNumber_195 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_196)); }
	inline float get_m_maxAscender_196() const { return ___m_maxAscender_196; }
	inline float* get_address_of_m_maxAscender_196() { return &___m_maxAscender_196; }
	inline void set_m_maxAscender_196(float value)
	{
		___m_maxAscender_196 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_197)); }
	inline float get_m_maxCapHeight_197() const { return ___m_maxCapHeight_197; }
	inline float* get_address_of_m_maxCapHeight_197() { return &___m_maxCapHeight_197; }
	inline void set_m_maxCapHeight_197(float value)
	{
		___m_maxCapHeight_197 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_198)); }
	inline float get_m_maxDescender_198() const { return ___m_maxDescender_198; }
	inline float* get_address_of_m_maxDescender_198() { return &___m_maxDescender_198; }
	inline void set_m_maxDescender_198(float value)
	{
		___m_maxDescender_198 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_199)); }
	inline float get_m_maxLineAscender_199() const { return ___m_maxLineAscender_199; }
	inline float* get_address_of_m_maxLineAscender_199() { return &___m_maxLineAscender_199; }
	inline void set_m_maxLineAscender_199(float value)
	{
		___m_maxLineAscender_199 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_200)); }
	inline float get_m_maxLineDescender_200() const { return ___m_maxLineDescender_200; }
	inline float* get_address_of_m_maxLineDescender_200() { return &___m_maxLineDescender_200; }
	inline void set_m_maxLineDescender_200(float value)
	{
		___m_maxLineDescender_200 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_201)); }
	inline float get_m_startOfLineAscender_201() const { return ___m_startOfLineAscender_201; }
	inline float* get_address_of_m_startOfLineAscender_201() { return &___m_startOfLineAscender_201; }
	inline void set_m_startOfLineAscender_201(float value)
	{
		___m_startOfLineAscender_201 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_202)); }
	inline float get_m_lineOffset_202() const { return ___m_lineOffset_202; }
	inline float* get_address_of_m_lineOffset_202() { return &___m_lineOffset_202; }
	inline void set_m_lineOffset_202(float value)
	{
		___m_lineOffset_202 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_203)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_203() const { return ___m_meshExtents_203; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_203() { return &___m_meshExtents_203; }
	inline void set_m_meshExtents_203(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_203 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_204)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_204() const { return ___m_htmlColor_204; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_204() { return &___m_htmlColor_204; }
	inline void set_m_htmlColor_204(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_204 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_205)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_205() const { return ___m_colorStack_205; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_205() { return &___m_colorStack_205; }
	inline void set_m_colorStack_205(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_205 = value;
	}

	inline static int32_t get_offset_of_m_underlineColorStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_206)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_206() const { return ___m_underlineColorStack_206; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_206() { return &___m_underlineColorStack_206; }
	inline void set_m_underlineColorStack_206(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_206 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_207)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_207() const { return ___m_strikethroughColorStack_207; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_207() { return &___m_strikethroughColorStack_207; }
	inline void set_m_strikethroughColorStack_207(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_207 = value;
	}

	inline static int32_t get_offset_of_m_highlightColorStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_208)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_208() const { return ___m_highlightColorStack_208; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_208() { return &___m_highlightColorStack_208; }
	inline void set_m_highlightColorStack_208(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_208 = value;
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_209)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_209() const { return ___m_colorGradientPreset_209; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_209() { return &___m_colorGradientPreset_209; }
	inline void set_m_colorGradientPreset_209(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_209 = value;
		Il2CppCodeGenWriteBarrier((&___m_colorGradientPreset_209), value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_210)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_210() const { return ___m_colorGradientStack_210; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_210() { return &___m_colorGradientStack_210; }
	inline void set_m_colorGradientStack_210(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_210 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_211)); }
	inline float get_m_tabSpacing_211() const { return ___m_tabSpacing_211; }
	inline float* get_address_of_m_tabSpacing_211() { return &___m_tabSpacing_211; }
	inline void set_m_tabSpacing_211(float value)
	{
		___m_tabSpacing_211 = value;
	}

	inline static int32_t get_offset_of_m_spacing_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_212)); }
	inline float get_m_spacing_212() const { return ___m_spacing_212; }
	inline float* get_address_of_m_spacing_212() { return &___m_spacing_212; }
	inline void set_m_spacing_212(float value)
	{
		___m_spacing_212 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_213)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_m_styleStack_213() const { return ___m_styleStack_213; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_m_styleStack_213() { return &___m_styleStack_213; }
	inline void set_m_styleStack_213(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___m_styleStack_213 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_214)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_m_actionStack_214() const { return ___m_actionStack_214; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_m_actionStack_214() { return &___m_actionStack_214; }
	inline void set_m_actionStack_214(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___m_actionStack_214 = value;
	}

	inline static int32_t get_offset_of_m_padding_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_215)); }
	inline float get_m_padding_215() const { return ___m_padding_215; }
	inline float* get_address_of_m_padding_215() { return &___m_padding_215; }
	inline void set_m_padding_215(float value)
	{
		___m_padding_215 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_216)); }
	inline float get_m_baselineOffset_216() const { return ___m_baselineOffset_216; }
	inline float* get_address_of_m_baselineOffset_216() { return &___m_baselineOffset_216; }
	inline void set_m_baselineOffset_216(float value)
	{
		___m_baselineOffset_216 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_217)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_baselineOffsetStack_217() const { return ___m_baselineOffsetStack_217; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_baselineOffsetStack_217() { return &___m_baselineOffsetStack_217; }
	inline void set_m_baselineOffsetStack_217(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_baselineOffsetStack_217 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_218)); }
	inline float get_m_xAdvance_218() const { return ___m_xAdvance_218; }
	inline float* get_address_of_m_xAdvance_218() { return &___m_xAdvance_218; }
	inline void set_m_xAdvance_218(float value)
	{
		___m_xAdvance_218 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_219)); }
	inline int32_t get_m_textElementType_219() const { return ___m_textElementType_219; }
	inline int32_t* get_address_of_m_textElementType_219() { return &___m_textElementType_219; }
	inline void set_m_textElementType_219(int32_t value)
	{
		___m_textElementType_219 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_220)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_220() const { return ___m_cached_TextElement_220; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_220() { return &___m_cached_TextElement_220; }
	inline void set_m_cached_TextElement_220(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_220 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_TextElement_220), value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_221)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_221() const { return ___m_cached_Underline_Character_221; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_221() { return &___m_cached_Underline_Character_221; }
	inline void set_m_cached_Underline_Character_221(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_221 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Underline_Character_221), value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_222)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_222() const { return ___m_cached_Ellipsis_Character_222; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_222() { return &___m_cached_Ellipsis_Character_222; }
	inline void set_m_cached_Ellipsis_Character_222(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_222 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Ellipsis_Character_222), value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_223)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_223() const { return ___m_defaultSpriteAsset_223; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_223() { return &___m_defaultSpriteAsset_223; }
	inline void set_m_defaultSpriteAsset_223(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_223 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultSpriteAsset_223), value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_224)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_224() const { return ___m_currentSpriteAsset_224; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_224() { return &___m_currentSpriteAsset_224; }
	inline void set_m_currentSpriteAsset_224(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_224 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentSpriteAsset_224), value);
	}

	inline static int32_t get_offset_of_m_spriteCount_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_225)); }
	inline int32_t get_m_spriteCount_225() const { return ___m_spriteCount_225; }
	inline int32_t* get_address_of_m_spriteCount_225() { return &___m_spriteCount_225; }
	inline void set_m_spriteCount_225(int32_t value)
	{
		___m_spriteCount_225 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_226)); }
	inline int32_t get_m_spriteIndex_226() const { return ___m_spriteIndex_226; }
	inline int32_t* get_address_of_m_spriteIndex_226() { return &___m_spriteIndex_226; }
	inline void set_m_spriteIndex_226(int32_t value)
	{
		___m_spriteIndex_226 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_227)); }
	inline int32_t get_m_spriteAnimationID_227() const { return ___m_spriteAnimationID_227; }
	inline int32_t* get_address_of_m_spriteAnimationID_227() { return &___m_spriteAnimationID_227; }
	inline void set_m_spriteAnimationID_227(int32_t value)
	{
		___m_spriteAnimationID_227 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_228)); }
	inline bool get_m_ignoreActiveState_228() const { return ___m_ignoreActiveState_228; }
	inline bool* get_address_of_m_ignoreActiveState_228() { return &___m_ignoreActiveState_228; }
	inline void set_m_ignoreActiveState_228(bool value)
	{
		___m_ignoreActiveState_228 = value;
	}

	inline static int32_t get_offset_of_k_Power_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_229)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_229() const { return ___k_Power_229; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_229() { return &___k_Power_229; }
	inline void set_k_Power_229(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_229 = value;
		Il2CppCodeGenWriteBarrier((&___k_Power_229), value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_47;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_230;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_231;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_232;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_233;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_234;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_235;

public:
	inline static int32_t get_offset_of_s_colorWhite_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_47)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_47() const { return ___s_colorWhite_47; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_47() { return &___s_colorWhite_47; }
	inline void set_s_colorWhite_47(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_47 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_230)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_230() const { return ___k_LargePositiveVector2_230; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_230() { return &___k_LargePositiveVector2_230; }
	inline void set_k_LargePositiveVector2_230(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_230 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_231)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_231() const { return ___k_LargeNegativeVector2_231; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_231() { return &___k_LargeNegativeVector2_231; }
	inline void set_k_LargeNegativeVector2_231(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_231 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_232)); }
	inline float get_k_LargePositiveFloat_232() const { return ___k_LargePositiveFloat_232; }
	inline float* get_address_of_k_LargePositiveFloat_232() { return &___k_LargePositiveFloat_232; }
	inline void set_k_LargePositiveFloat_232(float value)
	{
		___k_LargePositiveFloat_232 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_233)); }
	inline float get_k_LargeNegativeFloat_233() const { return ___k_LargeNegativeFloat_233; }
	inline float* get_address_of_k_LargeNegativeFloat_233() { return &___k_LargeNegativeFloat_233; }
	inline void set_k_LargeNegativeFloat_233(float value)
	{
		___k_LargeNegativeFloat_233 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_234)); }
	inline int32_t get_k_LargePositiveInt_234() const { return ___k_LargePositiveInt_234; }
	inline int32_t* get_address_of_k_LargePositiveInt_234() { return &___k_LargePositiveInt_234; }
	inline void set_k_LargePositiveInt_234(int32_t value)
	{
		___k_LargePositiveInt_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_235)); }
	inline int32_t get_k_LargeNegativeInt_235() const { return ___k_LargeNegativeInt_235; }
	inline int32_t* get_address_of_k_LargeNegativeInt_235() { return &___k_LargeNegativeInt_235; }
	inline void set_k_LargeNegativeInt_235(int32_t value)
	{
		___k_LargeNegativeInt_235 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#ifndef IMAGE_T18FED07D8646917E1C563745518CF3DD57FF0B3E_H
#define IMAGE_T18FED07D8646917E1C563745518CF3DD57FF0B3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_42;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_31)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_32)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_42)); }
	inline bool get_m_UseSpriteMesh_42() const { return ___m_UseSpriteMesh_42; }
	inline bool* get_address_of_m_UseSpriteMesh_42() { return &___m_UseSpriteMesh_42; }
	inline void set_m_UseSpriteMesh_42(bool value)
	{
		___m_UseSpriteMesh_42 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_43;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_45;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_46;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * ___m_TrackedTexturelessImages_47;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_48;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mgU24cache0
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___U3CU3Ef__mgU24cache0_49;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_43)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_43() const { return ___s_VertScratch_43; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_43() { return &___s_VertScratch_43; }
	inline void set_s_VertScratch_43(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_43), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_44)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_44() const { return ___s_UVScratch_44; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_44() { return &___s_UVScratch_44; }
	inline void set_s_UVScratch_44(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_44), value);
	}

	inline static int32_t get_offset_of_s_Xy_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_45)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_45() const { return ___s_Xy_45; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_45() { return &___s_Xy_45; }
	inline void set_s_Xy_45(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_45), value);
	}

	inline static int32_t get_offset_of_s_Uv_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_46)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_46() const { return ___s_Uv_46; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_46() { return &___s_Uv_46; }
	inline void set_s_Uv_46(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_46 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_46), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_47)); }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * get_m_TrackedTexturelessImages_47() const { return ___m_TrackedTexturelessImages_47; }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED ** get_address_of_m_TrackedTexturelessImages_47() { return &___m_TrackedTexturelessImages_47; }
	inline void set_m_TrackedTexturelessImages_47(List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * value)
	{
		___m_TrackedTexturelessImages_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_47), value);
	}

	inline static int32_t get_offset_of_s_Initialized_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_48)); }
	inline bool get_s_Initialized_48() const { return ___s_Initialized_48; }
	inline bool* get_address_of_s_Initialized_48() { return &___s_Initialized_48; }
	inline void set_s_Initialized_48(bool value)
	{
		___s_Initialized_48 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___U3CU3Ef__mgU24cache0_49)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_U3CU3Ef__mgU24cache0_49() const { return ___U3CU3Ef__mgU24cache0_49; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_U3CU3Ef__mgU24cache0_49() { return &___U3CU3Ef__mgU24cache0_49; }
	inline void set_U3CU3Ef__mgU24cache0_49(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___U3CU3Ef__mgU24cache0_49 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_49), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T18FED07D8646917E1C563745518CF3DD57FF0B3E_H
#ifndef TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
#define TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_236;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_237;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_238;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_239;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_240;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_241;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_242;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_243;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_244;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_245;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_246;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_247;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_248;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_249;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_250;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_251;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_252;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_253;

public:
	inline static int32_t get_offset_of_m_isRebuildingLayout_236() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_236)); }
	inline bool get_m_isRebuildingLayout_236() const { return ___m_isRebuildingLayout_236; }
	inline bool* get_address_of_m_isRebuildingLayout_236() { return &___m_isRebuildingLayout_236; }
	inline void set_m_isRebuildingLayout_236(bool value)
	{
		___m_isRebuildingLayout_236 = value;
	}

	inline static int32_t get_offset_of_m_hasFontAssetChanged_237() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_237)); }
	inline bool get_m_hasFontAssetChanged_237() const { return ___m_hasFontAssetChanged_237; }
	inline bool* get_address_of_m_hasFontAssetChanged_237() { return &___m_hasFontAssetChanged_237; }
	inline void set_m_hasFontAssetChanged_237(bool value)
	{
		___m_hasFontAssetChanged_237 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_238() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_238)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_238() const { return ___m_subTextObjects_238; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_238() { return &___m_subTextObjects_238; }
	inline void set_m_subTextObjects_238(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_238 = value;
		Il2CppCodeGenWriteBarrier((&___m_subTextObjects_238), value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_239() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_239)); }
	inline float get_m_previousLossyScaleY_239() const { return ___m_previousLossyScaleY_239; }
	inline float* get_address_of_m_previousLossyScaleY_239() { return &___m_previousLossyScaleY_239; }
	inline void set_m_previousLossyScaleY_239(float value)
	{
		___m_previousLossyScaleY_239 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_240)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_240() const { return ___m_RectTransformCorners_240; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_240() { return &___m_RectTransformCorners_240; }
	inline void set_m_RectTransformCorners_240(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_240 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransformCorners_240), value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_241)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_241() const { return ___m_canvasRenderer_241; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_241() { return &___m_canvasRenderer_241; }
	inline void set_m_canvasRenderer_241(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_241 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvasRenderer_241), value);
	}

	inline static int32_t get_offset_of_m_canvas_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_242)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_242() const { return ___m_canvas_242; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_242() { return &___m_canvas_242; }
	inline void set_m_canvas_242(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_242 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvas_242), value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_243)); }
	inline bool get_m_isFirstAllocation_243() const { return ___m_isFirstAllocation_243; }
	inline bool* get_address_of_m_isFirstAllocation_243() { return &___m_isFirstAllocation_243; }
	inline void set_m_isFirstAllocation_243(bool value)
	{
		___m_isFirstAllocation_243 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_244)); }
	inline int32_t get_m_max_characters_244() const { return ___m_max_characters_244; }
	inline int32_t* get_address_of_m_max_characters_244() { return &___m_max_characters_244; }
	inline void set_m_max_characters_244(int32_t value)
	{
		___m_max_characters_244 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isMaskingEnabled_245)); }
	inline bool get_m_isMaskingEnabled_245() const { return ___m_isMaskingEnabled_245; }
	inline bool* get_address_of_m_isMaskingEnabled_245() { return &___m_isMaskingEnabled_245; }
	inline void set_m_isMaskingEnabled_245(bool value)
	{
		___m_isMaskingEnabled_245 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_246)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_246() const { return ___m_baseMaterial_246; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_246() { return &___m_baseMaterial_246; }
	inline void set_m_baseMaterial_246(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_246 = value;
		Il2CppCodeGenWriteBarrier((&___m_baseMaterial_246), value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_247)); }
	inline bool get_m_isScrollRegionSet_247() const { return ___m_isScrollRegionSet_247; }
	inline bool* get_address_of_m_isScrollRegionSet_247() { return &___m_isScrollRegionSet_247; }
	inline void set_m_isScrollRegionSet_247(bool value)
	{
		___m_isScrollRegionSet_247 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_stencilID_248)); }
	inline int32_t get_m_stencilID_248() const { return ___m_stencilID_248; }
	inline int32_t* get_address_of_m_stencilID_248() { return &___m_stencilID_248; }
	inline void set_m_stencilID_248(int32_t value)
	{
		___m_stencilID_248 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_249)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_249() const { return ___m_maskOffset_249; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_249() { return &___m_maskOffset_249; }
	inline void set_m_maskOffset_249(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_249 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_250)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_250() const { return ___m_EnvMapMatrix_250; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_250() { return &___m_EnvMapMatrix_250; }
	inline void set_m_EnvMapMatrix_250(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_250 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_251)); }
	inline bool get_m_isRegisteredForEvents_251() const { return ___m_isRegisteredForEvents_251; }
	inline bool* get_address_of_m_isRegisteredForEvents_251() { return &___m_isRegisteredForEvents_251; }
	inline void set_m_isRegisteredForEvents_251(bool value)
	{
		___m_isRegisteredForEvents_251 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_recursiveCountA_252)); }
	inline int32_t get_m_recursiveCountA_252() const { return ___m_recursiveCountA_252; }
	inline int32_t* get_address_of_m_recursiveCountA_252() { return &___m_recursiveCountA_252; }
	inline void set_m_recursiveCountA_252(int32_t value)
	{
		___m_recursiveCountA_252 = value;
	}

	inline static int32_t get_offset_of_loopCountA_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___loopCountA_253)); }
	inline int32_t get_loopCountA_253() const { return ___loopCountA_253; }
	inline int32_t* get_address_of_loopCountA_253() { return &___loopCountA_253; }
	inline void set_loopCountA_253(int32_t value)
	{
		___loopCountA_253 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775_gshared (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA_gshared (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Tastypill.Debug.DebugMenu/SliderData>(System.String)
extern "C" IL2CPP_METHOD_ATTR SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3_gshared (String_t* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7_gshared (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE_gshared (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu/ABGroupData>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C  List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE_gshared (List_1_t6F768299811391E2030E78481306FC3FE40004D0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu/ABGroupData>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C_gshared (List_1_t6F768299811391E2030E78481306FC3FE40004D0 * __this, const RuntimeMethod* method);

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void IOSBoard::SetText_(System.String)
extern "C" IL2CPP_METHOD_ATTR void IOSBoard_SetText__m60BFD59130E59914AC7D73CF98018831EF0CC97D (String_t* ___str0, const RuntimeMethod* method);
// System.String IOSBoard::GetText_()
extern "C" IL2CPP_METHOD_ATTR String_t* IOSBoard_GetText__mDA92D6228D681D3CCDC8F8ACBEECA3EFE6587FCF (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED (PropertyInfo_t * p0, PropertyInfo_t * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo StandardBoard::GetSystemCopyBufferProperty()
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206 (const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817 (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * p0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugFloat::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugFloat__ctor_m53A2AC1B606ECD00856DEFD2842DC718CCCD35E2 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * __this, float ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>::.ctor()
inline void List_1__ctor_m83BD91D8B3B3A71BCF2FAF38AB5FE5D6C2784611 (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugMenu/<Start>d__26::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__26__ctor_mF6E1D5F2633B04A02D45BD084FD8A30D4479B300 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m581B8D2D356BE1ABB2799DFD0EF53B8208D4DE96 (CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * __this, bool p0, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu/DebugMenuEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void DebugMenuEvent_Invoke_m4650C73EAB02E4F25DB2A0FCA148F0E3D01BABB5 (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu::SaveSliderValues()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_SaveSliderValues_m62B1556FE9528A377F82A1F02D01B5CE7FCFAC77 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>::GetEnumerator()
inline Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49  List_1_GetEnumerator_mA2DD06BF030C57C7D87F4D00478437A836E20B0A (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49  (*) (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Tastypill.Debug.DebugSlider>::get_Current()
inline DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * Enumerator_get_Current_m7936D96C3BAB4053ED9FCF6D25BA25FD2FBB672F (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 * __this, const RuntimeMethod* method)
{
	return ((  DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * (*) (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugSlider::SaveFloatValue()
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_SaveFloatValue_m34A6C0023BC2F155F88BB440AD7DA58C22F09962 (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Tastypill.Debug.DebugSlider>::MoveNext()
inline bool Enumerator_MoveNext_mB34E2C6BDA315A1EC1BE3E2EBBD53D72FA11A6D6 (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Tastypill.Debug.DebugSlider>::Dispose()
inline void Enumerator_Dispose_mCF823690A6651F1C586EB06A3CD7695ADEA11470 (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_down_mCB2BC667A6C70DCA1B522DEA470F9C9DDA3D2F0F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(p0, p1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Tastypill.Debug.DebugButton>()
inline DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * GameObject_GetComponent_TisDebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545_mC3EC2F9748277DBE01F583FAEA8513C381125BE7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugButton::Init(System.String,UnityEngine.Events.UnityAction,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugButton_Init_m5FF608431408D3B4FB5EE887C8469FB8FD189377 (DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * __this, String_t* ___label0, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___buttonClick1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___buttonColor2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_m2CAD80F7C9D89EE145BC9D3D0937D6EBEE909531 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Tastypill.Debug.DebugSlider>()
inline DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * GameObject_GetComponent_TisDebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560_mF25AB8014695A3D92C7485373E595AB56747E526 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugSlider::Init(System.String,UnityEngine.Color,Tastypill.Debug.DebugFloat,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_Init_mA112267E76FE0B1B67A87756DC239BA371E85D80 (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, String_t* ___titleText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___sliderColor1, DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___floatValue2, float ___maxValue3, float ___minValue4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>::Add(!0)
inline void List_1_Add_mC951DBE0F7EA8F2C5590027845E1C298D771AA7B (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * __this, DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *, DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Tastypill.Debug.DebugLabel>()
inline DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * GameObject_GetComponent_TisDebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250_m9E2853C119AD3466D08D6DC68C58C52ABD2B54D7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugLabel::Initialize(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugLabel_Initialize_m9AE11E961B5421B3B843F94715128D8744A0282A (DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * __this, String_t* ___labelText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bgColor1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::.ctor()
inline void List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775 (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E *, const RuntimeMethod*))List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>::get_Item(System.Int32)
inline DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216 (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * (*) (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// Tastypill.Debug.DebugSlider/JSONData Tastypill.Debug.DebugSlider::get_GetJSON()
extern "C" IL2CPP_METHOD_ATTR JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  DebugSlider_get_GetJSON_mA6FCB80DB65C71E1C1CEAD9EDFCECF3E688BBE8B (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::Add(!0)
inline void List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E *, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 , const RuntimeMethod*))List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider>::get_Count()
inline int32_t List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Tastypill.Debug.DebugMenu/SliderData::.ctor(System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>)
extern "C" IL2CPP_METHOD_ATTR void SliderData__ctor_mE62351437FEF8A8BBDC7E3291232F85BB671E06E (SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * __this, List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UniClipboard::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniClipboard_SetText_m9408DBC0ABDF6BFB97ACFA3A6C634868C2B2DAF8 (String_t* ___str0, const RuntimeMethod* method);
// System.String UniClipboard::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* UniClipboard_GetText_m9524F1C395F00F4B320F5CBEC7A988F33D8BC7A2 (const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu::LoadSettingsFromJSON(System.String,Tastypill.Debug.DebugMenu/SliderData&)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___json0, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * ___data1, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu::SetSliderToData(Tastypill.Debug.DebugMenu/SliderData)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  ___data0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Tastypill.Debug.DebugMenu/SliderData>(System.String)
inline SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3 (String_t* p0, const RuntimeMethod* method)
{
	return ((  SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3_gshared)(p0, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::get_Item(System.Int32)
inline JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7 (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  (*) (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E *, int32_t, const RuntimeMethod*))List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7_gshared)(__this, p0, method);
}
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider/JSONData>::get_Count()
inline int32_t List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E *, const RuntimeMethod*))List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE_gshared)(__this, method);
}
// System.Void UnityEngine.Diagnostics.Utils::ForceCrash(UnityEngine.Diagnostics.ForcedCrashCategory)
extern "C" IL2CPP_METHOD_ATTR void Utils_ForceCrash_mBF0B281120C8732FBD5CAAF10F1277FB6978913F (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_m7889B3CBD8B243DEC40D308C264F23EB098B7682 (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * Component_GetComponent_TisCanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_m7E8ADD0E80ACBD9FACB9074DEE3565237F1A88AA (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu::CreateDebugButton(System.String,UnityEngine.Events.UnityAction,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___label0, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___buttonAction1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___buttonColor2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu/ABGroupData>::get_Item(System.Int32)
inline ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C  List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE (List_1_t6F768299811391E2030E78481306FC3FE40004D0 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C  (*) (List_1_t6F768299811391E2030E78481306FC3FE40004D0 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE_gshared)(__this, p0, method);
}
// ABManager/ABTESTGROUP ABManager::get_CurrentABGroup()
extern "C" IL2CPP_METHOD_ATTR int32_t ABManager_get_CurrentABGroup_m92AF392C05081A4A10DF1593A9BE643D0E14CE86 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tastypill.Debug.DebugMenu/ABGroupData>::get_Count()
inline int32_t List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C (List_1_t6F768299811391E2030E78481306FC3FE40004D0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6F768299811391E2030E78481306FC3FE40004D0 *, const RuntimeMethod*))List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.String TMPro.TMP_Text::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TMP_Text_get_text_m585E635D68DD2AD9C884A88658222AB7F84720FB (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// System.Single Tastypill.Debug.DebugFloat::op_Implicit(Tastypill.Debug.DebugFloat)
extern "C" IL2CPP_METHOD_ATTR float DebugFloat_op_Implicit_mFC360F6DAF291E76E340C5C4D36F18E77B113199 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___f0, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugSlider/JSONData::.ctor(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void JSONData__ctor_mA1FB6ACC687942509E32B30D0E6463A859A83C2D (JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 * __this, String_t* ___sliderPref0, float ___sliderValue1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Slider_set_maxValue_m2CCC2B6906B140BE5C537BFC08CC8961342F92D8 (Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Slider_set_minValue_mDA0D477A52DA1A66497A4F46807D60A8040C0122 (Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957 (String_t* p0, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugFloat::UpdateValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugFloat_UpdateValue_m5181F3C11E2F1A811C729EB3F9E6CD3CA61D2449 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * __this, float ___newValue0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35 (String_t* p0, float p1, const RuntimeMethod* method);
// System.Void Tastypill.Debug.DebugMenu::OverrideDefaultData()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_OverrideDefaultData_mB7F9F8556DE57ED82E3EEB110EBA279CD5792FA6 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method);
// System.Void IOSBoard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IOSBoard__ctor_mC7BB8C09408953867B69235AC27E125990028612 (IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 * __this, const RuntimeMethod* method);
// IBoard UniClipboard::get_board()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F (const RuntimeMethod* method);
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
extern "C" void DEFAULT_CALL SetText_(char*);
// System.Void IOSBoard::SetText_(System.String)
extern "C" IL2CPP_METHOD_ATTR void IOSBoard_SetText__m60BFD59130E59914AC7D73CF98018831EF0CC97D (String_t* ___str0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___str0U27 to native representation
	char* ____str0_marshaled = NULL;
	____str0_marshaled = il2cpp_codegen_marshal_string(___str0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetText_)(____str0_marshaled);

	// Marshaling cleanup of parameter U27___str0U27 native representation
	il2cpp_codegen_marshal_free(____str0_marshaled);
	____str0_marshaled = NULL;

}
extern "C" char* DEFAULT_CALL GetText_();
// System.String IOSBoard::GetText_()
extern "C" IL2CPP_METHOD_ATTR String_t* IOSBoard_GetText__mDA92D6228D681D3CCDC8F8ACBEECA3EFE6587FCF (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GetText_)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void IOSBoard::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void IOSBoard_SetText_m882B2A5AC3C5F45F27913C6EDE72B456CD740B21 (IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (Application.platform != RuntimePlatform.OSXEditor) {
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// SetText_ (str);
		String_t* L_2 = ___str0;
		IOSBoard_SetText__m60BFD59130E59914AC7D73CF98018831EF0CC97D(L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.String IOSBoard::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* IOSBoard_GetText_mED3F2A303FB9B85F28CC3DEE537712D5BC420A8F (IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return GetText_();
		String_t* L_0 = IOSBoard_GetText__mDA92D6228D681D3CCDC8F8ACBEECA3EFE6587FCF(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void IOSBoard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IOSBoard__ctor_mC7BB8C09408953867B69235AC27E125990028612 (IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Reflection.PropertyInfo StandardBoard::GetSystemCopyBufferProperty()
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	PropertyInfo_t * V_4 = NULL;
	{
		// if (m_systemCopyBufferProperty == null) {
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_0 = ((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->get_m_systemCopyBufferProperty_0();
		bool L_1 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED(L_0, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		// Type T = typeof(GUIUtility);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// m_systemCopyBufferProperty = T.GetProperty("systemCopyBuffer", BindingFlags.Static | BindingFlags.Public);
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		PropertyInfo_t * L_6 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130(L_5, _stringLiteralAECF42EB86BFE100C3E80087072BBE0E05A4D44F, ((int32_t)24), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->set_m_systemCopyBufferProperty_0(L_6);
		// if (m_systemCopyBufferProperty == null)
		PropertyInfo_t * L_7 = ((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->get_m_systemCopyBufferProperty_0();
		bool L_8 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED(L_7, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		// m_systemCopyBufferProperty =
		//     T.GetProperty("systemCopyBuffer", BindingFlags.Static | BindingFlags.NonPublic);
		Type_t * L_10 = V_1;
		NullCheck(L_10);
		PropertyInfo_t * L_11 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130(L_10, _stringLiteralAECF42EB86BFE100C3E80087072BBE0E05A4D44F, ((int32_t)40), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->set_m_systemCopyBufferProperty_0(L_11);
	}

IL_0051:
	{
		// if (m_systemCopyBufferProperty == null)
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_12 = ((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->get_m_systemCopyBufferProperty_0();
		bool L_13 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED(L_12, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// throw new Exception(
		//     "Can't access internal member 'GUIUtility.systemCopyBuffer' it may have been removed / renamed");
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_15, _stringLiteralDD230193F2797E37F352A557B31805D5CFCD4F74, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206_RuntimeMethod_var);
	}

IL_006c:
	{
	}

IL_006d:
	{
		// return m_systemCopyBufferProperty;
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_16 = ((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->get_m_systemCopyBufferProperty_0();
		V_4 = L_16;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		PropertyInfo_t * L_17 = V_4;
		return L_17;
	}
}
// System.Void StandardBoard::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandardBoard_SetText_m753A02BB8D11E74D4D0956CF107685D240CC256C (StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardBoard_SetText_m753A02BB8D11E74D4D0956CF107685D240CC256C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		// PropertyInfo P = GetSystemCopyBufferProperty();
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_0 = StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206(/*hidden argument*/NULL);
		V_0 = L_0;
		// P.SetValue(null, str, null);
		PropertyInfo_t * L_1 = V_0;
		String_t* L_2 = ___str0;
		NullCheck(L_1);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_1, NULL, L_2, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		// }
		return;
	}
}
// System.String StandardBoard::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* StandardBoard_GetText_m27EA4AF77DFDD8882AD8C1C37BD2670360E09774 (StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardBoard_GetText_m27EA4AF77DFDD8882AD8C1C37BD2670360E09774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// PropertyInfo P = GetSystemCopyBufferProperty();
		IL2CPP_RUNTIME_CLASS_INIT(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_0 = StandardBoard_GetSystemCopyBufferProperty_mB2F7D0C99125865B1BC19D05620A4FF97C048206(/*hidden argument*/NULL);
		V_0 = L_0;
		// return (string)P.GetValue(null, null);
		PropertyInfo_t * L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_1, NULL, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Void StandardBoard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandardBoard__ctor_mDF24BF4009723C1B6ADB565C3935F7FCDA6758B1 (StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StandardBoard::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StandardBoard__cctor_mAE64951C08D5A529BFAE662B05C2597372E674C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardBoard__cctor_mAE64951C08D5A529BFAE662B05C2597372E674C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PropertyInfo m_systemCopyBufferProperty = null;
		((StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_StaticFields*)il2cpp_codegen_static_fields_for(StandardBoard_tC84CC0B81E134EF2DAABD73D5516EDA50A9B56D2_il2cpp_TypeInfo_var))->set_m_systemCopyBufferProperty_0((PropertyInfo_t *)NULL);
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
// System.Void Tastypill.Debug.DebugButton::Init(System.String,UnityEngine.Events.UnityAction,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugButton_Init_m5FF608431408D3B4FB5EE887C8469FB8FD189377 (DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * __this, String_t* ___label0, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___buttonClick1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___buttonColor2, const RuntimeMethod* method)
{
	{
		// button.onClick.AddListener(buttonClick);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_button_6();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_0, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_2 = ___buttonClick1;
		NullCheck(L_1);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_1, L_2, /*hidden argument*/NULL);
		// buttonText.text = label;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_buttonText_5();
		String_t* L_4 = ___label0;
		NullCheck(L_3);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_3, L_4, /*hidden argument*/NULL);
		// buttonImage.color = buttonColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = __this->get_buttonImage_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___buttonColor2;
		NullCheck(L_5);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugButton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugButton__ctor_mEF52E139541BB144270E2E61CEBA1DB6E2574604 (DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Tastypill.Debug.DebugFloat::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugFloat__ctor_m53A2AC1B606ECD00856DEFD2842DC718CCCD35E2 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private DebugFloat(float value)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.value = value;
		float L_0 = ___value0;
		__this->set_value_0(L_0);
		// }
		return;
	}
}
// System.Single Tastypill.Debug.DebugFloat::op_Implicit(Tastypill.Debug.DebugFloat)
extern "C" IL2CPP_METHOD_ATTR float DebugFloat_op_Implicit_mFC360F6DAF291E76E340C5C4D36F18E77B113199 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___f0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return f.value;
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_0 = ___f0;
		NullCheck(L_0);
		float L_1 = L_0->get_value_0();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// Tastypill.Debug.DebugFloat Tastypill.Debug.DebugFloat::op_Implicit(System.Single)
extern "C" IL2CPP_METHOD_ATTR DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * DebugFloat_op_Implicit_m29A40F05DD9B1E67E21FAEC352F740ABEE86F0EB (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugFloat_op_Implicit_m29A40F05DD9B1E67E21FAEC352F740ABEE86F0EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * V_0 = NULL;
	{
		// return new DebugFloat(f);
		float L_0 = ___f0;
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_1 = (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F *)il2cpp_codegen_object_new(DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F_il2cpp_TypeInfo_var);
		DebugFloat__ctor_m53A2AC1B606ECD00856DEFD2842DC718CCCD35E2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_2 = V_0;
		return L_2;
	}
}
// System.String Tastypill.Debug.DebugFloat::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DebugFloat_ToString_mEFFCC9552A0208A1EA1685EA2ECCDB70F8F891DC (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return value.ToString();
		float* L_0 = __this->get_address_of_value_0();
		String_t* L_1 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Tastypill.Debug.DebugFloat::UpdateValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugFloat_UpdateValue_m5181F3C11E2F1A811C729EB3F9E6CD3CA61D2449 (DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * __this, float ___newValue0, const RuntimeMethod* method)
{
	{
		// value = newValue;
		float L_0 = ___newValue0;
		__this->set_value_0(L_0);
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
// System.Void Tastypill.Debug.DebugLabel::Initialize(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugLabel_Initialize_m9AE11E961B5421B3B843F94715128D8744A0282A (DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * __this, String_t* ___labelText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bgColor1, const RuntimeMethod* method)
{
	{
		// label.text = labelText;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_label_4();
		String_t* L_1 = ___labelText0;
		NullCheck(L_0);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_0, L_1, /*hidden argument*/NULL);
		// bgImage.color = bgColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = __this->get_bgImage_5();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___bgColor1;
		NullCheck(L_2);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugLabel::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugLabel__ctor_m195C1D45F21C2FAABA1D261BE47CF2B29F7054AE (DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Tastypill.Debug.DebugMenu::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_OnEnable_m8EBAF2F48DCF443014E0072B2C9E026870EF6A8B (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_OnEnable_m8EBAF2F48DCF443014E0072B2C9E026870EF6A8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// sliders = new List<DebugSlider>();
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_0 = (List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 *)il2cpp_codegen_object_new(List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733_il2cpp_TypeInfo_var);
		List_1__ctor_m83BD91D8B3B3A71BCF2FAF38AB5FE5D6C2784611(L_0, /*hidden argument*/List_1__ctor_m83BD91D8B3B3A71BCF2FAF38AB5FE5D6C2784611_RuntimeMethod_var);
		__this->set_sliders_19(L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tastypill.Debug.DebugMenu::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DebugMenu_Start_mBE01C84DB227B63E922DFAB8CA55BC0B2D469927 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_Start_mBE01C84DB227B63E922DFAB8CA55BC0B2D469927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * L_0 = (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 *)il2cpp_codegen_object_new(U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778_il2cpp_TypeInfo_var);
		U3CStartU3Ed__26__ctor_mF6E1D5F2633B04A02D45BD084FD8A30D4479B300(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Tastypill.Debug.DebugMenu::OverrideDefaultData()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_OverrideDefaultData_mB7F9F8556DE57ED82E3EEB110EBA279CD5792FA6 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_OverrideDefaultData_mB7F9F8556DE57ED82E3EEB110EBA279CD5792FA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!debugMenuOpen) return;
		bool L_0 = __this->get_debugMenuOpen_5();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!debugMenuOpen) return;
		goto IL_0016;
	}

IL_0010:
	{
		// defaultDataOveridden = true;
		((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->set_defaultDataOveridden_11((bool)1);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::ToggleDebugMenu()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_ToggleDebugMenu_mA0130A4F69A6AE928FE44B2EE2B9CF4CD02D6F8F (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_ToggleDebugMenu_mA0130A4F69A6AE928FE44B2EE2B9CF4CD02D6F8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B10_0 = NULL;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B9_0 = NULL;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B14_0 = NULL;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B13_0 = NULL;
	{
		// if (DISABLE_FOR_RELEASE) return;
		bool L_0 = __this->get_DISABLE_FOR_RELEASE_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (DISABLE_FOR_RELEASE) return;
		goto IL_0094;
	}

IL_0010:
	{
		// if (!debugMenuOpen && !canvas.enabled) canvas.enabled = true;
		bool L_2 = __this->get_debugMenuOpen_5();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = __this->get_canvas_22();
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_3, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// if (!debugMenuOpen && !canvas.enabled) canvas.enabled = true;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_6 = __this->get_canvas_22();
		NullCheck(L_6);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// debugMenuOpen = !debugMenuOpen;
		bool L_7 = __this->get_debugMenuOpen_5();
		__this->set_debugMenuOpen_5((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		// cGroup.interactable = debugMenuOpen;
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_8 = __this->get_cGroup_23();
		bool L_9 = __this->get_debugMenuOpen_5();
		NullCheck(L_8);
		CanvasGroup_set_interactable_m581B8D2D356BE1ABB2799DFD0EF53B8208D4DE96(L_8, L_9, /*hidden argument*/NULL);
		// if (debugMenuOpen)
		bool L_10 = __this->get_debugMenuOpen_5();
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// debugMenuOpened?.Invoke();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_12 = ((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->get_debugMenuOpened_25();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_13 = L_12;
		G_B9_0 = L_13;
		if (L_13)
		{
			G_B10_0 = L_13;
			goto IL_0071;
		}
	}
	{
		goto IL_0077;
	}

IL_0071:
	{
		NullCheck(G_B10_0);
		DebugMenuEvent_Invoke_m4650C73EAB02E4F25DB2A0FCA148F0E3D01BABB5(G_B10_0, /*hidden argument*/NULL);
	}

IL_0077:
	{
		goto IL_0094;
	}

IL_007a:
	{
		// SaveSliderValues();
		DebugMenu_SaveSliderValues_m62B1556FE9528A377F82A1F02D01B5CE7FCFAC77(__this, /*hidden argument*/NULL);
		// debugMenuClosed?.Invoke();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_14 = ((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->get_debugMenuClosed_26();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_15 = L_14;
		G_B13_0 = L_15;
		if (L_15)
		{
			G_B14_0 = L_15;
			goto IL_008d;
		}
	}
	{
		goto IL_0093;
	}

IL_008d:
	{
		NullCheck(G_B14_0);
		DebugMenuEvent_Invoke_m4650C73EAB02E4F25DB2A0FCA148F0E3D01BABB5(G_B14_0, /*hidden argument*/NULL);
	}

IL_0093:
	{
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::SaveSliderValues()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_SaveSliderValues_m62B1556FE9528A377F82A1F02D01B5CE7FCFAC77 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_SaveSliderValues_m62B1556FE9528A377F82A1F02D01B5CE7FCFAC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (DebugSlider s in sliders)
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_0 = __this->get_sliders_19();
		NullCheck(L_0);
		Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49  L_1 = List_1_GetEnumerator_mA2DD06BF030C57C7D87F4D00478437A836E20B0A(L_0, /*hidden argument*/List_1_GetEnumerator_mA2DD06BF030C57C7D87F4D00478437A836E20B0A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0010:
		{
			// foreach (DebugSlider s in sliders)
			DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_2 = Enumerator_get_Current_m7936D96C3BAB4053ED9FCF6D25BA25FD2FBB672F((Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7936D96C3BAB4053ED9FCF6D25BA25FD2FBB672F_RuntimeMethod_var);
			V_1 = L_2;
			// s.SaveFloatValue();
			DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_3 = V_1;
			NullCheck(L_3);
			DebugSlider_SaveFloatValue_m34A6C0023BC2F155F88BB440AD7DA58C22F09962(L_3, /*hidden argument*/NULL);
		}

IL_0021:
		{
			// foreach (DebugSlider s in sliders)
			bool L_4 = Enumerator_MoveNext_mB34E2C6BDA315A1EC1BE3E2EBBD53D72FA11A6D6((Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB34E2C6BDA315A1EC1BE3E2EBBD53D72FA11A6D6_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0010;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCF823690A6651F1C586EB06A3CD7695ADEA11470((Enumerator_t71D2A32B9325545E41AA8E8261C557F23DA1EC49 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mCF823690A6651F1C586EB06A3CD7695ADEA11470_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::Update()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_Update_m610B5D39167831EF602377518D8771197E523CF0 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_Update_m610B5D39167831EF602377518D8771197E523CF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (debugMenuOpen)
		bool L_0 = __this->get_debugMenuOpen_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		// menuOverlay.sizeDelta = Vector2.Lerp(menuOverlay.sizeDelta, Vector2.zero, Time.deltaTime * 5f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = __this->get_menuOverlay_13();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_3 = __this->get_menuOverlay_13();
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_2, L_7, /*hidden argument*/NULL);
		// menuWipe.sizeDelta = Vector2.Lerp(menuWipe.sizeDelta, new Vector2(menuWipe.sizeDelta.x, 50f), Time.deltaTime * 5f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_menuWipe_14();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = __this->get_menuWipe_14();
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_9, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = __this->get_menuWipe_14();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_14), L_13, (50.0f), /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_10, L_14, ((float)il2cpp_codegen_multiply((float)L_15, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_8, L_16, /*hidden argument*/NULL);
		goto IL_0103;
	}

IL_007f:
	{
		// menuOverlay.sizeDelta = Vector2.Lerp(menuOverlay.sizeDelta, Vector2.down * canvasRect.sizeDelta.y, Time.deltaTime * 10f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_17 = __this->get_menuOverlay_13();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_18 = __this->get_menuOverlay_13();
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Vector2_get_down_mCB2BC667A6C70DCA1B522DEA470F9C9DDA3D2F0F(/*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_21 = __this->get_canvasRect_24();
		NullCheck(L_21);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_20, L_23, /*hidden argument*/NULL);
		float L_25 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_19, L_24, ((float)il2cpp_codegen_multiply((float)L_25, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_17, L_26, /*hidden argument*/NULL);
		// menuWipe.sizeDelta = Vector2.Lerp(menuWipe.sizeDelta, new Vector2(menuWipe.sizeDelta.x, 5000f), Time.deltaTime * 10f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_27 = __this->get_menuWipe_14();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_28 = __this->get_menuWipe_14();
		NullCheck(L_28);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_28, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_30 = __this->get_menuWipe_14();
		NullCheck(L_30);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_33), L_32, (5000.0f), /*hidden argument*/NULL);
		float L_34 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_29, L_33, ((float)il2cpp_codegen_multiply((float)L_34, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_27);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_27, L_35, /*hidden argument*/NULL);
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::CreateDebugButton(System.String,UnityEngine.Events.UnityAction,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___label0, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___buttonAction1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___buttonColor2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject newButton = Instantiate(buttonPrefab, vertLayout);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_buttonPrefab_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_vertLayout_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		V_0 = L_2;
		// newButton.GetComponent<DebugButton>().Init(label, buttonAction, buttonColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		DebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545 * L_4 = GameObject_GetComponent_TisDebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545_mC3EC2F9748277DBE01F583FAEA8513C381125BE7(L_3, /*hidden argument*/GameObject_GetComponent_TisDebugButton_tB211DED03AE271E485933CC21972CA60F7B1D545_mC3EC2F9748277DBE01F583FAEA8513C381125BE7_RuntimeMethod_var);
		String_t* L_5 = ___label0;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_6 = ___buttonAction1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = ___buttonColor2;
		NullCheck(L_4);
		DebugButton_Init_m5FF608431408D3B4FB5EE887C8469FB8FD189377(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// newButton.transform.SetAsFirstSibling();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetAsFirstSibling_m2CAD80F7C9D89EE145BC9D3D0937D6EBEE909531(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::CreateDebugSlider(System.String,UnityEngine.Color,Tastypill.Debug.DebugFloat,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_CreateDebugSlider_m18B6FD941FA46A3DD633A71884F053B5338305C3 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___titleText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___sliderColor1, DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___floatValue2, float ___maxValue3, float ___minValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_CreateDebugSlider_m18B6FD941FA46A3DD633A71884F053B5338305C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (registeredSliders == null) registeredSliders = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_registeredSliders_20();
		V_2 = (bool)((((RuntimeObject*)(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (registeredSliders == null) registeredSliders = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_2, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_registeredSliders_20(L_2);
	}

IL_0019:
	{
		// if (registeredSliders.Contains(titleText))
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = __this->get_registeredSliders_20();
		String_t* L_4 = ___titleText0;
		NullCheck(L_3);
		bool L_5 = List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B(L_3, L_4, /*hidden argument*/List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_0079;
	}

IL_002c:
	{
		// registeredSliders.Add(titleText);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = __this->get_registeredSliders_20();
		String_t* L_8 = ___titleText0;
		NullCheck(L_7);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_7, L_8, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// GameObject newSlider = Instantiate(sliderPrefab, vertLayout);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_sliderPrefab_18();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_vertLayout_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		V_0 = L_11;
		// DebugSlider slider = newSlider.GetComponent<DebugSlider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_0;
		NullCheck(L_12);
		DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_13 = GameObject_GetComponent_TisDebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560_mF25AB8014695A3D92C7485373E595AB56747E526(L_12, /*hidden argument*/GameObject_GetComponent_TisDebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560_mF25AB8014695A3D92C7485373E595AB56747E526_RuntimeMethod_var);
		V_1 = L_13;
		// slider.Init(titleText, sliderColor, floatValue, maxValue, minValue);
		DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_14 = V_1;
		String_t* L_15 = ___titleText0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = ___sliderColor1;
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_17 = ___floatValue2;
		float L_18 = ___maxValue3;
		float L_19 = ___minValue4;
		NullCheck(L_14);
		DebugSlider_Init_mA112267E76FE0B1B67A87756DC239BA371E85D80(L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// sliders.Add(slider);
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_20 = __this->get_sliders_19();
		DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_21 = V_1;
		NullCheck(L_20);
		List_1_Add_mC951DBE0F7EA8F2C5590027845E1C298D771AA7B(L_20, L_21, /*hidden argument*/List_1_Add_mC951DBE0F7EA8F2C5590027845E1C298D771AA7B_RuntimeMethod_var);
		// newSlider.transform.SetAsFirstSibling();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_0;
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_SetAsFirstSibling_m2CAD80F7C9D89EE145BC9D3D0937D6EBEE909531(L_23, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::CreateDebugLabel(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_CreateDebugLabel_mD23FD0A50AAD3725A43A971A1FD44FDF9DB2AE13 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___labelText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bgColor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_CreateDebugLabel_mD23FD0A50AAD3725A43A971A1FD44FDF9DB2AE13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * V_1 = NULL;
	{
		// GameObject newLabel = Instantiate(labelPrefab, vertLayout);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_labelPrefab_17();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_vertLayout_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		V_0 = L_2;
		// DebugLabel label = newLabel.GetComponent<DebugLabel>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * L_4 = GameObject_GetComponent_TisDebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250_m9E2853C119AD3466D08D6DC68C58C52ABD2B54D7(L_3, /*hidden argument*/GameObject_GetComponent_TisDebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250_m9E2853C119AD3466D08D6DC68C58C52ABD2B54D7_RuntimeMethod_var);
		V_1 = L_4;
		// label.Initialize(labelText, bgColor);
		DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * L_5 = V_1;
		String_t* L_6 = ___labelText0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = ___bgColor1;
		NullCheck(L_5);
		DebugLabel_Initialize_m9AE11E961B5421B3B843F94715128D8744A0282A(L_5, L_6, L_7, /*hidden argument*/NULL);
		// label.transform.SetAsFirstSibling();
		DebugLabel_t28524D88DCA52E018913DCC4A025F4ED99BED250 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetAsFirstSibling_m2CAD80F7C9D89EE145BC9D3D0937D6EBEE909531(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::CopySettingsToClipboard()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_CopySettingsToClipboard_m2FD137231F5AA63D968065564F4D8C87CA251728 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_CopySettingsToClipboard_m2FD137231F5AA63D968065564F4D8C87CA251728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// string clipboardText = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// List<DebugSlider.JSONData> sliderJsons = new List<DebugSlider.JSONData>();
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_0 = (List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E *)il2cpp_codegen_object_new(List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E_il2cpp_TypeInfo_var);
		List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775(L_0, /*hidden argument*/List_1__ctor_m14C14416C5D86A45C0A84230AEF7F42A13C00775_RuntimeMethod_var);
		V_1 = L_0;
		// for (int i = 0; i < sliders.Count; i++)
		V_2 = 0;
		goto IL_002f;
	}

IL_0011:
	{
		// sliderJsons.Add(sliders[i].GetJSON);
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_1 = V_1;
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_2 = __this->get_sliders_19();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_4 = List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216(L_2, L_3, /*hidden argument*/List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216_RuntimeMethod_var);
		NullCheck(L_4);
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_5 = DebugSlider_get_GetJSON_mA6FCB80DB65C71E1C1CEAD9EDFCECF3E688BBE8B(L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA(L_1, L_5, /*hidden argument*/List_1_Add_m989E823707D4DEB288531816FA78DCD655FA30DA_RuntimeMethod_var);
		// for (int i = 0; i < sliders.Count; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < sliders.Count; i++)
		int32_t L_7 = V_2;
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_8 = __this->get_sliders_19();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE(L_8, /*hidden argument*/List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0011;
		}
	}
	{
		// sliderData = new SliderData(sliderJsons);
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_11 = V_1;
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_12;
		memset(&L_12, 0, sizeof(L_12));
		SliderData__ctor_mE62351437FEF8A8BBDC7E3291232F85BB671E06E((&L_12), L_11, /*hidden argument*/NULL);
		__this->set_sliderData_21(L_12);
		// clipboardText = JsonUtility.ToJson(sliderData);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_13 = __this->get_sliderData_21();
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_14 = L_13;
		RuntimeObject * L_15 = Box(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// UnityEngine.Debug.Log(clipboardText);
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_17, /*hidden argument*/NULL);
		// UniClipboard.SetText(clipboardText);
		String_t* L_18 = V_0;
		UniClipboard_SetText_m9408DBC0ABDF6BFB97ACFA3A6C634868C2B2DAF8(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::LoadSettingsFromClipboard()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_LoadSettingsFromClipboard_m1D423EAC9EF73B0DECE22C0611A1670AC45D6ACE (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// string clipboardText = UniClipboard.GetText();
		String_t* L_0 = UniClipboard_GetText_m9524F1C395F00F4B320F5CBEC7A988F33D8BC7A2(/*hidden argument*/NULL);
		V_0 = L_0;
		// LoadSettingsFromJSON(clipboardText, out sliderData);
		String_t* L_1 = V_0;
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * L_2 = __this->get_address_of_sliderData_21();
		DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696(__this, L_1, (SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 *)L_2, /*hidden argument*/NULL);
		// SetSliderToData(sliderData);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_3 = __this->get_sliderData_21();
		DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::LoadSettingsFromJSON(System.String,Tastypill.Debug.DebugMenu_SliderDataU26)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, String_t* ___json0, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// data = JsonUtility.FromJson<SliderData>(json);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * L_0 = ___data1;
		String_t* L_1 = ___json0;
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_2 = JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3(L_1, /*hidden argument*/JsonUtility_FromJson_TisSliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_m54F70931271B8DE317294493B1F9833891381AD3_RuntimeMethod_var);
		*(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 *)L_0 = L_2;
		goto IL_002d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// UnityEngine.Debug.Log("Couldnt load JSON!\nClipboard text: " + json);
		String_t* L_3 = ___json0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE9B20B46F743EA957CD340F2FFFC8AF4302D5C01, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// data = new SliderData();
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * L_5 = ___data1;
		il2cpp_codegen_initobj(L_5, sizeof(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 ));
		// return;
		goto IL_002d;
	} // end catch (depth: 1)

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::SetSliderToData(Tastypill.Debug.DebugMenu_SliderData)
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int i = 0; i < sliders.Count; i++)
		V_0 = 0;
		goto IL_0077;
	}

IL_0005:
	{
		// for (int j = 0; j < data.sliderData.Count; j++)
		V_1 = 0;
		goto IL_0060;
	}

IL_000a:
	{
		// if (registeredSliders[i].Equals(data.sliderData[j].sliderPref))
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_registeredSliders_20();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED(L_0, L_1, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_3 = ___data0;
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_4 = L_3.get_sliderData_0();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_6 = List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7(L_4, L_5, /*hidden argument*/List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7_RuntimeMethod_var);
		String_t* L_7 = L_6.get_sliderPref_0();
		NullCheck(L_2);
		bool L_8 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_2, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// sliders[i].slider.value = data.sliderData[j].sliderValue;
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_10 = __this->get_sliders_19();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * L_12 = List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216(L_10, L_11, /*hidden argument*/List_1_get_Item_mF307ECD188DAE6D5F6149BE4C09BE92799672216_RuntimeMethod_var);
		NullCheck(L_12);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_13 = L_12->get_slider_9();
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_14 = ___data0;
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_15 = L_14.get_sliderData_0();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_17 = List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7(L_15, L_16, /*hidden argument*/List_1_get_Item_mDEA0280358BCECDC20FB60F97519298FD6C43DB7_RuntimeMethod_var);
		float L_18 = L_17.get_sliderValue_1();
		NullCheck(L_13);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, L_18);
	}

IL_005b:
	{
		// for (int j = 0; j < data.sliderData.Count; j++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0060:
	{
		// for (int j = 0; j < data.sliderData.Count; j++)
		int32_t L_20 = V_1;
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_21 = ___data0;
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_22 = L_21.get_sliderData_0();
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE(L_22, /*hidden argument*/List_1_get_Count_mF87CE6DADB7F42B02DD958101BFD0FBD718E24AE_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < sliders.Count; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0077:
	{
		// for (int i = 0; i < sliders.Count; i++)
		int32_t L_26 = V_0;
		List_1_tB7D75CF74DED3908AE1E7E30802C89B875771733 * L_27 = __this->get_sliders_19();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE(L_27, /*hidden argument*/List_1_get_Count_m38FFA06363FC3E4482E1C6A9C73856A7C9565EAE_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_4;
		if (L_29)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::ForceCrash()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_ForceCrash_m66DCCEF9BBEB7F193F31FBFBDBE45BAE42D4225C (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	{
		// Utils.ForceCrash(ForcedCrashCategory.Abort);
		Utils_ForceCrash_mBF0B281120C8732FBD5CAAF10F1277FB6978913F(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::ClearSaveData()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu_ClearSaveData_m6485E6EA1AD1F567187903C9590B44BAF5B8A772 (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7889B3CBD8B243DEC40D308C264F23EB098B7682(/*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugMenu__ctor_m9523E0B756FDE9701186008FA1C16C8EBB3D668D (DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * __this, const RuntimeMethod* method)
{
	{
		// public bool DISABLE_FOR_RELEASE = false;
		__this->set_DISABLE_FOR_RELEASE_6((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Tastypill.Debug.DebugMenu_<Start>d__26::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__26__ctor_mF6E1D5F2633B04A02D45BD084FD8A30D4479B300 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Tastypill.Debug.DebugMenu_<Start>d__26::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__26_System_IDisposable_Dispose_mADED939C3B94E478BEAE5A45D6597FEB51B018AA (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Tastypill.Debug.DebugMenu_<Start>d__26::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ed__26_MoveNext_m52D0638A0D39F61BBD88B5F1024DB58162787CE1 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__26_MoveNext_m52D0638A0D39F61BBD88B5F1024DB58162787CE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B9_0 = NULL;
	DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * G_B8_0 = NULL;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0146;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas = GetComponent<Canvas>();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_3 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_5 = Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD(L_4, /*hidden argument*/Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_canvas_22(L_5);
		// canvasRect = GetComponent<RectTransform>();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_6 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575(L_7, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_canvasRect_24(L_8);
		// cGroup = GetComponent<CanvasGroup>();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_9 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_11 = Component_GetComponent_TisCanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_m7E8ADD0E80ACBD9FACB9074DEE3565237F1A88AA(L_10, /*hidden argument*/Component_GetComponent_TisCanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_m7E8ADD0E80ACBD9FACB9074DEE3565237F1A88AA_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_cGroup_23(L_11);
		// CreateDebugButton("Crash Game", ForceCrash, Color.red);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_12 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_13 = __this->get_U3CU3E4__this_2();
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_14 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_14, L_13, (intptr_t)((intptr_t)DebugMenu_ForceCrash_m66DCCEF9BBEB7F193F31FBFBDBE45BAE42D4225C_RuntimeMethod_var), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		NullCheck(L_12);
		DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364(L_12, _stringLiteralE745FE7D0106A0DAFD5C8CF69E1C78455C37943E, L_14, L_15, /*hidden argument*/NULL);
		// CreateDebugButton("Clear Save Data", ClearSaveData, Color.white);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_16 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_17 = __this->get_U3CU3E4__this_2();
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_18 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_18, L_17, (intptr_t)((intptr_t)DebugMenu_ClearSaveData_m6485E6EA1AD1F567187903C9590B44BAF5B8A772_RuntimeMethod_var), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_19 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_16);
		DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364(L_16, _stringLiteral88564BD571E32C04903846C04A4553D3BA048824, L_18, L_19, /*hidden argument*/NULL);
		// CreateDebugButton("SAVE Settings To Clipboard", CopySettingsToClipboard, Color.green);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_20 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_21 = __this->get_U3CU3E4__this_2();
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_22 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_22, L_21, (intptr_t)((intptr_t)DebugMenu_CopySettingsToClipboard_m2FD137231F5AA63D968065564F4D8C87CA251728_RuntimeMethod_var), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_23 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		NullCheck(L_20);
		DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364(L_20, _stringLiteral219394940266687AC7EC23D8A1E0860BE544AD14, L_22, L_23, /*hidden argument*/NULL);
		// CreateDebugButton("LOAD Settings From Clipboard", LoadSettingsFromClipboard, Color.cyan);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_24 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_25 = __this->get_U3CU3E4__this_2();
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_26 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_26, L_25, (intptr_t)((intptr_t)DebugMenu_LoadSettingsFromClipboard_m1D423EAC9EF73B0DECE22C0611A1670AC45D6ACE_RuntimeMethod_var), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_27 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		NullCheck(L_24);
		DebugMenu_CreateDebugButton_mD442850B52FE5BEA2D3C35CF7C35CC54BA796364(L_24, _stringLiteral3562C614309D5112677698660325AD1A1584349E, L_26, L_27, /*hidden argument*/NULL);
		// cGroup.interactable = false;
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_28 = __this->get_U3CU3E4__this_2();
		NullCheck(L_28);
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_29 = L_28->get_cGroup_23();
		NullCheck(L_29);
		CanvasGroup_set_interactable_m581B8D2D356BE1ABB2799DFD0EF53B8208D4DE96(L_29, (bool)0, /*hidden argument*/NULL);
		// canvas.enabled = false;
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_30 = __this->get_U3CU3E4__this_2();
		NullCheck(L_30);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_31 = L_30->get_canvas_22();
		NullCheck(L_31);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_31, (bool)0, /*hidden argument*/NULL);
		// debugMenuCreated?.Invoke();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_32 = ((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->get_debugMenuCreated_27();
		DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * L_33 = L_32;
		G_B8_0 = L_33;
		if (L_33)
		{
			G_B9_0 = L_33;
			goto IL_0130;
		}
	}
	{
		goto IL_0136;
	}

IL_0130:
	{
		NullCheck(G_B9_0);
		DebugMenuEvent_Invoke_m4650C73EAB02E4F25DB2A0FCA148F0E3D01BABB5(G_B9_0, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0146:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool overrideDataUsed = false;
		__this->set_U3CoverrideDataUsedU3E5__1_3((bool)0);
		// for (int i = 0; i < abTestGroups.Count; i++)
		__this->set_U3CiU3E5__2_4(0);
		goto IL_01ea;
	}

IL_0160:
	{
		// if (abTestGroups[i].testGroup == ABManager.CurrentABGroup)
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_34 = __this->get_U3CU3E4__this_2();
		NullCheck(L_34);
		List_1_t6F768299811391E2030E78481306FC3FE40004D0 * L_35 = L_34->get_abTestGroups_10();
		int32_t L_36 = __this->get_U3CiU3E5__2_4();
		NullCheck(L_35);
		ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C  L_37 = List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE(L_35, L_36, /*hidden argument*/List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE_RuntimeMethod_var);
		int32_t L_38 = L_37.get_testGroup_1();
		int32_t L_39 = ABManager_get_CurrentABGroup_m92AF392C05081A4A10DF1593A9BE643D0E14CE86(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_38) == ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_1;
		if (!L_40)
		{
			goto IL_01d9;
		}
	}
	{
		// LoadSettingsFromJSON(abTestGroups[i].JSONData, out defaultData);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_41 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		List_1_t6F768299811391E2030E78481306FC3FE40004D0 * L_43 = L_42->get_abTestGroups_10();
		int32_t L_44 = __this->get_U3CiU3E5__2_4();
		NullCheck(L_43);
		ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C  L_45 = List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE(L_43, L_44, /*hidden argument*/List_1_get_Item_m4F321B5B8A05B8738F048440D18C6FF5A1A58EAE_RuntimeMethod_var);
		String_t* L_46 = L_45.get_JSONData_0();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_47 = __this->get_U3CU3E4__this_2();
		NullCheck(L_47);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * L_48 = L_47->get_address_of_defaultData_9();
		NullCheck(L_41);
		DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696(L_41, L_46, (SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 *)L_48, /*hidden argument*/NULL);
		// SetSliderToData(defaultData);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_49 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_50 = __this->get_U3CU3E4__this_2();
		NullCheck(L_50);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_51 = L_50->get_defaultData_9();
		NullCheck(L_49);
		DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0(L_49, L_51, /*hidden argument*/NULL);
		// overrideDataUsed = true;
		__this->set_U3CoverrideDataUsedU3E5__1_3((bool)1);
	}

IL_01d9:
	{
		// for (int i = 0; i < abTestGroups.Count; i++)
		int32_t L_52 = __this->get_U3CiU3E5__2_4();
		V_2 = L_52;
		int32_t L_53 = V_2;
		__this->set_U3CiU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
	}

IL_01ea:
	{
		// for (int i = 0; i < abTestGroups.Count; i++)
		int32_t L_54 = __this->get_U3CiU3E5__2_4();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_55 = __this->get_U3CU3E4__this_2();
		NullCheck(L_55);
		List_1_t6F768299811391E2030E78481306FC3FE40004D0 * L_56 = L_55->get_abTestGroups_10();
		NullCheck(L_56);
		int32_t L_57 = List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C(L_56, /*hidden argument*/List_1_get_Count_mDEBD3D50D56CF8AF82CABEC339A2EC18F259416C_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_54) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_3;
		if (L_58)
		{
			goto IL_0160;
		}
	}
	{
		// if (!overrideDataUsed)
		bool L_59 = __this->get_U3CoverrideDataUsedU3E5__1_3();
		V_4 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_0273;
		}
	}
	{
		// if (useDefaultData && !defaultDataOveridden)
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_61 = __this->get_U3CU3E4__this_2();
		NullCheck(L_61);
		bool L_62 = L_61->get_useDefaultData_8();
		if (!L_62)
		{
			goto IL_0230;
		}
	}
	{
		bool L_63 = ((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->get_defaultDataOveridden_11();
		G_B20_0 = ((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		goto IL_0231;
	}

IL_0230:
	{
		G_B20_0 = 0;
	}

IL_0231:
	{
		V_5 = (bool)G_B20_0;
		bool L_64 = V_5;
		if (!L_64)
		{
			goto IL_0272;
		}
	}
	{
		// LoadSettingsFromJSON(defaultJSONObject, out defaultData);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_65 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_66 = __this->get_U3CU3E4__this_2();
		NullCheck(L_66);
		String_t* L_67 = L_66->get_defaultJSONObject_7();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_68 = __this->get_U3CU3E4__this_2();
		NullCheck(L_68);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * L_69 = L_68->get_address_of_defaultData_9();
		NullCheck(L_65);
		DebugMenu_LoadSettingsFromJSON_m92D233D6415EE825B574E8AED6D36DF6721CD696(L_65, L_67, (SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 *)L_69, /*hidden argument*/NULL);
		// SetSliderToData(defaultData);
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_70 = __this->get_U3CU3E4__this_2();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_71 = __this->get_U3CU3E4__this_2();
		NullCheck(L_71);
		SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7  L_72 = L_71->get_defaultData_9();
		NullCheck(L_70);
		DebugMenu_SetSliderToData_m5766972A6E22E823AF8549C53D08FA3D46DD1ED0(L_70, L_72, /*hidden argument*/NULL);
	}

IL_0272:
	{
	}

IL_0273:
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object Tastypill.Debug.DebugMenu_<Start>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3944715DC47DFC0E8C1C7F1A31D298282CAA5393 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Tastypill.Debug.DebugMenu_<Start>d__26::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__26_System_Collections_IEnumerator_Reset_mCABF33E9F41446079062EDA32A3DD951E594B954 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__26_System_Collections_IEnumerator_Reset_mCABF33E9F41446079062EDA32A3DD951E594B954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__26_System_Collections_IEnumerator_Reset_mCABF33E9F41446079062EDA32A3DD951E594B954_RuntimeMethod_var);
	}
}
// System.Object Tastypill.Debug.DebugMenu_<Start>d__26::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__26_System_Collections_IEnumerator_get_Current_mCF02CFDF9013029E706742EF8C5B8AF000E681F9 (U3CStartU3Ed__26_tE36C5DFA17D480ACF5F50F01E2ED8E3D967A2778 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: Tastypill.Debug.DebugMenu/ABGroupData
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_pinvoke(const ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C& unmarshaled, ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_pinvoke& marshaled)
{
	marshaled.___JSONData_0 = il2cpp_codegen_marshal_string(unmarshaled.get_JSONData_0());
	marshaled.___testGroup_1 = unmarshaled.get_testGroup_1();
}
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_pinvoke_back(const ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_pinvoke& marshaled, ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C& unmarshaled)
{
	unmarshaled.set_JSONData_0(il2cpp_codegen_marshal_string_result(marshaled.___JSONData_0));
	int32_t unmarshaled_testGroup_temp_1 = 0;
	unmarshaled_testGroup_temp_1 = marshaled.___testGroup_1;
	unmarshaled.set_testGroup_1(unmarshaled_testGroup_temp_1);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugMenu/ABGroupData
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_pinvoke_cleanup(ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___JSONData_0);
	marshaled.___JSONData_0 = NULL;
}
// Conversion methods for marshalling of: Tastypill.Debug.DebugMenu/ABGroupData
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_com(const ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C& unmarshaled, ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_com& marshaled)
{
	marshaled.___JSONData_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_JSONData_0());
	marshaled.___testGroup_1 = unmarshaled.get_testGroup_1();
}
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_com_back(const ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_com& marshaled, ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C& unmarshaled)
{
	unmarshaled.set_JSONData_0(il2cpp_codegen_marshal_bstring_result(marshaled.___JSONData_0));
	int32_t unmarshaled_testGroup_temp_1 = 0;
	unmarshaled_testGroup_temp_1 = marshaled.___testGroup_1;
	unmarshaled.set_testGroup_1(unmarshaled_testGroup_temp_1);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugMenu/ABGroupData
extern "C" void ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshal_com_cleanup(ABGroupData_t64DB9E2C7BD3A3CCC25F1B252394BD8B2BD9F46C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___JSONData_0);
	marshaled.___JSONData_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Tastypill.Debug.DebugMenu_DebugMenuEvent::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DebugMenuEvent__ctor_m0284F43958B49A5B5ECEADEE352E14F961BDE4E3 (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Tastypill.Debug.DebugMenu_DebugMenuEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void DebugMenuEvent_Invoke_m4650C73EAB02E4F25DB2A0FCA148F0E3D01BABB5 (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Tastypill.Debug.DebugMenu_DebugMenuEvent::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DebugMenuEvent_BeginInvoke_mB870D4F3F8841923ECE64465989FB1C4F9077BDD (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Tastypill.Debug.DebugMenu_DebugMenuEvent::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DebugMenuEvent_EndInvoke_m6A6E348E6D700A2C1F895FAD307E62C955A18198 (DebugMenuEvent_t7CF7E4A14E994641BBEC2248BD050B70FF2648CB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Tastypill.Debug.DebugMenu/SliderData
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_pinvoke(const SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7& unmarshaled, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sliderData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sliderData' of type 'SliderData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sliderData_0Exception, NULL, NULL);
}
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_pinvoke_back(const SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_pinvoke& marshaled, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7& unmarshaled)
{
	Exception_t* ___sliderData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sliderData' of type 'SliderData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sliderData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugMenu/SliderData
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_pinvoke_cleanup(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Tastypill.Debug.DebugMenu/SliderData
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_com(const SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7& unmarshaled, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_com& marshaled)
{
	Exception_t* ___sliderData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sliderData' of type 'SliderData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sliderData_0Exception, NULL, NULL);
}
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_com_back(const SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_com& marshaled, SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7& unmarshaled)
{
	Exception_t* ___sliderData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sliderData' of type 'SliderData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sliderData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugMenu/SliderData
extern "C" void SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshal_com_cleanup(SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7_marshaled_com& marshaled)
{
}
// System.Void Tastypill.Debug.DebugMenu_SliderData::.ctor(System.Collections.Generic.List`1<Tastypill.Debug.DebugSlider_JSONData>)
extern "C" IL2CPP_METHOD_ATTR void SliderData__ctor_mE62351437FEF8A8BBDC7E3291232F85BB671E06E (SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * __this, List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData0, const RuntimeMethod* method)
{
	{
		// this.sliderData = sliderData;
		List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * L_0 = ___sliderData0;
		__this->set_sliderData_0(L_0);
		// }
		return;
	}
}
extern "C"  void SliderData__ctor_mE62351437FEF8A8BBDC7E3291232F85BB671E06E_AdjustorThunk (RuntimeObject * __this, List_1_tDCCD5EA95C7124207FDBF021937826784BE2716E * ___sliderData0, const RuntimeMethod* method)
{
	SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 * _thisAdjusted = reinterpret_cast<SliderData_t834654B8EC85475FB602D5A6827FD7FAE1E7EBC7 *>(__this + 1);
	SliderData__ctor_mE62351437FEF8A8BBDC7E3291232F85BB671E06E(_thisAdjusted, ___sliderData0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tastypill.Debug.DebugSlider_JSONData Tastypill.Debug.DebugSlider::get_GetJSON()
extern "C" IL2CPP_METHOD_ATTR JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  DebugSlider_get_GetJSON_mA6FCB80DB65C71E1C1CEAD9EDFCECF3E688BBE8B (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, const RuntimeMethod* method)
{
	JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new JSONData(titleLabel.text, floatValue);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_titleLabel_5();
		NullCheck(L_0);
		String_t* L_1 = TMP_Text_get_text_m585E635D68DD2AD9C884A88658222AB7F84720FB(L_0, /*hidden argument*/NULL);
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_2 = __this->get_floatValue_4();
		float L_3 = DebugFloat_op_Implicit_mFC360F6DAF291E76E340C5C4D36F18E77B113199(L_2, /*hidden argument*/NULL);
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_4;
		memset(&L_4, 0, sizeof(L_4));
		JSONData__ctor_mA1FB6ACC687942509E32B30D0E6463A859A83C2D((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_5 = V_0;
		return L_5;
	}
}
// System.Void Tastypill.Debug.DebugSlider::LoadJSON(Tastypill.Debug.DebugSlider_JSONData)
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_LoadJSON_m4B162E6FB2B67503A250179B7D3DD1D3E06A973D (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  ___data0, const RuntimeMethod* method)
{
	{
		// slider.value = data.sliderValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_slider_9();
		JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823  L_1 = ___data0;
		float L_2 = L_1.get_sliderValue_1();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugSlider::Init(System.String,UnityEngine.Color,Tastypill.Debug.DebugFloat,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_Init_mA112267E76FE0B1B67A87756DC239BA371E85D80 (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, String_t* ___titleText0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___sliderColor1, DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * ___floatValue2, float ___maxValue3, float ___minValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugSlider_Init_mA112267E76FE0B1B67A87756DC239BA371E85D80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// titleLabel.text = titleText;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_titleLabel_5();
		String_t* L_1 = ___titleText0;
		NullCheck(L_0);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_0, L_1, /*hidden argument*/NULL);
		// sliderBG.color = new Color(sliderColor.r / 2f, sliderColor.g / 2f, sliderColor.b / 2f);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = __this->get_sliderBG_8();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___sliderColor1;
		float L_4 = L_3.get_r_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = ___sliderColor1;
		float L_6 = L_5.get_g_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = ___sliderColor1;
		float L_8 = L_7.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_9), ((float)((float)L_4/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), ((float)((float)L_8/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_9);
		// sliderHandle.color = sliderColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = __this->get_sliderHandle_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11 = ___sliderColor1;
		NullCheck(L_10);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// slider.maxValue = maxValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_12 = __this->get_slider_9();
		float L_13 = ___maxValue3;
		NullCheck(L_12);
		Slider_set_maxValue_m2CCC2B6906B140BE5C537BFC08CC8961342F92D8(L_12, L_13, /*hidden argument*/NULL);
		// slider.minValue = minValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_14 = __this->get_slider_9();
		float L_15 = ___minValue4;
		NullCheck(L_14);
		Slider_set_minValue_mDA0D477A52DA1A66497A4F46807D60A8040C0122(L_14, L_15, /*hidden argument*/NULL);
		// this.floatValue = floatValue;
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_16 = ___floatValue2;
		__this->set_floatValue_4(L_16);
		// if (PlayerPrefs.HasKey("DEBUG_"+ titleLabel.text))
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_17 = __this->get_titleLabel_5();
		NullCheck(L_17);
		String_t* L_18 = TMP_Text_get_text_m585E635D68DD2AD9C884A88658222AB7F84720FB(L_17, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral72A780534589758B37D47F39B73C3B3B778FC3A7, L_18, /*hidden argument*/NULL);
		bool L_20 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_00d8;
		}
	}
	{
		// float value = PlayerPrefs.GetFloat("DEBUG_" + titleLabel.text);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_22 = __this->get_titleLabel_5();
		NullCheck(L_22);
		String_t* L_23 = TMP_Text_get_text_m585E635D68DD2AD9C884A88658222AB7F84720FB(L_22, /*hidden argument*/NULL);
		String_t* L_24 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral72A780534589758B37D47F39B73C3B3B778FC3A7, L_23, /*hidden argument*/NULL);
		float L_25 = PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// slider.value = value;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_26 = __this->get_slider_9();
		float L_27 = V_1;
		NullCheck(L_26);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_26, L_27);
		// floatValue.UpdateValue(value);
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_28 = ___floatValue2;
		float L_29 = V_1;
		NullCheck(L_28);
		DebugFloat_UpdateValue_m5181F3C11E2F1A811C729EB3F9E6CD3CA61D2449(L_28, L_29, /*hidden argument*/NULL);
		// valueLabel.text = value.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_30 = __this->get_valueLabel_6();
		String_t* L_31 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_30);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00d8:
	{
		// slider.value = floatValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_32 = __this->get_slider_9();
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_33 = ___floatValue2;
		float L_34 = DebugFloat_op_Implicit_mFC360F6DAF291E76E340C5C4D36F18E77B113199(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_32, L_34);
		// valueLabel.text = floatValue.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_35 = __this->get_valueLabel_6();
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_36 = ___floatValue2;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		NullCheck(L_35);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_35, L_37, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugSlider::SaveFloatValue()
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_SaveFloatValue_m34A6C0023BC2F155F88BB440AD7DA58C22F09962 (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugSlider_SaveFloatValue_m34A6C0023BC2F155F88BB440AD7DA58C22F09962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("DEBUG_" + titleLabel.text, floatValue);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_titleLabel_5();
		NullCheck(L_0);
		String_t* L_1 = TMP_Text_get_text_m585E635D68DD2AD9C884A88658222AB7F84720FB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral72A780534589758B37D47F39B73C3B3B778FC3A7, L_1, /*hidden argument*/NULL);
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_3 = __this->get_floatValue_4();
		float L_4 = DebugFloat_op_Implicit_mFC360F6DAF291E76E340C5C4D36F18E77B113199(L_3, /*hidden argument*/NULL);
		PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugSlider::HandleSliderChanged(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DebugSlider_HandleSliderChanged_m6855FB45105D04706E6705BE4BCD171E4B171D2C (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugSlider_HandleSliderChanged_m6855FB45105D04706E6705BE4BCD171E4B171D2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (floatValue == null) return;
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_0 = __this->get_floatValue_4();
		V_0 = (bool)((((RuntimeObject*)(DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (floatValue == null) return;
		goto IL_003b;
	}

IL_0010:
	{
		// DebugMenu.instance.OverrideDefaultData();
		DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB * L_2 = ((DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_StaticFields*)il2cpp_codegen_static_fields_for(DebugMenu_t880A3DF9AC36C20F8DE05A4B9270E68636E8DEAB_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		DebugMenu_OverrideDefaultData_mB7F9F8556DE57ED82E3EEB110EBA279CD5792FA6(L_2, /*hidden argument*/NULL);
		// valueLabel.text = value.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_valueLabel_6();
		String_t* L_4 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&___value0), /*hidden argument*/NULL);
		NullCheck(L_3);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_3, L_4, /*hidden argument*/NULL);
		// floatValue.UpdateValue(value);
		DebugFloat_t2FD8B1F7AD8AC759C1DAD75B7CDE815FE4198A7F * L_5 = __this->get_floatValue_4();
		float L_6 = ___value0;
		NullCheck(L_5);
		DebugFloat_UpdateValue_m5181F3C11E2F1A811C729EB3F9E6CD3CA61D2449(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Tastypill.Debug.DebugSlider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugSlider__ctor_m60DDD032C8B7EFCAB7EFB6D0ABBDEA08D5748A64 (DebugSlider_t56497233EBD0EE8EA75B1F1343B429C627E1D560 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Tastypill.Debug.DebugSlider/JSONData
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_pinvoke(const JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823& unmarshaled, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_pinvoke& marshaled)
{
	marshaled.___sliderPref_0 = il2cpp_codegen_marshal_string(unmarshaled.get_sliderPref_0());
	marshaled.___sliderValue_1 = unmarshaled.get_sliderValue_1();
}
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_pinvoke_back(const JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_pinvoke& marshaled, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823& unmarshaled)
{
	unmarshaled.set_sliderPref_0(il2cpp_codegen_marshal_string_result(marshaled.___sliderPref_0));
	float unmarshaled_sliderValue_temp_1 = 0.0f;
	unmarshaled_sliderValue_temp_1 = marshaled.___sliderValue_1;
	unmarshaled.set_sliderValue_1(unmarshaled_sliderValue_temp_1);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugSlider/JSONData
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_pinvoke_cleanup(JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sliderPref_0);
	marshaled.___sliderPref_0 = NULL;
}
// Conversion methods for marshalling of: Tastypill.Debug.DebugSlider/JSONData
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_com(const JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823& unmarshaled, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_com& marshaled)
{
	marshaled.___sliderPref_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_sliderPref_0());
	marshaled.___sliderValue_1 = unmarshaled.get_sliderValue_1();
}
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_com_back(const JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_com& marshaled, JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823& unmarshaled)
{
	unmarshaled.set_sliderPref_0(il2cpp_codegen_marshal_bstring_result(marshaled.___sliderPref_0));
	float unmarshaled_sliderValue_temp_1 = 0.0f;
	unmarshaled_sliderValue_temp_1 = marshaled.___sliderValue_1;
	unmarshaled.set_sliderValue_1(unmarshaled_sliderValue_temp_1);
}
// Conversion method for clean up from marshalling of: Tastypill.Debug.DebugSlider/JSONData
extern "C" void JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshal_com_cleanup(JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___sliderPref_0);
	marshaled.___sliderPref_0 = NULL;
}
// System.Void Tastypill.Debug.DebugSlider_JSONData::.ctor(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void JSONData__ctor_mA1FB6ACC687942509E32B30D0E6463A859A83C2D (JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 * __this, String_t* ___sliderPref0, float ___sliderValue1, const RuntimeMethod* method)
{
	{
		// this.sliderPref = sliderPref;
		String_t* L_0 = ___sliderPref0;
		__this->set_sliderPref_0(L_0);
		// this.sliderValue = sliderValue;
		float L_1 = ___sliderValue1;
		__this->set_sliderValue_1(L_1);
		// }
		return;
	}
}
extern "C"  void JSONData__ctor_mA1FB6ACC687942509E32B30D0E6463A859A83C2D_AdjustorThunk (RuntimeObject * __this, String_t* ___sliderPref0, float ___sliderValue1, const RuntimeMethod* method)
{
	JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 * _thisAdjusted = reinterpret_cast<JSONData_t948971CCA2636195DE2C52EA08683EBAB90AB823 *>(__this + 1);
	JSONData__ctor_mA1FB6ACC687942509E32B30D0E6463A859A83C2D(_thisAdjusted, ___sliderPref0, ___sliderValue1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// IBoard UniClipboard::get_board()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (_board == null) {
		RuntimeObject* L_0 = ((UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_StaticFields*)il2cpp_codegen_static_fields_for(UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_il2cpp_TypeInfo_var))->get__board_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _board = new IOSBoard ();
		IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 * L_2 = (IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89 *)il2cpp_codegen_object_new(IOSBoard_t2E7B10EDFAEF170ED1F31C5A5BBFD49ECD16FB89_il2cpp_TypeInfo_var);
		IOSBoard__ctor_mC7BB8C09408953867B69235AC27E125990028612(L_2, /*hidden argument*/NULL);
		((UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_StaticFields*)il2cpp_codegen_static_fields_for(UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_il2cpp_TypeInfo_var))->set__board_0(L_2);
	}

IL_0019:
	{
		// return _board;
		RuntimeObject* L_3 = ((UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_StaticFields*)il2cpp_codegen_static_fields_for(UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6_il2cpp_TypeInfo_var))->get__board_0();
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UniClipboard::SetText(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniClipboard_SetText_m9408DBC0ABDF6BFB97ACFA3A6C634868C2B2DAF8 (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniClipboard_SetText_m9408DBC0ABDF6BFB97ACFA3A6C634868C2B2DAF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// board.SetText (str);
		RuntimeObject* L_0 = UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void IBoard::SetText(System.String) */, IBoard_t5292534945A48BE20FF78099BCECD6495137EB99_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.String UniClipboard::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* UniClipboard_GetText_m9524F1C395F00F4B320F5CBEC7A988F33D8BC7A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniClipboard_GetText_m9524F1C395F00F4B320F5CBEC7A988F33D8BC7A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return board.GetText ();
		RuntimeObject* L_0 = UniClipboard_get_board_m03DB1CC5F92840A2BA12ED220D951E00B456F16F(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String IBoard::GetText() */, IBoard_t5292534945A48BE20FF78099BCECD6495137EB99_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void UniClipboard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniClipboard__ctor_mA75B871041C21161DF5C128C21EB6EAC1898205F (UniClipboard_t4C9B7E50D13734BDB2FBB435FCF371C701665BD6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
