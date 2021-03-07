//
// Created by jrmar on 07.03.2021.
//

#ifndef UNTITLED_RANK_H
#define UNTITLED_RANK_H
#include <string>

class rank {
    int priority;
    std::string rankName;

    public:
    rank(std::string rankName, int priority);
    int getPriority();
    std::string getRankName();
};


#endif //UNTITLED_RANK_H
