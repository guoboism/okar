#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_HideFlags1434274199.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InternalRealtimeCSG.HiddenComponentData
struct  HiddenComponentData_t3470943697  : public Il2CppObject
{
public:
	// UnityEngine.MonoBehaviour InternalRealtimeCSG.HiddenComponentData::behaviour
	MonoBehaviour_t1158329972 * ___behaviour_0;
	// System.Boolean InternalRealtimeCSG.HiddenComponentData::enabled
	bool ___enabled_1;
	// UnityEngine.HideFlags InternalRealtimeCSG.HiddenComponentData::hideFlags
	int32_t ___hideFlags_2;

public:
	inline static int32_t get_offset_of_behaviour_0() { return static_cast<int32_t>(offsetof(HiddenComponentData_t3470943697, ___behaviour_0)); }
	inline MonoBehaviour_t1158329972 * get_behaviour_0() const { return ___behaviour_0; }
	inline MonoBehaviour_t1158329972 ** get_address_of_behaviour_0() { return &___behaviour_0; }
	inline void set_behaviour_0(MonoBehaviour_t1158329972 * value)
	{
		___behaviour_0 = value;
		Il2CppCodeGenWriteBarrier(&___behaviour_0, value);
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(HiddenComponentData_t3470943697, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_hideFlags_2() { return static_cast<int32_t>(offsetof(HiddenComponentData_t3470943697, ___hideFlags_2)); }
	inline int32_t get_hideFlags_2() const { return ___hideFlags_2; }
	inline int32_t* get_address_of_hideFlags_2() { return &___hideFlags_2; }
	inline void set_hideFlags_2(int32_t value)
	{
		___hideFlags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
