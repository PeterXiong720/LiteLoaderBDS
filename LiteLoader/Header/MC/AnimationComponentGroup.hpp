// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnimationComponentGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTGROUP
public:
    class AnimationComponentGroup& operator=(class AnimationComponentGroup const &) = delete;
    AnimationComponentGroup(class AnimationComponentGroup const &) = delete;
    AnimationComponentGroup() = delete;
#endif

public:
    MCAPI static class std::unordered_map<class AnimationComponentID, class std::weak_ptr<class AnimationComponent>, struct std::hash<class AnimationComponentID>, struct std::equal_to<class AnimationComponentID>, class std::allocator<struct std::pair<class AnimationComponentID const, class std::weak_ptr<class AnimationComponent>>>> & _getAllAnimationComponents(enum AnimationComponentGroupType);
    MCAPI static class std::shared_ptr<class AnimationComponent> getAnimationComponent(enum AnimationComponentGroupType, class AnimationComponentID);
    MCAPI static void releaseAnimationComponent(enum AnimationComponentGroupType, class AnimationComponentID);

protected:

private:
    MCAPI static class std::recursive_mutex & _getAnimationComponentMapLock();

};