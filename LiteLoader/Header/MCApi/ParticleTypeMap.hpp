// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ParticleTypeMap {

public:
    MCAPI static std::string const& getParticleName(enum ParticleType);
    MCAPI static enum ParticleType getParticleTypeId(std::string const&);

private:
    MCAPI static class BidirectionalUnorderedMap<enum ParticleType, std::string> const map;
};