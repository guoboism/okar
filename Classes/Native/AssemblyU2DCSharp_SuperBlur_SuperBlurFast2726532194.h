#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SuperBlur_SuperBlurBase2161882175.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SuperBlur.SuperBlurFast
struct  SuperBlurFast_t2726532194  : public SuperBlurBase_t2161882175
{
public:
	// UnityEngine.Camera SuperBlur.SuperBlurFast::m_Camera
	Camera_t189460977 * ___m_Camera_10;
	// UnityEngine.RenderTexture SuperBlur.SuperBlurFast::rt
	RenderTexture_t2666733923 * ___rt_11;

public:
	inline static int32_t get_offset_of_m_Camera_10() { return static_cast<int32_t>(offsetof(SuperBlurFast_t2726532194, ___m_Camera_10)); }
	inline Camera_t189460977 * get_m_Camera_10() const { return ___m_Camera_10; }
	inline Camera_t189460977 ** get_address_of_m_Camera_10() { return &___m_Camera_10; }
	inline void set_m_Camera_10(Camera_t189460977 * value)
	{
		___m_Camera_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_10, value);
	}

	inline static int32_t get_offset_of_rt_11() { return static_cast<int32_t>(offsetof(SuperBlurFast_t2726532194, ___rt_11)); }
	inline RenderTexture_t2666733923 * get_rt_11() const { return ___rt_11; }
	inline RenderTexture_t2666733923 ** get_address_of_rt_11() { return &___rt_11; }
	inline void set_rt_11(RenderTexture_t2666733923 * value)
	{
		___rt_11 = value;
		Il2CppCodeGenWriteBarrier(&___rt_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
