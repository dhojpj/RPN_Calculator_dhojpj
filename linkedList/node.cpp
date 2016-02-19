#include "node.h"

Node::Node()
{
    first = next = NULL;
}

Node::~Node()
{
    first = next = NULL;
}

Node*& Node::nextNode()
{
    return next;
}

void* Node::getFirst() const
{
    return first;
}

void Node::setFirst(void *ptr)
{
    first = ptr;
}

Node& Node::operator=(const Node &other)
{
    return *this;
}

bool Node::operator<(const Node &x) const
{}

bool Node::operator<=(const Node &x) const
{}

bool Node::operator>(const Node &x) const
{}

bool Node::operator>=(const Node &x)const
{}

bool Node::operator==(const Node &x) const
{}

bool Node::operator!=(const Node &x) const
{}
