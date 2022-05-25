// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NBStairsRoom : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBSTAIRSROOM
public:
    class NBStairsRoom& operator=(class NBStairsRoom const &) = delete;
    NBStairsRoom(class NBStairsRoom const &) = delete;
    NBStairsRoom() = delete;
#endif

public:
    /*0*/ virtual ~NBStairsRoom();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*5*/ virtual void __unk_vfn_5();
    /*9*/ virtual void __unk_vfn_9();

protected:

private:

};