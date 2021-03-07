//
// Created by jrmar on 07.03.2021.
//

#include "rank.h"

#include <utility>

rank::rank(std::string rankName, int priority) : rankName(std::move(rankName)), priority(priority) {

}

int rank::getPriority() {
    return this->priority;
}

std::string rank::getRankName() {
    return this->rankName;
}
