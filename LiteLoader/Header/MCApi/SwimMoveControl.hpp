// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class SwimMoveControl : public MoveControl {
public:
    virtual ~SwimMoveControl();
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);
    virtual void tick(class MoveControlComponent&, class Mob&);
};