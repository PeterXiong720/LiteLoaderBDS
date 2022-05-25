// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArrowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWITEM
public:
    class ArrowItem& operator=(class ArrowItem const &) = delete;
    ArrowItem(class ArrowItem const &) = delete;
    ArrowItem() = delete;
#endif

public:
    /*0*/ virtual ~ArrowItem();
    /*2*/ virtual void tearDown();
    /*5*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*9*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual bool isArmor() const;
    /*12*/ virtual bool isBlockPlanterItem() const;
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*17*/ virtual bool isDyeable() const;
    /*18*/ virtual bool isDye() const;
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isFood() const;
    /*22*/ virtual bool isThrowable() const;
    /*23*/ virtual bool isUseable() const;
    /*24*/ virtual class ItemComponent * getComponent(class HashedString const &) const;
    /*27*/ virtual class FuelItemComponent * getFuel() const;
    /*42*/ virtual enum BlockShape getBlockShape() const;
    /*44*/ virtual bool canDestroySpecial(class Block const &) const;
    /*45*/ virtual int getLevelDataForAuxValue(int) const;
    /*47*/ virtual short getMaxDamage() const;
    /*48*/ virtual int getAttackDamage() const;
    /*50*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual void __unk_vfn_53();
    /*54*/ virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /*55*/ virtual bool canDestroyInCreative() const;
    /*56*/ virtual bool isDestructive(int) const;
    /*57*/ virtual bool isLiquidClipItem(int) const;
    /*58*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*59*/ virtual bool requiresInteract() const;
    /*60*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*61*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*62*/ virtual int getEnchantSlot() const;
    /*63*/ virtual int getEnchantValue() const;
    /*64*/ virtual int getArmorValue() const;
    /*65*/ virtual int getToughnessValue() const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual bool isValidAuxValue(int) const;
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*74*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void clearColor(class ItemStackBase &) const;
    /*77*/ virtual void clearColor(class CompoundTag *) const;
    /*78*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*83*/ virtual bool canUseOnSimTick() const;
    /*85*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*88*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*90*/ virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /*91*/ virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /*92*/ virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /*93*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*94*/ virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*96*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*100*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*101*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*102*/ virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /*106*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*110*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /*111*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /*112*/ virtual bool validFishInteraction(int) const;
    /*113*/ virtual enum ActorLocation getEquipLocation() const;
    /*117*/ virtual std::string getInteractText(class Player const &) const;
    /*118*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*121*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*122*/ virtual int getIconYOffset() const;
    /*123*/ virtual class Item & setIcon(std::string const &, int);
    /*126*/ virtual bool canBeCharged() const;
    /*127*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual std::string getAuxValuesDescription() const;
    /*133*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    MCAPI ArrowItem(std::string const &, int);
    MCAPI void applyEffect(class Arrow *, class ItemInstance const &) const;

protected:
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int) const;

private:

};