// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLENONIMPLEMENTED_DEPRECATEDASKTYLAING
public:
    class CraftHandleNonImplemented_DEPRECATEDASKTYLAING& operator=(class CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(class CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandleNonImplemented_DEPRECATEDASKTYLAING();
    /*2*/ virtual enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const * _getLevelRecipes() const;
    MCAPI CraftHandleNonImplemented_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftHandler &);

protected:

private:

};