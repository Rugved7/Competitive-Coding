/*
    Time Complexity:O(N ^ 2)
    Space Complexity:O(N)

    Where N is the total nodes in Linked List
*/

#include <stack>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

    if (head == NULL || head->next == NULL) 
	{
        return head;
    }

    // Reverse the rest of Linked List
    LinkedListNode<int> *reverseHead = reverseLinkedList(head->next);
    LinkedListNode<int> *temp = reverseHead;

    // Find the last node of partial reversed Linked List.
    while (temp->next != NULL) 
	{
        temp = temp->next;
    }

    // Assign current node next to NULL.
    head->next = NULL;

    // Add current node to last of revesed Linked List.
    temp->next = head;

    // Return head of reversed Linked List.
    return reverseHead;

}