#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// GreyObject
struct GreyObject_t3654361116;
// GreyZone
struct GreyZone_t4040173873;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreyDesign
struct  GreyDesign_t1517234653  : public Il2CppObject
{
public:
	// System.String GreyDesign::type
	String_t* ___type_0;
	// GreyObject GreyDesign::linked_object
	GreyObject_t3654361116 * ___linked_object_1;
	// GreyZone GreyDesign::zone
	GreyZone_t4040173873 * ___zone_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GreyDesign_t1517234653, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_linked_object_1() { return static_cast<int32_t>(offsetof(GreyDesign_t1517234653, ___linked_object_1)); }
	inline GreyObject_t3654361116 * get_linked_object_1() const { return ___linked_object_1; }
	inline GreyObject_t3654361116 ** get_address_of_linked_object_1() { return &___linked_object_1; }
	inline void set_linked_object_1(GreyObject_t3654361116 * value)
	{
		___linked_object_1 = value;
		Il2CppCodeGenWriteBarrier(&___linked_object_1, value);
	}

	inline static int32_t get_offset_of_zone_2() { return static_cast<int32_t>(offsetof(GreyDesign_t1517234653, ___zone_2)); }
	inline GreyZone_t4040173873 * get_zone_2() const { return ___zone_2; }
	inline GreyZone_t4040173873 ** get_address_of_zone_2() { return &___zone_2; }
	inline void set_zone_2(GreyZone_t4040173873 * value)
	{
		___zone_2 = value;
		Il2CppCodeGenWriteBarrier(&___zone_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
