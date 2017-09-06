#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Panel_Wait
struct Panel_Wait_t1414340906;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARBase
struct  ARBase_t5885278  : public MonoBehaviour_t1158329972
{
public:
	// Panel_Wait ARBase::p_wait
	Panel_Wait_t1414340906 * ___p_wait_2;
	// UnityEngine.GameObject ARBase::AlterWorld
	GameObject_t1756533147 * ___AlterWorld_3;
	// System.Boolean ARBase::finding_anchor
	bool ___finding_anchor_4;

public:
	inline static int32_t get_offset_of_p_wait_2() { return static_cast<int32_t>(offsetof(ARBase_t5885278, ___p_wait_2)); }
	inline Panel_Wait_t1414340906 * get_p_wait_2() const { return ___p_wait_2; }
	inline Panel_Wait_t1414340906 ** get_address_of_p_wait_2() { return &___p_wait_2; }
	inline void set_p_wait_2(Panel_Wait_t1414340906 * value)
	{
		___p_wait_2 = value;
		Il2CppCodeGenWriteBarrier(&___p_wait_2, value);
	}

	inline static int32_t get_offset_of_AlterWorld_3() { return static_cast<int32_t>(offsetof(ARBase_t5885278, ___AlterWorld_3)); }
	inline GameObject_t1756533147 * get_AlterWorld_3() const { return ___AlterWorld_3; }
	inline GameObject_t1756533147 ** get_address_of_AlterWorld_3() { return &___AlterWorld_3; }
	inline void set_AlterWorld_3(GameObject_t1756533147 * value)
	{
		___AlterWorld_3 = value;
		Il2CppCodeGenWriteBarrier(&___AlterWorld_3, value);
	}

	inline static int32_t get_offset_of_finding_anchor_4() { return static_cast<int32_t>(offsetof(ARBase_t5885278, ___finding_anchor_4)); }
	inline bool get_finding_anchor_4() const { return ___finding_anchor_4; }
	inline bool* get_address_of_finding_anchor_4() { return &___finding_anchor_4; }
	inline void set_finding_anchor_4(bool value)
	{
		___finding_anchor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
