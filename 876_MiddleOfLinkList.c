/***************************************************
*      FileName: 876_MiddleOfLinkList.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-11 21:32:00
*      LastModified: 2019-06-11 21:33:38
****************************************************/
/*
 876 Middle of the Linked List
 分析：寻找链表的中间节点
 思路：快慢指针法。
 * */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    if(head == NULL)
    {
        return NULL;
    }

    struct ListNode* slow, *fast;
    slow = fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
