#include <assert.h>
#include <stdio.h>

#include "linked_list.h"


int main(int argc, char const *argv[])
{
    printf("Linked List test application...\n\n");

    LinkedList* myList = LinkedList_New();
    assert(myList);
    
    LinkedList_Delete(myList);

    /* Unused args */
    (void)argc;
    (void)argv;
        
    return 0;
}
