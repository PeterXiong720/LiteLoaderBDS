// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnUseOnItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONUSEONITEMCOMPONENT
public:
    class OnUseOnItemComponent& operator=(class OnUseOnItemComponent const &) = delete;
    OnUseOnItemComponent(class OnUseOnItemComponent const &) = delete;
    OnUseOnItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~OnUseOnItemComponent();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};