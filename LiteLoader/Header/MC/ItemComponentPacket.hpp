// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemComponentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENTPACKET
public:
    class ItemComponentPacket& operator=(class ItemComponentPacket const &) = delete;
    ItemComponentPacket(class ItemComponentPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ItemComponentPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~ItemComponentPacket(){
         (ItemComponentPacket::*rv)();
        *((void**)&rv) = dlsym("??1ItemComponentPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ItemComponentPacket();

protected:

private:

};