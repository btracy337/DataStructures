//
//  Queue.h
//  DataStructures
//
//  Created by Tracy, Bryan on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h
#include "LinkedList.h"
#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}
template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    //Empty since it is handled by the parent class constructor
}
template <class Type>
Queue<Type> :: ~Queue()
{
    for(LinearNode<Type> * removed = this-> front; removed != nullptr; removed = this->front)
    {
        this-> front = removed->getNextNode();
        delete removed;
    }
}
template <class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(item);
    
    if
}
#endif /* Queue_h */
