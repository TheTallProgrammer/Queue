//
// Created by Logan on 10/28/2021.
//

#ifndef QUEUE_PROJECT_QUEUE_H
#define QUEUE_PROJECT_QUEUE_H

#define QUEUESIZE 10
#include "data.h"
#include <iostream>

class Queue{

    public:

        // Constructor/Destructor
        Queue();
        ~Queue();

        // Methods
        bool enqueue(int, const string *);
        bool dequeue(Data *);
        void printQueue();
        void getQueueElement(int, Data *);
        bool isEmpty();
        bool peek(Data *);
        int size();
        void clearQueue();

    private:

        int front, back, count;
        Data *queue[QUEUESIZE];

};

#endif //QUEUE_PROJECT_QUEUE_H
