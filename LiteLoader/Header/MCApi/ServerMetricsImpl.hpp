// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ServerMetricsImpl {
public:
    virtual ~ServerMetricsImpl();
    virtual void sendPeriodicMetrics(class ServerInstance&);
    virtual void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const&);
    virtual void sendChunkLoadTelemetryData();

private:
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance&);
};