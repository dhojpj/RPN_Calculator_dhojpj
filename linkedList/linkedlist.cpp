#include "LinkedList.h"

LinkedList::LinkedList()
{
    qty = 0;
    maxQty = 50;
}


LinkedList::~LinkedList()
{
    qty = 0;
    maxQty = 0;
}

bool LinkedList::empty()
{
  return !qty;
}

bool LinkedList::full()
{
  return !(maxQty - qty);
}

unsigned int LinkedList::size()
{
    return qty;
}

unsigned int LinkedList::max_size()
{
    return maxQty;
}

void LinkedList::insert(Node* whom)
{
    Node* ptr = anchor;
    qty++;
    for(; ptr->nextNode() && ptr->nextNode()->getFirst() < whom->getFirst(); ptr = ptr->nextNode());
    if(!ptr)
    {
        ptr->nextNode() = whom;
        return;
    }
    whom->nextNode() = ptr->nextNode();
    ptr->nextNode() = whom;
}

void LinkedList::erase(void* whom)
{
    Node* ptr = anchor, *bye;
    for(; ptr->nextNode() && ptr->nextNode() < whom; ptr = ptr->nextNode());
    if(!ptr->nextNode() || ptr->nextNode()->getFirst() != whom)
        throw NOT_FOUND;
    bye = ptr->nextNode();
    ptr->nextNode() = bye->nextNode();
    delete bye;
    qty--;
}
