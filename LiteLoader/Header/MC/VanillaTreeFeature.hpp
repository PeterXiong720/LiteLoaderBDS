// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaTreeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATREEFEATURE
public:
    class VanillaTreeFeature& operator=(class VanillaTreeFeature const &) = delete;
    VanillaTreeFeature(class VanillaTreeFeature const &) = delete;
    VanillaTreeFeature() = delete;
#endif

public:
    /*0*/ virtual ~VanillaTreeFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

protected:

private:
    MCAPI static void _buildVanillaCanopyVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeCanopyWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);
    MCAPI static void _buildVanillaRootVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeRootWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);
    MCAPI static void _buildVanillaTrunkVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeTrunkWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);

};