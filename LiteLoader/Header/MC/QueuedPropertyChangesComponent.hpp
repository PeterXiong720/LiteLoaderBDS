// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class QueuedPropertyChangesComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QUEUEDPROPERTYCHANGESCOMPONENT
public:
    class QueuedPropertyChangesComponent& operator=(class QueuedPropertyChangesComponent const &) = delete;
#endif

public:
    MCAPI QueuedPropertyChangesComponent(class QueuedPropertyChangesComponent &&);
    MCAPI QueuedPropertyChangesComponent(class QueuedPropertyChangesComponent const &);
    MCAPI QueuedPropertyChangesComponent();
    MCAPI class QueuedPropertyChangesComponent & operator=(class QueuedPropertyChangesComponent &&);
    MCAPI void queueBoolChange(unsigned __int64, bool);
    MCAPI void queueFloatChange(unsigned __int64, float);
    MCAPI void queueIntChange(unsigned __int64, int);
    MCAPI ~QueuedPropertyChangesComponent();

protected:

private:

};