// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBlockInventoryComponent : public ScriptObject {
public:
    virtual ~ScriptBlockInventoryComponent();

public:
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptBlockInventoryComponentContainer>> getOrCreateContainer();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockInventoryComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockInventoryComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};