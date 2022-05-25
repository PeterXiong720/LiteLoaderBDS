// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MineshaftStairs : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTSTAIRS
public:
    class MineshaftStairs& operator=(class MineshaftStairs const &) = delete;
    MineshaftStairs(class MineshaftStairs const &) = delete;
    MineshaftStairs() = delete;
#endif

public:
    /*0*/ virtual ~MineshaftStairs();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*5*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*11*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;

protected:

private:

};