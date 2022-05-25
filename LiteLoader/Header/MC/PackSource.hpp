// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCE
public:
    class PackSource& operator=(class PackSource const &) = delete;
    PackSource(class PackSource const &) = delete;
    PackSource() = delete;
#endif

public:
    /*
    inline enum PackOrigin getPackOrigin() const{
        enum PackOrigin (PackSource::*rv)() const;
        *((void**)&rv) = dlsym("?getPackOrigin@PackSource@@UEBA?AW4PackOrigin@@XZ");
        return (this->*rv)();
    }
    inline enum PackType getPackType() const{
        enum PackType (PackSource::*rv)() const;
        *((void**)&rv) = dlsym("?getPackType@PackSource@@UEBA?AW4PackType@@XZ");
        return (this->*rv)();
    }
    inline  ~PackSource(){
         (PackSource::*rv)();
        *((void**)&rv) = dlsym("??1PackSource@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class Pack * fetchPack(struct PackIdVersion const &);
    MCAPI void resolveUpgradeDependencies(class Pack &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

protected:

private:

};