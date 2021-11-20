// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MegaTreeTrunk {
public:
    virtual ~MegaTreeTrunk();
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*);

private:
    MCAPI bool _prepareSpawn(class IBlockWorldGenAPI&, class BlockPos const&, int, struct TreeHelper::TreeParams const&) const;
};