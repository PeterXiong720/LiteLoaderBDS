// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
class ScriptAgeableComponent : public ScriptActorComponent {
public:
    virtual ~ScriptAgeableComponent();

public:
    MCAPI class Scripting::Result<float> getDuration() const;
    MCAPI class Scripting::Result<std::vector<struct ActorDefinitionFeedItem>> getFeedItems() const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptDefinitionTrigger>> getGrowUp() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptAgeableComponent> bind(struct Scripting::Version);
};