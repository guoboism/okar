#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t3596724887  : public MonoBehaviour_t1158329972
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t3596724887, ___m_AnchorId_2)); }
	inline String_t* get_m_AnchorId_2() const { return ___m_AnchorId_2; }
	inline String_t** get_address_of_m_AnchorId_2() { return &___m_AnchorId_2; }
	inline void set_m_AnchorId_2(String_t* value)
	{
		___m_AnchorId_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_AnchorId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
