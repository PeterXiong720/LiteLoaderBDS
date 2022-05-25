// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptGameTestHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTHELPER
public:
    class ScriptGameTestHelper& operator=(class ScriptGameTestHelper const &) = delete;
    ScriptGameTestHelper(class ScriptGameTestHelper const &) = delete;
    ScriptGameTestHelper() = delete;
#endif

public:
    MCAPI ScriptGameTestHelper(class gametest::BaseGameTestHelper &, class Scripting::WeakLifetimeScope);
    MCAPI class Scripting::Result<void> assertBlockState(class BlockPos const &, class Scripting::Closure<bool (struct Scripting::TypedObjectHandle<class ScriptBlock>)>);
    MCAPI class Scripting::Result<void> assertBlockTypePresent(class ScriptBlockType const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertCanReachLocation(class ScriptActor &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertCondition(bool, std::string const &);
    MCAPI class Scripting::Result<void> assertContainerContains(class ScriptItemStack const &, class BlockPos const &);
    MCAPI class Scripting::Result<void> assertContainerEmpty(class BlockPos const &);
    MCAPI class Scripting::Result<void> assertEntityHasArmor(std::string const &, int, std::string const &, int, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertEntityHasComponent(std::string const &, std::string const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertEntityInstancePresent(class ScriptActor const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertEntityPresent(std::string const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertEntityPresentInArea(std::string const &, bool);
    MCAPI class Scripting::Result<void> assertEntityState(class BlockPos const &, std::string const &, class Scripting::Closure<bool (struct Scripting::TypedObjectHandle<class ScriptActor>)>);
    MCAPI class Scripting::Result<void> assertEntityTouching(std::string const &, class Vec3 const &, bool);
    MCAPI class Scripting::Result<void> assertIsWaterlogged(class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> assertItemEntityCountIs(class ScriptItemType const &, class BlockPos const &, float, int);
    MCAPI class Scripting::Result<void> assertItemEntityPresent(class ScriptItemType const &, class BlockPos const &, float, bool);
    MCAPI class Scripting::Result<void> assertRedstonePower(class BlockPos const &, int);
    MCAPI class Scripting::Result<void> destroyBlock(class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> fail(std::string const &);
    MCAPI class Scripting::Result<void> failIf(class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptBlock>> getBlock(class BlockPos const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptDimension>> getDimension() const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptGameTestConnectivity>> getFenceConnectivity(class BlockPos const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptSculkSpreader>> getSculkSpreader(class BlockPos const &);
    MCAPI enum ScriptFacing getTestDirection() const;
    MCAPI class Scripting::Promise<void> idle(class Scripting::ScriptObjectFactory &, int);
    MCAPI class Scripting::Result<void> killAllEntities();
    MCAPI class Scripting::Result<void> pressButton(class BlockPos const &);
    MCAPI class Scripting::Result<void> print(std::string const &);
    MCAPI class Scripting::Result<void> pullLever(class BlockPos const &);
    MCAPI class Scripting::Result<void> pulseRedstone(class BlockPos const &, int);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class BlockPos>> relativeBlockPosition(class BlockPos const &) const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class Vec3>> relativePosition(class Vec3 const &) const;
    MCAPI void removeSimulatedPlayer(class ScriptSimulatedPlayer const &);
    MCAPI class Scripting::Result<enum ScriptFacing> rotateDirection(enum ScriptFacing) const;
    MCAPI class Scripting::Result<class ScriptVector> rotateVector(class ScriptVector const &) const;
    MCAPI class Scripting::Result<void> runAfterDelay(int, class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> runAtTickTime(int, class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> setBlockPermutation(class ScriptBlockPermutation const &, class BlockPos const &);
    MCAPI class Scripting::Result<void> setBlockType(class ScriptBlockType const &, class BlockPos const &);
    MCAPI class Scripting::Result<void> setFluidContainer(class BlockPos const &, int);
    MCAPI class Scripting::Result<void> setTntFuse(class ScriptActor &, int);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawn(std::string const &, class BlockPos const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawnAtLocation(std::string const &, class Vec3 const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawnItem(class ScriptItemStack const &, class Vec3 const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptSimulatedPlayer>> spawnSimulatedPlayer(class BlockPos const &, std::string const &, enum GameType);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawnWithoutBehaviors(std::string const &, class BlockPos const &);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawnWithoutBehaviorsAtLocation(std::string const &, class Vec3 const &);
    MCAPI class Scripting::Result<void> spreadFromFaceTowardDirection(class BlockPos const &, enum ScriptFacing, enum ScriptFacing);
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptGameTestSequence> startSequence();
    MCAPI class Scripting::Result<void> succeed();
    MCAPI class Scripting::Result<void> succeedIf(class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> succeedOnTick(int);
    MCAPI class Scripting::Result<void> succeedOnTickWhen(int, class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> succeedWhen(class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> succeedWhenBlockPresent(class ScriptBlockType const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> succeedWhenEntityHasComponent(std::string const &, std::string const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> succeedWhenEntityPresent(std::string const &, class BlockPos const &, bool);
    MCAPI class Scripting::Result<void> triggerInternalBlockEvent(class BlockPos const &, std::string const &, std::vector<float> const &);
    MCAPI class Scripting::Promise<void> until(class Scripting::ScriptObjectFactory &, class Scripting::Closure<void (void)>);
    MCAPI class Scripting::Result<void> walkTo(class ScriptActor &, class BlockPos const &, float);
    MCAPI class Scripting::Result<void> walkToLocation(class ScriptActor &, class Vec3 const &, float);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class BlockPos>> worldBlockPosition(class BlockPos const &) const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class Vec3>> worldPosition(class Vec3 const &) const;
    MCAPI ~ScriptGameTestHelper();

protected:

private:
    MCAPI static class std::optional<struct gametest::GameTestError> _callClosure(class Scripting::Closure<void (void)> const &);

};