// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DenyList {

#define AFTER_EXTRA
// Add Member There
public:
enum Duration;
struct Entry {
    Entry() = delete;
    Entry(Entry const&) = delete;
    Entry(Entry const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DENYLIST
public:
    class DenyList& operator=(class DenyList const &) = delete;
    DenyList(class DenyList const &) = delete;
    DenyList() = delete;
#endif

public:
    MCAPI void addEntry(struct DenyList::Entry const &);
    MCAPI enum DenyList::Duration getDuration(struct DenyList::Entry const &) const;
    MCAPI std::string const & getMessage(struct DenyList::Entry const &) const;
    MCAPI bool isBlocked(struct DenyList::Entry const &) const;
    MCAPI void removeEntry(struct DenyList::Entry const &);
    MCAPI ~DenyList();

protected:

private:

};