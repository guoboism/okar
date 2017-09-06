#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Collections.Generic.List`1<Point>
struct List_1_t195839794;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Point
struct  Point_t826718662  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Point> Point::points_connected
	List_1_t195839794 * ___points_connected_0;
	// UnityEngine.Vector3 Point::v3
	Vector3_t2243707580  ___v3_1;

public:
	inline static int32_t get_offset_of_points_connected_0() { return static_cast<int32_t>(offsetof(Point_t826718662, ___points_connected_0)); }
	inline List_1_t195839794 * get_points_connected_0() const { return ___points_connected_0; }
	inline List_1_t195839794 ** get_address_of_points_connected_0() { return &___points_connected_0; }
	inline void set_points_connected_0(List_1_t195839794 * value)
	{
		___points_connected_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_connected_0, value);
	}

	inline static int32_t get_offset_of_v3_1() { return static_cast<int32_t>(offsetof(Point_t826718662, ___v3_1)); }
	inline Vector3_t2243707580  get_v3_1() const { return ___v3_1; }
	inline Vector3_t2243707580 * get_address_of_v3_1() { return &___v3_1; }
	inline void set_v3_1(Vector3_t2243707580  value)
	{
		___v3_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
