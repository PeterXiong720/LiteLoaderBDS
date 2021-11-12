// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class VolumeEntityManagerServer {
public:
    virtual ~VolumeEntityManagerServer();

public:
    MCAPI void loadVolumeFiles(class Core::PathBuffer<std::string> const&, bool);
    MCAPI void sendAllVolumesToClient(class UserEntityIdentifierComponent const&, class NetworkIdentifier const&, class PacketSender&) const;

    MCAPI static class SemVersion const MAXIMUM_SUPPORTED_VERSION;
    MCAPI static class SemVersion const MINIMUM_SUPPORTED_VERSION;

private:
    MCAPI bool _serializeVolume(struct VolumeEntityManager::VolumeEntityDefinition const&, class EntityContext const&, class CompoundTag&) const;
};