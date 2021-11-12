// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class SculkPatchFeature {
public:
    virtual ~SculkPatchFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

private:
    MCAPI void _placeGround(class IBlockWorldGenAPI&, std::vector<class BlockPos>&, class BlockPos, int) const;
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int) const;
};