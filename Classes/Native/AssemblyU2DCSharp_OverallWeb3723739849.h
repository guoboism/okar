#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ARBase5885278.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Point>
struct List_1_t195839794;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OverallWeb
struct  OverallWeb_t3723739849  : public ARBase_t5885278
{
public:
	// UnityEngine.GameObject OverallWeb::tp_lr
	GameObject_t1756533147 * ___tp_lr_5;
	// System.Collections.Generic.List`1<Point> OverallWeb::ps
	List_1_t195839794 * ___ps_6;
	// UnityEngine.Vector3 OverallWeb::root
	Vector3_t2243707580  ___root_7;
	// System.Single OverallWeb::total_time
	float ___total_time_8;
	// System.Single OverallWeb::timer
	float ___timer_9;
	// System.Collections.Generic.List`1<Point> OverallWeb::temp_points
	List_1_t195839794 * ___temp_points_11;

public:
	inline static int32_t get_offset_of_tp_lr_5() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___tp_lr_5)); }
	inline GameObject_t1756533147 * get_tp_lr_5() const { return ___tp_lr_5; }
	inline GameObject_t1756533147 ** get_address_of_tp_lr_5() { return &___tp_lr_5; }
	inline void set_tp_lr_5(GameObject_t1756533147 * value)
	{
		___tp_lr_5 = value;
		Il2CppCodeGenWriteBarrier(&___tp_lr_5, value);
	}

	inline static int32_t get_offset_of_ps_6() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___ps_6)); }
	inline List_1_t195839794 * get_ps_6() const { return ___ps_6; }
	inline List_1_t195839794 ** get_address_of_ps_6() { return &___ps_6; }
	inline void set_ps_6(List_1_t195839794 * value)
	{
		___ps_6 = value;
		Il2CppCodeGenWriteBarrier(&___ps_6, value);
	}

	inline static int32_t get_offset_of_root_7() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___root_7)); }
	inline Vector3_t2243707580  get_root_7() const { return ___root_7; }
	inline Vector3_t2243707580 * get_address_of_root_7() { return &___root_7; }
	inline void set_root_7(Vector3_t2243707580  value)
	{
		___root_7 = value;
	}

	inline static int32_t get_offset_of_total_time_8() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___total_time_8)); }
	inline float get_total_time_8() const { return ___total_time_8; }
	inline float* get_address_of_total_time_8() { return &___total_time_8; }
	inline void set_total_time_8(float value)
	{
		___total_time_8 = value;
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}

	inline static int32_t get_offset_of_temp_points_11() { return static_cast<int32_t>(offsetof(OverallWeb_t3723739849, ___temp_points_11)); }
	inline List_1_t195839794 * get_temp_points_11() const { return ___temp_points_11; }
	inline List_1_t195839794 ** get_address_of_temp_points_11() { return &___temp_points_11; }
	inline void set_temp_points_11(List_1_t195839794 * value)
	{
		___temp_points_11 = value;
		Il2CppCodeGenWriteBarrier(&___temp_points_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
