// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LightGemBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTGEMBLOCK
public:
    class LightGemBlock& operator=(class LightGemBlock const &) = delete;
    LightGemBlock(class LightGemBlock const &) = delete;
    LightGemBlock() = delete;
#endif

public:
    /*0*/ virtual ~LightGemBlock();
    /*4*/ virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*15*/ virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /*16*/ virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /*17*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual bool isStrippable(class Block const &) const;
    /*27*/ virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual bool isDoubleSlabBlock() const;
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*50*/ virtual void __unk_vfn_50();
    /*52*/ virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /*53*/ virtual bool isValidAuxValue(int) const;
    /*54*/ virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*56*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*57*/ virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*61*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*62*/ virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /*67*/ virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /*68*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*69*/ virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /*70*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*71*/ virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /*74*/ virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*75*/ virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*81*/ virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /*82*/ virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*84*/ virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*86*/ virtual bool mayPick() const;
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*90*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*92*/ virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*94*/ virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /*96*/ virtual bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*98*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*107*/ virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*108*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*109*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*113*/ virtual int getExperienceDrop(class Random &) const;
    /*116*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*123*/ virtual void __unk_vfn_123();
    /*125*/ virtual void __unk_vfn_125();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*129*/ virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /*130*/ virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual int getIconYOffset() const;
    /*134*/ virtual bool isAuxValueRelevantForPicking() const;
    /*135*/ virtual int getColor(class Block const &) const;
    /*136*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*137*/ virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /*139*/ virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*147*/ virtual void __unk_vfn_147();
    /*150*/ virtual enum Flip getFaceFlip(unsigned char, class Block const &) const;
    /*151*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*164*/ virtual void __unk_vfn_164();
    /*168*/ virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /*169*/ virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /*170*/ virtual class Block const * tryGetInfested(class Block const &) const;
    /*171*/ virtual class Block const * tryGetUninfested(class Block const &) const;
    /*172*/ virtual void _addHardCodedBlockComponents();
    /*174*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*175*/ virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*176*/ virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*178*/ virtual void __unk_vfn_178();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*183*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*186*/ virtual void __unk_vfn_186();
    /*188*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*189*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*192*/ virtual int getExtraRenderLayers() const;
    /*196*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*197*/ virtual void __unk_vfn_197();
    /*198*/ virtual void __unk_vfn_198();
    MCAPI LightGemBlock(std::string const &, int, class Material const &);

protected:

private:

};