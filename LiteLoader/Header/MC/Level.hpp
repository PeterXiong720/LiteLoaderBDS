// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>

#define EXTRA_INCLUDE_PART
#include "Extra/Level.hpp"
#undef EXTRA_INCLUDE_PART

class Level {
public:
    #include "Extra/Level.hpp"
    MCAPI struct AdventureSettings const& getAdventureSettings() const;
    MCAPI struct ISharedController const& getCapabilities() const;
    MCAPI class NpcDialogueStorage* getNpcDialogueStorage();
    MCAPI bool isChunkInTickRange(class LevelChunk const&, class std::optional<int>) const;
    MCAPI enum NodeType isFree(class NavigationComponent&, class Actor&, class BlockPos const&, class BlockPos const&, class BlockPos const&, enum CanJumpIntoNode);
    MCAPI void setPerformanceTelemetryPeriodicCallback(class std::function<void(void)>);
    MCAPI bool use3DBiomeMaps() const;
    MCAPI static float const AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK;
    MCAPI static float const AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY;
    MCAPI static float const AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE;
    MCAPI static float const RANDOM_TICKS_PER_TICK_PER_SUBCHUNK;
    MCAPI static unsigned int createRandomSeed();
    MCAPI static bool isUsableLevel(class ILevel const&);

    MCAPI void save(void);
    MCAPI void saveGameData(void);
    MCAPI void saveVillages(void);
    MCAPI void saveBiomeData(void);
    MCAPI void saveLevelData(void);
    MCAPI void saveDirtyChunks(void);

    MCAPI int                       getNewPlayerId() const;
    MCAPI class GameRules&          getGameRules();
    MCAPI class Player*             getRandomPlayer();
    MCAPI enum Difficulty           getDifficulty() const;
    MCAPI class Player*             getPrimaryLocalPlayer() const;
    MCAPI class Color               getPlayerColor(class Player const&) const;
    MCAPI struct AdventureSettings& getAdventureSettings();
    MCAPI class Actor*              getRuntimeEntity(class ActorRuntimeID, bool) const;
    MCAPI class ITickingArea*       getTickingArea(class mce::UUID const&) const;
    MCAPI float                     getSpecialMultiplier(AutomaticID<class Dimension, int>);
    MCAPI class MapItemSavedData*   getMapSavedData(struct ActorUniqueID);
    MCAPI virtual class Dimension* getDimension(class AutomaticID<class Dimension, int>) const;
    MCAPI std::string const& getPlayerXUID(class mce::UUID const&) const;
    MCAPI std::string const&    getPlayerPlatformOnlineId(class mce::UUID const&) const;
    MCAPI virtual ActorUniqueID getNewUniqueID();

    MCAPI void setDefaultGameType(enum GameType);

    MCAPI bool         hasCommandsEnabled() const;
    MCAPI virtual void forEachPlayer(std::function<bool(Player&)>);
    MCAPI virtual void forEachPlayer(std::function<bool(Player const&)>) const;
    MCAPI void         forEachDimension(std::function<bool(Dimension const&)>);

    MCAPI void broadcastBossEvent(enum BossEventUpdateType);
    MCAPI void broadcastEntityEvent(class Actor*, enum ActorEvent, int);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class Vec3 const&, int, class Player*);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class CompoundTag const&, class Player*);
    MCAPI void broadcastDimensionEvent(class BlockSource&, enum LevelEvent, class Vec3 const&, int, class Player*);
    MCAPI void broadcastSoundEvent(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);

    MCAPI void
               playSound(enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    MCAPI void playSound(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);
    MCAPI void playSynchronizedSound(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);
    MCAPI virtual class Spawner* getSpawn();
    MCAPI void                 tickEntities();
    MCAPI void                 updateWeather(float, int, float, int);
    MCAPI void                 denyEffect(class Vec3 const&);
    MCAPI void                 forceRemoveEntity(class Actor&);
    MCAPI void                 addListener(class LevelListener&);
    MCAPI bool                 isPlayerSuspended(class Player&) const;
    MCAPI void                 requestMapInfo(struct ActorUniqueID);
    MCAPI bool                 copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    MCAPI void                 onChunkDiscarded(class LevelChunk&);
    MCAPI void                 removeListener(class LevelListener&);
    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    MCAPI void                 potionSplash(class Vec3 const&, class Color const&, bool);
    MCAPI virtual class Actor* fetchEntity(struct ActorUniqueID, bool) const;
    MCAPI void                 unregisterTemporaryPointer(class _TickPtr&);
    MCAPI bool                 destroyBlock(class BlockSource&, class BlockPos const&, bool);
    MCAPI bool                 extinguishFire(class BlockSource&, class BlockPos const&, unsigned char);
    MCAPI void                 explode(class BlockSource&, class Actor*, class Vec3 const&, float, bool, bool, float, bool);
    MCAPI class Dimension&     createDimension(class AutomaticID<class Dimension, int>);
    MCAPI bool                 checkAndHandleMaterial(class AABB const&, enum MaterialType, class Actor*);
    MCAPI class Player*        findPlayer(std::function<bool(Player const&)>) const;
    MCAPI void
               addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    MCAPI void entityChangeDimension(class Actor&, class AutomaticID<class Dimension, int>);
    MCAPI class Particle*
                                  addParticle(enum ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
    MCAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const&, class BlockPos const&, class AutomaticID<class Dimension, int>, int);
    MCAPI void spawnParticleEffect(std::string const&, class Vec3 const&, class Dimension*);
    MCAPI void requestPlayerChangeDimension(class Player&, std::unique_ptr<class ChangeDimensionRequest>);

private:

    MCAPI void _cleanupDisconnectedPlayers();
    MCAPI class MapItemSavedData& _createMapSavedData(struct ActorUniqueID const&);
    MCAPI void _fixEntitiesRegion(std::vector<class WeakEntityRef>&, class BlockSource const&, class Dimension&);
    MCAPI enum CrashDumpLogStringID _getCrashDumpLogCategory();
    MCAPI std::string _getValidatedPlayerName(std::string const&);
    MCAPI void _handleChangeDimensionRequests();
    MCAPI void _handlePlayerSuspension();
    MCAPI void _loadAutonomousEntities();
    MCAPI void _loadBiomeData();
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const&);
    MCAPI bool _playerChangeDimension(class Player*, class ChangeDimensionRequest&);
    MCAPI void _saveAutonomousEntities();
    MCAPI void _saveSomeChunks();
    MCAPI void _syncTime(int);

protected:
    MCAPI class ServerLevelEventCoordinator& _getServerLevelEventCoordinator();
};