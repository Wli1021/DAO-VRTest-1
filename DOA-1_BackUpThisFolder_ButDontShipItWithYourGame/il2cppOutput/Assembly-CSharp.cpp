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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>
struct List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>
struct MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB;
// Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<System.Object>
struct MonoBehaviourSingletone_1_t0917097197418C261030F1CD4E1DAE109FDF920F;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.Gradient[]
struct GradientU5BU5D_t0C577E5F4C6B0B3E5E565B7F427161380E47B7D8;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Mixaill3d.Lamps.Scripts.Core.LampInfo[]
struct LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0;
// Mixaill3d.Lamps.Scripts.Core.LampsGroup[]
struct LampsGroupU5BU5D_t42CEBC830581095A471CA334E92A464324EF36F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Ray[]
struct RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// npcIndividual/NpcState[]
struct NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679;
// WaypointAssistant/WaypointGridType[,]
struct WaypointGridTypeU5BU2CU5D_tB33521D699D318E84F23819FE4BA4FC027DB9BE8;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// BaseProjector
struct BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime
struct ColorChangeOverTime_t7BF9B3E64047F5F76EFD34DBE14C36248BF0F102;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DiscoBall
struct DiscoBall_tBE029644F45F13AC938B7A8AFCD751C62BDD78A0;
// DiscoBalls
struct DiscoBalls_t5EF3FEE8D98AD3929EF2C111263C046FCAC1597E;
// Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime
struct EveryColorChangeOverTime_t7FE3532CCD77A56B0692B70E168F1C96CDF77580;
// System.Exception
struct Exception_t;
// FadeScreen
struct FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6;
// Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging
struct FromTextureColorChanging_tBE4E7394496F3A50974CDDAC853EA928D155B615;
// GameMenuManager
struct GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour
struct LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984;
// Mixaill3d.Lamps.Scripts.Core.LampsController
struct LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96;
// Mixaill3d.Lamps.Scripts.Core.LampsGroup
struct LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ProjectorSimpleRotation
struct ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneTransitionManager
struct SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging
struct SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaypointAssistant
struct WaypointAssistant_t04EC3BCBDD8169D44F91CBE34EED71F76A699793;
// npcFactory
struct npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5;
// npcIndividual
struct npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED;
// npcWaypointScript
struct npcWaypointScript_tB40BB5993E5ACF79D1FD78620EBB8B73B6683BE8;
// FadeScreen/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// SceneTransitionManager/<GoToSceneAsyncRountine>d__4
struct U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC;
// SceneTransitionManager/<GoToSceneRountine>d__2
struct U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9;
// npcIndividual/EnterStateFunction
struct EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F;
// npcIndividual/NpcState
struct NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA;
// npcIndividual/UpdateStateFunction
struct UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral055ABB8DDE2428110B840D8F281830E94ACEA3F4;
IL2CPP_EXTERN_C String_t* _stringLiteral09AD31BB675715E49F63087C555F604F0DA6CC19;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7B2A0774ABF7DC34F6916017B4A326452FF03B;
IL2CPP_EXTERN_C String_t* _stringLiteral1BF15D80DEE17A887A0DA539BD8BB0117D028B0A;
IL2CPP_EXTERN_C String_t* _stringLiteral2068A35A3A0D48D22565D7F197E08D3F759FE950;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8D4E18B4125DEAF6A38BCC338AAD9425B495DA;
IL2CPP_EXTERN_C String_t* _stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79;
IL2CPP_EXTERN_C String_t* _stringLiteral3F5B17D12F630C7B292CF0DA5E9FB8239B41BFD2;
IL2CPP_EXTERN_C String_t* _stringLiteral421E66F107FECC17A8771796E98648D4BA27DFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral4307092ABF2F84B0AE5F6A876F1EF5F9DEB555A7;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral485CC019B5FC0348C944C111CDD255AD66567584;
IL2CPP_EXTERN_C String_t* _stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E;
IL2CPP_EXTERN_C String_t* _stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E;
IL2CPP_EXTERN_C String_t* _stringLiteral4F032C7ADC026D5853A36B742B07A1B3EB7657B2;
IL2CPP_EXTERN_C String_t* _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379;
IL2CPP_EXTERN_C String_t* _stringLiteral5F6AF18275CC3446D3A729A8A61AC8F899008FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA3B34AD10A63275C867C6A4182EE973816A790;
IL2CPP_EXTERN_C String_t* _stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72;
IL2CPP_EXTERN_C String_t* _stringLiteral72A75D40D64112544BF22910A6DD1369C99B2199;
IL2CPP_EXTERN_C String_t* _stringLiteral7473D578D8345732693B4CA5617D6210F2E6FD45;
IL2CPP_EXTERN_C String_t* _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral95817A57B13E2E1C74DBF40A8478FFAD79B4FEC4;
IL2CPP_EXTERN_C String_t* _stringLiteral9678AAAD435F0ED7D71067BBE3C4B5CDEE4BED5D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBB139D9D3C4921258897D29BE5C2D8DC5FFA8E;
IL2CPP_EXTERN_C String_t* _stringLiteralA027ADE8F7F4A61E563810371CB236656C06117B;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D04ECD24876140112EEADEC5E31A7D76537684;
IL2CPP_EXTERN_C String_t* _stringLiteralA79813EB8711B0A02C76A8C4A762E2F3C352AFB1;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralB05AD58898A5E30A0C8845492EE07BA379E76E93;
IL2CPP_EXTERN_C String_t* _stringLiteralB435724C20B01102DBE3B91133F69C7D265495CE;
IL2CPP_EXTERN_C String_t* _stringLiteralB67719F1B37AA70DCA2723F92087EFA82443DC1E;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA353CDEEE7BCDEC454893D2A4F72C69EB3BD7D;
IL2CPP_EXTERN_C String_t* _stringLiteralC1BD6A5590985CD2E5E751138916CE01C900DA5C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5157482DBD0C0C4E639FE1878E0C0777830C391;
IL2CPP_EXTERN_C String_t* _stringLiteralD1429495C984B4CA7ED0CAAB1DDB3062F22E52C0;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D3C1F552537824991D7C6A8C6D687D3ADC9374;
IL2CPP_EXTERN_C String_t* _stringLiteralE21DA564782CA85C007E058707F65E5C2684389A;
IL2CPP_EXTERN_C String_t* _stringLiteralE41076DE905B6257CF3E409BC17A80909DC50F9E;
IL2CPP_EXTERN_C String_t* _stringLiteralE4B7B36C7390386165AC1B604747998797767520;
IL2CPP_EXTERN_C String_t* _stringLiteralE8929F32E187E0F82BB21015F1283D026739A234;
IL2CPP_EXTERN_C String_t* _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteralF4F788F29158E67285811BFACE8DEE1B207CBBA3;
IL2CPP_EXTERN_C String_t* _stringLiteralFD5799340930E961293AA8BCD24C2EAD6F41147F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m532538E61B25669B07C519914F5C1FAC0AA6E816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF67F4323DE71200ED4CF583B56C1467D2E2F5501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m33977C821C56D164816410B9C5E288509020D304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m7D461EB22627E733C6C4A280C4B62253196467C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m9FD249DFCDC68FBACABE4843F35B33C4D8B95FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LampBasicBehaviour_ProcessSingleLampBehaviour_mFE28277A86963CBCE65B32574A07FBE6B7A77151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBAE0B21637734C5B75830BDD0395150542182B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m956A8E4879A94E1E491C74AF1C105E0DE3F8D1AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m5029F36734FEAAC62B6ACE7350E3ADFF4E61DC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m31C7B8DC4C7D4C9F9CFD8A7B8279B41184E3061C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourSingletone_1__ctor_m4BFC575A987C38B5A1B0DF91DEE22C174D691872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourSingletone_1_get_Instance_m0B4FA5A8AC01307411DFED4E6EDCC015E1518DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGoToSceneAsyncRountineU3Ed__4_System_Collections_IEnumerator_Reset_m06E7B729FBC4585E31EB26EDBCF3BEB8281B9507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGoToSceneRountineU3Ed__2_System_Collections_IEnumerator_Reset_m69DB84EF085C1873FFAADB9F5F0CF777F216639C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_UpdateNewDestinationState_m4F10977C5ABD1740D6C142AA9BA8601EFDB6A0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_UpdatePausedState_mAA1230889621A2B4A7354BD6D05502561CF67750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_UpdateStartState_m7E8BC8FDC1751688AB4724C0711E81E752439BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* npcIndividual_UpdateTravelState_m5D1E2795A95C1B9ACDBFFE8D2F9CC0D4CBDF8AF2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct GradientU5BU5D_t0C577E5F4C6B0B3E5E565B7F427161380E47B7D8;
struct LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>
struct List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LampsGroupU5BU5D_t42CEBC830581095A471CA334E92A464324EF36F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// FadeScreen/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39  : public RuntimeObject
{
	// System.Int32 FadeScreen/<FadeRoutine>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeScreen/<FadeRoutine>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeScreen FadeScreen/<FadeRoutine>d__8::<>4__this
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* ___U3CU3E4__this_2;
	// System.Single FadeScreen/<FadeRoutine>d__8::alphaIn
	float ___alphaIn_3;
	// System.Single FadeScreen/<FadeRoutine>d__8::alphaOut
	float ___alphaOut_4;
	// System.Single FadeScreen/<FadeRoutine>d__8::<timer>5__2
	float ___U3CtimerU3E5__2_5;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// SceneTransitionManager/<GoToSceneAsyncRountine>d__4
struct U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC  : public RuntimeObject
{
	// System.Int32 SceneTransitionManager/<GoToSceneAsyncRountine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneTransitionManager/<GoToSceneAsyncRountine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SceneTransitionManager SceneTransitionManager/<GoToSceneAsyncRountine>d__4::<>4__this
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* ___U3CU3E4__this_2;
	// System.Int32 SceneTransitionManager/<GoToSceneAsyncRountine>d__4::sceneIndex
	int32_t ___sceneIndex_3;
	// UnityEngine.AsyncOperation SceneTransitionManager/<GoToSceneAsyncRountine>d__4::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_4;
	// System.Single SceneTransitionManager/<GoToSceneAsyncRountine>d__4::<timer>5__3
	float ___U3CtimerU3E5__3_5;
};

// SceneTransitionManager/<GoToSceneRountine>d__2
struct U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9  : public RuntimeObject
{
	// System.Int32 SceneTransitionManager/<GoToSceneRountine>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneTransitionManager/<GoToSceneRountine>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SceneTransitionManager SceneTransitionManager/<GoToSceneRountine>d__2::<>4__this
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* ___U3CU3E4__this_2;
	// System.Int32 SceneTransitionManager/<GoToSceneRountine>d__2::sceneIndex
	int32_t ___sceneIndex_3;
};

// npcIndividual/NpcState
struct NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA  : public RuntimeObject
{
	// System.String npcIndividual/NpcState::stateName
	String_t* ___stateName_0;
	// npcIndividual/EnterStateFunction npcIndividual/NpcState::enterStateFn
	EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* ___enterStateFn_1;
	// npcIndividual/UpdateStateFunction npcIndividual/NpcState::updateStateFn
	UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* ___updateStateFn_2;
};

// System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>
struct Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ____current_3;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// Mixaill3d.Lamps.Scripts.Core.LampInfo
struct LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E 
{
	// UnityEngine.Light Mixaill3d.Lamps.Scripts.Core.LampInfo::<Light>k__BackingField
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___U3CLightU3Ek__BackingField_0;
	// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::<Renderer>k__BackingField
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CRendererU3Ek__BackingField_1;
	// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::<LightCone>k__BackingField
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CLightConeU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of Mixaill3d.Lamps.Scripts.Core.LampInfo
struct LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_pinvoke
{
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___U3CLightU3Ek__BackingField_0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CRendererU3Ek__BackingField_1;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CLightConeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Mixaill3d.Lamps.Scripts.Core.LampInfo
struct LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_com
{
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___U3CLightU3Ek__BackingField_0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CRendererU3Ek__BackingField_1;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CLightConeU3Ek__BackingField_2;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B 
{
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour
struct LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// npcIndividual/EnterStateFunction
struct EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F  : public MulticastDelegate_t
{
};

// npcIndividual/UpdateStateFunction
struct UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime
struct ColorChangeOverTime_t7BF9B3E64047F5F76EFD34DBE14C36248BF0F102  : public LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984
{
	// UnityEngine.Gradient Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime::_gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ____gradient_4;
};

// Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime
struct EveryColorChangeOverTime_t7FE3532CCD77A56B0692B70E168F1C96CDF77580  : public LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984
{
	// UnityEngine.Gradient[] Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime::_gradients
	GradientU5BU5D_t0C577E5F4C6B0B3E5E565B7F427161380E47B7D8* ____gradients_4;
};

// Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging
struct FromTextureColorChanging_tBE4E7394496F3A50974CDDAC853EA928D155B615  : public LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984
{
	// System.Int32 Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging::_frameWidth
	int32_t ____frameWidth_4;
	// System.Int32 Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging::_frameHeight
	int32_t ____frameHeight_5;
	// UnityEngine.Texture2D Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging
struct SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788  : public LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984
{
	// System.Int32 Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::_frameWidth
	int32_t ____frameWidth_4;
	// System.Int32 Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::_frameHeight
	int32_t ____frameHeight_5;
	// UnityEngine.Texture2D Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_6;
};

// Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>
struct MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BaseProjector
struct BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BaseProjector::bracket
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bracket_4;
	// UnityEngine.Transform BaseProjector::body
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___body_5;
};

// FadeScreen
struct FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FadeScreen::fadeOnStart
	bool ___fadeOnStart_4;
	// System.Single FadeScreen::fadeDuration
	float ___fadeDuration_5;
	// UnityEngine.Color FadeScreen::fadeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fadeColor_6;
	// UnityEngine.Renderer FadeScreen::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_7;
};

// GameMenuManager
struct GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform GameMenuManager::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_4;
	// System.Single GameMenuManager::spawnDistance
	float ___spawnDistance_5;
	// UnityEngine.GameObject GameMenuManager::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_6;
	// UnityEngine.InputSystem.InputActionProperty GameMenuManager::showButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___showButton_7;
};

// Mixaill3d.Lamps.Scripts.Core.LampsGroup
struct LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour Mixaill3d.Lamps.Scripts.Core.LampsGroup::_behaviour
	LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* ____behaviour_4;
	// System.Single Mixaill3d.Lamps.Scripts.Core.LampsGroup::_timeOffset
	float ____timeOffset_5;
	// System.Single Mixaill3d.Lamps.Scripts.Core.LampsGroup::_speed
	float ____speed_6;
	// UnityEngine.GameObject[] Mixaill3d.Lamps.Scripts.Core.LampsGroup::_lamps
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____lamps_7;
	// Mixaill3d.Lamps.Scripts.Core.LampInfo[] Mixaill3d.Lamps.Scripts.Core.LampsGroup::_lampInfos
	LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* ____lampInfos_8;
	// Mixaill3d.Lamps.Scripts.Core.LampsController Mixaill3d.Lamps.Scripts.Core.LampsGroup::_lampsController
	LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* ____lampsController_9;
};

// SceneTransitionManager
struct SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FadeScreen SceneTransitionManager::fadeScreen
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* ___fadeScreen_4;
};

// WaypointAssistant
struct WaypointAssistant_t04EC3BCBDD8169D44F91CBE34EED71F76A699793  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WaypointAssistant::agentRadius
	float ___agentRadius_4;
	// UnityEngine.Bounds WaypointAssistant::navMeshBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___navMeshBounds_5;
	// WaypointAssistant/WaypointGridType[,] WaypointAssistant::_waypointGrid
	WaypointGridTypeU5BU2CU5D_tB33521D699D318E84F23819FE4BA4FC027DB9BE8* ____waypointGrid_6;
	// System.Int32 WaypointAssistant::gridXSize
	int32_t ___gridXSize_7;
	// System.Int32 WaypointAssistant::gridYSize
	int32_t ___gridYSize_8;
	// UnityEngine.GameObject WaypointAssistant::waypoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waypoint_9;
	// UnityEngine.Transform WaypointAssistant::waypointParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___waypointParent_10;
	// System.Int32 WaypointAssistant::navMeshMask
	int32_t ___navMeshMask_11;
	// System.Boolean WaypointAssistant::hasTerrain
	bool ___hasTerrain_12;
	// System.Single WaypointAssistant::groundLevel
	float ___groundLevel_13;
	// System.Single WaypointAssistant::waypointElevation
	float ___waypointElevation_14;
	// System.Single WaypointAssistant::corridorDistance
	float ___corridorDistance_15;
	// System.Single WaypointAssistant::navMeshProbe
	float ___navMeshProbe_16;
	// System.Boolean WaypointAssistant::enableInteractive
	bool ___enableInteractive_17;
	// System.Int32 WaypointAssistant::minSquareSize
	int32_t ___minSquareSize_18;
	// System.Boolean WaypointAssistant::drawGizmos
	bool ___drawGizmos_19;
	// System.Int32 WaypointAssistant::skipFrames
	int32_t ___skipFrames_20;
	// System.Int32 WaypointAssistant::gridResolution
	int32_t ___gridResolution_21;
	// System.Boolean WaypointAssistant::waypointsFromTerminus
	bool ___waypointsFromTerminus_22;
	// System.Boolean WaypointAssistant::calculatingSubset
	bool ___calculatingSubset_23;
	// System.Boolean WaypointAssistant::waypointsGenerated
	bool ___waypointsGenerated_24;
	// System.Int32 WaypointAssistant::gridCount
	int32_t ___gridCount_25;
	// System.Single WaypointAssistant::gizmoDrawTime
	float ___gizmoDrawTime_26;
	// System.Single WaypointAssistant::gridResetTime
	float ___gridResetTime_27;
	// System.Single WaypointAssistant::gridCalcTime
	float ___gridCalcTime_28;
	// System.Single WaypointAssistant::waypointGenTime
	float ___waypointGenTime_29;
	// System.Single WaypointAssistant::gizmoSizeFactor
	float ___gizmoSizeFactor_30;
	// UnityEngine.Vector3 WaypointAssistant::_gizmoSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____gizmoSize_31;
	// UnityEngine.Camera WaypointAssistant::sceneCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___sceneCamera_32;
	// UnityEngine.Transform WaypointAssistant::sceneCameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sceneCameraTransform_33;
	// System.Single WaypointAssistant::sceneFieldOfView
	float ___sceneFieldOfView_34;
	// System.Single WaypointAssistant::sceneAspectRatio
	float ___sceneAspectRatio_35;
	// UnityEngine.Ray[] WaypointAssistant::_frustumRays
	RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419* ____frustumRays_36;
	// UnityEngine.Rect WaypointAssistant::groundProjection
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___groundProjection_37;
	// System.Boolean WaypointAssistant::gridCalcPerfWarning
	bool ___gridCalcPerfWarning_38;
	// System.Boolean WaypointAssistant::gizmoDrawPerfWarning
	bool ___gizmoDrawPerfWarning_39;
	// System.Boolean WaypointAssistant::developerMode
	bool ___developerMode_42;
};

// npcFactory
struct npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> npcFactory::npcModels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___npcModels_4;
	// UnityEngine.RuntimeAnimatorController npcFactory::animatorController
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___animatorController_5;
	// UnityEngine.GameObject npcFactory::waypointParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waypointParent_6;
	// UnityEngine.Bounds npcFactory::navMeshBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___navMeshBounds_7;
	// System.Single npcFactory::navMeshRange
	float ___navMeshRange_8;
	// System.Int32 npcFactory::navMeshMask
	int32_t ___navMeshMask_9;
	// UnityEngine.Transform npcFactory::npcParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___npcParent_10;
	// System.Single npcFactory::usualSpeed
	float ___usualSpeed_11;
	// System.Single npcFactory::usualSpeedVariation
	float ___usualSpeedVariation_12;
	// System.Single npcFactory::agentStoppingDistance
	float ___agentStoppingDistance_13;
	// System.Single npcFactory::npcRadius
	float ___npcRadius_14;
	// System.Single npcFactory::stoppingDistance
	float ___stoppingDistance_15;
	// System.Int32 npcFactory::minFramesToWait
	int32_t ___minFramesToWait_16;
	// System.Int32 npcFactory::maxFramesToWait
	int32_t ___maxFramesToWait_17;
	// System.Single npcFactory::range
	float ___range_18;
	// System.Boolean npcFactory::limitRange
	bool ___limitRange_19;
	// System.Int32 npcFactory::numberToCreate
	int32_t ___numberToCreate_20;
	// System.Boolean npcFactory::disableLights
	bool ___disableLights_21;
};

// npcIndividual
struct npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject npcIndividual::waypointParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waypointParent_4;
	// System.Boolean npcIndividual::limitRange
	bool ___limitRange_5;
	// System.Single npcIndividual::range
	float ___range_6;
	// System.Int32 npcIndividual::minFramesToWait
	int32_t ___minFramesToWait_7;
	// System.Int32 npcIndividual::maxFramesToWait
	int32_t ___maxFramesToWait_8;
	// System.Single npcIndividual::usualSpeed
	float ___usualSpeed_9;
	// UnityEngine.Animator npcIndividual::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
	// UnityEngine.AI.NavMeshAgent npcIndividual::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_11;
	// System.Single npcIndividual::currentVelocity
	float ___currentVelocity_16;
	// System.Single npcIndividual::agentSpeed
	float ___agentSpeed_17;
	// UnityEngine.Vector3 npcIndividual::currentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPosition_18;
	// UnityEngine.Vector3 npcIndividual::nextPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextPosition_19;
	// UnityEngine.Vector3 npcIndividual::deltaPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___deltaPosition_20;
	// UnityEngine.Vector3 npcIndividual::currentForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentForward_21;
	// UnityEngine.Vector3 npcIndividual::nextForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextForward_22;
	// System.Single npcIndividual::prevDeltaForward
	float ___prevDeltaForward_23;
	// System.Single npcIndividual::currDeltaForward
	float ___currDeltaForward_24;
	// UnityEngine.Vector2 npcIndividual::agentVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___agentVelocity_25;
	// System.Single npcIndividual::dxAgent
	float ___dxAgent_26;
	// System.Single npcIndividual::dyAgent
	float ___dyAgent_27;
	// System.Single npcIndividual::vxAgent
	float ___vxAgent_28;
	// System.Single npcIndividual::vyAgent
	float ___vyAgent_29;
	// UnityEngine.Vector2 npcIndividual::nextPosition2D
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___nextPosition2D_30;
	// System.Single npcIndividual::stoppingDistance
	float ___stoppingDistance_31;
	// UnityEngine.Vector3 npcIndividual::currAnimPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currAnimPosition_32;
	// UnityEngine.Vector2 npcIndividual::currAnimPosition2D
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currAnimPosition2D_33;
	// UnityEngine.Vector2 npcIndividual::agentAnimOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___agentAnimOffset_34;
	// System.Single npcIndividual::agentAnimOffsetMagnitude
	float ___agentAnimOffsetMagnitude_35;
	// System.Single npcIndividual::currentSpeed
	float ___currentSpeed_36;
	// System.Single npcIndividual::targetSpeed
	float ___targetSpeed_37;
	// System.Single npcIndividual::smoothDampVelocity
	float ___smoothDampVelocity_38;
	// UnityEngine.Vector3 npcIndividual::invalidVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___invalidVector_39;
	// System.DateTime npcIndividual::pathTimerStart
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___pathTimerStart_40;
	// System.Boolean npcIndividual::pathTiming
	bool ___pathTiming_41;
	// System.TimeSpan npcIndividual::timeToCalcPathTS
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeToCalcPathTS_42;
	// System.DateTime npcIndividual::destTimerStart
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___destTimerStart_43;
	// System.Boolean npcIndividual::destTiming
	bool ___destTiming_44;
	// System.TimeSpan npcIndividual::timeForNewDestTS
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeForNewDestTS_45;
	// System.Int32 npcIndividual::numFrames
	int32_t ___numFrames_46;
	// System.Int32 npcIndividual::numFramesToWait
	int32_t ___numFramesToWait_47;
	// System.String npcIndividual::curState
	String_t* ___curState_48;
	// UnityEngine.Vector3 npcIndividual::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_49;
	// System.Boolean npcIndividual::hasPath
	bool ___hasPath_50;
	// System.Single npcIndividual::distance
	float ___distance_51;
	// System.String npcIndividual::timeToCalcPath
	String_t* ___timeToCalcPath_52;
	// System.String npcIndividual::timeForNewDest
	String_t* ___timeForNewDest_53;
	// System.String npcIndividual::traceString
	String_t* ___traceString_54;
	// System.Boolean npcIndividual::debugFSM
	bool ___debugFSM_55;
	// npcIndividual/NpcState[] npcIndividual::myStates
	NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* ___myStates_56;
};

// npcWaypointScript
struct npcWaypointScript_tB40BB5993E5ACF79D1FD78620EBB8B73B6683BE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single npcWaypointScript::gizmoRadius
	float ___gizmoRadius_4;
};

// DiscoBall
struct DiscoBall_tBE029644F45F13AC938B7A8AFCD751C62BDD78A0  : public BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5
{
	// System.Single DiscoBall::rotationSpeed
	float ___rotationSpeed_6;
};

// DiscoBalls
struct DiscoBalls_t5EF3FEE8D98AD3929EF2C111263C046FCAC1597E  : public BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5
{
	// System.Single DiscoBalls::spinSpeed
	float ___spinSpeed_6;
	// System.Single DiscoBalls::ballSpeed
	float ___ballSpeed_7;
	// UnityEngine.Transform DiscoBalls::left
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___left_8;
	// UnityEngine.Transform DiscoBalls::right
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___right_9;
};

// Mixaill3d.Lamps.Scripts.Core.LampsController
struct LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96  : public MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB
{
	// System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup> Mixaill3d.Lamps.Scripts.Core.LampsController::_lampsGroups
	List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* ____lampsGroups_5;
};

// ProjectorSimpleRotation
struct ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49  : public BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5
{
	// System.Single ProjectorSimpleRotation::bodyRotationSpeed
	float ___bodyRotationSpeed_6;
	// System.Single ProjectorSimpleRotation::bodyRotationAngle
	float ___bodyRotationAngle_7;
	// System.Single ProjectorSimpleRotation::spinSpeed
	float ___spinSpeed_8;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>
struct List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LampsGroupU5BU5D_t42CEBC830581095A471CA334E92A464324EF36F2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// FadeScreen/<FadeRoutine>d__8

// FadeScreen/<FadeRoutine>d__8

// Readme/Section

// Readme/Section

// SceneTransitionManager/<GoToSceneAsyncRountine>d__4

// SceneTransitionManager/<GoToSceneAsyncRountine>d__4

// SceneTransitionManager/<GoToSceneRountine>d__2

// SceneTransitionManager/<GoToSceneRountine>d__2

// npcIndividual/NpcState

// npcIndividual/NpcState

// System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>

// System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputBinding

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

// Mixaill3d.Lamps.Scripts.Core.LampInfo

// Mixaill3d.Lamps.Scripts.Core.LampInfo

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Gradient

// UnityEngine.Gradient

// UnityEngine.AI.NavMeshHit

// UnityEngine.AI.NavMeshHit

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour

// Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// npcIndividual/EnterStateFunction

// npcIndividual/EnterStateFunction

// npcIndividual/UpdateStateFunction

// npcIndividual/UpdateStateFunction

// UnityEngine.Animator

// UnityEngine.Animator

// Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime

// Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime

// Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime

// Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime

// Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging

// Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging

// Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging

// Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>
struct MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB_StaticFields
{
	// T Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1::_instance
	LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* ____instance_4;
};

// Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>

// BaseProjector

// BaseProjector

// FadeScreen

// FadeScreen

// GameMenuManager

// GameMenuManager

// Mixaill3d.Lamps.Scripts.Core.LampsGroup

// Mixaill3d.Lamps.Scripts.Core.LampsGroup

// SceneTransitionManager

// SceneTransitionManager

// WaypointAssistant

// WaypointAssistant

// npcFactory

// npcFactory

// npcIndividual

// npcIndividual

// npcWaypointScript

// npcWaypointScript

// DiscoBall

// DiscoBall

// DiscoBalls

// DiscoBalls

// Mixaill3d.Lamps.Scripts.Core.LampsController

// Mixaill3d.Lamps.Scripts.Core.LampsController

// ProjectorSimpleRotation

// ProjectorSimpleRotation
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// npcIndividual/NpcState[]
struct NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679  : public RuntimeArray
{
	ALIGN_FIELD (8) NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* m_Items[1];

	inline NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Ray[]
struct RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419  : public RuntimeArray
{
	ALIGN_FIELD (8) Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 m_Items[1];

	inline Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 value)
	{
		m_Items[index] = value;
	}
};
// Mixaill3d.Lamps.Scripts.Core.LampInfo[]
struct LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0  : public RuntimeArray
{
	ALIGN_FIELD (8) LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E m_Items[1];

	inline LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLightU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CRendererU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLightConeU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
	inline LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLightU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CRendererU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLightConeU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Gradient[]
struct GradientU5BU5D_t0C577E5F4C6B0B3E5E565B7F427161380E47B7D8  : public RuntimeArray
{
	ALIGN_FIELD (8) Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* m_Items[1];

	inline Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* value)
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourSingletone_1__ctor_mC9234955F9250E72DB55CD3A9DFBC3542C2E7068_gshared (MonoBehaviourSingletone_1_t0917097197418C261030F1CD4E1DAE109FDF920F* __this, const RuntimeMethod* method) ;
// T Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoBehaviourSingletone_1_get_Instance_m810475798BBAF737F1BDA31720261C44D96106A9_gshared (const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FadeScreen::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) ;
// System.Void FadeScreen::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeScreen::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void FadeScreen/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___1_hit, float ___2_maxDistance, int32_t ___3_areaMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_SetMinMax_mB5F7DDF18EDB7F3F25FA6D2B36824F28978C540F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_min, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshHit::get_hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshHit_get_hit_m0D3EB9A3D6C24F769F3B994DC7326254B64EDD8E (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_positiveInfinity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_positiveInfinity_mE0C7AA87B375383EA62F6084761DAE8197147D23_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 npcFactory::RandomPointOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcFactory_RandomPointOnNavMesh_m10AC7A6AFBFA7E494EDB52A973C2A631ACAF9B0F (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) ;
// System.Boolean npcFactory::OccupiedPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool npcFactory_OccupiedPoint_m6BED0FB1C24D2F7EB90606DB348377EA841E5F4C (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_candidatePos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 npcFactory::RandomUnoccupiedPointOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcFactory_RandomUnoccupiedPointOnNavMesh_mF2E1AA300BA3CFCF4F4C27C24A00261A165E69A9 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::AddComponent<npcIndividual>()
inline npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* GameObject_AddComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m7D461EB22627E733C6C4A280C4B62253196467C5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<npcIndividual>()
inline npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* GameObject_GetComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m9FD249DFCDC68FBACABE4843F35B33C4D8B95FC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_avoidancePriority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_radius_m34F08DD2BD01A5DDA17FE1B02EE03D361B44F1AC (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void npcIndividual/EnterStateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3 (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void npcIndividual/UpdateStateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void npcIndividual/NpcState::.ctor(System.String,npcIndividual/EnterStateFunction,npcIndividual/UpdateStateFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* __this, String_t* ___0_nm, EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* ___1_enterfn, UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* ___2_updatefn, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::EnterStartState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::CoordinateAnimationAndNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_CoordinateAnimationAndNavigation_m6E33ED16FBFCA5FAF7A216A8040C4E8E9823E07D (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::AdjustSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_AdjustSpeed_m903E377F7269B67FFFD5434FB116D361F7E41FDF (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::FsmUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_FsmUpdate_m4A1D197883E216797535B42BA829200A1CD02ED4 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_nextPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_nextPosition_m2EA2776CDA9032AE13B697C0F2FC2DD1194307BE (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_radius_m33C1D18A2605A958FE9E93F04981EB17FADE5957 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_rootPosition_m952907486F631E7E8E0384AE7CE86D92BB3C6E71 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void npcIndividual/UpdateStateFunction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_inline (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void npcIndividual::EnterNewDestinationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::SetSpeed(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_SetSpeed_mB68DF1EAD965F35205A8A7F66A5C96A353E21FA1 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, float ___0_newTargetSpeed, bool ___1_force, const RuntimeMethod* method) ;
// System.Single npcIndividual::GetDistanceToDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float npcIndividual_GetDistanceToDestination_m2E6EDDFD01DA94DBC5B4136F92A85B6ED569A59F (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::EnterPausedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 npcIndividual::GetAWaypoint(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcIndividual_GetAWaypoint_mB950C011239E2364F2E66ABC2F927A6BB012A071 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_omit, float ___1_angMin, float ___2_angMax, const RuntimeMethod* method) ;
// System.Void npcIndividual::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_SetDestination_m631893C8653F203C2F55884F21D0EB6F04678268 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newDest, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m5B50613FCD29547F04EAE305B2226CB9F490C432 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_hasPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void npcIndividual::EnterTravelState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneRountine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneRountine_mF19F80F9D4963114F8BADAACE90B79ABC3329DB4 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) ;
// System.Void SceneTransitionManager/<GoToSceneRountine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRountineU3Ed__2__ctor_mEADFA1C14B388A7B6EC7842E019F9A076B718E4C (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneAsyncRountine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneAsyncRountine_mD375F28FFF7CE058F333AB50035A3E402CB74393 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) ;
// System.Void SceneTransitionManager/<GoToSceneAsyncRountine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneAsyncRountineU3Ed__4__ctor_mD4213E707A9DAA6933063079E633FB0BFBA5AA6F (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FadeScreen::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void BaseProjector::ObjectRotation(UnityEngine.Transform,System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB (BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_objectToRotate, float ___1_speed, bool ___2_x, bool ___3_y, bool ___4_z, const RuntimeMethod* method) ;
// System.Void BaseProjector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseProjector__ctor_m1CFC66D3ABC64AD9AB6245846C4AACE932A8BB04 (BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5* __this, const RuntimeMethod* method) ;
// System.Void ProjectorSimpleRotation::SimpleBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_SimpleBehavior_m78BB34213440EEA9EDAB9E14299D1B1DF81D7A91 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) ;
// System.Void ProjectorSimpleRotation::BodyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_BodyRotation_m6FCA72E465513E0893615C4A9D320BDDA2881235 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::get_Renderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) ;
// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::get_LightCone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::SetMaterialColor(UnityEngine.Color,UnityEngine.Renderer,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_SetMaterialColor_mADA2A2D76349332C9B653875B9DF35BA29425017 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___1_renderer, String_t* ___2_colorName, bool ___3_changeAlpha, const RuntimeMethod* method) ;
// UnityEngine.Light Mixaill3d.Lamps.Scripts.Core.LampInfo::get_Light()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::Add(T)
inline void List_1_Add_mBAE0B21637734C5B75830BDD0395150542182B0F_inline (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F*, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::Remove(T)
inline bool List_1_Remove_m5029F36734FEAAC62B6ACE7350E3ADFF4E61DC54 (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F*, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::GetEnumerator()
inline Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01 List_1_GetEnumerator_m956A8E4879A94E1E491C74AF1C105E0DE3F8D1AF (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01 (*) (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::Dispose()
inline void Enumerator_Dispose_m532538E61B25669B07C519914F5C1FAC0AA6E816 (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::get_Current()
inline LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* Enumerator_get_Current_m33977C821C56D164816410B9C5E288509020D304_inline (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01* __this, const RuntimeMethod* method)
{
	return ((  LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* (*) (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::UpdateLightning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_UpdateLightning_m55EB9C830D64AE455482CDB249A2CDB3DFB795A1 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::MoveNext()
inline bool Enumerator_MoveNext_mF67F4323DE71200ED4CF583B56C1467D2E2F5501 (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mixaill3d.Lamps.Scripts.Core.LampsGroup>::.ctor()
inline void List_1__ctor_m31C7B8DC4C7D4C9F9CFD8A7B8279B41184E3061C (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>::.ctor()
inline void MonoBehaviourSingletone_1__ctor_m4BFC575A987C38B5A1B0DF91DEE22C174D691872 (MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoBehaviourSingletone_1_t44049ECB33ACB9840E48E31D9D906D31818637CB*, const RuntimeMethod*))MonoBehaviourSingletone_1__ctor_mC9234955F9250E72DB55CD3A9DFBC3542C2E7068_gshared)(__this, method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::FindLamps(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_FindLamps_m1CC9E67009A81EFFF0D3671EA73227C102572DB0 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_result, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampInfo__ctor_m5BF8684E663F9557F4B8465F810835D159B31C21 (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::InitializeLamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_InitializeLamps_m2378CC25136CEDA219CF863770FC99D24703E36F (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) ;
// T Mixaill3d.Lamps.Scripts.Core.MonoBehaviourSingletone`1<Mixaill3d.Lamps.Scripts.Core.LampsController>::get_Instance()
inline LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* MonoBehaviourSingletone_1_get_Instance_m0B4FA5A8AC01307411DFED4E6EDCC015E1518DE2 (const RuntimeMethod* method)
{
	return ((  LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* (*) (const RuntimeMethod*))MonoBehaviourSingletone_1_get_Instance_m810475798BBAF737F1BDA31720261C44D96106A9_gshared)(method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::RegisterGroup(Mixaill3d.Lamps.Scripts.Core.LampsGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController_RegisterGroup_m38ACC45A6FFA6C148884B24DF9A74B7DA2C9AE9E (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_lampsGroup, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::UnregisterGroup(Mixaill3d.Lamps.Scripts.Core.LampsGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController_UnregisterGroup_m42502BE3A4E02135E4ABA2A2DB9AEE8AA8FDFD68 (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_lampsGroup, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> Mixaill3d.Lamps.Scripts.Core.LampsGroup::FindLamps(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* LampsGroup_FindLamps_m1BC10A41C74C0D45B92A8EB0B673C5452880FD53 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::BuildLampsInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_BuildLampsInfos_mB93A1492359551EE00A38BEEB5AA93131AFBD3B2 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_Light(UnityEngine.Light)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_value, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_Renderer(UnityEngine.Renderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_LightCone(UnityEngine.Renderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Single Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::GetCurrentTime(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, float ___0_timeOffset, float ___1_speed, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::SetColor(Mixaill3d.Lamps.Scripts.Core.LampInfo,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Color Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::GetColor(UnityEngine.Renderer,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SmoothFromTextureColorChanging_GetColor_mF226F6E29ACF4A2B2992773F0F21EC945FBA626F (SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, int32_t ___1_currentFrame, int32_t ___2_frameAmountX, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void FadeScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Start_m88434E048DDF7C1FE7E87A9E62AFF24FB0A3B460 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_7), (void*)L_0);
		// if (fadeOnStart)
		bool L_1 = __this->___fadeOnStart_4;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// FadeIn();
		FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void FadeScreen::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// Fade(1, 0);
		FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53(__this, (1.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void FadeScreen::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// Fade(0, 1);
		FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53(__this, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void FadeScreen::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeRoutine(alphaIn, alphaOut));
		float L_0 = ___0_alphaIn;
		float L_1 = ___1_alphaOut;
		RuntimeObject* L_2;
		L_2 = FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48(__this, L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeScreen::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_0 = (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39*)il2cpp_codegen_object_new(U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185(L_0, 0, NULL);
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_2 = L_1;
		float L_3 = ___0_alphaIn;
		NullCheck(L_2);
		L_2->___alphaIn_3 = L_3;
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_4 = L_2;
		float L_5 = ___1_alphaOut;
		NullCheck(L_4);
		L_4->___alphaOut_4 = L_5;
		return L_4;
	}
}
// System.Void FadeScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen__ctor_m28EB8D0FD9EEE180295812ECB98BC7AB15B47772 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// public bool fadeOnStart = true;
		__this->___fadeOnStart_4 = (bool)1;
		// public float fadeDuration = 1;
		__this->___fadeDuration_5 = (1.0f);
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
// System.Void FadeScreen/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeScreen/<FadeRoutine>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_IDisposable_Dispose_mC790BA8544738CB9A3834251A079D38473BDCCF4 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeScreen/<FadeRoutine>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeRoutineU3Ed__8_MoveNext_m1E136E26563F51185235B02DED3BDCAB0F6CFE58 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0;
		__this->___U3CtimerU3E5__2_5 = (0.0f);
		goto IL_0096;
	}

IL_002b:
	{
		// Color newColor = fadeColor;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_4 = V_1;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___fadeColor_6;
		V_3 = L_5;
		// newColor.a = Mathf.Lerp(alphaIn, alphaOut, timer / fadeDuration);
		float L_6 = __this->___alphaIn_3;
		float L_7 = __this->___alphaOut_4;
		float L_8 = __this->___U3CtimerU3E5__2_5;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___fadeDuration_5;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, ((float)(L_8/L_10)), NULL);
		(&V_3)->___a_3 = L_11;
		// rend.material.SetColor("_BaseColor", newColor);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_12 = V_1;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = L_12->___rend_7;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_3;
		NullCheck(L_14);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_14, _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379, L_15, NULL);
		// timer += Time.deltaTime;
		float L_16 = __this->___U3CtimerU3E5__2_5;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_5 = ((float)il2cpp_codegen_add(L_16, L_17));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0096:
	{
		// while(timer <= fadeDuration)
		float L_18 = __this->___U3CtimerU3E5__2_5;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->___fadeDuration_5;
		if ((((float)L_18) <= ((float)L_20)))
		{
			goto IL_002b;
		}
	}
	{
		// Color newColor2 = fadeColor;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_21 = V_1;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = L_21->___fadeColor_6;
		V_2 = L_22;
		// newColor2.a = alphaOut;
		float L_23 = __this->___alphaOut_4;
		(&V_2)->___a_3 = L_23;
		// rend.material.SetColor("_Color", newColor2);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_24 = V_1;
		NullCheck(L_24);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25 = L_24->___rend_7;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_2;
		NullCheck(L_26);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_26, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeScreen/<FadeRoutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m630BB1A0AFF35FEDF5237718D92BCFD6AD9A1FB9 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeScreen/<FadeRoutine>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB_RuntimeMethod_var)));
	}
}
// System.Object FadeScreen/<FadeRoutine>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_get_Current_m3EA901320E300AFAB49F25F6C9A406E92EB087EC (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
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
// System.Void npcFactory::AddNpcModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcFactory_AddNpcModel_mA5DDB04CA5E453AC7DFE180848E0B25266780850 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// npcModels.Add(null);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___npcModels_4;
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void npcFactory::RemoveNpcModel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcFactory_RemoveNpcModel_m322605333ECC197DF3014E1E5F90979C36A9F7DF (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// npcModels.RemoveAt(index);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___npcModels_4;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_0, L_1, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Bounds npcFactory::CalculateBoundsOfNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 npcFactory_CalculateBoundsOfNavMesh_m8004C9B1D7E6C2409A95718257E035A5A390CC81 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD5799340930E961293AA8BCD24C2EAD6F41147F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_2;
	memset((&V_2), 0, sizeof(V_2));
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_3;
	memset((&V_3), 0, sizeof(V_3));
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_4;
	memset((&V_4), 0, sizeof(V_4));
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_5;
	memset((&V_5), 0, sizeof(V_5));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float maxDistance     = 1E8f;
		V_0 = (100000000.0f);
		// float maxDistanceHalf = maxDistance/2f;
		float L_0 = V_0;
		V_1 = ((float)(L_0/(2.0f)));
		// navMeshBounds = new Bounds();    // Reset navMeshBounds in case there was an old version.
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = (&__this->___navMeshBounds_7);
		il2cpp_codegen_initobj(L_1, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// Bounds tempBounds = new Bounds(Vector3.zero, Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_6), L_2, L_3, NULL);
		// if (NavMesh.SamplePosition(Vector3.left * maxDistanceHalf, out hitLeft, maxDistance, NavMesh.AllAreas) &&
		//     NavMesh.SamplePosition(Vector3.back * maxDistanceHalf, out hitBack, maxDistance, NavMesh.AllAreas) &&
		//     NavMesh.SamplePosition(Vector3.right * maxDistanceHalf, out hitRight, maxDistance, NavMesh.AllAreas) &&
		//     NavMesh.SamplePosition(Vector3.forward * maxDistanceHalf, out hitForward, maxDistance, NavMesh.AllAreas))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7 = V_0;
		bool L_8;
		L_8 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_6, (&V_2), L_7, (-1), NULL);
		if (!L_8)
		{
			goto IL_0114;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12 = V_0;
		bool L_13;
		L_13 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_11, (&V_5), L_12, (-1), NULL);
		if (!L_13)
		{
			goto IL_0114;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		float L_17 = V_0;
		bool L_18;
		L_18 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_16, (&V_3), L_17, (-1), NULL);
		if (!L_18)
		{
			goto IL_0114;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		float L_22 = V_0;
		bool L_23;
		L_23 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_21, (&V_4), L_22, (-1), NULL);
		if (!L_23)
		{
			goto IL_0114;
		}
	}
	{
		// Vector3 newMin = new Vector3(hitLeft.position.x, Mathf.Min(hitLeft.position.y,hitBack.position.y), hitBack.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_2), NULL);
		float L_25 = L_24.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_2), NULL);
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_5), NULL);
		float L_29 = L_28.___y_3;
		float L_30;
		L_30 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_27, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_5), NULL);
		float L_32 = L_31.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_25, L_30, L_32, NULL);
		// Vector3 newMax = new Vector3(hitRight.position.x, Mathf.Max(hitRight.position.y,hitForward.position.y), hitForward.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_3), NULL);
		float L_34 = L_33.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_3), NULL);
		float L_36 = L_35.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_4), NULL);
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_36, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_4), NULL);
		float L_41 = L_40.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), L_34, L_39, L_41, NULL);
		// tempBounds.SetMinMax(newMin, newMax);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_8;
		Bounds_SetMinMax_mB5F7DDF18EDB7F3F25FA6D2B36824F28978C540F((&V_6), L_42, L_43, NULL);
		goto IL_011e;
	}

IL_0114:
	{
		// Debug.LogError("Error getting NavMesh bounds.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFD5799340930E961293AA8BCD24C2EAD6F41147F, NULL);
	}

IL_011e:
	{
		// return tempBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_44 = V_6;
		return L_44;
	}
}
// UnityEngine.Bounds npcFactory::ClearNavMeshBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 npcFactory_ClearNavMeshBounds_m6FF57E2562F0AE59FD0484FFDCD29F9616F55364 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	{
		// return new Bounds(Vector3.zero, Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void npcFactory::RefreshRanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcFactory_RefreshRanges_m8BB902840D5633243ECD958BD6EE5F4CD02E22E7 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	{
		// navMeshRange = 2f*Mathf.Sqrt(navMeshBounds.extents.x * navMeshBounds.extents.x + navMeshBounds.extents.z * navMeshBounds.extents.z);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_0, NULL);
		float L_2 = L_1.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_3, NULL);
		float L_5 = L_4.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_6, NULL);
		float L_8 = L_7.___z_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_9 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_9, NULL);
		float L_11 = L_10.___z_4;
		float L_12;
		L_12 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_5)), ((float)il2cpp_codegen_multiply(L_8, L_11)))));
		__this->___navMeshRange_8 = ((float)il2cpp_codegen_multiply((2.0f), L_12));
		// range = Mathf.Round(navMeshRange / 2f); // By default, set the range to half the range of the NavMesh.
		float L_13 = __this->___navMeshRange_8;
		float L_14;
		L_14 = bankers_roundf(((float)(L_13/(2.0f))));
		__this->___range_18 = L_14;
		// }
		return;
	}
}
// System.Boolean npcFactory::OccupiedPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool npcFactory_OccupiedPoint_m6BED0FB1C24D2F7EB90606DB348377EA841E5F4C (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_candidatePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// bool isOccupied = false;
		V_0 = (bool)0;
		// foreach (Transform child in npcParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___npcParent_10;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0010_1:
			{
				// foreach (Transform child in npcParent)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// if (Vector3.Distance(child.position, candidatePos) < 2 * npcRadius)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_candidatePos;
				float L_9;
				L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_8, NULL);
				float L_10 = __this->___npcRadius_14;
				if ((!(((float)L_9) < ((float)((float)il2cpp_codegen_multiply((2.0f), L_10))))))
				{
					goto IL_0038_1;
				}
			}
			{
				// isOccupied = true;
				V_0 = (bool)1;
				// break;
				goto IL_0053;
			}

IL_0038_1:
			{
				// foreach (Transform child in npcParent)
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// return isOccupied;
		bool L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector3 npcFactory::RandomPointOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcFactory_RandomPointOnNavMesh_m10AC7A6AFBFA7E494EDB52A973C2A631ACAF9B0F (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F032C7ADC026D5853A36B742B07A1B3EB7657B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA3B34AD10A63275C867C6A4182EE973816A790);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05AD58898A5E30A0C8845492EE07BA379E76E93);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 thePoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (Mathf.Approximately(navMeshBounds.extents.magnitude, 0f))
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("ERROR:  Bounds on NavMesh is zero.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DA3B34AD10A63275C867C6A4182EE973816A790, NULL);
		goto IL_00c6;
	}

IL_0034:
	{
		// Vector3 sourcePosition = new Vector3(Random.Range(navMeshBounds.min.x, navMeshBounds.max.x), 0f, Random.Range(navMeshBounds.min.z, navMeshBounds.max.z));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_5, NULL);
		float L_7 = L_6.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_8, NULL);
		float L_10 = L_9.___x_2;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_7, L_10, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_12, NULL);
		float L_14 = L_13.___z_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_15 = (&__this->___navMeshBounds_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_15, NULL);
		float L_17 = L_16.___z_4;
		float L_18;
		L_18 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_14, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_11, (0.0f), L_18, /*hidden argument*/NULL);
		// if (NavMesh.SamplePosition(sourcePosition, out npcHit, navMeshRange, navMeshMask))
		float L_20 = __this->___navMeshRange_8;
		int32_t L_21 = __this->___navMeshMask_9;
		bool L_22;
		L_22 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_19, (&V_2), L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00bc;
		}
	}
	{
		// if (npcHit.hit)
		bool L_23;
		L_23 = NavMeshHit_get_hit_m0D3EB9A3D6C24F769F3B994DC7326254B64EDD8E((&V_2), NULL);
		if (!L_23)
		{
			goto IL_00b0;
		}
	}
	{
		// thePoint = npcHit.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_2), NULL);
		V_0 = L_24;
		goto IL_00c6;
	}

IL_00b0:
	{
		// Debug.LogError("RandomPointOnNavMesh() had an empty hit.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB05AD58898A5E30A0C8845492EE07BA379E76E93, NULL);
		goto IL_00c6;
	}

IL_00bc:
	{
		// Debug.LogError("ERROR: RandomPointOnNavMesh() was not able to return a position.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4F032C7ADC026D5853A36B742B07A1B3EB7657B2, NULL);
	}

IL_00c6:
	{
		// return thePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
// UnityEngine.Vector3 npcFactory::RandomUnoccupiedPointOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcFactory_RandomUnoccupiedPointOnNavMesh_mF2E1AA300BA3CFCF4F4C27C24A00261A165E69A9 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// int maxTries = 10;
		V_0 = ((int32_t)10);
		// Vector3 thePoint = Vector3.positiveInfinity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_positiveInfinity_mE0C7AA87B375383EA62F6084761DAE8197147D23_inline(NULL);
		V_1 = L_0;
		// for (int i = 0; i < maxTries; i++)
		V_2 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		// thePoint = RandomPointOnNavMesh();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = npcFactory_RandomPointOnNavMesh_m10AC7A6AFBFA7E494EDB52A973C2A631ACAF9B0F(__this, NULL);
		V_1 = L_1;
		// if (!OccupiedPoint(thePoint))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_1;
		bool L_3;
		L_3 = npcFactory_OccupiedPoint_m6BED0FB1C24D2F7EB90606DB348377EA841E5F4C(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// for (int i = 0; i < maxTries; i++)
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < maxTries; i++)
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000d;
		}
	}

IL_0025:
	{
		// return thePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.GameObject npcFactory::CreateNpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* npcFactory_CreateNpc_m5A11D04F3BAE5BBB6520806CDD6E165B26EFDCED (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m7D461EB22627E733C6C4A280C4B62253196467C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m9FD249DFCDC68FBACABE4843F35B33C4D8B95FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7B2A0774ABF7DC34F6916017B4A326452FF03B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5157482DBD0C0C4E639FE1878E0C0777830C391);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* G_B5_0 = NULL;
	npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* G_B4_0 = NULL;
	npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* G_B6_0 = NULL;
	{
		// Vector3 pos = RandomUnoccupiedPointOnNavMesh();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = npcFactory_RandomUnoccupiedPointOnNavMesh_mF2E1AA300BA3CFCF4F4C27C24A00261A165E69A9(__this, NULL);
		V_1 = L_0;
		// int randomModel = Random.Range(0, npcModels.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___npcModels_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_2, NULL);
		V_2 = L_3;
		// Quaternion rot = Quaternion.Euler(0f, 360f * Random.value, 0f);
		float L_4;
		L_4 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply((360.0f), L_4)), (0.0f), NULL);
		V_3 = L_5;
		// if (npcParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___npcParent_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// newNpc = Instantiate(npcModels[randomModel], pos, rot, npcParent);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___npcModels_4;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___npcParent_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_10, L_11, L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_0 = L_14;
		goto IL_0071;
	}

IL_005d:
	{
		// newNpc = Instantiate(npcModels[randomModel], pos, rot);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___npcModels_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_15, L_16, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_20;
	}

IL_0071:
	{
		// newNpc.AddComponent<npcIndividual>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_22;
		L_22 = GameObject_AddComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m7D461EB22627E733C6C4A280C4B62253196467C5(L_21, GameObject_AddComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m7D461EB22627E733C6C4A280C4B62253196467C5_RuntimeMethod_var);
		// npcIndividual indiv = newNpc.GetComponent<npcIndividual>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_0;
		NullCheck(L_23);
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_24;
		L_24 = GameObject_GetComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m9FD249DFCDC68FBACABE4843F35B33C4D8B95FC5(L_23, GameObject_GetComponent_TisnpcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED_m9FD249DFCDC68FBACABE4843F35B33C4D8B95FC5_RuntimeMethod_var);
		// Animator indivAnim = indiv.GetComponent<Animator>();
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_25 = L_24;
		NullCheck(L_25);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26;
		L_26 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_25, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		// indivAnim.runtimeAnimatorController = animatorController;
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_27 = __this->___animatorController_5;
		NullCheck(L_26);
		Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311(L_26, L_27, NULL);
		// indiv.waypointParent = waypointParent;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_28 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___waypointParent_6;
		NullCheck(L_28);
		L_28->___waypointParent_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___waypointParent_4), (void*)L_29);
		// indiv.minFramesToWait = minFramesToWait;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_30 = L_28;
		int32_t L_31 = __this->___minFramesToWait_16;
		NullCheck(L_30);
		L_30->___minFramesToWait_7 = L_31;
		// indiv.maxFramesToWait = maxFramesToWait;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_32 = L_30;
		int32_t L_33 = __this->___maxFramesToWait_17;
		NullCheck(L_32);
		L_32->___maxFramesToWait_8 = L_33;
		// indiv.range = range;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_34 = L_32;
		float L_35 = __this->___range_18;
		NullCheck(L_34);
		L_34->___range_6 = L_35;
		// indiv.limitRange = limitRange;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_36 = L_34;
		bool L_37 = __this->___limitRange_19;
		NullCheck(L_36);
		L_36->___limitRange_5 = L_37;
		// indiv.stoppingDistance = stoppingDistance;
		npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* L_38 = L_36;
		float L_39 = __this->___stoppingDistance_15;
		NullCheck(L_38);
		L_38->___stoppingDistance_31 = L_39;
		// NavMeshAgent nma = newNpc.GetComponent<NavMeshAgent>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		NullCheck(L_40);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_41;
		L_41 = GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35(L_40, GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var);
		V_4 = L_41;
		// if (nma == null)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_42 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = L_38;
		if (!L_43)
		{
			G_B5_0 = L_38;
			goto IL_00f5;
		}
	}
	{
		// Debug.LogError("New NPC does not have a NavMeshAgent.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1A7B2A0774ABF7DC34F6916017B4A326452FF03B, NULL);
		G_B6_0 = G_B4_0;
		goto IL_012a;
	}

IL_00f5:
	{
		// nma.avoidancePriority = Mathf.FloorToInt(Random.Range(0f, 99f));
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_44 = V_4;
		float L_45;
		L_45 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (99.0f), NULL);
		int32_t L_46;
		L_46 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_45, NULL);
		NullCheck(L_44);
		NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9(L_44, L_46, NULL);
		// nma.stoppingDistance = agentStoppingDistance;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_47 = V_4;
		float L_48 = __this->___agentStoppingDistance_13;
		NullCheck(L_47);
		NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F(L_47, L_48, NULL);
		// nma.radius = npcRadius;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_49 = V_4;
		float L_50 = __this->___npcRadius_14;
		NullCheck(L_49);
		NavMeshAgent_set_radius_m34F08DD2BD01A5DDA17FE1B02EE03D361B44F1AC(L_49, L_50, NULL);
		G_B6_0 = G_B5_0;
	}

IL_012a:
	{
		// indiv.usualSpeed = usualSpeed + Random.Range(-usualSpeedVariation, usualSpeedVariation);
		float L_51 = __this->___usualSpeed_11;
		float L_52 = __this->___usualSpeedVariation_12;
		float L_53 = __this->___usualSpeedVariation_12;
		float L_54;
		L_54 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_52)), L_53, NULL);
		NullCheck(G_B6_0);
		G_B6_0->___usualSpeed_9 = ((float)il2cpp_codegen_add(L_51, L_54));
		// if (disableLights)
		bool L_55 = __this->___disableLights_21;
		if (!L_55)
		{
			goto IL_0178;
		}
	}
	{
		// Transform lightsTransform = newNpc.transform.Find("Lights");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_0;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_57, _stringLiteralC5157482DBD0C0C4E639FE1878E0C0777830C391, NULL);
		V_5 = L_58;
		// if (lightsTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_59, NULL);
		if (!L_60)
		{
			goto IL_0178;
		}
	}
	{
		// GameObject lightsObject = lightsTransform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = V_5;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		// lightsObject.SetActive(false);
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
	}

IL_0178:
	{
		// return newNpc;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_0;
		return L_63;
	}
}
// System.Void npcFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcFactory__ctor_mF6D842E27487A918E9AEE6E1750FEC4654C06027 (npcFactory_t2E51768BD346955DB0FE9D28D6490D667F3B4CF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> npcModels = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___npcModels_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___npcModels_4), (void*)L_0);
		// public int navMeshMask = NavMesh.AllAreas;
		__this->___navMeshMask_9 = (-1);
		// public float usualSpeed = 1.0f;           // Default usual speed.
		__this->___usualSpeed_11 = (1.0f);
		// public float usualSpeedVariation = 0.2f;  // Amount plus/minus that speed can vary from usual speed.
		__this->___usualSpeedVariation_12 = (0.200000003f);
		// public float agentStoppingDistance = 0.75f;
		__this->___agentStoppingDistance_13 = (0.75f);
		// public float npcRadius = 0.5f;
		__this->___npcRadius_14 = (0.5f);
		// public float stoppingDistance = 1.0f;
		__this->___stoppingDistance_15 = (1.0f);
		// public int maxFramesToWait = 30;
		__this->___maxFramesToWait_17 = ((int32_t)30);
		// public float range = 1000f;               // Distance for finding waypoints.
		__this->___range_18 = (1000.0f);
		// public bool limitRange = true;
		__this->___limitRange_19 = (bool)1;
		// public int numberToCreate = 2;
		__this->___numberToCreate_20 = 2;
		// public bool disableLights = true;
		__this->___disableLights_21 = (bool)1;
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
// System.Void npcIndividual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual__ctor_mC737CF9620783925B16266487C20E1F3772B3BE4 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_UpdateNewDestinationState_m4F10977C5ABD1740D6C142AA9BA8601EFDB6A0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_UpdatePausedState_mAA1230889621A2B4A7354BD6D05502561CF67750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_UpdateStartState_m7E8BC8FDC1751688AB4724C0711E81E752439BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&npcIndividual_UpdateTravelState_m5D1E2795A95C1B9ACDBFFE8D2F9CC0D4CBDF8AF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float range = 1000f;       // Distance for finding waypoints.
		__this->___range_6 = (1000.0f);
		// public int minFramesToWait = 5;
		__this->___minFramesToWait_7 = 5;
		// public int maxFramesToWait = 30;
		__this->___maxFramesToWait_8 = ((int32_t)30);
		// public float usualSpeed = 1f;
		__this->___usualSpeed_9 = (1.0f);
		// public float stoppingDistance = 0.75f; // Needs to be > 0.
		__this->___stoppingDistance_31 = (0.75f);
		// private readonly Vector3 invalidVector = new Vector3(Mathf.Infinity, Mathf.Infinity, Mathf.Infinity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		__this->___invalidVector_39 = L_0;
		// private Vector3 destination = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___destination_49 = L_1;
		// private float distance = Mathf.Infinity;
		__this->___distance_51 = (std::numeric_limits<float>::infinity());
		// public npcIndividual()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// myStates = new NpcState[]
		// {
		//     new NpcState("Start",           EnterStartState,           UpdateStartState),
		//     new NpcState("Travel",          EnterTravelState,          UpdateTravelState),
		//     new NpcState("Paused",          EnterPausedState,          UpdatePausedState),
		//     new NpcState("NewDestination",  EnterNewDestinationState,  UpdateNewDestinationState)
		// };
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_2 = (NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679*)(NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679*)SZArrayNew(NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679_il2cpp_TypeInfo_var, (uint32_t)4);
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_3 = L_2;
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* L_4 = (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F*)il2cpp_codegen_object_new(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3(L_4, __this, (intptr_t)((void*)npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A_RuntimeMethod_var), NULL);
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_5 = (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D*)il2cpp_codegen_object_new(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D(L_5, __this, (intptr_t)((void*)npcIndividual_UpdateStartState_m7E8BC8FDC1751688AB4724C0711E81E752439BD5_RuntimeMethod_var), NULL);
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_6 = (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)il2cpp_codegen_object_new(NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D(L_6, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, L_4, L_5, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)L_6);
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_7 = L_3;
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* L_8 = (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F*)il2cpp_codegen_object_new(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3(L_8, __this, (intptr_t)((void*)npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8_RuntimeMethod_var), NULL);
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_9 = (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D*)il2cpp_codegen_object_new(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D(L_9, __this, (intptr_t)((void*)npcIndividual_UpdateTravelState_m5D1E2795A95C1B9ACDBFFE8D2F9CC0D4CBDF8AF2_RuntimeMethod_var), NULL);
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_10 = (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)il2cpp_codegen_object_new(NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D(L_10, _stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E, L_8, L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)L_10);
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_11 = L_7;
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* L_12 = (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F*)il2cpp_codegen_object_new(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3(L_12, __this, (intptr_t)((void*)npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595_RuntimeMethod_var), NULL);
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_13 = (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D*)il2cpp_codegen_object_new(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D(L_13, __this, (intptr_t)((void*)npcIndividual_UpdatePausedState_mAA1230889621A2B4A7354BD6D05502561CF67750_RuntimeMethod_var), NULL);
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_14 = (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)il2cpp_codegen_object_new(NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D(L_14, _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837, L_12, L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)L_14);
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_15 = L_11;
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* L_16 = (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F*)il2cpp_codegen_object_new(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3(L_16, __this, (intptr_t)((void*)npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8_RuntimeMethod_var), NULL);
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_17 = (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D*)il2cpp_codegen_object_new(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D(L_17, __this, (intptr_t)((void*)npcIndividual_UpdateNewDestinationState_m4F10977C5ABD1740D6C142AA9BA8601EFDB6A0BD_RuntimeMethod_var), NULL);
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_18 = (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)il2cpp_codegen_object_new(NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D(L_18, _stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72, L_16, L_17, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA*)L_18);
		__this->___myStates_56 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myStates_56), (void*)L_15);
		// }
		return;
	}
}
// System.Void npcIndividual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_Awake_mCA32F32086F1328FB736FEBAD3FAE903B859129E (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2068A35A3A0D48D22565D7F197E08D3F759FE950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485CC019B5FC0348C944C111CDD255AD66567584);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA027ADE8F7F4A61E563810371CB236656C06117B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D3C1F552537824991D7C6A8C6D687D3ADC9374);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_0);
		// if (!anim) Debug.LogError(this.name + " could not get Animator.");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (!anim) Debug.LogError(this.name + " could not get Animator.");
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralA027ADE8F7F4A61E563810371CB236656C06117B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
	}

IL_002e:
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5;
		L_5 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_11), (void*)L_5);
		// if (!agent) Debug.LogError(this.name + " could not get the NavMeshAgent.");
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->___agent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (L_7)
		{
			goto IL_005c;
		}
	}
	{
		// if (!agent) Debug.LogError(this.name + " could not get the NavMeshAgent.");
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral485CC019B5FC0348C944C111CDD255AD66567584, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
	}

IL_005c:
	{
		// if (waypointParent == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___waypointParent_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// waypointParent = GameObject.Find("Waypoints");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD5D3C1F552537824991D7C6A8C6D687D3ADC9374, NULL);
		__this->___waypointParent_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypointParent_4), (void*)L_12);
		// if (waypointParent == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___waypointParent_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.LogError("Need to set waypoint parent.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2068A35A3A0D48D22565D7F197E08D3F759FE950, NULL);
	}

IL_0092:
	{
		// traceString = "Awoken";
		__this->___traceString_54 = _stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E);
		// }
		return;
	}
}
// System.Void npcIndividual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_Start_m2AFC0E3AA3E5F1726CBF218D2866B9E4059014A2 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F6AF18275CC3446D3A729A8A61AC8F899008FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79813EB8711B0A02C76A8C4A762E2F3C352AFB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB435724C20B01102DBE3B91133F69C7D265495CE);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// destTiming = false;
		__this->___destTiming_44 = (bool)0;
		// pathTiming = false;
		__this->___pathTiming_41 = (bool)0;
		// if (!anim) Debug.LogError(this.name + " does not have Animator reference.");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (!anim) Debug.LogError(this.name + " does not have Animator reference.");
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralA79813EB8711B0A02C76A8C4A762E2F3C352AFB1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
	}

IL_0030:
	{
		// if (!agent) Debug.LogError(this.name + " does not have NavMeshAgent reference.");
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->___agent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		// if (!agent) Debug.LogError(this.name + " does not have NavMeshAgent reference.");
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralB435724C20B01102DBE3B91133F69C7D265495CE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
	}

IL_0052:
	{
		// agent.stoppingDistance = stoppingDistance;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_8 = __this->___agent_11;
		float L_9 = __this->___stoppingDistance_31;
		NullCheck(L_8);
		NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F(L_8, L_9, NULL);
		// if (Mathf.Approximately(agent.stoppingDistance, 0.0f))
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_10 = __this->___agent_11;
		NullCheck(L_10);
		float L_11;
		L_11 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_10, NULL);
		bool L_12;
		L_12 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_11, (0.0f), NULL);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.LogError(this.name + " needs to have a stopping distance greater than zero.");
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteral5F6AF18275CC3446D3A729A8A61AC8F899008FC4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
	}

IL_008f:
	{
		// agent.updatePosition = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_15 = __this->___agent_11;
		NullCheck(L_15);
		NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372(L_15, (bool)0, NULL);
		// agentVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___agentVelocity_25 = L_16;
		// nextPosition = currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18;
		V_0 = L_19;
		__this->___currentPosition_18 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		__this->___nextPosition_19 = L_20;
		// nextForward = currentForward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22;
		V_0 = L_23;
		__this->___currentForward_21 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		__this->___nextForward_22 = L_24;
		// currAnimPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		__this->___currAnimPosition_32 = L_26;
		// prevDeltaForward = currDeltaForward = 0f;
		float L_27 = (0.0f);
		V_1 = L_27;
		__this->___currDeltaForward_24 = L_27;
		float L_28 = V_1;
		__this->___prevDeltaForward_23 = L_28;
		// traceString = "Awoken";
		__this->___traceString_54 = _stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral4BB239D1EA4DEA0CBC6A27364B858754693A737E);
		// EnterStartState();
		npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A(__this, NULL);
		// }
		return;
	}
}
// System.Void npcIndividual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_Update_mB481A7D1D6E48D08F45C4D45EB62B8FA3DC53EF3 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	{
		// CoordinateAnimationAndNavigation();
		npcIndividual_CoordinateAnimationAndNavigation_m6E33ED16FBFCA5FAF7A216A8040C4E8E9823E07D(__this, NULL);
		// AdjustSpeed();
		npcIndividual_AdjustSpeed_m903E377F7269B67FFFD5434FB116D361F7E41FDF(__this, NULL);
		// FsmUpdate();
		npcIndividual_FsmUpdate_m4A1D197883E216797535B42BA829200A1CD02ED4(__this, NULL);
		// }
		return;
	}
}
// System.Void npcIndividual::CoordinateAnimationAndNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_CoordinateAnimationAndNavigation_m6E33ED16FBFCA5FAF7A216A8040C4E8E9823E07D (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95817A57B13E2E1C74DBF40A8478FFAD79B4FEC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1BD6A5590985CD2E5E751138916CE01C900DA5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// currentPosition = nextPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___nextPosition_19;
		__this->___currentPosition_18 = L_0;
		// nextPosition = agent.nextPosition;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_11;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = NavMeshAgent_get_nextPosition_m2EA2776CDA9032AE13B697C0F2FC2DD1194307BE(L_1, NULL);
		__this->___nextPosition_19 = L_2;
		// deltaPosition = nextPosition - currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___nextPosition_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___currentPosition_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		__this->___deltaPosition_20 = L_5;
		// dxAgent = Vector3.Dot(transform.right, deltaPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___deltaPosition_20;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		__this->___dxAgent_26 = L_9;
		// dyAgent = Vector3.Dot(transform.forward, deltaPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___deltaPosition_20;
		float L_13;
		L_13 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_11, L_12, NULL);
		__this->___dyAgent_27 = L_13;
		// vxAgent = dxAgent / Time.deltaTime;
		float L_14 = __this->___dxAgent_26;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___vxAgent_28 = ((float)(L_14/L_15));
		// vyAgent = dyAgent / Time.deltaTime;
		float L_16 = __this->___dyAgent_27;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___vyAgent_29 = ((float)(L_16/L_17));
		// agentVelocity.x = vxAgent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___agentVelocity_25);
		float L_19 = __this->___vxAgent_28;
		L_18->___x_0 = L_19;
		// agentVelocity.y = vyAgent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___agentVelocity_25);
		float L_21 = __this->___vyAgent_29;
		L_20->___y_1 = L_21;
		// agentSpeed = agentVelocity.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___agentVelocity_25);
		float L_23;
		L_23 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_22, NULL);
		__this->___agentSpeed_17 = L_23;
		// currentForward = nextForward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___nextForward_22;
		__this->___currentForward_21 = L_24;
		// nextForward = transform.forward; // Transform of the NPC GameObject rather than the NavMeshAgent.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		__this->___nextForward_22 = L_26;
		// prevDeltaForward = currDeltaForward;
		float L_27 = __this->___currDeltaForward_24;
		__this->___prevDeltaForward_23 = L_27;
		// currDeltaForward = Vector3.Angle(nextForward, currentForward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___nextForward_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___currentForward_21;
		float L_30;
		L_30 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_28, L_29, NULL);
		__this->___currDeltaForward_24 = L_30;
		// if (Vector3.Cross(nextForward, currentForward).y > 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___nextForward_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___currentForward_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_31, L_32, NULL);
		float L_34 = L_33.___y_3;
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_012d;
		}
	}
	{
		// currDeltaForward = -currDeltaForward;
		float L_35 = __this->___currDeltaForward_24;
		__this->___currDeltaForward_24 = ((-L_35));
	}

IL_012d:
	{
		// currDeltaForward = Mathf.SmoothDampAngle(prevDeltaForward, currDeltaForward, ref currentVelocity, SmoothTime);
		float L_36 = __this->___prevDeltaForward_23;
		float L_37 = __this->___currDeltaForward_24;
		float* L_38 = (&__this->___currentVelocity_16);
		float L_39;
		L_39 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_36, L_37, L_38, (0.100000001f), NULL);
		__this->___currDeltaForward_24 = L_39;
		// if (agentSpeed > MoveThreshold)
		float L_40 = __this->___agentSpeed_17;
		if ((!(((float)L_40) > ((float)(0.0500000007f)))))
		{
			goto IL_019b;
		}
	}
	{
		// anim.SetBool("move", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_41 = __this->___anim_10;
		NullCheck(L_41);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_41, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, (bool)1, NULL);
		// anim.SetFloat("velx", currDeltaForward);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___anim_10;
		float L_43 = __this->___currDeltaForward_24;
		NullCheck(L_42);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_42, _stringLiteral95817A57B13E2E1C74DBF40A8478FFAD79B4FEC4, L_43, NULL);
		// anim.SetFloat("vely", vyAgent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = __this->___anim_10;
		float L_45 = __this->___vyAgent_29;
		NullCheck(L_44);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_44, _stringLiteralC1BD6A5590985CD2E5E751138916CE01C900DA5C, L_45, NULL);
		goto IL_01ac;
	}

IL_019b:
	{
		// anim.SetBool("move", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->___anim_10;
		NullCheck(L_46);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_46, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, (bool)0, NULL);
	}

IL_01ac:
	{
		// currAnimPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		__this->___currAnimPosition_32 = L_48;
		// nextPosition2D.x = nextPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->___nextPosition2D_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&__this->___nextPosition_19);
		float L_51 = L_50->___x_2;
		L_49->___x_0 = L_51;
		// nextPosition2D.y = nextPosition.z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&__this->___nextPosition2D_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___nextPosition_19);
		float L_54 = L_53->___z_4;
		L_52->___y_1 = L_54;
		// currAnimPosition2D.x = currAnimPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___currAnimPosition2D_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___currAnimPosition_32);
		float L_57 = L_56->___x_2;
		L_55->___x_0 = L_57;
		// currAnimPosition2D.y = currAnimPosition.z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_58 = (&__this->___currAnimPosition2D_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = (&__this->___currAnimPosition_32);
		float L_60 = L_59->___z_4;
		L_58->___y_1 = L_60;
		// agentAnimOffset = nextPosition2D - currAnimPosition2D;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = __this->___nextPosition2D_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = __this->___currAnimPosition2D_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_61, L_62, NULL);
		__this->___agentAnimOffset_34 = L_63;
		// agentAnimOffsetMagnitude = agentAnimOffset.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___agentAnimOffset_34);
		float L_65;
		L_65 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_64, NULL);
		__this->___agentAnimOffsetMagnitude_35 = L_65;
		// if (agentAnimOffsetMagnitude > agent.radius * SyncThreshold)
		float L_66 = __this->___agentAnimOffsetMagnitude_35;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_67 = __this->___agent_11;
		NullCheck(L_67);
		float L_68;
		L_68 = NavMeshAgent_get_radius_m33C1D18A2605A958FE9E93F04981EB17FADE5957(L_67, NULL);
		if ((!(((float)L_66) > ((float)((float)il2cpp_codegen_multiply(L_68, (0.0500000007f)))))))
		{
			goto IL_02b7;
		}
	}
	{
		// Vector2 animTarget = currAnimPosition2D + agentAnimOffset;  // same as nextPosition2D
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = __this->___currAnimPosition2D_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = __this->___agentAnimOffset_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_69, L_70, NULL);
		V_0 = L_71;
		// Vector2 newAnimPosition2D = Vector2.Lerp(currAnimPosition2D, animTarget, SyncDamping);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = __this->___currAnimPosition2D_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_72, L_73, (0.100000001f), NULL);
		V_1 = L_74;
		// newAnimPosition.x = newAnimPosition2D.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_1;
		float L_76 = L_75.___x_0;
		(&V_2)->___x_2 = L_76;
		// newAnimPosition.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = L_78.___y_3;
		(&V_2)->___y_3 = L_79;
		// newAnimPosition.z = newAnimPosition2D.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_1;
		float L_81 = L_80.___y_1;
		(&V_2)->___z_4 = L_81;
		// transform.position = newAnimPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_2;
		NullCheck(L_82);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_82, L_83, NULL);
	}

IL_02b7:
	{
		// }
		return;
	}
}
// System.Void npcIndividual::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_OnAnimatorMove_mE65DE25B3B85749844B801EDFB156D6AB8BE0E52 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = anim.rootPosition;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_10;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_get_rootPosition_m952907486F631E7E8E0384AE7CE86D92BB3C6E71(L_0, NULL);
		V_0 = L_1;
		// position.y = agent.nextPosition.y;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_11;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = NavMeshAgent_get_nextPosition_m2EA2776CDA9032AE13B697C0F2FC2DD1194307BE(L_2, NULL);
		float L_4 = L_3.___y_3;
		(&V_0)->___y_3 = L_4;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void npcIndividual::FsmUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_FsmUpdate_m4A1D197883E216797535B42BA829200A1CD02ED4 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE21DA564782CA85C007E058707F65E5C2684389A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool matchFound = false;
		V_0 = (bool)0;
		// for (int i = 0; i < myStates.Length; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_0006:
	{
		// if (curState == myStates[i].stateName)
		String_t* L_0 = __this->___curState_48;
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_1 = __this->___myStates_56;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5 = L_4->___stateName_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_5, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// myStates[i].updateStateFn();
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_7 = __this->___myStates_56;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_11 = L_10->___updateStateFn_2;
		NullCheck(L_11);
		UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_inline(L_11, NULL);
		// matchFound = true;
		V_0 = (bool)1;
		// break;
		goto IL_0045;
	}

IL_0036:
	{
		// for (int i = 0; i < myStates.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < myStates.Length; i++)
		int32_t L_13 = V_1;
		NpcStateU5BU5D_t2C7A4E738E32765214992247491D992A52A44679* L_14 = __this->___myStates_56;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0006;
		}
	}

IL_0045:
	{
		// if (!matchFound)
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogError("Unrecognized state: " + curState);
		String_t* L_16 = __this->___curState_48;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE21DA564782CA85C007E058707F65E5C2684389A, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 npcIndividual::GetAWaypoint(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 npcIndividual_GetAWaypoint_mB950C011239E2364F2E66ABC2F927A6BB012A071 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_omit, float ___1_angMin, float ___2_angMax, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67719F1B37AA70DCA2723F92087EFA82443DC1E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// List<Vector3> validWPlist = new List<Vector3>();  // Randomly choose one of the valid waypoints.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// List<Vector3> tooFarWPlist = new List<Vector3>();  // If there are no valid waypoints, randomly choose one of the others.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_1;
		// List<Vector3> wrongDirWPlist = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_2;
		// int cnt = waypointParent.transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___waypointParent_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		V_3 = L_5;
		// Vector3 selfPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_4 = L_7;
		// Vector3 selfForward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		V_5 = L_9;
		// Vector3 returnVector = invalidVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___invalidVector_39;
		V_6 = L_10;
		// for (int i = 0; i < cnt; i++)
		V_7 = 0;
		goto IL_00c4;
	}

IL_004a:
	{
		// Vector3 currentWp = waypointParent.transform.GetChild(i).position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___waypointParent_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		int32_t L_13 = V_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		V_8 = L_15;
		// if (currentWp == omit) continue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___0_omit;
		bool L_18;
		L_18 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_00be;
		}
	}
	{
		// if (limitRange)
		bool L_19 = __this->___limitRange_5;
		if (!L_19)
		{
			goto IL_0090;
		}
	}
	{
		// float dist = Vector3.Distance(selfPos, currentWp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_8;
		float L_22;
		L_22 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_20, L_21, NULL);
		// if (dist > range)
		float L_23 = __this->___range_6;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_0090;
		}
	}
	{
		// tooFarWPlist.Add(currentWp);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_8;
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_25, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// continue;
		goto IL_00be;
	}

IL_0090:
	{
		// float angleToWaypoint = Vector3.Angle(selfForward, currentWp - selfPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_28, NULL);
		float L_30;
		L_30 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_26, L_29, NULL);
		V_9 = L_30;
		// if (angleToWaypoint < angMin || angleToWaypoint > angMax)
		float L_31 = V_9;
		float L_32 = ___1_angMin;
		if ((((float)L_31) < ((float)L_32)))
		{
			goto IL_00ac;
		}
	}
	{
		float L_33 = V_9;
		float L_34 = ___2_angMax;
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_00b6;
		}
	}

IL_00ac:
	{
		// wrongDirWPlist.Add(currentWp);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_8;
		NullCheck(L_35);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_35, L_36, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// continue;
		goto IL_00be;
	}

IL_00b6:
	{
		// validWPlist.Add(currentWp);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_8;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_38, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_00be:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c4:
	{
		// for (int i = 0; i < cnt; i++)
		int32_t L_40 = V_7;
		int32_t L_41 = V_3;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_004a;
		}
	}
	{
		// if (validWPlist.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_42, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		// int index = (int)Mathf.Floor(UnityEngine.Random.value * validWPlist.Count);
		float L_44;
		L_44 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_45, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		float L_47;
		L_47 = floorf(((float)il2cpp_codegen_multiply(L_44, ((float)L_46))));
		V_10 = il2cpp_codegen_cast_double_to_int<int32_t>(L_47);
		// returnVector = validWPlist[index];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_48 = V_0;
		int32_t L_49 = V_10;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_48, L_49, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_6 = L_50;
		goto IL_0151;
	}

IL_00f3:
	{
		// else if (wrongDirWPlist.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_51, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_011d;
		}
	}
	{
		// int index = (int)Mathf.Floor(UnityEngine.Random.value * wrongDirWPlist.Count);
		float L_53;
		L_53 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_54, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		float L_56;
		L_56 = floorf(((float)il2cpp_codegen_multiply(L_53, ((float)L_55))));
		V_11 = il2cpp_codegen_cast_double_to_int<int32_t>(L_56);
		// returnVector = wrongDirWPlist[index];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_57 = V_2;
		int32_t L_58 = V_11;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_57, L_58, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_6 = L_59;
		goto IL_0151;
	}

IL_011d:
	{
		// else if (tooFarWPlist.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_60, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_61) <= ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		// int index = (int)Mathf.Floor(UnityEngine.Random.value * tooFarWPlist.Count);
		float L_62;
		L_62 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_63, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		float L_65;
		L_65 = floorf(((float)il2cpp_codegen_multiply(L_62, ((float)L_64))));
		V_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_65);
		// returnVector = tooFarWPlist[index];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_66 = V_1;
		int32_t L_67 = V_12;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_66, L_67, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_6 = L_68;
		goto IL_0151;
	}

IL_0147:
	{
		// Debug.LogError("Need to have more than one waypoint defined.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB67719F1B37AA70DCA2723F92087EFA82443DC1E, NULL);
	}

IL_0151:
	{
		// return returnVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_6;
		return L_69;
	}
}
// System.Void npcIndividual::EnterStartState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterStartState_m21DB50BFBDDD973E199A4F3BDEAA329DE97B6C1A (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055ABB8DDE2428110B840D8F281830E94ACEA3F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curState = "Start";
		__this->___curState_48 = _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curState_48), (void*)_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		bool L_0 = __this->___debugFSM_55;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		String_t* L_1 = __this->___curState_48;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
	}

IL_0028:
	{
		// traceString = "Start state";
		__this->___traceString_54 = _stringLiteral055ABB8DDE2428110B840D8F281830E94ACEA3F4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral055ABB8DDE2428110B840D8F281830E94ACEA3F4);
		// }
		return;
	}
}
// System.Void npcIndividual::UpdateStartState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_UpdateStartState_m7E8BC8FDC1751688AB4724C0711E81E752439BD5 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	{
		// EnterNewDestinationState();
		npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8(__this, NULL);
		// }
		return;
	}
}
// System.Void npcIndividual::EnterPausedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8D4E18B4125DEAF6A38BCC338AAD9425B495DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeaveState();
		VirtualActionInvoker0::Invoke(4 /* System.Void npcIndividual::LeaveState() */, __this);
		// curState = "Paused";
		__this->___curState_48 = _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curState_48), (void*)_stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837);
		// SetSpeed(0f);
		npcIndividual_SetSpeed_mB68DF1EAD965F35205A8A7F66A5C96A353E21FA1(__this, (0.0f), (bool)0, NULL);
		// numFrames = 0;
		__this->___numFrames_46 = 0;
		// numFramesToWait = (int) (UnityEngine.Random.value * (maxFramesToWait - minFramesToWait) + minFramesToWait);
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		int32_t L_1 = __this->___maxFramesToWait_8;
		int32_t L_2 = __this->___minFramesToWait_7;
		int32_t L_3 = __this->___minFramesToWait_7;
		__this->___numFramesToWait_47 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)((int32_t)il2cpp_codegen_subtract(L_1, L_2))))), ((float)L_3))));
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		bool L_4 = __this->___debugFSM_55;
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		String_t* L_5 = __this->___curState_48;
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0064:
	{
		// traceString = "Paused state";
		__this->___traceString_54 = _stringLiteral2E8D4E18B4125DEAF6A38BCC338AAD9425B495DA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral2E8D4E18B4125DEAF6A38BCC338AAD9425B495DA);
		// }
		return;
	}
}
// System.Void npcIndividual::UpdatePausedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_UpdatePausedState_mAA1230889621A2B4A7354BD6D05502561CF67750 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	{
		// if (numFrames > numFramesToWait)
		int32_t L_0 = __this->___numFrames_46;
		int32_t L_1 = __this->___numFramesToWait_47;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// EnterNewDestinationState();
		npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8(__this, NULL);
		// numFrames = 0;
		__this->___numFrames_46 = 0;
		return;
	}

IL_001c:
	{
		// numFrames++;
		int32_t L_2 = __this->___numFrames_46;
		__this->___numFrames_46 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// }
		return;
	}
}
// System.Void npcIndividual::EnterTravelState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4B7B36C7390386165AC1B604747998797767520);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeaveState();
		VirtualActionInvoker0::Invoke(4 /* System.Void npcIndividual::LeaveState() */, __this);
		// curState = "Travel";
		__this->___curState_48 = _stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curState_48), (void*)_stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E);
		// SetSpeed(usualSpeed);
		float L_0 = __this->___usualSpeed_9;
		npcIndividual_SetSpeed_mB68DF1EAD965F35205A8A7F66A5C96A353E21FA1(__this, L_0, (bool)0, NULL);
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		bool L_1 = __this->___debugFSM_55;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		String_t* L_2 = __this->___curState_48;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
	}

IL_003b:
	{
		// traceString = "Travel state";
		__this->___traceString_54 = _stringLiteralE4B7B36C7390386165AC1B604747998797767520;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteralE4B7B36C7390386165AC1B604747998797767520);
		// }
		return;
	}
}
// System.Void npcIndividual::UpdateTravelState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_UpdateTravelState_m5D1E2795A95C1B9ACDBFFE8D2F9CC0D4CBDF8AF2 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F5B17D12F630C7B292CF0DA5E9FB8239B41BFD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetDistanceToDestination() < agent.stoppingDistance)
		float L_0;
		L_0 = npcIndividual_GetDistanceToDestination_m2E6EDDFD01DA94DBC5B4136F92A85B6ED569A59F(__this, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_11;
		NullCheck(L_1);
		float L_2;
		L_2 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_1, NULL);
		if ((!(((float)L_0) < ((float)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		// traceString = "at destination";
		__this->___traceString_54 = _stringLiteral3F5B17D12F630C7B292CF0DA5E9FB8239B41BFD2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral3F5B17D12F630C7B292CF0DA5E9FB8239B41BFD2);
		// EnterPausedState();
		npcIndividual_EnterPausedState_m1FA7EB3B4A9AD47FCC9A46282BBA515B193DF595(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void npcIndividual::EnterNewDestinationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_EnterNewDestinationState_m576477C233525F6171FC949C5288AE94DE9F04D8 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBB139D9D3C4921258897D29BE5C2D8DC5FFA8E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LeaveState();
		VirtualActionInvoker0::Invoke(4 /* System.Void npcIndividual::LeaveState() */, __this);
		// curState = "NewDestination";
		__this->___curState_48 = _stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curState_48), (void*)_stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72);
		// SetSpeed(0f);
		npcIndividual_SetSpeed_mB68DF1EAD965F35205A8A7F66A5C96A353E21FA1(__this, (0.0f), (bool)0, NULL);
		// destTimerStart = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___destTimerStart_43 = L_0;
		// destTiming = true;
		__this->___destTiming_44 = (bool)1;
		// Vector3 newDestination = GetAWaypoint(destination);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___destination_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = npcIndividual_GetAWaypoint_mB950C011239E2364F2E66ABC2F927A6BB012A071(__this, L_1, (-90.0f), (90.0f), NULL);
		V_0 = L_2;
		// SetDestination(newDestination);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		npcIndividual_SetDestination_m631893C8653F203C2F55884F21D0EB6F04678268(__this, L_3, NULL);
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		bool L_4 = __this->___debugFSM_55;
		if (!L_4)
		{
			goto IL_006a;
		}
	}
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: entering", curState));
		String_t* L_5 = __this->___curState_48;
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31C4C3FEA3804400580D9D32BDD71B7295F78C79, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_006a:
	{
		// traceString = "New Destination state";
		__this->___traceString_54 = _stringLiteral9FBB139D9D3C4921258897D29BE5C2D8DC5FFA8E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral9FBB139D9D3C4921258897D29BE5C2D8DC5FFA8E);
		// }
		return;
	}
}
// System.Void npcIndividual::UpdateNewDestinationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_UpdateNewDestinationState_m4F10977C5ABD1740D6C142AA9BA8601EFDB6A0BD (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421E66F107FECC17A8771796E98648D4BA27DFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9678AAAD435F0ED7D71067BBE3C4B5CDEE4BED5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (destTiming)
		bool L_0 = __this->___destTiming_44;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// timeForNewDestTS = DateTime.Now - destTimerStart;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = __this->___destTimerStart_43;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		__this->___timeForNewDestTS_45 = L_3;
		// timeForNewDest = timeForNewDestTS.ToString(@"mm\:ss\.fff");
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_4 = (&__this->___timeForNewDestTS_45);
		String_t* L_5;
		L_5 = TimeSpan_ToString_m5B50613FCD29547F04EAE305B2226CB9F490C432(L_4, _stringLiteral421E66F107FECC17A8771796E98648D4BA27DFEB, NULL);
		__this->___timeForNewDest_53 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeForNewDest_53), (void*)L_5);
		// destTiming = false;
		__this->___destTiming_44 = (bool)0;
	}

IL_003b:
	{
		// hasPath = agent.hasPath;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->___agent_11;
		NullCheck(L_6);
		bool L_7;
		L_7 = NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A(L_6, NULL);
		__this->___hasPath_50 = L_7;
		// if (hasPath)
		bool L_8 = __this->___hasPath_50;
		if (!L_8)
		{
			goto IL_0096;
		}
	}
	{
		// if (pathTiming)
		bool L_9 = __this->___pathTiming_41;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		// timeToCalcPathTS = DateTime.Now - pathTimerStart;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = __this->___pathTimerStart_40;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_10, L_11, NULL);
		__this->___timeToCalcPathTS_42 = L_12;
		// timeToCalcPath = timeToCalcPathTS.ToString(@"mm\:ss\.fff");
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_13 = (&__this->___timeToCalcPathTS_42);
		String_t* L_14;
		L_14 = TimeSpan_ToString_m5B50613FCD29547F04EAE305B2226CB9F490C432(L_13, _stringLiteral421E66F107FECC17A8771796E98648D4BA27DFEB, NULL);
		__this->___timeToCalcPath_52 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeToCalcPath_52), (void*)L_14);
		// pathTiming = false;
		__this->___pathTiming_41 = (bool)0;
	}

IL_008f:
	{
		// EnterTravelState();
		npcIndividual_EnterTravelState_m230BF47AAE7E37944C0EBE3316BB97EA950E01D8(__this, NULL);
		return;
	}

IL_0096:
	{
		// traceString = "New Destination, hasPath is false";
		__this->___traceString_54 = _stringLiteral9678AAAD435F0ED7D71067BBE3C4B5CDEE4BED5D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral9678AAAD435F0ED7D71067BBE3C4B5CDEE4BED5D);
		// }
		return;
	}
}
// System.Void npcIndividual::LeaveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_LeaveState_m83ABEAEFDFA2151AE1F01BDA77F47EE18A497071 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AD31BB675715E49F63087C555F604F0DA6CC19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (curState)
		String_t* L_0 = __this->___curState_48;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837, NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral4B5B8688877CB56F38D5F1B76BD6EA0436A0949E, NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral7234CCD3A8A65B7F6917328BA385A221B28D9C72, NULL);
	}

IL_003a:
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: Leaving ", curState));
		bool L_9 = __this->___debugFSM_55;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// if (debugFSM) Debug.Log(string.Format("{0}: Leaving ", curState));
		String_t* L_10 = __this->___curState_48;
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral09AD31BB675715E49F63087C555F604F0DA6CC19, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void npcIndividual::SetSpeed(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_SetSpeed_mB68DF1EAD965F35205A8A7F66A5C96A353E21FA1 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, float ___0_newTargetSpeed, bool ___1_force, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// targetSpeed = newTargetSpeed;
		float L_0 = ___0_newTargetSpeed;
		__this->___targetSpeed_37 = L_0;
		// if (force)
		bool L_1 = ___1_force;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// agent.speed = currentSpeed = targetSpeed;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_11;
		float L_3 = __this->___targetSpeed_37;
		float L_4 = L_3;
		V_0 = L_4;
		__this->___currentSpeed_36 = L_4;
		float L_5 = V_0;
		NullCheck(L_2);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_2, L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void npcIndividual::AdjustSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_AdjustSpeed_m903E377F7269B67FFFD5434FB116D361F7E41FDF (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	{
		// currentSpeed = Mathf.SmoothDamp(currentSpeed, targetSpeed, ref smoothDampVelocity, SmoothTime);
		float L_0 = __this->___currentSpeed_36;
		float L_1 = __this->___targetSpeed_37;
		float* L_2 = (&__this->___smoothDampVelocity_38);
		float L_3;
		L_3 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_0, L_1, L_2, (0.100000001f), NULL);
		__this->___currentSpeed_36 = L_3;
		// if (!double.IsNaN(currentSpeed))  // This may happen on shutdown.
		float L_4 = __this->___currentSpeed_36;
		bool L_5;
		L_5 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(((double)L_4), NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// agent.speed = currentSpeed;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->___agent_11;
		float L_7 = __this->___currentSpeed_36;
		NullCheck(L_6);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_6, L_7, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void npcIndividual::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcIndividual_SetDestination_m631893C8653F203C2F55884F21D0EB6F04678268 (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newDest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8929F32E187E0F82BB21015F1283D026739A234);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (agent.isActiveAndEnabled && agent.isOnNavMesh)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_11;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405(L_2, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// agent.destination = newDest;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->___agent_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_newDest;
		NullCheck(L_4);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_4, L_5, NULL);
		// destination = newDest;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_newDest;
		__this->___destination_49 = L_6;
		// pathTimerStart = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___pathTimerStart_40 = L_7;
		// pathTiming = true;
		__this->___pathTiming_41 = (bool)1;
		return;
	}

IL_0040:
	{
		// Debug.LogWarning(name + " can't execute setDestination() for " + newDest);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_newDest;
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_8, _stringLiteralE8929F32E187E0F82BB21015F1283D026739A234, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_11, NULL);
		// }
		return;
	}
}
// System.Single npcIndividual::GetDistanceToDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float npcIndividual_GetDistanceToDestination_m2E6EDDFD01DA94DBC5B4136F92A85B6ED569A59F (npcIndividual_t5554780069B744E48E3A5203200E3D47B1C242ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BF15D80DEE17A887A0DA539BD8BB0117D028B0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA353CDEEE7BCDEC454893D2A4F72C69EB3BD7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1429495C984B4CA7ED0CAAB1DDB3062F22E52C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41076DE905B6257CF3E409BC17A80909DC50F9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)  // Not while executing in editor.
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		// distance = agent.remainingDistance;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_11;
		NullCheck(L_1);
		float L_2;
		L_2 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_1, NULL);
		__this->___distance_51 = L_2;
		// if (float.IsPositiveInfinity(distance))
		float L_3 = __this->___distance_51;
		bool L_4;
		L_4 = Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// traceString = "agent distance is infinity";
		__this->___traceString_54 = _stringLiteral1BF15D80DEE17A887A0DA539BD8BB0117D028B0A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteral1BF15D80DEE17A887A0DA539BD8BB0117D028B0A);
		// distance = Vector3.Distance(transform.position, destination);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___destination_49;
		float L_8;
		L_8 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_6, L_7, NULL);
		__this->___distance_51 = L_8;
		goto IL_009c;
	}

IL_004e:
	{
		// traceString = "agent distance is " + distance;
		float* L_9 = (&__this->___distance_51);
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD1429495C984B4CA7ED0CAAB1DDB3062F22E52C0, L_10, NULL);
		__this->___traceString_54 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)L_11);
		goto IL_009c;
	}

IL_006b:
	{
		// Debug.LogWarning("GetDistanceToDestination() called when the application is not playing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE41076DE905B6257CF3E409BC17A80909DC50F9E, NULL);
		// distance = Vector3.Distance(transform.position, destination);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___destination_49;
		float L_15;
		L_15 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_13, L_14, NULL);
		__this->___distance_51 = L_15;
		// traceString = "GetDistanceToDestination() with appln not playing.";
		__this->___traceString_54 = _stringLiteralBBA353CDEEE7BCDEC454893D2A4F72C69EB3BD7D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traceString_54), (void*)_stringLiteralBBA353CDEEE7BCDEC454893D2A4F72C69EB3BD7D);
	}

IL_009c:
	{
		// return distance;
		float L_16 = __this->___distance_51;
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
void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_Multicast(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* currentDelegate = reinterpret_cast<EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_OpenInst(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_OpenStatic(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_OpenStaticInvoker(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_ClosedStaticInvoker(EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void npcIndividual/EnterStateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterStateFunction__ctor_m7E46E72B09ECA14A8EAC50E48407A7B0FE4AC4D3 (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B_Multicast;
}
// System.Void npcIndividual/EnterStateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterStateFunction_Invoke_m919097DD35245D357096419D5C057A71F879476B (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult npcIndividual/EnterStateFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnterStateFunction_BeginInvoke_m0CC9E9F5A06EB4DA16BD76504BED4A0E4CE8E924 (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void npcIndividual/EnterStateFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterStateFunction_EndInvoke_mB1642A420DCF0F58F1DC2BEF1D6E44770744C339 (EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_Multicast(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* currentDelegate = reinterpret_cast<UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_OpenInst(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_OpenStatic(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_OpenStaticInvoker(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_ClosedStaticInvoker(UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void npcIndividual/UpdateStateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStateFunction__ctor_mD7C791D320A0829C3A6A420ECF6D01BC675EC24D (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_Multicast;
}
// System.Void npcIndividual/UpdateStateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2 (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult npcIndividual/UpdateStateFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateStateFunction_BeginInvoke_m775DFCAE47FA6E8332BF7D2FA23D6EC81F5B1D16 (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void npcIndividual/UpdateStateFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStateFunction_EndInvoke_m271DD70D6393804CDFCF788C74299077D9BC35A8 (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void npcIndividual/NpcState::.ctor(System.String,npcIndividual/EnterStateFunction,npcIndividual/UpdateStateFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NpcState__ctor_m43F0A697B54EAFB0B47702463F73DA9CF29CAB8D (NpcState_t318A0C8DB146764C5AE4FF608AE00C492A3D3EFA* __this, String_t* ___0_nm, EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* ___1_enterfn, UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* ___2_updatefn, const RuntimeMethod* method) 
{
	{
		// public NpcState(string nm, EnterStateFunction enterfn, UpdateStateFunction updatefn)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// stateName = nm;
		String_t* L_0 = ___0_nm;
		__this->___stateName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateName_0), (void*)L_0);
		// enterStateFn = enterfn;
		EnterStateFunction_t0939B85D6F4D45CF96CC3074E7238CC85A178A9F* L_1 = ___1_enterfn;
		__this->___enterStateFn_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enterStateFn_1), (void*)L_1);
		// updateStateFn = updatefn;
		UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* L_2 = ___2_updatefn;
		__this->___updateStateFn_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___updateStateFn_2), (void*)L_2);
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
// System.Void npcWaypointScript::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcWaypointScript_OnDrawGizmos_m602D65BE4E07262679D0880AB505108E43CD6C59 (npcWaypointScript_tB40BB5993E5ACF79D1FD78620EBB8B73B6683BE8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 cubeDims = new Vector3(gizmoRadius, gizmoRadius, gizmoRadius);
		float L_0 = __this->___gizmoRadius_4;
		float L_1 = __this->___gizmoRadius_4;
		float L_2 = __this->___gizmoRadius_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, L_1, L_2, NULL);
		// Gizmos.color = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_3, NULL);
		// Gizmos.DrawWireSphere(transform.position, gizmoRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = __this->___gizmoRadius_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_5, L_6, NULL);
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_7, NULL);
		// Gizmos.DrawCube(transform.position, cubeDims);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void npcWaypointScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void npcWaypointScript__ctor_mD650CC194682B188E9EC9F2A1019B97A5493D3AF (npcWaypointScript_tB40BB5993E5ACF79D1FD78620EBB8B73B6683BE8* __this, const RuntimeMethod* method) 
{
	{
		// public float gizmoRadius = 0.3F;
		__this->___gizmoRadius_4 = (0.300000012f);
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
// System.Void WaypointAssistant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointAssistant__ctor_m9C2B05217DEDD33F2D053290C8A7B1910B06E6F6 (WaypointAssistant_t04EC3BCBDD8169D44F91CBE34EED71F76A699793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float agentRadius = 0.5f;
		__this->___agentRadius_4 = (0.5f);
		// public int navMeshMask = NavMesh.AllAreas;
		__this->___navMeshMask_11 = (-1);
		// public float waypointElevation = 1f;
		__this->___waypointElevation_14 = (1.0f);
		// public float corridorDistance = 10f;
		__this->___corridorDistance_15 = (10.0f);
		// public float navMeshProbe = 0.5f;
		__this->___navMeshProbe_16 = (0.5f);
		// public int minSquareSize = 5;
		__this->___minSquareSize_18 = 5;
		// public bool drawGizmos = true;
		__this->___drawGizmos_19 = (bool)1;
		// public int skipFrames = 10;
		__this->___skipFrames_20 = ((int32_t)10);
		// public int gridResolution = 1;
		__this->___gridResolution_21 = 1;
		// public float gizmoSizeFactor = 0.5f;
		__this->___gizmoSizeFactor_30 = (0.5f);
		// private Vector3 _gizmoSize = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____gizmoSize_31 = L_0;
		// private Ray[] _frustumRays = new Ray[4];
		RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419* L_1 = (RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419*)(RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419*)SZArrayNew(RayU5BU5D_t1272CBAA85270D5BE275F0BDA4B6490552B31419_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____frustumRays_36 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frustumRays_36), (void*)L_1);
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
// System.Void SceneTransitionManager::GoToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionManager_GoToScene_mBA834D088A593F841694A381EE3ABDA75DD70367 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GoToSceneRountine(sceneIndex));
		int32_t L_0 = ___0_sceneIndex;
		RuntimeObject* L_1;
		L_1 = SceneTransitionManager_GoToSceneRountine_mF19F80F9D4963114F8BADAACE90B79ABC3329DB4(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneRountine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneRountine_mF19F80F9D4963114F8BADAACE90B79ABC3329DB4 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* L_0 = (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9*)il2cpp_codegen_object_new(U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGoToSceneRountineU3Ed__2__ctor_mEADFA1C14B388A7B6EC7842E019F9A076B718E4C(L_0, 0, NULL);
		U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_3 = L_3;
		return L_2;
	}
}
// System.Void SceneTransitionManager::GoToSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionManager_GoToSceneAsync_m61A85B5FBB3CEB46B63CCEB245F0D5D9EF7AAD12 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GoToSceneAsyncRountine(sceneIndex));
		int32_t L_0 = ___0_sceneIndex;
		RuntimeObject* L_1;
		L_1 = SceneTransitionManager_GoToSceneAsyncRountine_mD375F28FFF7CE058F333AB50035A3E402CB74393(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneAsyncRountine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneAsyncRountine_mD375F28FFF7CE058F333AB50035A3E402CB74393 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* L_0 = (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC*)il2cpp_codegen_object_new(U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGoToSceneAsyncRountineU3Ed__4__ctor_mD4213E707A9DAA6933063079E633FB0BFBA5AA6F(L_0, 0, NULL);
		U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_3 = L_3;
		return L_2;
	}
}
// System.Void SceneTransitionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionManager__ctor_mC1CE6821C2F16276186084D740072667E81DDD46 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, const RuntimeMethod* method) 
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
// System.Void SceneTransitionManager/<GoToSceneRountine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRountineU3Ed__2__ctor_mEADFA1C14B388A7B6EC7842E019F9A076B718E4C (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneTransitionManager/<GoToSceneRountine>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRountineU3Ed__2_System_IDisposable_Dispose_mDBBFD46F02B71EF9D22070FC331FA2290C52437A (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneTransitionManager/<GoToSceneRountine>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGoToSceneRountineU3Ed__2_MoveNext_mE44796B19582F227FE65E4CF6C4CC85C2D63E3B4 (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fadeScreen.FadeOut();
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_4 = V_1;
		NullCheck(L_4);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_5 = L_4->___fadeScreen_4;
		NullCheck(L_5);
		FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310(L_5, NULL);
		// yield return new WaitForSeconds(fadeScreen.fadeDuration);
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_6 = V_1;
		NullCheck(L_6);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_7 = L_6->___fadeScreen_4;
		NullCheck(L_7);
		float L_8 = L_7->___fadeDuration_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_10 = __this->___sceneIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneTransitionManager/<GoToSceneRountine>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRountineU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64CD3D4BB089118285E9B968589E85D0B6E8C1EC (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneTransitionManager/<GoToSceneRountine>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRountineU3Ed__2_System_Collections_IEnumerator_Reset_m69DB84EF085C1873FFAADB9F5F0CF777F216639C (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGoToSceneRountineU3Ed__2_System_Collections_IEnumerator_Reset_m69DB84EF085C1873FFAADB9F5F0CF777F216639C_RuntimeMethod_var)));
	}
}
// System.Object SceneTransitionManager/<GoToSceneRountine>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRountineU3Ed__2_System_Collections_IEnumerator_get_Current_mF7C639E04D92D2DB9F7F385D37AC21EE33E64193 (U3CGoToSceneRountineU3Ed__2_tAFB9A57B965C75B4DEB160C33427A9FCF186F7B9* __this, const RuntimeMethod* method) 
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
// System.Void SceneTransitionManager/<GoToSceneAsyncRountine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneAsyncRountineU3Ed__4__ctor_mD4213E707A9DAA6933063079E633FB0BFBA5AA6F (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneTransitionManager/<GoToSceneAsyncRountine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneAsyncRountineU3Ed__4_System_IDisposable_Dispose_m9BF16874A591FFCDCDA2A7B63C650FF2DCE9E7EC (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneTransitionManager/<GoToSceneAsyncRountine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGoToSceneAsyncRountineU3Ed__4_MoveNext_m8794EB040666CA795B65E32765FDBDF59E5229DE (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fadeScreen.FadeOut();
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_4 = V_1;
		NullCheck(L_4);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_5 = L_4->___fadeScreen_4;
		NullCheck(L_5);
		FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310(L_5, NULL);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
		int32_t L_6 = __this->___sceneIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_7;
		L_7 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_6, NULL);
		__this->___U3CoperationU3E5__2_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_4), (void*)L_7);
		// operation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CoperationU3E5__2_4;
		NullCheck(L_8);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_8, (bool)0, NULL);
		// float timer = 0;
		__this->___U3CtimerU3E5__3_5 = (0.0f);
		goto IL_007c;
	}

IL_0053:
	{
		// timer += Time.deltaTime;
		float L_9 = __this->___U3CtimerU3E5__3_5;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__3_5 = ((float)il2cpp_codegen_add(L_9, L_10));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007c:
	{
		// while(timer <= fadeScreen.fadeDuration && !operation.isDone)
		float L_11 = __this->___U3CtimerU3E5__3_5;
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_12 = V_1;
		NullCheck(L_12);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_13 = L_12->___fadeScreen_4;
		NullCheck(L_13);
		float L_14 = L_13->___fadeDuration_5;
		if ((!(((float)L_11) <= ((float)L_14))))
		{
			goto IL_009c;
		}
	}
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_15 = __this->___U3CoperationU3E5__2_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_15, NULL);
		if (!L_16)
		{
			goto IL_0053;
		}
	}

IL_009c:
	{
		// operation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_17 = __this->___U3CoperationU3E5__2_4;
		NullCheck(L_17);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_17, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneTransitionManager/<GoToSceneAsyncRountine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneAsyncRountineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE33298764C6764E500C7E704AACBBC58F9B80CFE (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneTransitionManager/<GoToSceneAsyncRountine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneAsyncRountineU3Ed__4_System_Collections_IEnumerator_Reset_m06E7B729FBC4585E31EB26EDBCF3BEB8281B9507 (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGoToSceneAsyncRountineU3Ed__4_System_Collections_IEnumerator_Reset_m06E7B729FBC4585E31EB26EDBCF3BEB8281B9507_RuntimeMethod_var)));
	}
}
// System.Object SceneTransitionManager/<GoToSceneAsyncRountine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneAsyncRountineU3Ed__4_System_Collections_IEnumerator_get_Current_m6863AFD461DC72329C686E58DA2E4E49CAF0F962 (U3CGoToSceneAsyncRountineU3Ed__4_tF0AF0BF1F94B384AD1DF016DEFB07ABB4E5FD1FC* __this, const RuntimeMethod* method) 
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
// System.Void GameMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Start_mB6ABE0DF0B6606FC95724AA4754E84462DD38F7E (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Update_mCFFAADF1F066F9CF4D0A22AA1695C25D5AD39E26 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (showButton.action.WasPressedThisFrame())
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___showButton_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		// menu.SetActive(!menu.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___menu_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___menu_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// menu.transform.position = head.position + new Vector3(head.forward.x, 0, head.forward.z).normalized * spawnDistance;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___menu_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___head_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___head_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		float L_12 = L_11.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___head_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_12, (0.0f), L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_18 = __this->___spawnDistance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_19, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_20, NULL);
	}

IL_0088:
	{
		// menu.transform.LookAt(new Vector3(head.position.x, menu.transform.position.y, head.position.z));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___menu_6;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___head_4;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___menu_6;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___head_4;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_25, L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_22, L_33, NULL);
		// menu.transform.forward *= -1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___menu_6;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, (-1.0f), NULL);
		NullCheck(L_36);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_36, L_38, NULL);
		// }
		return;
	}
}
// System.Void GameMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager__ctor_mDAD729E1E2A853245FFBF04647A7CB055F7C1CCD (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	{
		// public float spawnDistance = 2;
		__this->___spawnDistance_5 = (2.0f);
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
// System.Void BaseProjector::ObjectRotation(UnityEngine.Transform,System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB (BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_objectToRotate, float ___1_speed, bool ___2_x, bool ___3_y, bool ___4_z, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float xAxis = 0f, yAxis = 0f, zAxis = 0f;
		V_0 = (0.0f);
		// float xAxis = 0f, yAxis = 0f, zAxis = 0f;
		V_1 = (0.0f);
		// float xAxis = 0f, yAxis = 0f, zAxis = 0f;
		V_2 = (0.0f);
		// if (x != false)
		bool L_0 = ___2_x;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// xAxis = speed * Time.deltaTime;
		float L_1 = ___1_speed;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
	}

IL_001d:
	{
		// if (y != false)
		bool L_3 = ___3_y;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// yAxis = speed * Time.deltaTime;
		float L_4 = ___1_speed;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
	}

IL_0029:
	{
		// if (z != false)
		bool L_6 = ___4_z;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// zAxis = speed * Time.deltaTime;
		float L_7 = ___1_speed;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_7, L_8));
	}

IL_0035:
	{
		// objectToRotate.Rotate(xAxis, yAxis, zAxis);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_objectToRotate;
		float L_10 = V_0;
		float L_11 = V_1;
		float L_12 = V_2;
		NullCheck(L_9);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void BaseProjector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseProjector__ctor_m1CFC66D3ABC64AD9AB6245846C4AACE932A8BB04 (BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5* __this, const RuntimeMethod* method) 
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
// System.Void DiscoBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBall_Start_m4630666C574E9FE029E5DAB05DE102B2320A0A30 (DiscoBall_tBE029644F45F13AC938B7A8AFCD751C62BDD78A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = this.transform.Find("Ball");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, NULL);
		((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DiscoBall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBall_Update_m4B65BB0124EE90880D619948356BCFF596116A9D (DiscoBall_tBE029644F45F13AC938B7A8AFCD751C62BDD78A0* __this, const RuntimeMethod* method) 
{
	{
		// ObjectRotation(body, rotationSpeed, false, true) ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5;
		float L_1 = __this->___rotationSpeed_6;
		BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB(__this, L_0, L_1, (bool)0, (bool)1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DiscoBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBall__ctor_m69836B7D0E70BBAB334DD08E7A6553BBC098E1E4 (DiscoBall_tBE029644F45F13AC938B7A8AFCD751C62BDD78A0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float rotationSpeed = 9f;
		__this->___rotationSpeed_6 = (9.0f);
		BaseProjector__ctor_m1CFC66D3ABC64AD9AB6245846C4AACE932A8BB04(__this, NULL);
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
// System.Void DiscoBalls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBalls_Start_m55DCE84C457E53F387582398E27BC6A25E9F97F4 (DiscoBalls_t5EF3FEE8D98AD3929EF2C111263C046FCAC1597E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A75D40D64112544BF22910A6DD1369C99B2199);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D04ECD24876140112EEADEC5E31A7D76537684);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = this.transform.Find("Body");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, NULL);
		((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5), (void*)L_1);
		// left = body.Find("Left_Ball");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralA2D04ECD24876140112EEADEC5E31A7D76537684, NULL);
		__this->___left_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_8), (void*)L_3);
		// right = body.Find("Right_Ball");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral72A75D40D64112544BF22910A6DD1369C99B2199, NULL);
		__this->___right_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_9), (void*)L_5);
		// }
		return;
	}
}
// System.Void DiscoBalls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBalls_Update_m6E36D0FBC10D3A778A8BF37B6D160E9B3747380F (DiscoBalls_t5EF3FEE8D98AD3929EF2C111263C046FCAC1597E* __this, const RuntimeMethod* method) 
{
	{
		// ObjectRotation(body, spinSpeed, false, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5;
		float L_1 = __this->___spinSpeed_6;
		BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB(__this, L_0, L_1, (bool)0, (bool)1, (bool)0, NULL);
		// ObjectRotation(left, ballSpeed, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___left_8;
		float L_3 = __this->___ballSpeed_7;
		BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB(__this, L_2, L_3, (bool)1, (bool)0, (bool)0, NULL);
		// ObjectRotation(right, -ballSpeed, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___right_9;
		float L_5 = __this->___ballSpeed_7;
		BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB(__this, L_4, ((-L_5)), (bool)1, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DiscoBalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoBalls__ctor_m69C4FEF95319B6B3E0D4A94EB839FDA449AB1CE0 (DiscoBalls_t5EF3FEE8D98AD3929EF2C111263C046FCAC1597E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] [Range(-70f, 70f)] private float spinSpeed = 50f;
		__this->___spinSpeed_6 = (50.0f);
		// [SerializeField] [Range(-70f, 70f)] private float ballSpeed = 50f;
		__this->___ballSpeed_7 = (50.0f);
		BaseProjector__ctor_m1CFC66D3ABC64AD9AB6245846C4AACE932A8BB04(__this, NULL);
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
// System.Void ProjectorSimpleRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_Start_m5BC40DD97B73EFEEA1DC24D9826BFBF6395B716F (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4F788F29158E67285811BFACE8DEE1B207CBBA3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bracket = this.transform.Find("Bracket");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralF4F788F29158E67285811BFACE8DEE1B207CBBA3, NULL);
		((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___bracket_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___bracket_4), (void*)L_1);
		// body = bracket.transform.Find("Body");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___bracket_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, NULL);
		((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void ProjectorSimpleRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_Update_m934A4736C3C7C325F5AD2B7E398456C165C451E1 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) 
{
	{
		// SimpleBehavior();
		ProjectorSimpleRotation_SimpleBehavior_m78BB34213440EEA9EDAB9E14299D1B1DF81D7A91(__this, NULL);
		// }
		return;
	}
}
// System.Void ProjectorSimpleRotation::SimpleBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_SimpleBehavior_m78BB34213440EEA9EDAB9E14299D1B1DF81D7A91 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) 
{
	{
		// ObjectRotation(bracket, spinSpeed, false, true);//y rotation
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___bracket_4;
		float L_1 = __this->___spinSpeed_8;
		BaseProjector_ObjectRotation_mE5F45061B867E80BE79A2C226F4A5364B518D4BB(__this, L_0, L_1, (bool)0, (bool)1, (bool)0, NULL);
		// BodyRotation();
		ProjectorSimpleRotation_BodyRotation_m6FCA72E465513E0893615C4A9D320BDDA2881235(__this, NULL);
		// }
		return;
	}
}
// System.Void ProjectorSimpleRotation::BodyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation_BodyRotation_m6FCA72E465513E0893615C4A9D320BDDA2881235 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) 
{
	{
		// body.transform.localRotation = Quaternion.Euler(bodyRotationAngle * Mathf.Sin(Time.time * bodyRotationSpeed), 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseProjector_t69DE39B9B237A4C99CB12D906D5E61B6AF66F9B5*)__this)->___body_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		float L_2 = __this->___bodyRotationAngle_7;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___bodyRotationSpeed_6;
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply(L_3, L_4)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(L_2, L_5)), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void ProjectorSimpleRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectorSimpleRotation__ctor_m4B27D400328D6B2D8A44757F795CB3D39C23BA88 (ProjectorSimpleRotation_t3DB03D8C8A0D0455CD872EB3CB3F6DE65ED43A49* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] [Range(0f, 2f)] protected float bodyRotationSpeed = 2f;
		__this->___bodyRotationSpeed_6 = (2.0f);
		// [SerializeField] [Range(0f, 100f)] protected float bodyRotationAngle = 100f;
		__this->___bodyRotationAngle_7 = (100.0f);
		// [SerializeField] [Range(-30f, 30f)] private float spinSpeed = 3f;
		__this->___spinSpeed_8 = (3.0f);
		BaseProjector__ctor_m1CFC66D3ABC64AD9AB6245846C4AACE932A8BB04(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::ProcessBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo[],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_ProcessBehaviour_m53A40E2A3E2CE76E965D833462D8F892BFDA7D25 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* ___0_lampInfos, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* V_0 = NULL;
	int32_t V_1 = 0;
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var lamp in lampInfos)
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_0 = ___0_lampInfos;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		// foreach (var lamp in lampInfos)
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// ProcessSingleLampBehaviour(lamp, timeOffset, speed);
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_5 = V_2;
		float L_6 = ___1_timeOffset;
		float L_7 = ___2_speed;
		VirtualActionInvoker3< LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E, float, float >::Invoke(5 /* System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single) */, __this, L_5, L_6, L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001b:
	{
		// foreach (var lamp in lampInfos)
		int32_t L_9 = V_1;
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::SetColor(Mixaill3d.Lamps.Scripts.Core.LampInfo,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_2 = NULL;
	{
		// var renderer = lampInfo.Renderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline((&___0_lampInfo), NULL);
		V_0 = L_0;
		// var additionalRenderer = lampInfo.LightCone;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E_inline((&___0_lampInfo), NULL);
		V_1 = L_1;
		// SetMaterialColor(color, renderer, "_EmissionColor", true);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		LampBasicBehaviour_SetMaterialColor_mADA2A2D76349332C9B653875B9DF35BA29425017(L_2, L_3, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, (bool)1, NULL);
		// SetMaterialColor(color, additionalRenderer, "_Color", false);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_1;
		LampBasicBehaviour_SetMaterialColor_mADA2A2D76349332C9B653875B9DF35BA29425017(L_4, L_5, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, (bool)0, NULL);
		// var light = lampInfo.Light;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6;
		L_6 = LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279_inline((&___0_lampInfo), NULL);
		V_2 = L_6;
		// if (light != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// light.color = color;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_color;
		NullCheck(L_9);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_9, L_10, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::SetMaterialColor(UnityEngine.Color,UnityEngine.Renderer,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_SetMaterialColor_mADA2A2D76349332C9B653875B9DF35BA29425017 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___1_renderer, String_t* ___2_colorName, bool ___3_changeAlpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (renderer == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___1_renderer;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var material = renderer.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = ___1_renderer;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		V_0 = L_3;
		// var colorToApply = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		V_1 = L_4;
		// if (!changeAlpha)
		bool L_5 = ___3_changeAlpha;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		// var materialColor = material.GetColor(colorName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		String_t* L_7 = ___2_colorName;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_6, L_7, NULL);
		V_2 = L_8;
		// colorToApply.a = materialColor.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_2;
		float L_10 = L_9.___a_3;
		(&V_1)->___a_3 = L_10;
	}

IL_002b:
	{
		// if (colorName == "_EmissionColor")
		String_t* L_11 = ___2_colorName;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		// colorToApply *= Mathf.Pow(2.0F, 1.2f- 0.4169F);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_1;
		float L_14;
		L_14 = powf((2.0f), (0.783100009f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_13, L_14, NULL);
		V_1 = L_15;
	}

IL_004e:
	{
		// material.SetColor(colorName, colorToApply);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = V_0;
		String_t* L_17 = ___2_colorName;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_1;
		NullCheck(L_16);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour_ProcessSingleLampBehaviour_mFE28277A86963CBCE65B32574A07FBE6B7A77151 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	{
		// throw new Exception("It is basic behaviour. There is no realization.");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4307092ABF2F84B0AE5F6A876F1EF5F9DEB555A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LampBasicBehaviour_ProcessSingleLampBehaviour_mFE28277A86963CBCE65B32574A07FBE6B7A77151_RuntimeMethod_var)));
	}
}
// System.Single Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::GetCurrentTime(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57 (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, float ___0_timeOffset, float ___1_speed, const RuntimeMethod* method) 
{
	{
		// return Mathf.Repeat(Time.time * speed + timeOffset, 1f);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = ___1_speed;
		float L_2 = ___0_timeOffset;
		float L_3;
		L_3 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), (1.0f), NULL);
		return L_3;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A (LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::RegisterGroup(Mixaill3d.Lamps.Scripts.Core.LampsGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController_RegisterGroup_m38ACC45A6FFA6C148884B24DF9A74B7DA2C9AE9E (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_lampsGroup, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAE0B21637734C5B75830BDD0395150542182B0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lampsGroups.Add(lampsGroup);
		List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* L_0 = __this->____lampsGroups_5;
		LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* L_1 = ___0_lampsGroup;
		NullCheck(L_0);
		List_1_Add_mBAE0B21637734C5B75830BDD0395150542182B0F_inline(L_0, L_1, List_1_Add_mBAE0B21637734C5B75830BDD0395150542182B0F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::UnregisterGroup(Mixaill3d.Lamps.Scripts.Core.LampsGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController_UnregisterGroup_m42502BE3A4E02135E4ABA2A2DB9AEE8AA8FDFD68 (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* ___0_lampsGroup, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m5029F36734FEAAC62B6ACE7350E3ADFF4E61DC54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lampsGroups.Remove(lampsGroup);
		List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* L_0 = __this->____lampsGroups_5;
		LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* L_1 = ___0_lampsGroup;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m5029F36734FEAAC62B6ACE7350E3ADFF4E61DC54(L_0, L_1, List_1_Remove_m5029F36734FEAAC62B6ACE7350E3ADFF4E61DC54_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController_Update_m18A3E1710927CA9E27534AB946FD85653A237D1C (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m532538E61B25669B07C519914F5C1FAC0AA6E816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF67F4323DE71200ED4CF583B56C1467D2E2F5501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33977C821C56D164816410B9C5E288509020D304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m956A8E4879A94E1E491C74AF1C105E0DE3F8D1AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var group in _lampsGroups)
		List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* L_0 = __this->____lampsGroups_5;
		NullCheck(L_0);
		Enumerator_t50C5AD3546AA1E247A63A7276949BA0CE62A5C01 L_1;
		L_1 = List_1_GetEnumerator_m956A8E4879A94E1E491C74AF1C105E0DE3F8D1AF(L_0, List_1_GetEnumerator_m956A8E4879A94E1E491C74AF1C105E0DE3F8D1AF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m532538E61B25669B07C519914F5C1FAC0AA6E816((&V_0), Enumerator_Dispose_m532538E61B25669B07C519914F5C1FAC0AA6E816_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var group in _lampsGroups)
				LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* L_2;
				L_2 = Enumerator_get_Current_m33977C821C56D164816410B9C5E288509020D304_inline((&V_0), Enumerator_get_Current_m33977C821C56D164816410B9C5E288509020D304_RuntimeMethod_var);
				// group.UpdateLightning();
				NullCheck(L_2);
				LampsGroup_UpdateLightning_m55EB9C830D64AE455482CDB249A2CDB3DFB795A1(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var group in _lampsGroups)
				bool L_3;
				L_3 = Enumerator_MoveNext_mF67F4323DE71200ED4CF583B56C1467D2E2F5501((&V_0), Enumerator_MoveNext_mF67F4323DE71200ED4CF583B56C1467D2E2F5501_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsController__ctor_m5442F5FC0F3E6D17D8928E385F91F1DE973027EE (LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m31C7B8DC4C7D4C9F9CFD8A7B8279B41184E3061C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourSingletone_1__ctor_m4BFC575A987C38B5A1B0DF91DEE22C174D691872_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<LampsGroup> _lampsGroups = new List<LampsGroup>();
		List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F* L_0 = (List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F*)il2cpp_codegen_object_new(List_1_t40F6F763A475B67FC1CAC5C6B8B12B06BADE3E3F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m31C7B8DC4C7D4C9F9CFD8A7B8279B41184E3061C(L_0, List_1__ctor_m31C7B8DC4C7D4C9F9CFD8A7B8279B41184E3061C_RuntimeMethod_var);
		__this->____lampsGroups_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lampsGroups_5), (void*)L_0);
		MonoBehaviourSingletone_1__ctor_m4BFC575A987C38B5A1B0DF91DEE22C174D691872(__this, MonoBehaviourSingletone_1__ctor_m4BFC575A987C38B5A1B0DF91DEE22C174D691872_RuntimeMethod_var);
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
// System.Collections.Generic.List`1<UnityEngine.GameObject> Mixaill3d.Lamps.Scripts.Core.LampsGroup::FindLamps(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* LampsGroup_FindLamps_m1BC10A41C74C0D45B92A8EB0B673C5452880FD53 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	{
		// List<GameObject> result = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		// FindLamps(t, result);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_t;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = V_0;
		LampsGroup_FindLamps_m1CC9E67009A81EFFF0D3671EA73227C102572DB0(__this, L_1, L_2, NULL);
		// return result;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		return L_3;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::BuildLampsInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_BuildLampsInfos_mB93A1492359551EE00A38BEEB5AA93131AFBD3B2 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _lampInfos = new LampInfo[_lamps.Length];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____lamps_7;
		NullCheck(L_0);
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_1 = (LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0*)(LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0*)SZArrayNew(LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____lampInfos_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lampInfos_8), (void*)L_1);
		// for (int i = 0; i < _lamps.Length; i++)
		V_0 = 0;
		goto IL_0034;
	}

IL_0017:
	{
		// _lampInfos[i] = new LampInfo(_lamps[i]);
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_2 = __this->____lampInfos_8;
		int32_t L_3 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->____lamps_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_8;
		memset((&L_8), 0, sizeof(L_8));
		LampInfo__ctor_m5BF8684E663F9557F4B8465F810835D159B31C21((&L_8), L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E)L_8);
		// for (int i = 0; i < _lamps.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		// for (int i = 0; i < _lamps.Length; i++)
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->____lamps_7;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::FindLamps(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_FindLamps_m1CC9E67009A81EFFF0D3671EA73227C102572DB0 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7473D578D8345732693B4CA5617D6210F2E6FD45);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in t)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0009_1:
			{
				// foreach (Transform child in t)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child.name.Contains("Lamp_"))
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral7473D578D8345732693B4CA5617D6210F2E6FD45, NULL);
				if (!L_9)
				{
					goto IL_0033_1;
				}
			}
			{
				// result.Add(child.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = ___1_result;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				NullCheck(L_10);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_12, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_0033_1:
			{
				// FindLamps(child, result);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = ___1_result;
				LampsGroup_FindLamps_m1CC9E67009A81EFFF0D3671EA73227C102572DB0(__this, L_13, L_14, NULL);
			}

IL_003b_1:
			{
				// foreach (Transform child in t)
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0056;
			}
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
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_Awake_m75ED9A22D9251921E6E6F307B91DAA5BE9AD9DED (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourSingletone_1_get_Instance_m0B4FA5A8AC01307411DFED4E6EDCC015E1518DE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeLamps();
		LampsGroup_InitializeLamps_m2378CC25136CEDA219CF863770FC99D24703E36F(__this, NULL);
		// _lampsController = LampsController.Instance;
		LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* L_0;
		L_0 = MonoBehaviourSingletone_1_get_Instance_m0B4FA5A8AC01307411DFED4E6EDCC015E1518DE2(MonoBehaviourSingletone_1_get_Instance_m0B4FA5A8AC01307411DFED4E6EDCC015E1518DE2_RuntimeMethod_var);
		__this->____lampsController_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lampsController_9), (void*)L_0);
		// _lampsController.RegisterGroup(this);
		LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* L_1 = __this->____lampsController_9;
		NullCheck(L_1);
		LampsController_RegisterGroup_m38ACC45A6FFA6C148884B24DF9A74B7DA2C9AE9E(L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_OnDestroy_mABF7EF9DE7C8D2A0AAFA314D11A41AB4B0317B83 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_lampsController != null)
		LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* L_0 = __this->____lampsController_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _lampsController.UnregisterGroup(this);
		LampsController_tF50F4B648D4D8DBDF143B2A3EC7176E27BD8DC96* L_2 = __this->____lampsController_9;
		NullCheck(L_2);
		LampsController_UnregisterGroup_m42502BE3A4E02135E4ABA2A2DB9AEE8AA8FDFD68(L_2, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::InitializeLamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_InitializeLamps_m2378CC25136CEDA219CF863770FC99D24703E36F (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_lamps == null || _lamps.Length == 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____lamps_7;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____lamps_7;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0028;
		}
	}

IL_0011:
	{
		// _lamps = FindLamps(transform).ToArray();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
		L_3 = LampsGroup_FindLamps_m1BC10A41C74C0D45B92A8EB0B673C5452880FD53(__this, L_2, NULL);
		NullCheck(L_3);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_3, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		__this->____lamps_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lamps_7), (void*)L_4);
	}

IL_0028:
	{
		// BuildLampsInfos();
		LampsGroup_BuildLampsInfos_mB93A1492359551EE00A38BEEB5AA93131AFBD3B2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::UpdateLightning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup_UpdateLightning_m55EB9C830D64AE455482CDB249A2CDB3DFB795A1 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	{
		// _behaviour.ProcessBehaviour(_lampInfos, _timeOffset, _speed);
		LampBasicBehaviour_tC90965CE005F9E1CF9E29B2A511556B7A37F9984* L_0 = __this->____behaviour_4;
		LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0* L_1 = __this->____lampInfos_8;
		float L_2 = __this->____timeOffset_5;
		float L_3 = __this->____speed_6;
		NullCheck(L_0);
		VirtualActionInvoker3< LampInfoU5BU5D_tA0A8A8E874B696D887A6DDFEB8AFEC0D569412A0*, float, float >::Invoke(4 /* System.Void Mixaill3d.Lamps.Scripts.Core.LampBasicBehaviour::ProcessBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo[],System.Single,System.Single) */, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampsGroup__ctor_m133DE02F15D038C63671FE24BA3AFBD9D9E8A5C2 (LampsGroup_t741245EA1432052BACB757F4FBE793A56423726B* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _speed = 1f;
		__this->____speed_6 = (1.0f);
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
// Conversion methods for marshalling of: Mixaill3d.Lamps.Scripts.Core.LampInfo
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_pinvoke(const LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E& unmarshaled, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CLightU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Light>k__BackingField' of type 'LampInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CLightU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_pinvoke_back(const LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_pinvoke& marshaled, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E& unmarshaled)
{
	Exception_t* ___U3CLightU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Light>k__BackingField' of type 'LampInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CLightU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mixaill3d.Lamps.Scripts.Core.LampInfo
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_pinvoke_cleanup(LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mixaill3d.Lamps.Scripts.Core.LampInfo
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_com(const LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E& unmarshaled, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_com& marshaled)
{
	Exception_t* ___U3CLightU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Light>k__BackingField' of type 'LampInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CLightU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_com_back(const LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_com& marshaled, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E& unmarshaled)
{
	Exception_t* ___U3CLightU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Light>k__BackingField' of type 'LampInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CLightU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mixaill3d.Lamps.Scripts.Core.LampInfo
IL2CPP_EXTERN_C void LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshal_com_cleanup(LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E_marshaled_com& marshaled)
{
}
// UnityEngine.Light Mixaill3d.Lamps.Scripts.Core.LampInfo::get_Light()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279 (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Light Light { get; set; }
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___U3CLightU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* _returnValue;
	_returnValue = LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_Light(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Light Light { get; set; }
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_value;
		__this->___U3CLightU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLightU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB_AdjustorThunk (RuntimeObject* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_value, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::get_Renderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50 (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer Renderer { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___U3CRendererU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* _returnValue;
	_returnValue = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_Renderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4 (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Renderer Renderer { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_value;
		__this->___U3CRendererU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRendererU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4_AdjustorThunk (RuntimeObject* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Renderer Mixaill3d.Lamps.Scripts.Core.LampInfo::get_LightCone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer LightCone { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___U3CLightConeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* _returnValue;
	_returnValue = LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::set_LightCone(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Renderer LightCone { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_value;
		__this->___U3CLightConeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLightConeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_AdjustorThunk (RuntimeObject* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Mixaill3d.Lamps.Scripts.Core.LampInfo::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LampInfo__ctor_m5BF8684E663F9557F4B8465F810835D159B31C21 (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	{
		// Renderer = gameObject.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4_inline(__this, L_1, NULL);
		// Light = gameObject.GetComponentInChildren<Light>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_2);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3;
		L_3 = GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26(L_2, GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB_inline(__this, L_3, NULL);
		// LightCone = null;
		LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_inline(__this, (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL, NULL);
		// var otherRenderers = gameObject.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_gameObject;
		NullCheck(L_4);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_5;
		L_5 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_4, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		// foreach (var renderer in otherRenderers)
		V_0 = L_5;
		V_1 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		// foreach (var renderer in otherRenderers)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (renderer != Renderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = V_2;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		// LightCone = renderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = V_2;
		LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_inline(__this, L_13, NULL);
		// break;
		return;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		// foreach (var renderer in otherRenderers)
		int32_t L_15 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void LampInfo__ctor_m5BF8684E663F9557F4B8465F810835D159B31C21_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method)
{
	LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E*>(__this + _offset);
	LampInfo__ctor_m5BF8684E663F9557F4B8465F810835D159B31C21(_thisAdjusted, ___0_gameObject, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChangeOverTime_ProcessSingleLampBehaviour_mAFEBC2486B2FC6B19229087434C20DDD9E2BC910 (ColorChangeOverTime_t7BF9B3E64047F5F76EFD34DBE14C36248BF0F102* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var currentTime = GetCurrentTime(timeOffset, speed);
		float L_0 = ___1_timeOffset;
		float L_1 = ___2_speed;
		float L_2;
		L_2 = LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// var color = _gradient.Evaluate(currentTime);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->____gradient_4;
		float L_4 = V_0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		V_1 = L_5;
		// SetColor(lampInfo, color);
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_6 = ___0_lampInfo;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_1;
		LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327(__this, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.ColorChangeOverTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChangeOverTime__ctor_mA9D3A4BF8132AB7844B2D73637DCBB430E7EB58D (ColorChangeOverTime_t7BF9B3E64047F5F76EFD34DBE14C36248BF0F102* __this, const RuntimeMethod* method) 
{
	{
		LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A(__this, NULL);
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
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EveryColorChangeOverTime_ProcessSingleLampBehaviour_m43D858221B7EBE38AD1903F2AC3487FE0256A67F (EveryColorChangeOverTime_t7FE3532CCD77A56B0692B70E168F1C96CDF77580* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var currentTime = GetCurrentTime(timeOffset, speed);
		float L_0 = ___1_timeOffset;
		float L_1 = ___2_speed;
		float L_2;
		L_2 = LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// var transform = lampInfo.Renderer.transform;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline((&___0_lampInfo), NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		// var siblingIndex = transform.GetSiblingIndex();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_4, NULL);
		V_1 = L_5;
		// var color = _gradients[siblingIndex].Evaluate(currentTime);
		GradientU5BU5D_t0C577E5F4C6B0B3E5E565B7F427161380E47B7D8* L_6 = __this->____gradients_4;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_0;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_9, L_10, NULL);
		V_2 = L_11;
		// SetColor(lampInfo, color);
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_12 = ___0_lampInfo;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_2;
		LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327(__this, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.EveryColorChangeOverTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EveryColorChangeOverTime__ctor_m3E8681E79B2855DE3583DBA38E19B65DB8EA4AC2 (EveryColorChangeOverTime_t7FE3532CCD77A56B0692B70E168F1C96CDF77580* __this, const RuntimeMethod* method) 
{
	{
		LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A(__this, NULL);
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
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromTextureColorChanging_ProcessSingleLampBehaviour_m887D813F54FDA0B5E7A5B18AB1D7F056D4A15361 (FromTextureColorChanging_tBE4E7394496F3A50974CDDAC853EA928D155B615* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// float time = GetCurrentTime(timeOffset, speed);
		float L_0 = ___1_timeOffset;
		float L_1 = ___2_speed;
		float L_2;
		L_2 = LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57(__this, L_0, L_1, NULL);
		// var frameAmountX = texture.width/_frameWidth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___texture_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		int32_t L_5 = __this->____frameWidth_4;
		V_0 = ((int32_t)(L_4/L_5));
		// var frameAmountY = texture.height/_frameHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___texture_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		int32_t L_8 = __this->____frameHeight_5;
		V_1 = ((int32_t)(L_7/L_8));
		// int frameAmount = frameAmountX * frameAmountY;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		// int currentFrame = (int)(time * frameAmount);
		int32_t L_11 = V_2;
		// int frameX = currentFrame % frameAmountX;
		int32_t L_12 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_2, ((float)L_11))));
		int32_t L_13 = V_0;
		V_3 = ((int32_t)(L_12%L_13));
		// int frameY = currentFrame / frameAmountX;
		int32_t L_14 = V_0;
		V_4 = ((int32_t)(L_12/L_14));
		// var transform = lampInfo.Renderer.transform;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline((&___0_lampInfo), NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		// int id = transform.GetSiblingIndex();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_16, NULL);
		// int idX = (id - 1) % _frameWidth;
		int32_t L_18 = L_17;
		int32_t L_19 = __this->____frameWidth_4;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 1))%L_19));
		// int idY = (id - 1) / _frameWidth;
		int32_t L_20 = __this->____frameWidth_4;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 1))/L_20));
		// var color = texture.GetPixel(frameX * _frameWidth + idX, frameY * _frameHeight + (_frameHeight - idY - 1));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = __this->___texture_6;
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____frameWidth_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_4;
		int32_t L_26 = __this->____frameHeight_5;
		int32_t L_27 = __this->____frameHeight_5;
		int32_t L_28 = V_6;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_21, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_22, L_23)), L_24)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, L_26)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, L_28)), 1)))), NULL);
		V_7 = L_29;
		// SetColor(lampInfo, color);
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_30 = ___0_lampInfo;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_7;
		LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327(__this, L_30, L_31, NULL);
		// }
		return;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.FromTextureColorChanging::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromTextureColorChanging__ctor_mE0BA91B4A2D946B6B8BC6A4C9A000AFE12B9E5D4 (FromTextureColorChanging_tBE4E7394496F3A50974CDDAC853EA928D155B615* __this, const RuntimeMethod* method) 
{
	{
		LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A(__this, NULL);
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
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::ProcessSingleLampBehaviour(Mixaill3d.Lamps.Scripts.Core.LampInfo,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothFromTextureColorChanging_ProcessSingleLampBehaviour_m640D5079FB316BFF55EB806931CE0BA2CC8AE9E5 (SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788* __this, LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E ___0_lampInfo, float ___1_timeOffset, float ___2_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// float time = GetCurrentTime(timeOffset, speed);
		float L_0 = ___1_timeOffset;
		float L_1 = ___2_speed;
		float L_2;
		L_2 = LampBasicBehaviour_GetCurrentTime_m6E654A0BCCC55318900828B231872950CB9A9A57(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// var frameAmountX = texture.width/_frameWidth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___texture_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		int32_t L_5 = __this->____frameWidth_4;
		V_1 = ((int32_t)(L_4/L_5));
		// var frameAmountY = texture.height/_frameHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___texture_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		int32_t L_8 = __this->____frameHeight_5;
		V_2 = ((int32_t)(L_7/L_8));
		// int frameAmount = frameAmountX * frameAmountY;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		// int currentFrame = (int)(time * frameAmount);
		float L_11 = V_0;
		int32_t L_12 = V_3;
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_11, ((float)L_12))));
		// var renderer = lampInfo.Renderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline((&___0_lampInfo), NULL);
		V_5 = L_13;
		// var prevColor = GetColor(renderer, currentFrame - 1, frameAmountX);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = V_5;
		int32_t L_15 = V_4;
		int32_t L_16 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = SmoothFromTextureColorChanging_GetColor_mF226F6E29ACF4A2B2992773F0F21EC945FBA626F(__this, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), L_16, NULL);
		// var currentColor = GetColor(renderer, currentFrame, frameAmountX);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18 = V_5;
		int32_t L_19 = V_4;
		int32_t L_20 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = SmoothFromTextureColorChanging_GetColor_mF226F6E29ACF4A2B2992773F0F21EC945FBA626F(__this, L_18, L_19, L_20, NULL);
		V_6 = L_21;
		// var color = Color.Lerp(prevColor, currentColor, time * frameAmount - currentFrame);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_6;
		float L_23 = V_0;
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_17, L_22, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_23, ((float)L_24))), ((float)L_25))), NULL);
		V_7 = L_26;
		// SetColor(lampInfo, color);
		LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E L_27 = ___0_lampInfo;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_7;
		LampBasicBehaviour_SetColor_m9D25A26F0B3BB8ACFF578FA6D571126D757A2327(__this, L_27, L_28, NULL);
		// }
		return;
	}
}
// UnityEngine.Color Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::GetColor(UnityEngine.Renderer,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SmoothFromTextureColorChanging_GetColor_mF226F6E29ACF4A2B2992773F0F21EC945FBA626F (SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, int32_t ___1_currentFrame, int32_t ___2_frameAmountX, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int frameX = currentFrame % frameAmountX;
		int32_t L_0 = ___1_currentFrame;
		int32_t L_1 = ___2_frameAmountX;
		V_0 = ((int32_t)(L_0%L_1));
		// int frameY = currentFrame / frameAmountX;
		int32_t L_2 = ___1_currentFrame;
		int32_t L_3 = ___2_frameAmountX;
		V_1 = ((int32_t)(L_2/L_3));
		// int id = renderer.transform.GetSiblingIndex();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = ___0_renderer;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_5, NULL);
		// int idX = (id - 1) % _frameWidth;
		int32_t L_7 = L_6;
		int32_t L_8 = __this->____frameWidth_4;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 1))%L_8));
		// int idY = (id - 1) / _frameWidth;
		int32_t L_9 = __this->____frameWidth_4;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 1))/L_9));
		// var color = texture.GetPixel(frameX * _frameWidth + idX, frameY * _frameHeight + (_frameHeight - idY - 1));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___texture_6;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____frameWidth_4;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____frameHeight_5;
		int32_t L_16 = __this->____frameHeight_5;
		int32_t L_17 = V_3;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_10, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), L_13)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_14, L_15)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), 1)))), NULL);
		// return color;
		return L_18;
	}
}
// System.Void Mixaill3d.Lamps.Scripts.Behaviours.SmoothFromTextureColorChanging::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothFromTextureColorChanging__ctor_mE3245105FEF6DC0C112DCE2DB87FE0B9C85CA891 (SmoothFromTextureColorChanging_t6F297CCD5069D83AA1BA85A6FA3F70DE97A2F788* __this, const RuntimeMethod* method) 
{
	{
		LampBasicBehaviour__ctor_m0174847A4A2D222B75AC888177906BF60292E35A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_positiveInfinity_mE0C7AA87B375383EA62F6084761DAE8197147D23_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___positiveInfinityVector_13;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
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
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStateFunction_Invoke_m84514C6D793459A489BEFDBFAEE4F674D4D561C2_inline (UpdateStateFunction_tA8EEF6A68222973092DAEC0C61B296271CF5788D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsPositiveInfinity_mB6DA4AAB74012F1BD90C90121090ED87A5782FA7_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		return (bool)((((float)L_0) == ((float)(std::numeric_limits<float>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_Renderer_mEEF1AF9B87795133056306D1B089D3DEF63E1C50_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer Renderer { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___U3CRendererU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* LampInfo_get_LightCone_mA1B91F34CAD2FBC40C1217A8A9351461D4F1BF7E_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer LightCone { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___U3CLightConeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* LampInfo_get_Light_m4EAC1C2235700A6C2125927EFE1752327260A279_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, const RuntimeMethod* method) 
{
	{
		// public Light Light { get; set; }
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___U3CLightU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_Light_mC7644D05E609FE48968D4F37B1B0DFC4C30562EB_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Light Light { get; set; }
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_value;
		__this->___U3CLightU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLightU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_Renderer_m07CE25C023E8978B2AED679E8BA83189E493FEA4_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Renderer Renderer { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_value;
		__this->___U3CRendererU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRendererU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LampInfo_set_LightCone_m6575A099014E0606FC64A52DD2CCD81341C3EDFA_inline (LampInfo_t2F6018630C645954F664C1D75A49076D77EA906E* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Renderer LightCone { get; set; }
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_value;
		__this->___U3CLightConeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLightConeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
