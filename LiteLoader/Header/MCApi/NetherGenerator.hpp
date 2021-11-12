// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class NetherGenerator {

private:
    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(class LevelData const&, class BiomeRegistry const&) const;
    MCAPI void _prepareHeights(class BlockVolume&, class ChunkPos const&, bool, std::vector<short>*, int);
    MCAPI void getHeights(class std::array<float, 425>&, int, int, int) const;
};