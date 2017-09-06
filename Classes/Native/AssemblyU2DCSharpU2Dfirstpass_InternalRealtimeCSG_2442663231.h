#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RealtimeCSG.CSGModel
struct CSGModel_t4262697674;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// InternalRealtimeCSG.HiddenComponentData[]
struct HiddenComponentDataU5BU5D_t2318752716;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InternalRealtimeCSG.CSGModelExported
struct  CSGModelExported_t2442663231  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InternalRealtimeCSG.CSGModelExported::Version
	float ___Version_2;
	// RealtimeCSG.CSGModel InternalRealtimeCSG.CSGModelExported::containedModel
	CSGModel_t4262697674 * ___containedModel_3;
	// UnityEngine.GameObject InternalRealtimeCSG.CSGModelExported::containedExportedModel
	GameObject_t1756533147 * ___containedExportedModel_4;
	// InternalRealtimeCSG.HiddenComponentData[] InternalRealtimeCSG.CSGModelExported::hiddenComponents
	HiddenComponentDataU5BU5D_t2318752716* ___hiddenComponents_5;
	// System.Boolean InternalRealtimeCSG.CSGModelExported::disarm
	bool ___disarm_6;

public:
	inline static int32_t get_offset_of_Version_2() { return static_cast<int32_t>(offsetof(CSGModelExported_t2442663231, ___Version_2)); }
	inline float get_Version_2() const { return ___Version_2; }
	inline float* get_address_of_Version_2() { return &___Version_2; }
	inline void set_Version_2(float value)
	{
		___Version_2 = value;
	}

	inline static int32_t get_offset_of_containedModel_3() { return static_cast<int32_t>(offsetof(CSGModelExported_t2442663231, ___containedModel_3)); }
	inline CSGModel_t4262697674 * get_containedModel_3() const { return ___containedModel_3; }
	inline CSGModel_t4262697674 ** get_address_of_containedModel_3() { return &___containedModel_3; }
	inline void set_containedModel_3(CSGModel_t4262697674 * value)
	{
		___containedModel_3 = value;
		Il2CppCodeGenWriteBarrier(&___containedModel_3, value);
	}

	inline static int32_t get_offset_of_containedExportedModel_4() { return static_cast<int32_t>(offsetof(CSGModelExported_t2442663231, ___containedExportedModel_4)); }
	inline GameObject_t1756533147 * get_containedExportedModel_4() const { return ___containedExportedModel_4; }
	inline GameObject_t1756533147 ** get_address_of_containedExportedModel_4() { return &___containedExportedModel_4; }
	inline void set_containedExportedModel_4(GameObject_t1756533147 * value)
	{
		___containedExportedModel_4 = value;
		Il2CppCodeGenWriteBarrier(&___containedExportedModel_4, value);
	}

	inline static int32_t get_offset_of_hiddenComponents_5() { return static_cast<int32_t>(offsetof(CSGModelExported_t2442663231, ___hiddenComponents_5)); }
	inline HiddenComponentDataU5BU5D_t2318752716* get_hiddenComponents_5() const { return ___hiddenComponents_5; }
	inline HiddenComponentDataU5BU5D_t2318752716** get_address_of_hiddenComponents_5() { return &___hiddenComponents_5; }
	inline void set_hiddenComponents_5(HiddenComponentDataU5BU5D_t2318752716* value)
	{
		___hiddenComponents_5 = value;
		Il2CppCodeGenWriteBarrier(&___hiddenComponents_5, value);
	}

	inline static int32_t get_offset_of_disarm_6() { return static_cast<int32_t>(offsetof(CSGModelExported_t2442663231, ___disarm_6)); }
	inline bool get_disarm_6() const { return ___disarm_6; }
	inline bool* get_address_of_disarm_6() { return &___disarm_6; }
	inline void set_disarm_6(bool value)
	{
		___disarm_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
