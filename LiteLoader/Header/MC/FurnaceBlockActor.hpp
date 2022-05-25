// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEBLOCKACTOR
public:
    class FurnaceBlockActor& operator=(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor() = delete;
#endif

public:
    /*
    inline int getMaxStackSize() const{
        int (FurnaceBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@FurnaceBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getContainerSize() const{
        int (FurnaceBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@FurnaceBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class Container const * getContainer() const{
        class Container const * (FurnaceBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@FurnaceBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container * getContainer(){
        class Container * (FurnaceBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@FurnaceBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline  ~FurnaceBlockActor(){
         (FurnaceBlockActor::*rv)();
        *((void**)&rv) = dlsym("??1FurnaceBlockActor@@UEAA@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource & a0){
        std::unique_ptr<class BlockActorDataPacket> (FurnaceBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?_getUpdatePacket@FurnaceBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const & a0, class BlockSource & a1){
        void (FurnaceBlockActor::*rv)(class CompoundTag const &, class BlockSource &);
        *((void**)&rv) = dlsym("?_onUpdatePacket@FurnaceBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0), std::forward<class BlockSource &>(a1));
    }
    inline bool canPullOutItem(class BlockSource & a0, int a1, int a2, class ItemInstance const & a3) const{
        bool (FurnaceBlockActor::*rv)(class BlockSource &, int, int, class ItemInstance const &) const;
        *((void**)&rv) = dlsym("?canPullOutItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class ItemInstance const &>(a3));
    }
    inline bool canPushInItem(class BlockSource & a0, int a1, int a2, class ItemInstance const & a3) const{
        bool (FurnaceBlockActor::*rv)(class BlockSource &, int, int, class ItemInstance const &) const;
        *((void**)&rv) = dlsym("?canPushInItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class ItemInstance const &>(a3));
    }
    inline void fixupOnLoad(class LevelChunk & a0){
        void (FurnaceBlockActor::*rv)(class LevelChunk &);
        *((void**)&rv) = dlsym("?fixupOnLoad@FurnaceBlockActor@@UEAAXAEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class LevelChunk &>(a0));
    }
    inline class ItemStack const & getItem(int a0) const{
        class ItemStack const & (FurnaceBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@FurnaceBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline std::string getName() const{
        std::string (FurnaceBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@FurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level & a0, class CompoundTag const & a1, class DataLoadHelper & a2){
        void (FurnaceBlockActor::*rv)(class Level &, class CompoundTag const &, class DataLoadHelper &);
        *((void**)&rv) = dlsym("?load@FurnaceBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level &>(a0), std::forward<class CompoundTag const &>(a1), std::forward<class DataLoadHelper &>(a2));
    }
    inline void onCustomTagLoadDone(class BlockSource & a0){
        void (FurnaceBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?onCustomTagLoadDone@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void onMove(){
        void (FurnaceBlockActor::*rv)();
        *((void**)&rv) = dlsym("?onMove@FurnaceBlockActor@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onNeighborChanged(class BlockSource & a0, class BlockPos const & a1){
        void (FurnaceBlockActor::*rv)(class BlockSource &, class BlockPos const &);
        *((void**)&rv) = dlsym("?onNeighborChanged@FurnaceBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline bool save(class CompoundTag & a0) const{
        bool (FurnaceBlockActor::*rv)(class CompoundTag &) const;
        *((void**)&rv) = dlsym("?save@FurnaceBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag &>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const &)> a2){
        void (FurnaceBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const &)>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@FurnaceBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const &)>>(a2));
    }
    inline void setItem(int a0, class ItemStack const & a1){
        void (FurnaceBlockActor::*rv)(int, class ItemStack const &);
        *((void**)&rv) = dlsym("?setItem@FurnaceBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const &>(a1));
    }
    inline void startOpen(class Player & a0){
        void (FurnaceBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void stopOpen(class Player & a0){
        void (FurnaceBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void tick(class BlockSource & a0){
        void (FurnaceBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?tick@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    */
    MCAPI FurnaceBlockActor(class BlockPos const &);
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    MCAPI int getLitDuration() const;
    MCAPI int getLitTime() const;
    MCAPI int getStoredXP() const;
    MCAPI int getTickCount() const;
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    MCAPI void setLitDuration(int);
    MCAPI void setLitTime(int);
    MCAPI void setStoredXP(int);
    MCAPI void setTickCount(int);
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    MCAPI int withdrawStoredXPReward();
    MCAPI static int const BURN_INTERVAL;
    MCAPI static float const DEFAULT_SMELTING_TIME;
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

protected:
    MCAPI FurnaceBlockActor(enum BlockActorType, class BlockPos const &, class HashedString const &, enum LevelSoundEvent, enum ContainerType, int, class Block const &, class Block const &);

private:
    MCAPI class BlockPos _getPositionOfNeighbor(int);
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    MCAPI void burn(class Recipes const &);
    MCAPI bool canBurn(class Recipes const &);
    MCAPI static std::string const BURN_DURATION_KEY;
    MCAPI static std::string const BURN_TIME_KEY;
    MCAPI static std::string const COOK_TIME_KEY;
    MCAPI static std::string const CUSTOM_NAME_KEY;
    MCAPI static std::string const ITEMS_LIST_KEY;
    MCAPI static std::string const LAST_FUEL_KEY;
    MCAPI static std::string const SLOT_KEY;
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
    MCAPI static std::string const STORED_XP_KEY;
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    MCAPI static int _roundXPReward(float);

};