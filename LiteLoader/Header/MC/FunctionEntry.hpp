// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FunctionEntry {
public:
    virtual ~FunctionEntry();
    virtual void execute(class FunctionManager&, class CommandOrigin const&);

public:
    MCAPI enum FunctionState getErrorState() const;
};