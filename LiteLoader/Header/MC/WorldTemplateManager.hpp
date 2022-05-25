// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldTemplateManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEMANAGER
public:
    class WorldTemplateManager& operator=(class WorldTemplateManager const &) = delete;
    WorldTemplateManager(class WorldTemplateManager const &) = delete;
    WorldTemplateManager() = delete;
#endif

public:
    /*0*/ virtual ~WorldTemplateManager();
    /*1*/ virtual struct WorldTemplateInfo const * findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const &) const;
    /*
    inline  ~WorldTemplateManager(){
         (WorldTemplateManager::*rv)();
        *((void**)&rv) = dlsym("??1WorldTemplateManager@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI WorldTemplateManager(class PackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class PackSourceFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, bool);
    MCAPI struct WorldTemplateInfo const * findInstalledWorldTemplate(struct PackIdVersion const &) const;
    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const;

protected:

private:
    MCAPI void _initialize();
    MCAPI void _initializePackSources();
    MCAPI void _onDiscoverWorldTemplate(class Pack const &);

};