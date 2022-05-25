// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EyeOfEnder : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EYEOFENDER
public:
    class EyeOfEnder& operator=(class EyeOfEnder const &) = delete;
    EyeOfEnder(class EyeOfEnder const &) = delete;
    EyeOfEnder() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~EyeOfEnder();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*46*/ virtual void lerpMotion(class Vec3 const &);
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*77*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*93*/ virtual bool isSilentObserver() const;
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual bool isSleeping() const;
    /*97*/ virtual void setSleeping(bool);
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual bool isBlocking() const;
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual bool isSurfaceMob() const;
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*136*/ virtual void animateHurt();
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*155*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*156*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*194*/ virtual bool inCaravan() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*202*/ virtual void buildDebugInfo(std::string &) const;
    /*207*/ virtual int getDeathTime() const;
    /*218*/ virtual void swing();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
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
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void onPush(class Actor &);
    /*262*/ virtual bool hasDiedBefore() const;
    /*265*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*267*/ virtual void __unk_vfn_267();
    /*275*/ virtual void __unk_vfn_275();
    /*283*/ virtual void _onSizeUpdated();
    MCAPI EyeOfEnder(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void preNormalTick();
    MCAPI void signalTo(class Player const &, class BlockPos &);

protected:

private:

};