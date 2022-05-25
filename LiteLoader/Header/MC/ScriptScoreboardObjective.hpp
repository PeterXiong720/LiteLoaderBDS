// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptScoreboardObjective : public ScriptObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSCOREBOARDOBJECTIVE
public:
    class ScriptScoreboardObjective& operator=(class ScriptScoreboardObjective const &) = delete;
    ScriptScoreboardObjective(class ScriptScoreboardObjective const &) = delete;
    ScriptScoreboardObjective() = delete;
#endif

public:
    /*0*/ virtual ~ScriptScoreboardObjective();
    /*
    inline  ~ScriptScoreboardObjective(){
         (ScriptScoreboardObjective::*rv)();
        *((void**)&rv) = dlsym("??1ScriptScoreboardObjective@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptScoreboardObjective(class ScriptScoreboard &, class Objective &, class Scripting::WeakLifetimeScope const &);
    MCAPI ScriptScoreboardObjective(class ScriptScoreboardObjective &&);
    MCAPI class ScriptScoreboardObjective & operator=(class ScriptScoreboardObjective &&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptScoreboardObjective> bind(struct Scripting::Version);

protected:

private:
    MCAPI class Scripting::Result<std::string> _getDisplayName() const;
    MCAPI class Scripting::Result<std::string> _getObjectiveId() const;
    MCAPI class Scripting::Result<int> _getParticipantScore(class ScriptScoreboardIdentity const &) const;
    MCAPI class Scripting::Result<std::vector<class Scripting::StrongTypedObjectHandle<class ScriptScoreboardIdentity>>> _getParticipants() const;
    MCAPI class Scripting::Result<std::vector<class ScriptScoreboardScoreInfo>> _getScores() const;

};