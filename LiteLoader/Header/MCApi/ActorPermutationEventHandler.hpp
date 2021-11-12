// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ActorPermutationEventHandler {

public:
    MCAPI void checkActiveComponents(class std::shared_ptr<class ActorPermutation>);
    MCAPI class ActorDefinitionDescriptor* getPermutationDescriptor();
    MCAPI bool hasChanged();
    MCAPI void initPermutations(std::vector<class std::shared_ptr<class ActorPermutation>>&);
    MCAPI void reload(class RenderParams&);
};