// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorCommandResponse {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMMANDRESPONSE
public:
    class ActorCommandResponse& operator=(class ActorCommandResponse const &) = delete;
    ActorCommandResponse(class ActorCommandResponse const &) = delete;
    ActorCommandResponse() = delete;
#endif

public:
    /*0*/ virtual ~ActorCommandResponse();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>> &, class Factory<class ActorEventResponse> const &) const;
    /*
    inline void executeAction(class RenderParams & a0) const{
        void (ActorCommandResponse::*rv)(class RenderParams &) const;
        *((void**)&rv) = dlsym("?executeAction@ActorCommandResponse@@UEBAXAEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class RenderParams &>(a0));
    }
    inline std::string const & getName() const{
        std::string const & (ActorCommandResponse::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ActorCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};