#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LineDraw
struct  LineDraw_t2442342248  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 LineDraw::p1
	Vector3_t2243707580  ___p1_2;
	// UnityEngine.Vector3 LineDraw::p2
	Vector3_t2243707580  ___p2_3;
	// UnityEngine.Vector3 LineDraw::px
	Vector3_t2243707580  ___px_4;
	// UnityEngine.LineRenderer LineDraw::lr
	LineRenderer_t849157671 * ___lr_5;
	// System.Boolean LineDraw::drawing
	bool ___drawing_6;

public:
	inline static int32_t get_offset_of_p1_2() { return static_cast<int32_t>(offsetof(LineDraw_t2442342248, ___p1_2)); }
	inline Vector3_t2243707580  get_p1_2() const { return ___p1_2; }
	inline Vector3_t2243707580 * get_address_of_p1_2() { return &___p1_2; }
	inline void set_p1_2(Vector3_t2243707580  value)
	{
		___p1_2 = value;
	}

	inline static int32_t get_offset_of_p2_3() { return static_cast<int32_t>(offsetof(LineDraw_t2442342248, ___p2_3)); }
	inline Vector3_t2243707580  get_p2_3() const { return ___p2_3; }
	inline Vector3_t2243707580 * get_address_of_p2_3() { return &___p2_3; }
	inline void set_p2_3(Vector3_t2243707580  value)
	{
		___p2_3 = value;
	}

	inline static int32_t get_offset_of_px_4() { return static_cast<int32_t>(offsetof(LineDraw_t2442342248, ___px_4)); }
	inline Vector3_t2243707580  get_px_4() const { return ___px_4; }
	inline Vector3_t2243707580 * get_address_of_px_4() { return &___px_4; }
	inline void set_px_4(Vector3_t2243707580  value)
	{
		___px_4 = value;
	}

	inline static int32_t get_offset_of_lr_5() { return static_cast<int32_t>(offsetof(LineDraw_t2442342248, ___lr_5)); }
	inline LineRenderer_t849157671 * get_lr_5() const { return ___lr_5; }
	inline LineRenderer_t849157671 ** get_address_of_lr_5() { return &___lr_5; }
	inline void set_lr_5(LineRenderer_t849157671 * value)
	{
		___lr_5 = value;
		Il2CppCodeGenWriteBarrier(&___lr_5, value);
	}

	inline static int32_t get_offset_of_drawing_6() { return static_cast<int32_t>(offsetof(LineDraw_t2442342248, ___drawing_6)); }
	inline bool get_drawing_6() const { return ___drawing_6; }
	inline bool* get_address_of_drawing_6() { return &___drawing_6; }
	inline void set_drawing_6(bool value)
	{
		___drawing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
