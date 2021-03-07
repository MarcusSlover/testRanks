//
// Created by jrmar on 08.03.2021.
//

#ifndef UNTITLED_RANK_HANDLER_H
#define UNTITLED_RANK_HANDLER_H

#include "handler.h"
#include "rank.h"

class rank_handler: public handler<rank> {
public:
    void initialize() override {
        this->add({"owner", 10});
        this->add({"admin", 9});
        this->add({"mod", 8});
        this->add({"helper", 7});
        this->add({"vip", 6});
        this->add({"player", 5});
    }
};


#endif //UNTITLED_RANK_HANDLER_H
