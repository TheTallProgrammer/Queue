//
// Created by Logan on 10/28/2021.
//

#include "queue.h"


Queue::Queue(){
    front = 0;
    rear = 0;
} // End of constructor

Queue::~Queue(){

} // End of destructor

bool Queue::enqueue(int id, const string*data){

    bool didEnqueue = false;

    if(rear < QUEUESIZE - 1){
        if(id >= 0 && data->length() > 0){
            
        }
    }

    return didEnqueue;

} // End of enqueue

bool Queue::dequeue(){

    bool didDequeue = false;

    return didDequeue;

} // End of dequeue

void Queue::printQueue(){

} // End of printQueue

void Queue::getQueueElement(){

} // End of getQueueElement

bool Queue::isEmpty() {

    bool isEmpt = false;

    return isEmpt;

} // End of isEmpty
