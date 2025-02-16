#pragma once
#ifndef STATE_H
#define STATE_H

#include <vector>

#include "structures.h"

// 存储场上的状态
struct State
{
    uint32_t teamScore;

    // 自身信息，根据playerType的不同，可以调用的值也不同。
    std::shared_ptr<THUAI6::Human> humanSelf;
    std::shared_ptr<THUAI6::Butcher> butcherSelf;

    std::vector<std::shared_ptr<THUAI6::Human>> humans;
    std::vector<std::shared_ptr<THUAI6::Butcher>> butchers;
    std::vector<std::shared_ptr<THUAI6::Prop>> props;

    THUAI6::PlaceType gamemap[51][51];

    std::vector<int64_t> guids;
};

#endif