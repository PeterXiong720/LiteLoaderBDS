// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RandomThreadCheckManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMTHREADCHECKMANAGER
public:
    class RandomThreadCheckManager& operator=(class RandomThreadCheckManager const &) = delete;
    RandomThreadCheckManager(class RandomThreadCheckManager const &) = delete;
    RandomThreadCheckManager() = delete;
#endif

public:
    /*0*/ virtual ~RandomThreadCheckManager();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void onAppResumed();

protected:

private:
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;
    MCAPI static class std::recursive_mutex mMutex;

};