// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Sheep : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEP
public:
    class Sheep& operator=(class Sheep const &) = delete;
    Sheep(class Sheep const &) = delete;
    Sheep() = delete;
#endif

public:
    /*14*/ virtual ~Sheep();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual bool breaksFallingBlocks() const;
    /*61*/ virtual bool canExistInPeaceful() const;
    /*68*/ virtual bool canMakeStepSound() const;
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual bool canSeeInvisible() const;
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual bool interactPreventDefault();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual bool isFishable() const;
    /*98*/ virtual bool useNewAi() const;
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual bool shouldBurn();
    /*107*/ virtual bool isTargetable() const;
    /*108*/ virtual bool canBeControlledByPassenger();
    /*109*/ virtual bool isLeashableType();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void onHit(class HitResult const &);
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool stopUponGroundCollision() const;
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual unsigned int getUserId() const;
    /*227*/ virtual float getYHeadRotO() const;
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual float getDeletionDelayTimeSeconds() const;
    /*261*/ virtual bool shouldAlwaysRender();
    /*269*/ virtual bool _makeFlySound() const;
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*294*/ virtual void aiStep();
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*342*/ virtual int getAttackTime();
    /*345*/ virtual bool isSimulated() const;
    /*351*/ virtual void jumpFromGround();
    /*354*/ virtual void newServerAiStep();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    MCAPI Sheep(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI bool isGrazing() const;

protected:

private:
    MCAPI static int const EAT_ANIMATION_TICKS;

};