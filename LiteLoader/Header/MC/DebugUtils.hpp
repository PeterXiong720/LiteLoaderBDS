// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace DebugUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI void REGISTER_ASSERT_TELEMETRY(class std::function<void (std::string const &, std::string const &)>);
    MCAPI void SET_THREAD_NAME(std::string const &);
    MCAPI bool TELEMETRY_ASSERT_HANDLER(struct AssertHandlerContext const &);
    MCAPI void UNREGISTER_ASSERT_TELEMETRY();
    MCAPI void _fireAssertTelemetry(std::string const &, std::string const &);
    MCAPI std::string buildFullTelemetryKey(struct AssertHandlerContext const &);
    MCAPI extern class std::mutex debugUtilMutex;
    MCAPI extern bool gAssertTelemetryRegistered;
    MCAPI extern bool gBreakpadSetupFailed;
    MCAPI extern std::vector<class std::weak_ptr<class std::function<void (struct AssertHandlerContext const &)>>> gDebugAssertCallbacks;
    MCAPI extern class std::function<void (std::string const &, std::string const &)> gFireAssertTelemetry;
    MCAPI extern std::string gPublishAssertFullMessage;
    MCAPI extern bool gShouldDebugBreak;
    MCAPI extern bool gShouldPresentDialog;
    MCAPI extern class ServiceOverrider<bool ( *)(struct AssertHandlerContext const &)> gp_assert_handler;
    MCAPI bool handleAssert(char const *, char const *, char const *, bool, bool, int, char const *, char const *, ...);

};