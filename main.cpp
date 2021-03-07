#include <iostream>
#include "rank_handler.h"

rank_handler ranks;

int main() {
    ranks.initialize();
    auto vec = ranks.getVector();
    for (auto rank : vec) {
        std::cout << "Rank: " + rank.getRankName() << std::endl;
    }

    return 0;
}
