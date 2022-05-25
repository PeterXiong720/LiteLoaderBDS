// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SculkBlockBehavior {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKBLOCKBEHAVIOR
public:
    class SculkBlockBehavior& operator=(class SculkBlockBehavior const &) = delete;
    SculkBlockBehavior(class SculkBlockBehavior const &) = delete;
    SculkBlockBehavior() = delete;
#endif

public:
    /*0*/ virtual void __unk_vfn_0();
    /*1*/ virtual int updateFacingData(int, class Block const &) const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /*
    inline void onDischarged(class IBlockWorldGenAPI & a0, class BlockSource * a1, class BlockPos const & a2) const{
        void (SculkBlockBehavior::*rv)(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?onDischarged@SculkBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI &>(a0), std::forward<class BlockSource *>(a1), std::forward<class BlockPos const &>(a2));
    }
    inline bool canChangeBlockOnSpread() const{
        bool (SculkBlockBehavior::*rv)() const;
        *((void**)&rv) = dlsym("?canChangeBlockOnSpread@SculkBlockBehavior@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int updateDecayDelay(int a0) const{
        int (SculkBlockBehavior::*rv)(int) const;
        *((void**)&rv) = dlsym("?updateDecayDelay@SculkBlockBehavior@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool attemptSpreadVeins(class IBlockWorldGenAPI & a0, class BlockPos const & a1, class Block const & a2, int a3, class SculkSpreader & a4) const{
        bool (SculkBlockBehavior::*rv)(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
        *((void**)&rv) = dlsym("?attemptSpreadVeins@SculkBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Block const &>(a2), std::forward<int>(a3), std::forward<class SculkSpreader &>(a4));
    }
    */

protected:

private:
    MCAPI static void _placeGrowthAt(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &);

};