// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetStewEffectFunction : public LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSTEWEFFECTFUNCTION
public:
    class SetStewEffectFunction& operator=(class SetStewEffectFunction const &) = delete;
    SetStewEffectFunction(class SetStewEffectFunction const &) = delete;
    SetStewEffectFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetStewEffectFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

protected:

private:

};