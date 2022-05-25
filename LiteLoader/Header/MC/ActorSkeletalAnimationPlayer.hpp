// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorSkeletalAnimationPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATIONPLAYER
public:
    class ActorSkeletalAnimationPlayer& operator=(class ActorSkeletalAnimationPlayer const &) = delete;
    ActorSkeletalAnimationPlayer(class ActorSkeletalAnimationPlayer const &) = delete;
    ActorSkeletalAnimationPlayer() = delete;
#endif

public:
    /*0*/ virtual ~ActorSkeletalAnimationPlayer();
    /*1*/ virtual void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    /*2*/ virtual void resetAnimation();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
    /*5*/ virtual void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual class HashedString const & getRawName() const;
    /*
    inline void buildBoneToPartMapping(class AnimationComponent & a0){
        void (ActorSkeletalAnimationPlayer::*rv)(class AnimationComponent &);
        *((void**)&rv) = dlsym("?buildBoneToPartMapping@ActorSkeletalAnimationPlayer@@UEAAXAEAVAnimationComponent@@@Z");
        return (this->*rv)(std::forward<class AnimationComponent &>(a0));
    }
    inline enum ActorAnimationType getAnimationType() const{
        enum ActorAnimationType (ActorSkeletalAnimationPlayer::*rv)() const;
        *((void**)&rv) = dlsym("?getAnimationType@ActorSkeletalAnimationPlayer@@UEBA?AW4ActorAnimationType@@XZ");
        return (this->*rv)();
    }
    inline class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const & a0){
        class std::shared_ptr<class ActorAnimationPlayer> (ActorSkeletalAnimationPlayer::*rv)(class HashedString const &);
        *((void**)&rv) = dlsym("?findAnimation@ActorSkeletalAnimationPlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z");
        return (this->*rv)(std::forward<class HashedString const &>(a0));
    }
    inline bool hasAnimationFinished() const{
        bool (ActorSkeletalAnimationPlayer::*rv)() const;
        *((void**)&rv) = dlsym("?hasAnimationFinished@ActorSkeletalAnimationPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ActorSkeletalAnimationPlayer(class HashedString const &, class ActorSkeletalAnimationPtr, class AnimationComponent &, class ExpressionNode const &);

protected:

private:

};