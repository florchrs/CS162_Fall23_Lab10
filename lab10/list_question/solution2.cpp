#include <iostream>

#include "list.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* removeNthFromEnd(ListNode* head, int n) {
    //Type your answer here:
    ListNode* test = new ListNode(0);
    test->next = head;
    ListNode* first = test;
    ListNode* second = test;


    for (int i = 0; i <= n; ++i) {
        if (second == nullptr) {
            delete test;
            return head;
        }
        second = second->next;
    }

    while (second != nullptr) {
        first = first->next;
        second = second->next;
    }

    ListNode* temp = first->next;
    first->next = first->next->next;
    delete temp;

    ListNode* result = test->next;
    delete test;

    return result;
}
