#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SuperBlur_RenderMode3287463455.h"
#include "AssemblyU2DCSharp_SuperBlur_BlurKernelSize636559521.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SuperBlur.SuperBlurBase
struct  SuperBlurBase_t2161882175  : public MonoBehaviour_t1158329972
{
public:
	// SuperBlur.RenderMode SuperBlur.SuperBlurBase::renderMode
	int32_t ___renderMode_2;
	// SuperBlur.BlurKernelSize SuperBlur.SuperBlurBase::kernelSize
	int32_t ___kernelSize_3;
	// System.Single SuperBlur.SuperBlurBase::interpolation
	float ___interpolation_4;
	// System.Int32 SuperBlur.SuperBlurBase::downsample
	int32_t ___downsample_5;
	// System.Int32 SuperBlur.SuperBlurBase::iterations
	int32_t ___iterations_6;
	// System.Boolean SuperBlur.SuperBlurBase::gammaCorrection
	bool ___gammaCorrection_7;
	// UnityEngine.Material SuperBlur.SuperBlurBase::blurMaterial
	Material_t193706927 * ___blurMaterial_8;
	// UnityEngine.Material SuperBlur.SuperBlurBase::UIMaterial
	Material_t193706927 * ___UIMaterial_9;

public:
	inline static int32_t get_offset_of_renderMode_2() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___renderMode_2)); }
	inline int32_t get_renderMode_2() const { return ___renderMode_2; }
	inline int32_t* get_address_of_renderMode_2() { return &___renderMode_2; }
	inline void set_renderMode_2(int32_t value)
	{
		___renderMode_2 = value;
	}

	inline static int32_t get_offset_of_kernelSize_3() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___kernelSize_3)); }
	inline int32_t get_kernelSize_3() const { return ___kernelSize_3; }
	inline int32_t* get_address_of_kernelSize_3() { return &___kernelSize_3; }
	inline void set_kernelSize_3(int32_t value)
	{
		___kernelSize_3 = value;
	}

	inline static int32_t get_offset_of_interpolation_4() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___interpolation_4)); }
	inline float get_interpolation_4() const { return ___interpolation_4; }
	inline float* get_address_of_interpolation_4() { return &___interpolation_4; }
	inline void set_interpolation_4(float value)
	{
		___interpolation_4 = value;
	}

	inline static int32_t get_offset_of_downsample_5() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___downsample_5)); }
	inline int32_t get_downsample_5() const { return ___downsample_5; }
	inline int32_t* get_address_of_downsample_5() { return &___downsample_5; }
	inline void set_downsample_5(int32_t value)
	{
		___downsample_5 = value;
	}

	inline static int32_t get_offset_of_iterations_6() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___iterations_6)); }
	inline int32_t get_iterations_6() const { return ___iterations_6; }
	inline int32_t* get_address_of_iterations_6() { return &___iterations_6; }
	inline void set_iterations_6(int32_t value)
	{
		___iterations_6 = value;
	}

	inline static int32_t get_offset_of_gammaCorrection_7() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___gammaCorrection_7)); }
	inline bool get_gammaCorrection_7() const { return ___gammaCorrection_7; }
	inline bool* get_address_of_gammaCorrection_7() { return &___gammaCorrection_7; }
	inline void set_gammaCorrection_7(bool value)
	{
		___gammaCorrection_7 = value;
	}

	inline static int32_t get_offset_of_blurMaterial_8() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___blurMaterial_8)); }
	inline Material_t193706927 * get_blurMaterial_8() const { return ___blurMaterial_8; }
	inline Material_t193706927 ** get_address_of_blurMaterial_8() { return &___blurMaterial_8; }
	inline void set_blurMaterial_8(Material_t193706927 * value)
	{
		___blurMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_8, value);
	}

	inline static int32_t get_offset_of_UIMaterial_9() { return static_cast<int32_t>(offsetof(SuperBlurBase_t2161882175, ___UIMaterial_9)); }
	inline Material_t193706927 * get_UIMaterial_9() const { return ___UIMaterial_9; }
	inline Material_t193706927 ** get_address_of_UIMaterial_9() { return &___UIMaterial_9; }
	inline void set_UIMaterial_9(Material_t193706927 * value)
	{
		___UIMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___UIMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
