// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExplodeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLODECOMPONENT
public:
    class ExplodeComponent& operator=(class ExplodeComponent const &) = delete;
    ExplodeComponent(class ExplodeComponent const &) = delete;
#endif

public:
    MCAPI ExplodeComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI void explode(class Actor &, class Vec3 const &);
    MCAPI int getFuseLength() const;
    MCAPI int getInitialFuseLength() const;
    MCAPI bool getIsFuseLit() const;
    MCAPI bool isFuseLit() const;
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;
    MCAPI void setAllowUnderwater(bool);
    MCAPI void setFuseLength(int);
    MCAPI void setTntExpodeGameRuleRequired();

protected:

private:

};