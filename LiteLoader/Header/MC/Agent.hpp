// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Agent : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const &) = delete;
    Agent(class Agent const &) = delete;
    Agent() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Agent();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /*48*/ virtual void normalTick();
    /*58*/ virtual bool isInvisible() const;
    /*59*/ virtual bool canShowNameTag() const;
    /*60*/ virtual void __unk_vfn_60();
    /*64*/ virtual std::string getFormattedNameTag() const;
    /*67*/ virtual void __unk_vfn_67();
    /*77*/ virtual float getCameraOffset() const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*93*/ virtual bool isSilentObserver() const;
    /*94*/ virtual bool isPickable();
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
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*160*/ virtual void setCarriedItem(class ItemStack const &);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
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
    /*250*/ virtual void kill();
    /*259*/ virtual void onPush(class Actor &);
    /*262*/ virtual bool hasDiedBefore() const;
    /*265*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*267*/ virtual void __unk_vfn_267();
    /*268*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*275*/ virtual void __unk_vfn_275();
    /*284*/ virtual void __unk_vfn_284();
    /*285*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*286*/ virtual void spawnAnim();
    /*296*/ virtual void travel(float, float, float);
    /*299*/ virtual void aiStep();
    /*307*/ virtual int getItemUseDuration() const;
    /*308*/ virtual float getItemUseStartupProgress() const;
    /*309*/ virtual float getItemUseIntervalProgress() const;
    /*312*/ virtual void __unk_vfn_312();
    /*314*/ virtual bool isAlliedTo(class Mob *);
    /*316*/ virtual void __unk_vfn_316();
    /*326*/ virtual void sendArmorDamage(class std::bitset<4>);
    /*342*/ virtual bool createAIGoals();
    /*343*/ virtual void onBorn(class Actor &, class Actor &);
    /*348*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*349*/ virtual bool canExistWhenDisallowMob() const;
    /*350*/ virtual void __unk_vfn_350();
    /*355*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*360*/ virtual void __unk_vfn_360();
    /*364*/ virtual void __unk_vfn_364();
    /*
    inline bool interactPreventDefault(){
        bool (Agent::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@Agent@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool getAlwaysShowNameTag() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?getAlwaysShowNameTag@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool breaksFallingBlocks() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTargetable() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetable@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getMoveSpeedScalar() const;
    MCAPI int getSelectedSlot() const;
    MCAPI bool isValidSlotNum(int);
    MCAPI void setMoveTarget(class Vec3 const &);
    MCAPI void setNameTagFromOwner(class Player const &);
    MCAPI void startCommandMode();
    MCAPI void stopCommandMode();
    MCAPI bool swingAnimationCompleted();
    MCAPI void swingArm();
    MCAPI void tryFireCreateEvent(class Player &);
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

protected:

private:
    MCAPI class ContainerComponent * _getContainerComponent();

};