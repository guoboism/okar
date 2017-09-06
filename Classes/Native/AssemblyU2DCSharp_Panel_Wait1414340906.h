#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Panel_Wait
struct  Panel_Wait_t1414340906  : public MonoBehaviour_t1158329972
{
public:
	// System.String Panel_Wait::str_waiting
	String_t* ___str_waiting_2;
	// System.String Panel_Wait::str_ready
	String_t* ___str_ready_3;
	// UnityEngine.UI.Image Panel_Wait::icon_waiting
	Image_t2042527209 * ___icon_waiting_4;
	// UnityEngine.UI.Image Panel_Wait::icon_ready
	Image_t2042527209 * ___icon_ready_5;
	// UnityEngine.UI.Text Panel_Wait::txt
	Text_t356221433 * ___txt_6;
	// UnityEngine.CanvasGroup Panel_Wait::cg_panel
	CanvasGroup_t3296560743 * ___cg_panel_7;
	// System.Boolean Panel_Wait::waiting
	bool ___waiting_8;

public:
	inline static int32_t get_offset_of_str_waiting_2() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___str_waiting_2)); }
	inline String_t* get_str_waiting_2() const { return ___str_waiting_2; }
	inline String_t** get_address_of_str_waiting_2() { return &___str_waiting_2; }
	inline void set_str_waiting_2(String_t* value)
	{
		___str_waiting_2 = value;
		Il2CppCodeGenWriteBarrier(&___str_waiting_2, value);
	}

	inline static int32_t get_offset_of_str_ready_3() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___str_ready_3)); }
	inline String_t* get_str_ready_3() const { return ___str_ready_3; }
	inline String_t** get_address_of_str_ready_3() { return &___str_ready_3; }
	inline void set_str_ready_3(String_t* value)
	{
		___str_ready_3 = value;
		Il2CppCodeGenWriteBarrier(&___str_ready_3, value);
	}

	inline static int32_t get_offset_of_icon_waiting_4() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___icon_waiting_4)); }
	inline Image_t2042527209 * get_icon_waiting_4() const { return ___icon_waiting_4; }
	inline Image_t2042527209 ** get_address_of_icon_waiting_4() { return &___icon_waiting_4; }
	inline void set_icon_waiting_4(Image_t2042527209 * value)
	{
		___icon_waiting_4 = value;
		Il2CppCodeGenWriteBarrier(&___icon_waiting_4, value);
	}

	inline static int32_t get_offset_of_icon_ready_5() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___icon_ready_5)); }
	inline Image_t2042527209 * get_icon_ready_5() const { return ___icon_ready_5; }
	inline Image_t2042527209 ** get_address_of_icon_ready_5() { return &___icon_ready_5; }
	inline void set_icon_ready_5(Image_t2042527209 * value)
	{
		___icon_ready_5 = value;
		Il2CppCodeGenWriteBarrier(&___icon_ready_5, value);
	}

	inline static int32_t get_offset_of_txt_6() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___txt_6)); }
	inline Text_t356221433 * get_txt_6() const { return ___txt_6; }
	inline Text_t356221433 ** get_address_of_txt_6() { return &___txt_6; }
	inline void set_txt_6(Text_t356221433 * value)
	{
		___txt_6 = value;
		Il2CppCodeGenWriteBarrier(&___txt_6, value);
	}

	inline static int32_t get_offset_of_cg_panel_7() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___cg_panel_7)); }
	inline CanvasGroup_t3296560743 * get_cg_panel_7() const { return ___cg_panel_7; }
	inline CanvasGroup_t3296560743 ** get_address_of_cg_panel_7() { return &___cg_panel_7; }
	inline void set_cg_panel_7(CanvasGroup_t3296560743 * value)
	{
		___cg_panel_7 = value;
		Il2CppCodeGenWriteBarrier(&___cg_panel_7, value);
	}

	inline static int32_t get_offset_of_waiting_8() { return static_cast<int32_t>(offsetof(Panel_Wait_t1414340906, ___waiting_8)); }
	inline bool get_waiting_8() const { return ___waiting_8; }
	inline bool* get_address_of_waiting_8() { return &___waiting_8; }
	inline void set_waiting_8(bool value)
	{
		___waiting_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
