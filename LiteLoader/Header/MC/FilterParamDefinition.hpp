// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct FilterParamDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERPARAMDEFINITION
public:
    struct FilterParamDefinition& operator=(struct FilterParamDefinition const &) = delete;
    FilterParamDefinition(struct FilterParamDefinition const &) = delete;
    FilterParamDefinition() = delete;
#endif

public:
    MCAPI FilterParamDefinition(enum FilterParamType, enum FilterParamRequirement, std::string, class FilterInput, struct FilterStringMap);
    MCAPI FilterParamDefinition(enum FilterParamType, enum FilterParamRequirement, std::string, enum FilterParamOption, class FilterInput, struct FilterStringMap);

protected:

private:

};