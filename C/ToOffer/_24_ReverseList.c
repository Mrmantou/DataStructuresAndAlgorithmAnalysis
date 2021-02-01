#include <stdio.h>

/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *node = NULL;
    struct ListNode *next = NULL;
    if (head == NULL)
    {
        return NULL;
    }

    while (head != NULL && head->next != NULL)
    {
        next = head->next;
        head->next = node;
        node = head;
        head = next;
    }

    head->next = node;

    return head;
}

int main()
{
    return 0;
}