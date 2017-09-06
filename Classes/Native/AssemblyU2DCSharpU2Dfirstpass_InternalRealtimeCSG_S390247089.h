#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_InternalRealtimeCSG_3353220031.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InternalRealtimeCSG.Surface
#pragma pack(push, tp, 4)
struct  Surface_t390247089 
{
public:
	// InternalRealtimeCSG.CSGPlane InternalRealtimeCSG.Surface::Plane
	CSGPlane_t3353220031  ___Plane_0;
	// UnityEngine.Vector3 InternalRealtimeCSG.Surface::Tangent
	Vector3_t2243707580  ___Tangent_1;
	// UnityEngine.Vector3 InternalRealtimeCSG.Surface::BiNormal
	Vector3_t2243707580  ___BiNormal_2;
	// System.Int32 InternalRealtimeCSG.Surface::TexGenIndex
	int32_t ___TexGenIndex_3;

public:
	inline static int32_t get_offset_of_Plane_0() { return static_cast<int32_t>(offsetof(Surface_t390247089, ___Plane_0)); }
	inline CSGPlane_t3353220031  get_Plane_0() const { return ___Plane_0; }
	inline CSGPlane_t3353220031 * get_address_of_Plane_0() { return &___Plane_0; }
	inline void set_Plane_0(CSGPlane_t3353220031  value)
	{
		___Plane_0 = value;
	}

	inline static int32_t get_offset_of_Tangent_1() { return static_cast<int32_t>(offsetof(Surface_t390247089, ___Tangent_1)); }
	inline Vector3_t2243707580  get_Tangent_1() const { return ___Tangent_1; }
	inline Vector3_t2243707580 * get_address_of_Tangent_1() { return &___Tangent_1; }
	inline void set_Tangent_1(Vector3_t2243707580  value)
	{
		___Tangent_1 = value;
	}

	inline static int32_t get_offset_of_BiNormal_2() { return static_cast<int32_t>(offsetof(Surface_t390247089, ___BiNormal_2)); }
	inline Vector3_t2243707580  get_BiNormal_2() const { return ___BiNormal_2; }
	inline Vector3_t2243707580 * get_address_of_BiNormal_2() { return &___BiNormal_2; }
	inline void set_BiNormal_2(Vector3_t2243707580  value)
	{
		___BiNormal_2 = value;
	}

	inline static int32_t get_offset_of_TexGenIndex_3() { return static_cast<int32_t>(offsetof(Surface_t390247089, ___TexGenIndex_3)); }
	inline int32_t get_TexGenIndex_3() const { return ___TexGenIndex_3; }
	inline int32_t* get_address_of_TexGenIndex_3() { return &___TexGenIndex_3; }
	inline void set_TexGenIndex_3(int32_t value)
	{
		___TexGenIndex_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
