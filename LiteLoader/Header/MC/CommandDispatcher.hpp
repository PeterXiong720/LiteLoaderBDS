// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class CommandDispatcher {
public:
    virtual ~CommandDispatcher();
    virtual int performCommand(class CommandOrigin const&, class Command&);
};