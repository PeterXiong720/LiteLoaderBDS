#include "Global.h"
#include <MC/ItemActor.hpp>

ItemStack* ItemActor::getItemStack() {
    return (ItemStack*)((uintptr_t)this + 1768); // IDA Player::take 81
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 487 * 4>(this); // ItemActor::normalTick
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 487 * 4>(this) = a1;
    return true;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 482 * 4>(this);
}