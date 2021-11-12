// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class UnverifiedCertificate {

public:
    MCAPI std::string getIdentityPublicKey() const;
    MCAPI std::string toString() const;

    MCAPI static class UnverifiedCertificate fromString(std::string const&);

private:
    MCAPI void addToChain(class Json::Value&) const;
};