// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Cat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAT
public:
    class Cat& operator=(class Cat const &) = delete;
    Cat(class Cat const &) = delete;
    Cat() = delete;
#endif

public:
    /*14*/ virtual ~Cat();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*77*/ virtual float getCameraOffset() const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*93*/ virtual bool isSilentObserver() const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*133*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void onPush(class Actor &);
    /*262*/ virtual bool hasDiedBefore() const;
    /*265*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*267*/ virtual void __unk_vfn_267();
    /*275*/ virtual void __unk_vfn_275();
    /*284*/ virtual void __unk_vfn_284();
    /*286*/ virtual void spawnAnim();
    /*299*/ virtual void aiStep();
    /*307*/ virtual int getItemUseDuration() const;
    /*308*/ virtual float getItemUseStartupProgress() const;
    /*309*/ virtual float getItemUseIntervalProgress() const;
    /*312*/ virtual void __unk_vfn_312();
    /*314*/ virtual bool isAlliedTo(class Mob *);
    /*316*/ virtual void __unk_vfn_316();
    /*326*/ virtual void sendArmorDamage(class std::bitset<4>);
    /*343*/ virtual void onBorn(class Actor &, class Actor &);
    /*350*/ virtual void __unk_vfn_350();
    /*360*/ virtual void _serverAiMobStep();
    /*364*/ virtual void __unk_vfn_364();
    MCAPI Cat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static float const SNEAK_SPEED_MOD;
    MCAPI static float const SPRINT_SPEED_MOD;

protected:

private:
    MCAPI float getLieOnPlayer();

};