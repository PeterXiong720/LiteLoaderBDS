// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SideBySideCrossEntityRemapSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECROSSENTITYREMAPSYSTEM
public:
    class SideBySideCrossEntityRemapSystem& operator=(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem() = delete;
#endif

public:
    MCAPI static void _remapContext(class StrictEntityContext &, struct SideBySideRemappingComponent const &);

protected:

private:
    MCAPI static void _removeNullStrictEntityContexts(std::vector<class StrictEntityContext> &);

};