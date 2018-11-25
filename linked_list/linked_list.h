#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__


typedef struct _LinkedList LinkedList;

LinkedList* LinkedList_New(void);
void LinkedList_Delete(LinkedList* list);

#endif /* __LINKED_LIST_H__ */
