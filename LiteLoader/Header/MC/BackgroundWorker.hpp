// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BackgroundWorker {

#define AFTER_EXTRA
// Add Member There
public:
enum RunOneResult;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    class BackgroundWorker& operator=(class BackgroundWorker const &) = delete;
    BackgroundWorker(class BackgroundWorker const &) = delete;
    BackgroundWorker() = delete;
#endif

public:
    /*0*/ virtual ~BackgroundWorker();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool canTaskRunAgain() const;
    /*
    inline bool isAsync() const{
        bool (BackgroundWorker::*rv)() const;
        *((void**)&rv) = dlsym("?isAsync@BackgroundWorker@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~BackgroundWorker(){
         (BackgroundWorker::*rv)();
        *((void**)&rv) = dlsym("??1BackgroundWorker@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class WorkerPool &, bool);
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    MCAPI class std::thread::id getThreadId() const;
    MCAPI bool isIdle() const;
    MCAPI bool processTaskSync();
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void requestStop(bool);
    MCAPI void resetWorkerThreadID();
    MCAPI void resortPriorityQueue();
    MCAPI void start();
    MCAPI void wake();
    MCAPI static class BackgroundWorker * getLocal();

protected:

private:
    MCAPI void _assignWorkerToThisThread();
    MCAPI bool _processNextTask();
    MCAPI enum BackgroundWorker::RunOneResult _runOneTask();
    MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};