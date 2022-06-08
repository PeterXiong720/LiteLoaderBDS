// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Fireball : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBALL
public:
    class Fireball& operator=(class Fireball const &) = delete;
    Fireball(class Fireball const &) = delete;
    Fireball() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Fireball();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual bool breaksFallingBlocks() const;
    /*48*/ virtual void normalTick();
    /*61*/ virtual bool canExistInPeaceful() const;
    /*68*/ virtual bool canMakeStepSound() const;
    /*78*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowHeightOffs();
    /*82*/ virtual bool canSeeInvisible() const;
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual float getBrightness(float) const;
    /*88*/ virtual bool interactPreventDefault();
    /*89*/ virtual void playerTouch(class Player &);
    /*94*/ virtual bool isPickable();
    /*95*/ virtual bool isFishable() const;
    /*96*/ virtual bool isSleeping() const;
    /*97*/ virtual void setSleeping(bool);
    /*98*/ virtual bool useNewAi() const;
    /*100*/ virtual bool isBlocking() const;
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual bool shouldBurn();
    /*106*/ virtual bool isSurfaceMob() const;
    /*107*/ virtual bool isTargetable() const;
    /*108*/ virtual bool canBeControlledByPassenger();
    /*109*/ virtual bool isLeashableType();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*136*/ virtual void animateHurt();
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*155*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*156*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void onHit(class HitResult const &);
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*194*/ virtual bool inCaravan() const;
    /*195*/ virtual bool stopUponGroundCollision() const;
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*202*/ virtual void buildDebugInfo(std::string &) const;
    /*207*/ virtual int getDeathTime() const;
    /*218*/ virtual void swing();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual unsigned int getUserId() const;
    /*225*/ virtual float getYHeadRot() const;
    /*226*/ virtual void setYHeadRot(float);
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
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual bool shouldAlwaysRender();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual bool _makeFlySound() const;
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual float getInertia();
    /*280*/ virtual void __unk_vfn_280();
    /*281*/ virtual enum ParticleType getTrailParticle();
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:
    MCAPI void _setPower(class Vec3 const &);

};