// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptBeforeDataDrivenActorTriggerEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBEFOREDATADRIVENACTORTRIGGEREVENT
public:
    struct ScriptBeforeDataDrivenActorTriggerEvent& operator=(struct ScriptBeforeDataDrivenActorTriggerEvent const &) = delete;
    ScriptBeforeDataDrivenActorTriggerEvent(struct ScriptBeforeDataDrivenActorTriggerEvent const &) = delete;
    ScriptBeforeDataDrivenActorTriggerEvent() = delete;
#endif

public:
    MCAPI ScriptBeforeDataDrivenActorTriggerEvent(class Actor &, std::string const &, std::vector<struct ActorDefinitionModifier> &, class Scripting::WeakLifetimeScope const &);
    MCAPI ~ScriptBeforeDataDrivenActorTriggerEvent();

protected:

private:

};