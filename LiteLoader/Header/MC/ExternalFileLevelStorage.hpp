// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace ExternalFileLevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI class Core::Result _readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);
    MCAPI bool _writeLevelDat(class Core::Path const &, class LevelData const &);
    MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy(class Core::Path const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    MCAPI std::vector<std::string> const getImportantFiles();
    MCAPI std::string getLevelIDFromPath(class Core::Path const &, class Core::Path const &);
    MCAPI bool isLevelMarkedForSync(class Core::Path const &);
    MCAPI void makeReadableLevelnameFile(class Core::Path const &, std::string const &);
    MCAPI class Core::Result readLevelDataFromData(std::string const &, class LevelData &);
    MCAPI class Core::Result readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);
    MCAPI void saveLevelData(class Core::Path const &, std::string const &, class LevelData const &, bool);
    MCAPI void saveLevelDataToPath(class Core::Path const &, std::string const &, class LevelData const &);
    MCAPI void saveLevelDisplayDataToCache(std::string const &, class LevelData const &, class gsl::not_null<class TaskGroup *>);
    MCAPI class Core::Result validateLevelDat(class Core::Path);

};