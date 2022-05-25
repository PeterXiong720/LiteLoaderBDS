// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PoolElementStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POOLELEMENTSTRUCTUREPIECE
public:
    class PoolElementStructurePiece& operator=(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece() = delete;
#endif

public:
    /*0*/ virtual ~PoolElementStructurePiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*5*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*9*/ virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /*11*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /*12*/ virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const = 0;
    /*13*/ virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const = 0;
    /*14*/ virtual class Block const & getBeardStabilizeBlock(class Block const &) const = 0;
    /*15*/ virtual enum AdjustmentEffect getTerrainAdjustmentEffect() const = 0;
    /*16*/ virtual bool _needsPostProcessing(class BlockSource &);
    /*
    inline  ~PoolElementStructurePiece(){
         (PoolElementStructurePiece::*rv)();
        *((void**)&rv) = dlsym("??1PoolElementStructurePiece@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI PoolElementStructurePiece(class StructurePoolElement const &, class BlockPos, enum Rotation, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos);
    MCAPI class StructurePoolElement const & getElement() const;
    MCAPI class BlockPos const & getPosition() const;
    MCAPI void setReferencePosition(class BlockPos const &);

protected:

private:

};