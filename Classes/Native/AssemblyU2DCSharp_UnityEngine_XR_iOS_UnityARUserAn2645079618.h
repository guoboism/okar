#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARMatrix4100931615.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t2645079618 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t100931615  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t2645079618, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t2645079618, ___transform_1)); }
	inline UnityARMatrix4x4_t100931615  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t100931615  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
