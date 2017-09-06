#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARCamera4198559457.h"

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t496507918;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t2646854145;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3886071158;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t142665927;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t4216008690;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t1104644293;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t1656212632;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t872580813;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3370800699;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t1333006279;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3296518558;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1558153491;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1622117597;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t3705772742;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3189755211;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3999066834;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t1661963345;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t4166385952;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t1130867170  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	IntPtr_t ___m_NativeARSession_11;

public:
	inline static int32_t get_offset_of_m_NativeARSession_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170, ___m_NativeARSession_11)); }
	inline IntPtr_t get_m_NativeARSession_11() const { return ___m_NativeARSession_11; }
	inline IntPtr_t* get_address_of_m_NativeARSession_11() { return &___m_NativeARSession_11; }
	inline void set_m_NativeARSession_11(IntPtr_t value)
	{
		___m_NativeARSession_11 = value;
	}
};

struct UnityARSessionNativeInterface_t1130867170_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t496507918 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t2646854145 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3886071158 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t142665927 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t4216008690 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t1104644293 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t1656212632 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t872580813 * ___ARSessionFailedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3370800699 * ___ARSessionInterruptedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3370800699 * ___ARSessioninterruptionEndedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t1333006279 * ___ARSessionTrackingChangedEvent_10;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4198559457  ___s_Camera_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t1130867170 * ___s_UnityARSessionNativeInterface_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3296518558 * ___U3CU3Ef__mgU24cache0_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t872580813 * ___U3CU3Ef__mgU24cache1_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3370800699 * ___U3CU3Ef__mgU24cache2_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3370800699 * ___U3CU3Ef__mgU24cache3_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t1558153491 * ___U3CU3Ef__mgU24cache4_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t1622117597 * ___U3CU3Ef__mgU24cache5_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t3705772742 * ___U3CU3Ef__mgU24cache6_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t3189755211 * ___U3CU3Ef__mgU24cache7_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3999066834 * ___U3CU3Ef__mgU24cache8_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t1661963345 * ___U3CU3Ef__mgU24cache9_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t4166385952 * ___U3CU3Ef__mgU24cacheA_24;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t496507918 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t496507918 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t496507918 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___ARFrameUpdatedEvent_0, value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t2646854145 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t2646854145 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t2646854145 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorAddedEvent_1, value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3886071158 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3886071158 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3886071158 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorUpdatedEvent_2, value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t142665927 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t142665927 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t142665927 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorRemovedEvent_3, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t4216008690 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t4216008690 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t4216008690 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorAddedEvent_4, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t1104644293 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t1104644293 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t1104644293 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorUpdatedEvent_5, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t1656212632 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t1656212632 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t1656212632 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorRemovedEvent_6, value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionFailedEvent_7)); }
	inline ARSessionFailed_t872580813 * get_ARSessionFailedEvent_7() const { return ___ARSessionFailedEvent_7; }
	inline ARSessionFailed_t872580813 ** get_address_of_ARSessionFailedEvent_7() { return &___ARSessionFailedEvent_7; }
	inline void set_ARSessionFailedEvent_7(ARSessionFailed_t872580813 * value)
	{
		___ARSessionFailedEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionFailedEvent_7, value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionInterruptedEvent_8)); }
	inline ARSessionCallback_t3370800699 * get_ARSessionInterruptedEvent_8() const { return ___ARSessionInterruptedEvent_8; }
	inline ARSessionCallback_t3370800699 ** get_address_of_ARSessionInterruptedEvent_8() { return &___ARSessionInterruptedEvent_8; }
	inline void set_ARSessionInterruptedEvent_8(ARSessionCallback_t3370800699 * value)
	{
		___ARSessionInterruptedEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionInterruptedEvent_8, value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessioninterruptionEndedEvent_9)); }
	inline ARSessionCallback_t3370800699 * get_ARSessioninterruptionEndedEvent_9() const { return ___ARSessioninterruptionEndedEvent_9; }
	inline ARSessionCallback_t3370800699 ** get_address_of_ARSessioninterruptionEndedEvent_9() { return &___ARSessioninterruptionEndedEvent_9; }
	inline void set_ARSessioninterruptionEndedEvent_9(ARSessionCallback_t3370800699 * value)
	{
		___ARSessioninterruptionEndedEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessioninterruptionEndedEvent_9, value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionTrackingChangedEvent_10)); }
	inline ARSessionTrackingChanged_t1333006279 * get_ARSessionTrackingChangedEvent_10() const { return ___ARSessionTrackingChangedEvent_10; }
	inline ARSessionTrackingChanged_t1333006279 ** get_address_of_ARSessionTrackingChangedEvent_10() { return &___ARSessionTrackingChangedEvent_10; }
	inline void set_ARSessionTrackingChangedEvent_10(ARSessionTrackingChanged_t1333006279 * value)
	{
		___ARSessionTrackingChangedEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionTrackingChangedEvent_10, value);
	}

	inline static int32_t get_offset_of_s_Camera_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_Camera_12)); }
	inline UnityARCamera_t4198559457  get_s_Camera_12() const { return ___s_Camera_12; }
	inline UnityARCamera_t4198559457 * get_address_of_s_Camera_12() { return &___s_Camera_12; }
	inline void set_s_Camera_12(UnityARCamera_t4198559457  value)
	{
		___s_Camera_12 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_UnityARSessionNativeInterface_13)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_s_UnityARSessionNativeInterface_13() const { return ___s_UnityARSessionNativeInterface_13; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_s_UnityARSessionNativeInterface_13() { return &___s_UnityARSessionNativeInterface_13; }
	inline void set_s_UnityARSessionNativeInterface_13(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___s_UnityARSessionNativeInterface_13 = value;
		Il2CppCodeGenWriteBarrier(&___s_UnityARSessionNativeInterface_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline internal_ARFrameUpdate_t3296518558 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline internal_ARFrameUpdate_t3296518558 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(internal_ARFrameUpdate_t3296518558 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline ARSessionFailed_t872580813 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline ARSessionFailed_t872580813 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(ARSessionFailed_t872580813 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline ARSessionCallback_t3370800699 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline ARSessionCallback_t3370800699 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(ARSessionCallback_t3370800699 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline ARSessionCallback_t3370800699 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline ARSessionCallback_t3370800699 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(ARSessionCallback_t3370800699 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline internal_ARSessionTrackingChanged_t1558153491 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline internal_ARSessionTrackingChanged_t1558153491 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(internal_ARSessionTrackingChanged_t1558153491 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline internal_ARAnchorAdded_t1622117597 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline internal_ARAnchorAdded_t1622117597 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(internal_ARAnchorAdded_t1622117597 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline internal_ARAnchorUpdated_t3705772742 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline internal_ARAnchorUpdated_t3705772742 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(internal_ARAnchorUpdated_t3705772742 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline internal_ARAnchorRemoved_t3189755211 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline internal_ARAnchorRemoved_t3189755211 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(internal_ARAnchorRemoved_t3189755211 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline internal_ARUserAnchorAdded_t3999066834 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline internal_ARUserAnchorAdded_t3999066834 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(internal_ARUserAnchorAdded_t3999066834 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline internal_ARUserAnchorUpdated_t1661963345 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline internal_ARUserAnchorUpdated_t1661963345 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(internal_ARUserAnchorUpdated_t1661963345 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline internal_ARUserAnchorRemoved_t4166385952 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline internal_ARUserAnchorRemoved_t4166385952 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(internal_ARUserAnchorRemoved_t4166385952 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
