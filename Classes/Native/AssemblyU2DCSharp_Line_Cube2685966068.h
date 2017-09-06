#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Line_Cube2
struct  Line_Cube2_t685966068  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Line_Cube2::child
	GameObject_t1756533147 * ___child_2;

public:
	inline static int32_t get_offset_of_child_2() { return static_cast<int32_t>(offsetof(Line_Cube2_t685966068, ___child_2)); }
	inline GameObject_t1756533147 * get_child_2() const { return ___child_2; }
	inline GameObject_t1756533147 ** get_address_of_child_2() { return &___child_2; }
	inline void set_child_2(GameObject_t1756533147 * value)
	{
		___child_2 = value;
		Il2CppCodeGenWriteBarrier(&___child_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
