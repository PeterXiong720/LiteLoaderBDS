// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DiggerItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEMCOMPONENT
public:
    class DiggerItemComponent& operator=(class DiggerItemComponent const &) = delete;
    DiggerItemComponent(class DiggerItemComponent const &) = delete;
    DiggerItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~DiggerItemComponent();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    MCAPI bool canDestroySpecial(class Block const &) const;
    MCAPI float getDestroySpeed(class ItemStackBase const &, class Block const &);
    MCAPI bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};