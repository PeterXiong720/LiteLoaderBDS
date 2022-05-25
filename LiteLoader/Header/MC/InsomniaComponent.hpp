// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InsomniaComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIACOMPONENT
public:
    class InsomniaComponent& operator=(class InsomniaComponent const &) = delete;
    InsomniaComponent(class InsomniaComponent const &) = delete;
    InsomniaComponent() = delete;
#endif

public:
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI int getInsomniaTimerTicks() const;
    MCAPI int getTicksUntilInsomnia() const;
    MCAPI int incrementTimeSinceRest();
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void restartTimer();

protected:

private:

};