//
// Created by Logan on 10/28/2021.
//

#include "queue.h"


Queue::Queue(){
    front, count = 0;
    back = -1;
    count = 0;
} // End of constructor

Queue::~Queue(){

} // End of destructor

bool Queue::enqueue(int id, const string*data){
    bool didEnqueue = false;
    if(back < QUEUESIZE - 1){
        if(id >= 0 && data->length() > 0){
            // Allocating new memory for new Data struct that will be added to the queue
            Data *newData = new Data;
            newData->id = id;
            // Have to dereference the data string in order to get its contents
            newData->data = *data;
            // Executes code and enqueues the data into the queue, then increments the back int
            queue[++back] = newData;
            didEnqueue = true;
            count++;
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
        for (int i = 0; i < back+1; i++) {
            std::cout << "\tposition: " << i << " : id: " << queue[i]->id << " : data: " << queue[i]->data << std::endl;
        }
    }
} // End of printQueue

void Queue::getQueueElement(){

} // End of getQueueElement

bool Queue::isEmpty() {return back<1;} // End of isEmpty

bool Queue::peek(Data *data){
    bool canPeek = false;
    if(!isEmpty()){
        data->id = queue[front]->id;
        data->data = queue[front]->data;
        canPeek = true;
    }
    return canPeek;
} // End of peek

int Queue::size(){
    return count;
} // End of size
