// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ProjectileItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEITEMCOMPONENT
public:
    class ProjectileItemComponent& operator=(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~ProjectileItemComponent();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    MCAPI class Vec3 getShootDir(class Player const &, float) const;
    MCAPI class Actor * shootProjectile(class BlockSource &, class Vec3 const &, class Vec3 const &, float, class Player *) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};