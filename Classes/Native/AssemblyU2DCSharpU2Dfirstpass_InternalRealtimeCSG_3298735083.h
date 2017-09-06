#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// InternalRealtimeCSG.CutNode[]
struct CutNodeU5BU5D_t3251696869;
// InternalRealtimeCSG.Surface[]
struct SurfaceU5BU5D_t4160544620;
// InternalRealtimeCSG.TexGen[]
struct TexGenU5BU5D_t4217810364;
// RealtimeCSG.TexGenFlags[]
struct TexGenFlagsU5BU5D_t3981130627;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InternalRealtimeCSG.Shape
struct  Shape_t3298735083  : public Il2CppObject
{
public:
	// InternalRealtimeCSG.CutNode[] InternalRealtimeCSG.Shape::CutNodes
	CutNodeU5BU5D_t3251696869* ___CutNodes_0;
	// InternalRealtimeCSG.Surface[] InternalRealtimeCSG.Shape::Surfaces
	SurfaceU5BU5D_t4160544620* ___Surfaces_1;
	// InternalRealtimeCSG.TexGen[] InternalRealtimeCSG.Shape::TexGens
	TexGenU5BU5D_t4217810364* ___TexGens_2;
	// RealtimeCSG.TexGenFlags[] InternalRealtimeCSG.Shape::TexGenFlags
	TexGenFlagsU5BU5D_t3981130627* ___TexGenFlags_3;
	// UnityEngine.Material[] InternalRealtimeCSG.Shape::Materials
	MaterialU5BU5D_t3123989686* ___Materials_4;

public:
	inline static int32_t get_offset_of_CutNodes_0() { return static_cast<int32_t>(offsetof(Shape_t3298735083, ___CutNodes_0)); }
	inline CutNodeU5BU5D_t3251696869* get_CutNodes_0() const { return ___CutNodes_0; }
	inline CutNodeU5BU5D_t3251696869** get_address_of_CutNodes_0() { return &___CutNodes_0; }
	inline void set_CutNodes_0(CutNodeU5BU5D_t3251696869* value)
	{
		___CutNodes_0 = value;
		Il2CppCodeGenWriteBarrier(&___CutNodes_0, value);
	}

	inline static int32_t get_offset_of_Surfaces_1() { return static_cast<int32_t>(offsetof(Shape_t3298735083, ___Surfaces_1)); }
	inline SurfaceU5BU5D_t4160544620* get_Surfaces_1() const { return ___Surfaces_1; }
	inline SurfaceU5BU5D_t4160544620** get_address_of_Surfaces_1() { return &___Surfaces_1; }
	inline void set_Surfaces_1(SurfaceU5BU5D_t4160544620* value)
	{
		___Surfaces_1 = value;
		Il2CppCodeGenWriteBarrier(&___Surfaces_1, value);
	}

	inline static int32_t get_offset_of_TexGens_2() { return static_cast<int32_t>(offsetof(Shape_t3298735083, ___TexGens_2)); }
	inline TexGenU5BU5D_t4217810364* get_TexGens_2() const { return ___TexGens_2; }
	inline TexGenU5BU5D_t4217810364** get_address_of_TexGens_2() { return &___TexGens_2; }
	inline void set_TexGens_2(TexGenU5BU5D_t4217810364* value)
	{
		___TexGens_2 = value;
		Il2CppCodeGenWriteBarrier(&___TexGens_2, value);
	}

	inline static int32_t get_offset_of_TexGenFlags_3() { return static_cast<int32_t>(offsetof(Shape_t3298735083, ___TexGenFlags_3)); }
	inline TexGenFlagsU5BU5D_t3981130627* get_TexGenFlags_3() const { return ___TexGenFlags_3; }
	inline TexGenFlagsU5BU5D_t3981130627** get_address_of_TexGenFlags_3() { return &___TexGenFlags_3; }
	inline void set_TexGenFlags_3(TexGenFlagsU5BU5D_t3981130627* value)
	{
		___TexGenFlags_3 = value;
		Il2CppCodeGenWriteBarrier(&___TexGenFlags_3, value);
	}

	inline static int32_t get_offset_of_Materials_4() { return static_cast<int32_t>(offsetof(Shape_t3298735083, ___Materials_4)); }
	inline MaterialU5BU5D_t3123989686* get_Materials_4() const { return ___Materials_4; }
	inline MaterialU5BU5D_t3123989686** get_address_of_Materials_4() { return &___Materials_4; }
	inline void set_Materials_4(MaterialU5BU5D_t3123989686* value)
	{
		___Materials_4 = value;
		Il2CppCodeGenWriteBarrier(&___Materials_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
