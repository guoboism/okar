﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t2351297253  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t193706927 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t1204166949 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3542995729 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3542995729 * ____videoTextureCbCr_5;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_6;
	// System.Single UnityEngine.XR.iOS.UnityARVideo::fTexCoordScale
	float ___fTexCoordScale_7;
	// UnityEngine.ScreenOrientation UnityEngine.XR.iOS.UnityARVideo::screenOrientation
	int32_t ___screenOrientation_8;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___m_ClearMaterial_2)); }
	inline Material_t193706927 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t193706927 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t193706927 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClearMaterial_2, value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t1204166949 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t1204166949 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t1204166949 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoCommandBuffer_3, value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ____videoTextureY_4)); }
	inline Texture2D_t3542995729 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t3542995729 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t3542995729 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier(&____videoTextureY_4, value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ____videoTextureCbCr_5)); }
	inline Texture2D_t3542995729 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t3542995729 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t3542995729 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier(&____videoTextureCbCr_5, value);
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___bCommandBufferInitialized_6)); }
	inline bool get_bCommandBufferInitialized_6() const { return ___bCommandBufferInitialized_6; }
	inline bool* get_address_of_bCommandBufferInitialized_6() { return &___bCommandBufferInitialized_6; }
	inline void set_bCommandBufferInitialized_6(bool value)
	{
		___bCommandBufferInitialized_6 = value;
	}

	inline static int32_t get_offset_of_fTexCoordScale_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___fTexCoordScale_7)); }
	inline float get_fTexCoordScale_7() const { return ___fTexCoordScale_7; }
	inline float* get_address_of_fTexCoordScale_7() { return &___fTexCoordScale_7; }
	inline void set_fTexCoordScale_7(float value)
	{
		___fTexCoordScale_7 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___screenOrientation_8)); }
	inline int32_t get_screenOrientation_8() const { return ___screenOrientation_8; }
	inline int32_t* get_address_of_screenOrientation_8() { return &___screenOrientation_8; }
	inline void set_screenOrientation_8(int32_t value)
	{
		___screenOrientation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
