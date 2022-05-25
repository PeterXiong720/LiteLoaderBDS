// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnderDragon : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGON
public:
    class EnderDragon& operator=(class EnderDragon const &) = delete;
    EnderDragon(class EnderDragon const &) = delete;
    EnderDragon() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~EnderDragon();
    /*16*/ virtual void resetUserPos(bool);
    /*18*/ virtual void remove();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*77*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowRadius() const;
    /*80*/ virtual class Vec3 getHeadLookVector(float) const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*91*/ virtual bool isImmobile() const;
    /*93*/ virtual bool isSilentObserver() const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*119*/ virtual void setSitting(bool);
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
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
    /*259*/ virtual void onPush(class Actor &);
    /*262*/ virtual bool hasDiedBefore() const;
    /*265*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*267*/ virtual void __unk_vfn_267();
    /*268*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*275*/ virtual void __unk_vfn_275();
    /*283*/ virtual void _onSizeUpdated();
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
    /*362*/ virtual void tickDeath();
    /*364*/ virtual void __unk_vfn_364();
    /*
    inline bool canExistInPeaceful() const{
        bool (EnderDragon::*rv)() const;
        *((void**)&rv) = dlsym("?canExistInPeaceful@EnderDragon@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isFishable() const{
        bool (EnderDragon::*rv)() const;
        *((void**)&rv) = dlsym("?isFishable@EnderDragon@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI EnderDragon(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void dieNaturally();
    MCAPI int findClosestNode(class Vec3 const &);
    MCAPI int findClosestNode();
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode *);
    MCAPI int getFlameCount() const;
    MCAPI float getFlapTime() const;
    MCAPI class BlockPos getHeadPos() const;
    MCAPI std::vector<float> const getLatencyPos(int, float) const;
    MCAPI int getNumCrystalsAlive();
    MCAPI class Vec3 getTargetPos() const;
    MCAPI void incrementFlameCount();
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class BlockPos, class ActorDamageSource const &);
    MCAPI void postAiStep();
    MCAPI void resetFlameCount();
    MCAPI void setDragonKilledCallback(class std::function<void (class EnderDragon &)>);
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);
    MCAPI void setNumCrystalsAlive(int);
    MCAPI void setTargetPos(class Vec3);
    MCAPI void setTurnSpeed(float);

protected:
    MCAPI bool _hurt(class AABB *, class ActorDamageSource const &, float);

private:
    MCAPI void checkCrystals();
    MCAPI bool checkWalls(class AABB);
    MCAPI void hurtEntities(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI void knockBack(class gsl::span<class gsl::not_null<class Actor *>, -1>) const;
    MCAPI std::unique_ptr<class Path> reconstructPath(class PathfinderNode &, class PathfinderNode &, enum PathCompletionType);
    MCAPI static int GROWL_INTERVAL_MAX;
    MCAPI static int GROWL_INTERVAL_MIN;
    MCAPI static int MAX_PATH_RADIUS;
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

};