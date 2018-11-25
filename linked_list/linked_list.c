#include "linked_list.h"

#include <stdlib.h>
#include <string.h>


typedef struct _LinkedListNode
{
    struct _LinkedListNode* next;

    void* data;
} LinkedListNode;

struct _LinkedList
{
    LinkedListNode* head;
};

LinkedList* LinkedList_New(void)
{
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (list)
    {
        memset(list, 0, sizeof(LinkedList));
    }
    return list;
}

void LinkedList_Delete(LinkedList* list)
{
    if (list)
    {
        LinkedListNode* node = list->head;
        while (node)
        {
            LinkedListNode* next = node->next;
            free(node);
            node = next;
        }
        free(list);
    }
}
