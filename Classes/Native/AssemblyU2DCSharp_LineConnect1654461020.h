#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LineConnect
struct  LineConnect_t1654461020  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] LineConnect::children
	TransformU5BU5D_t3764228911* ___children_2;
	// UnityEngine.LineRenderer LineConnect::lr
	LineRenderer_t849157671 * ___lr_3;

public:
	inline static int32_t get_offset_of_children_2() { return static_cast<int32_t>(offsetof(LineConnect_t1654461020, ___children_2)); }
	inline TransformU5BU5D_t3764228911* get_children_2() const { return ___children_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_children_2() { return &___children_2; }
	inline void set_children_2(TransformU5BU5D_t3764228911* value)
	{
		___children_2 = value;
		Il2CppCodeGenWriteBarrier(&___children_2, value);
	}

	inline static int32_t get_offset_of_lr_3() { return static_cast<int32_t>(offsetof(LineConnect_t1654461020, ___lr_3)); }
	inline LineRenderer_t849157671 * get_lr_3() const { return ___lr_3; }
	inline LineRenderer_t849157671 ** get_address_of_lr_3() { return &___lr_3; }
	inline void set_lr_3(LineRenderer_t849157671 * value)
	{
		___lr_3 = value;
		Il2CppCodeGenWriteBarrier(&___lr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
