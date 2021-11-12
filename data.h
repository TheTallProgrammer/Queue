//
// Created by logan on 10/28/2021.
//

#ifndef QUEUE_DATA_H
#define QUEUE_DATA_H

#include <string>
using std::string;

struct Data {
    int id;
    string data;
    Data *next, *prev;
};

#endif //QUEUE_DATA_H
