// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TridentImpalerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTIMPALERENCHANT
public:
    class TridentImpalerEnchant& operator=(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant() = delete;
#endif

public:
    /*0*/ virtual ~TridentImpalerEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMinLevel() const;
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /*7*/ virtual float getDamageBonus(int, class Actor const &) const;
    /*8*/ virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /*10*/ virtual bool isMeleeDamageEnchant() const;
    /*11*/ virtual bool isProtectionEnchant() const;
    /*12*/ virtual bool isTreasureOnly() const;
    /*13*/ virtual bool isDiscoverable() const;
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
    MCAPI TridentImpalerEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

protected:

private:

};