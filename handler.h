//
// Created by jrmar on 08.03.2021.
//

#ifndef UNTITLED_HANDLER_H
#define UNTITLED_HANDLER_H

#include <vector>

template <class T>
class handler {
protected:
    std::vector<T> v;

public:
    virtual void initialize() {

    }

    virtual void add(T object) {
        v.push_back(object);
    }

    virtual std::vector<T> getVector() {
        return v;
    }
};

#include "handler.cpp"


#endif //UNTITLED_HANDLER_H

