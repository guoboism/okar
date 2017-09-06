#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Inctor23079577693.h"

// System.Collections.Generic.List`1<GreyDesign>
struct List_1_t886355785;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreyZone
struct  GreyZone_t4040173873  : public Il2CppObject
{
public:
	// System.Boolean GreyZone::active
	bool ___active_0;
	// Inctor2 GreyZone::pos
	Inctor2_t3079577693  ___pos_1;
	// System.Collections.Generic.List`1<GreyDesign> GreyZone::designs
	List_1_t886355785 * ___designs_2;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(GreyZone_t4040173873, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(GreyZone_t4040173873, ___pos_1)); }
	inline Inctor2_t3079577693  get_pos_1() const { return ___pos_1; }
	inline Inctor2_t3079577693 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Inctor2_t3079577693  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_designs_2() { return static_cast<int32_t>(offsetof(GreyZone_t4040173873, ___designs_2)); }
	inline List_1_t886355785 * get_designs_2() const { return ___designs_2; }
	inline List_1_t886355785 ** get_address_of_designs_2() { return &___designs_2; }
	inline void set_designs_2(List_1_t886355785 * value)
	{
		___designs_2 = value;
		Il2CppCodeGenWriteBarrier(&___designs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
