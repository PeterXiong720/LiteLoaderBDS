// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~ActorServerCommandOrigin();
    /*1*/ virtual std::string const & getRequestId() const;
    /*5*/ virtual class std::optional<class Vec2> getRotation() const;
    /*6*/ virtual class Level * getLevel() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*11*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*12*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*15*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*17*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*20*/ virtual unsigned char getSourceSubId() const;
    /*21*/ virtual class CommandOrigin const & getOutputReceiver() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*25*/ virtual class mce::UUID const & getUUID() const;
    /*26*/ virtual void handleCommandOutputCallback(class Json::Value &&) const;
    /*27*/ virtual void updateValues();
    /*29*/ virtual class CompoundTag serialize() const;
    /*30*/ virtual bool isValid() const;
    MCAPI ActorServerCommandOrigin(class Actor &);
    MCAPI struct ActorUniqueID getTargetOther() const;
    MCAPI void setTargetOther(struct ActorUniqueID);
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const &, class Level &);

protected:

private:

};