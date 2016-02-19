#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

enum LINKEDLISTERRORS {NOT_FOUND};

class LinkedList
{
public:
    LinkedList();

    virtual ~LinkedList();

    bool empty();
    bool full();
    unsigned int size();
    unsigned int max_size();

protected:
    Node* anchor; // header?
    unsigned int qty, maxQty;

    void insert(Node* n);
    void erase(void* n);

private:


};

#endif // LINKEDLIST_H
