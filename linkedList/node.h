#ifndef NODE_H
#define NODE_H

#include <cstdlib>

class Node
{
public:
    Node();
    virtual ~Node();
    virtual Node& operator=(const Node& other);

    virtual bool operator<(const Node& x) const;
    virtual bool operator<=(const Node& x) const;
    virtual bool operator>(const Node& x)const;
    virtual bool operator>=(const Node& x)const;
    virtual bool operator==(const Node& x) const;
    virtual bool operator!=(const Node& x) const;
    Node*& nextNode();
    void* getFirst() const;
    void setFirst(void *ptr);

protected:

private:
    void* first;
    Node* next;

};

#endif // NODE_H
