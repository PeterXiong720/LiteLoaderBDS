// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ItemStackRequestActionCraftGrindstone {
public:
    virtual ~ItemStackRequestActionCraftGrindstone();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void _write(class BinaryStream&);
    virtual bool _read(class ReadOnlyBinaryStream&);

public:
    MCAPI struct ItemStackNetIdVariant const& getRecipeNetId() const;
    MCAPI int getRepairCost() const;
};