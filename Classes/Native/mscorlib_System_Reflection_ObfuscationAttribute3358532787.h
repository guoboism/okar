#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ObfuscationAttribute
struct  ObfuscationAttribute_t3358532787  : public Attribute_t542643598
{
public:
	// System.Boolean System.Reflection.ObfuscationAttribute::exclude
	bool ___exclude_0;
	// System.Boolean System.Reflection.ObfuscationAttribute::strip
	bool ___strip_1;
	// System.Boolean System.Reflection.ObfuscationAttribute::applyToMembers
	bool ___applyToMembers_2;
	// System.String System.Reflection.ObfuscationAttribute::feature
	String_t* ___feature_3;

public:
	inline static int32_t get_offset_of_exclude_0() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t3358532787, ___exclude_0)); }
	inline bool get_exclude_0() const { return ___exclude_0; }
	inline bool* get_address_of_exclude_0() { return &___exclude_0; }
	inline void set_exclude_0(bool value)
	{
		___exclude_0 = value;
	}

	inline static int32_t get_offset_of_strip_1() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t3358532787, ___strip_1)); }
	inline bool get_strip_1() const { return ___strip_1; }
	inline bool* get_address_of_strip_1() { return &___strip_1; }
	inline void set_strip_1(bool value)
	{
		___strip_1 = value;
	}

	inline static int32_t get_offset_of_applyToMembers_2() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t3358532787, ___applyToMembers_2)); }
	inline bool get_applyToMembers_2() const { return ___applyToMembers_2; }
	inline bool* get_address_of_applyToMembers_2() { return &___applyToMembers_2; }
	inline void set_applyToMembers_2(bool value)
	{
		___applyToMembers_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t3358532787, ___feature_3)); }
	inline String_t* get_feature_3() const { return ___feature_3; }
	inline String_t** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(String_t* value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier(&___feature_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
