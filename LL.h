#ifndef LL_H
#define LL_H

/*Node*/
struct Node{
    int value;
    struct Node* next;    
};

struct Node* Node(int _value);

/*LinkedList*/
struct LinkedList{
    struct Node* head;
    struct Node* tail;
    int size;
};

struct LinkedList* LinkedList(struct Node* _head);
void push(struct LinkedList* _list, struct Node* _node);
struct Node pop(struct LinkedList* _list);
char* toString(const struct LinkedList* _list);

#endif