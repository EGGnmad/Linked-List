#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LL.h"

struct Node* Node(int _value){
    struct Node* node = malloc(sizeof(struct Node));
    node->value = _value;
    node->next = NULL;

    return node;
}

struct LinkedList* LinkedList(struct Node* _head){
    struct LinkedList* list = malloc(sizeof(struct LinkedList));
    list->size = 1;
    list->head = _head;
    list->tail = _head;

    return list;
}

void push(struct LinkedList* _list, struct Node* _node){
    struct Node* temp = _list->tail;

    /*resize*/
    _list->size++;

    _list->tail = _node;
    temp->next = _node;
}

struct Node pop(struct LinkedList* _list){
    struct Node pop = *(_list->tail);

    /*resize*/
    _list->size--;
    
    /*free the pointer*/
    free(_list->tail);
    _list->tail = NULL;

    return pop;
}


char* toString(const struct LinkedList* _list){
    char* string = malloc(sizeof(char));
    struct Node* node = _list->head;

    strcat(string, "[");

    for(size_t i = 0; i < _list->size -1; i++){
        /*action*/
        char* snode = malloc(sizeof(char));
        sprintf(snode, " %d,", node->value);
        strcat(string, snode);

        /*next*/
        node = node->next;
    }

    char* snode = malloc(sizeof(char));
    sprintf(snode, " %d ]", node->value);
    strcat(string, snode);

    return string;
}

