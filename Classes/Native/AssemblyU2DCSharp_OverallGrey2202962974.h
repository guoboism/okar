#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ARBase5885278.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARCamera4198559457.h"
#include "AssemblyU2DCSharp_Inctor23079577693.h"

// OverallGrey
struct OverallGrey_t2202962974;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<Inctor2,GreyZone>
struct Dictionary_2_t274503435;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OverallGrey
struct  OverallGrey_t2202962974  : public ARBase_t5885278
{
public:
	// UnityEngine.XR.iOS.UnityARCamera OverallGrey::cam
	UnityARCamera_t4198559457  ___cam_7;
	// UnityEngine.GameObject OverallGrey::starting_disc
	GameObject_t1756533147 * ___starting_disc_8;
	// Inctor2 OverallGrey::player_pos
	Inctor2_t3079577693  ___player_pos_9;
	// System.Collections.Generic.Dictionary`2<Inctor2,GreyZone> OverallGrey::dic_objects
	Dictionary_2_t274503435 * ___dic_objects_10;

public:
	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974, ___cam_7)); }
	inline UnityARCamera_t4198559457  get_cam_7() const { return ___cam_7; }
	inline UnityARCamera_t4198559457 * get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(UnityARCamera_t4198559457  value)
	{
		___cam_7 = value;
	}

	inline static int32_t get_offset_of_starting_disc_8() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974, ___starting_disc_8)); }
	inline GameObject_t1756533147 * get_starting_disc_8() const { return ___starting_disc_8; }
	inline GameObject_t1756533147 ** get_address_of_starting_disc_8() { return &___starting_disc_8; }
	inline void set_starting_disc_8(GameObject_t1756533147 * value)
	{
		___starting_disc_8 = value;
		Il2CppCodeGenWriteBarrier(&___starting_disc_8, value);
	}

	inline static int32_t get_offset_of_player_pos_9() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974, ___player_pos_9)); }
	inline Inctor2_t3079577693  get_player_pos_9() const { return ___player_pos_9; }
	inline Inctor2_t3079577693 * get_address_of_player_pos_9() { return &___player_pos_9; }
	inline void set_player_pos_9(Inctor2_t3079577693  value)
	{
		___player_pos_9 = value;
	}

	inline static int32_t get_offset_of_dic_objects_10() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974, ___dic_objects_10)); }
	inline Dictionary_2_t274503435 * get_dic_objects_10() const { return ___dic_objects_10; }
	inline Dictionary_2_t274503435 ** get_address_of_dic_objects_10() { return &___dic_objects_10; }
	inline void set_dic_objects_10(Dictionary_2_t274503435 * value)
	{
		___dic_objects_10 = value;
		Il2CppCodeGenWriteBarrier(&___dic_objects_10, value);
	}
};

struct OverallGrey_t2202962974_StaticFields
{
public:
	// OverallGrey OverallGrey::self
	OverallGrey_t2202962974 * ___self_5;
	// System.Single OverallGrey::cell_size
	float ___cell_size_6;

public:
	inline static int32_t get_offset_of_self_5() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974_StaticFields, ___self_5)); }
	inline OverallGrey_t2202962974 * get_self_5() const { return ___self_5; }
	inline OverallGrey_t2202962974 ** get_address_of_self_5() { return &___self_5; }
	inline void set_self_5(OverallGrey_t2202962974 * value)
	{
		___self_5 = value;
		Il2CppCodeGenWriteBarrier(&___self_5, value);
	}

	inline static int32_t get_offset_of_cell_size_6() { return static_cast<int32_t>(offsetof(OverallGrey_t2202962974_StaticFields, ___cell_size_6)); }
	inline float get_cell_size_6() const { return ___cell_size_6; }
	inline float* get_address_of_cell_size_6() { return &___cell_size_6; }
	inline void set_cell_size_6(float value)
	{
		___cell_size_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
