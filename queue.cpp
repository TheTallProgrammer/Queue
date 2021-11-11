//
// Created by Logan on 10/28/2021.
//

#include "queue.h"

Queue::Queue(){
    front = 0;
    back = -1;
    count = 0;
} // End of constructor

Queue::~Queue(){
    clearQueue();
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

bool Queue::dequeue(Data *data){
    bool didDequeue = false;
    if(!isEmpty()){
        data->id = queue[front]->id;
        data->data = queue[front]->data;
        delete queue[front];
        front = (front + 1) % QUEUESIZE;
        didDequeue = true;
        count--;
    }
    else {
        data->id = -1;
        data->data = "";
    }
    return didDequeue;
} // End of dequeue

void Queue::printQueue(){
    if(!isEmpty()) {
        for (int i = front; i <= back; i++) {
            std::cout << "\tposition: " << i << " : id: " << queue[i]->id << " : data: " << queue[i]->data << std::endl;
        }
    } else {
        std::cout << "\tno data to print" << std::endl;
    }
} // End of printQueue

void Queue::getQueueElement(int id, Data *data){
    for(int i =front; i < count; i++){
        if(queue[i]->id == id){
            data->id = queue[i]->id;
            data->data = queue[i]->data;
        }
    }
} // End of getQueueElement

bool Queue::isEmpty() {return back==0;} // End of isEmpty

bool Queue::peek(Data *data){
    bool canPeek = false;
    if(!isEmpty()){
        data->id = queue[front]->id;
        data->data = queue[front]->data;
        canPeek = true;
    }
    return canPeek;
} // End of peek

int Queue::size(){return count;} // End of size

void Queue::clearQueue(){
    if(!isEmpty()) {
        while (count >= front) {
            std::cout << "Deleting at position " << count << std::endl;
//            data->id = queue[count]->id;
//            data->data = queue[count]->data;
            delete queue[count];
            count--;
            back = count;
        }
    }
//        for (int i = count; i >= front; i--) {
//            std::cout << "i = " << count << " : front = " << front << std::endl;
//            data->id = queue[i]->id;
//            data->data = queue[i]->data;
//            delete queue[count];
//            printQueue();
//            count--;
//        }
} // End of clearQueue
