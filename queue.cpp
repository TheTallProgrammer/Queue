//
// Created by Logan on 10/28/2021.
//

#include "queue.h"


Queue::Queue(){
    front = 0;
    rear = -1;
} // End of constructor

Queue::~Queue(){

} // End of destructor

bool Queue::enqueue(int id, const string*data){
    bool didEnqueue = false;
    if(rear < QUEUESIZE - 1){
        if(id >= 0 && data->length() > 0){
            // Allocating new memory for new Data struct that will be added to the queue
            Data *newData = new Data;
            newData->id = id;
            // Have to dereference the data string in order to get its contents
            newData->data = *data;
            // Executes code and enqueues the data into the queue, then increments the rear int
            queue[++rear] = newData;
            std::cout << "rear position: " << rear << std::endl;
            didEnqueue = true;
        }
    }
    return didEnqueue;
} // End of enqueue

bool Queue::dequeue(){

    bool didDequeue = false;

    return didDequeue;

} // End of dequeue

void Queue::printQueue(){
    if(!isEmpty()) {
        for (int i = 0; i < rear+1; i++) {
            std::cout << "position: " << i << " : id: " << queue[i]->id << " : data: " << queue[i]->data << std::endl;
        }
    }
} // End of printQueue

void Queue::getQueueElement(){

} // End of getQueueElement

bool Queue::isEmpty() {
    bool isEmpt = true;
    if(rear > 0){
        isEmpt = false;
    }
    return isEmpt;
} // End of isEmpty
