#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InternalRealtimeCSG.CutNode
#pragma pack(push, tp, 4)
struct  CutNode_t1175808492 
{
public:
	// System.Int32 InternalRealtimeCSG.CutNode::planeIndex
	int32_t ___planeIndex_2;
	// System.Int16 InternalRealtimeCSG.CutNode::backNodeIndex
	int16_t ___backNodeIndex_3;
	// System.Int16 InternalRealtimeCSG.CutNode::frontNodeIndex
	int16_t ___frontNodeIndex_4;

public:
	inline static int32_t get_offset_of_planeIndex_2() { return static_cast<int32_t>(offsetof(CutNode_t1175808492, ___planeIndex_2)); }
	inline int32_t get_planeIndex_2() const { return ___planeIndex_2; }
	inline int32_t* get_address_of_planeIndex_2() { return &___planeIndex_2; }
	inline void set_planeIndex_2(int32_t value)
	{
		___planeIndex_2 = value;
	}

	inline static int32_t get_offset_of_backNodeIndex_3() { return static_cast<int32_t>(offsetof(CutNode_t1175808492, ___backNodeIndex_3)); }
	inline int16_t get_backNodeIndex_3() const { return ___backNodeIndex_3; }
	inline int16_t* get_address_of_backNodeIndex_3() { return &___backNodeIndex_3; }
	inline void set_backNodeIndex_3(int16_t value)
	{
		___backNodeIndex_3 = value;
	}

	inline static int32_t get_offset_of_frontNodeIndex_4() { return static_cast<int32_t>(offsetof(CutNode_t1175808492, ___frontNodeIndex_4)); }
	inline int16_t get_frontNodeIndex_4() const { return ___frontNodeIndex_4; }
	inline int16_t* get_address_of_frontNodeIndex_4() { return &___frontNodeIndex_4; }
	inline void set_frontNodeIndex_4(int16_t value)
	{
		___frontNodeIndex_4 = value;
	}
};
#pragma pack(pop, tp)

struct CutNode_t1175808492_StaticFields
{
public:
	// System.Int16 InternalRealtimeCSG.CutNode::Inside
	int16_t ___Inside_0;
	// System.Int16 InternalRealtimeCSG.CutNode::Outside
	int16_t ___Outside_1;

public:
	inline static int32_t get_offset_of_Inside_0() { return static_cast<int32_t>(offsetof(CutNode_t1175808492_StaticFields, ___Inside_0)); }
	inline int16_t get_Inside_0() const { return ___Inside_0; }
	inline int16_t* get_address_of_Inside_0() { return &___Inside_0; }
	inline void set_Inside_0(int16_t value)
	{
		___Inside_0 = value;
	}

	inline static int32_t get_offset_of_Outside_1() { return static_cast<int32_t>(offsetof(CutNode_t1175808492_StaticFields, ___Outside_1)); }
	inline int16_t get_Outside_1() const { return ___Outside_1; }
	inline int16_t* get_address_of_Outside_1() { return &___Outside_1; }
	inline void set_Outside_1(int16_t value)
	{
		___Outside_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
