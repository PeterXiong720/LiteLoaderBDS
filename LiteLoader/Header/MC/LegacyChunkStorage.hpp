// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYCHUNKSTORAGE
public:
    class LegacyChunkStorage& operator=(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage() = delete;
#endif

public:
    /*0*/ virtual ~LegacyChunkStorage();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /*9*/ virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    /*10*/ virtual void loadChunk(class LevelChunk &, bool);
    /*12*/ virtual bool saveLiveChunk(class LevelChunk &);
    /*17*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*21*/ virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /*24*/ virtual void clearDeletedEntities();
    MCAPI LegacyChunkStorage(std::unique_ptr<class ChunkSource>, class LevelStorage &, enum StorageVersion, class Biome &);

protected:

private:
    MCAPI bool _isImported(class ChunkPos const &);
    MCAPI bool _loadChunk(class LevelChunk &);
    MCAPI void _loadEntities();
    MCAPI void _markChunkAsImported(class ChunkPos const &);
    MCAPI bool _openRegionFile();

};