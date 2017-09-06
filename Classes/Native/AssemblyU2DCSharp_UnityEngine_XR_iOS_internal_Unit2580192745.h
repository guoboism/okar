#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARMatrix4100931615.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARTrackingSta2048880995.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARTrackingSta4227173799.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityVideoPar2644681676.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t2580192745 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t100931615  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t100931615  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t2644681676  ___videoParams_4;
	// System.Single UnityEngine.XR.iOS.internal_UnityARCamera::ambientIntensity
	float ___ambientIntensity_5;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t100931615  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t100931615  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t100931615  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t100931615  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___videoParams_4)); }
	inline UnityVideoParams_t2644681676  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t2644681676 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t2644681676  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_ambientIntensity_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___ambientIntensity_5)); }
	inline float get_ambientIntensity_5() const { return ___ambientIntensity_5; }
	inline float* get_address_of_ambientIntensity_5() { return &___ambientIntensity_5; }
	inline void set_ambientIntensity_5(float value)
	{
		___ambientIntensity_5 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2580192745, ___getPointCloudData_6)); }
	inline uint32_t get_getPointCloudData_6() const { return ___getPointCloudData_6; }
	inline uint32_t* get_address_of_getPointCloudData_6() { return &___getPointCloudData_6; }
	inline void set_getPointCloudData_6(uint32_t value)
	{
		___getPointCloudData_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
