// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IContentKeyProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONTENTKEYPROVIDER
public:
    class IContentKeyProvider& operator=(class IContentKeyProvider const &) = delete;
    IContentKeyProvider(class IContentKeyProvider const &) = delete;
    IContentKeyProvider() = delete;
#endif

public:
    /*
    inline std::string getAlternateContentKey(class ContentIdentity const & a0) const{
        std::string (IContentKeyProvider::*rv)(class ContentIdentity const &) const;
        *((void**)&rv) = dlsym("?getAlternateContentKey@IContentKeyProvider@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@@Z");
        return (this->*rv)(std::forward<class ContentIdentity const &>(a0));
    }
    inline bool requireEncryptedReads() const{
        bool (IContentKeyProvider::*rv)() const;
        *((void**)&rv) = dlsym("?requireEncryptedReads@IContentKeyProvider@@UEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};