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
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARUserAnchorExample
struct  UnityARUserAnchorExample_t3900755778  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UnityARUserAnchorExample::prefabObject
	GameObject_t1756533147 * ___prefabObject_2;
	// System.Int32 UnityARUserAnchorExample::distanceFromCamera
	int32_t ___distanceFromCamera_3;
	// System.Collections.Generic.HashSet`1<System.String> UnityARUserAnchorExample::m_Clones
	HashSet_1_t362681087 * ___m_Clones_4;
	// System.Single UnityARUserAnchorExample::m_TimeUntilRemove
	float ___m_TimeUntilRemove_5;

public:
	inline static int32_t get_offset_of_prefabObject_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t3900755778, ___prefabObject_2)); }
	inline GameObject_t1756533147 * get_prefabObject_2() const { return ___prefabObject_2; }
	inline GameObject_t1756533147 ** get_address_of_prefabObject_2() { return &___prefabObject_2; }
	inline void set_prefabObject_2(GameObject_t1756533147 * value)
	{
		___prefabObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefabObject_2, value);
	}

	inline static int32_t get_offset_of_distanceFromCamera_3() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t3900755778, ___distanceFromCamera_3)); }
	inline int32_t get_distanceFromCamera_3() const { return ___distanceFromCamera_3; }
	inline int32_t* get_address_of_distanceFromCamera_3() { return &___distanceFromCamera_3; }
	inline void set_distanceFromCamera_3(int32_t value)
	{
		___distanceFromCamera_3 = value;
	}

	inline static int32_t get_offset_of_m_Clones_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t3900755778, ___m_Clones_4)); }
	inline HashSet_1_t362681087 * get_m_Clones_4() const { return ___m_Clones_4; }
	inline HashSet_1_t362681087 ** get_address_of_m_Clones_4() { return &___m_Clones_4; }
	inline void set_m_Clones_4(HashSet_1_t362681087 * value)
	{
		___m_Clones_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Clones_4, value);
	}

	inline static int32_t get_offset_of_m_TimeUntilRemove_5() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t3900755778, ___m_TimeUntilRemove_5)); }
	inline float get_m_TimeUntilRemove_5() const { return ___m_TimeUntilRemove_5; }
	inline float* get_address_of_m_TimeUntilRemove_5() { return &___m_TimeUntilRemove_5; }
	inline void set_m_TimeUntilRemove_5(float value)
	{
		___m_TimeUntilRemove_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
