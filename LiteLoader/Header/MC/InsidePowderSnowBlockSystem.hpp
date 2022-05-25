// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InsidePowderSnowBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEPOWDERSNOWBLOCKSYSTEM
public:
    class InsidePowderSnowBlockSystem& operator=(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem() = delete;
#endif

public:
    MCAPI static struct TickingSystemWithInfo createMovementSlowdownSystem();
    MCAPI static struct TickingSystemWithInfo createServerSideClearFireSystem();
    MCAPI static struct TickingSystemWithInfo createServerSideFreezingSystem();

protected:

private:

};