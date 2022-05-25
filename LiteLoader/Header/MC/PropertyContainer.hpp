// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PropertyContainer {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCONTAINER
public:
    class PropertyContainer& operator=(class PropertyContainer const &) = delete;
    PropertyContainer(class PropertyContainer const &) = delete;
    PropertyContainer() = delete;
#endif

public:
    MCAPI PropertyContainer(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>);
    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag &) const;
    MCAPI void addSerializationDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    MCAPI void readLoadedProperties(class CompoundTag const &);
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    MCAPI void setBoolValue(unsigned __int64, bool);
    MCAPI void setEnumIndexValue(unsigned __int64, unsigned __int64);
    MCAPI void setFloatValue(unsigned __int64, float);
    MCAPI void setIntValue(unsigned __int64, int);

protected:

private:
    MCAPI void _addDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;
    MCAPI bool _readValueFromTag(class PropertyMetadata const &, class Tag const &);

};