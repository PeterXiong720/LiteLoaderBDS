// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Trade2Ingredient2ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2INGREDIENT2CONTAINERVALIDATION
public:
    class Trade2Ingredient2ContainerValidation& operator=(class Trade2Ingredient2ContainerValidation const &) = delete;
    Trade2Ingredient2ContainerValidation(class Trade2Ingredient2ContainerValidation const &) = delete;
    Trade2Ingredient2ContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~Trade2Ingredient2ContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

protected:

private:

};