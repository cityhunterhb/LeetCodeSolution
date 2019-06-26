/***************************************************
*      FileName: 24_SwapNodeinPairs.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-26 10:03:19
*      LastModified: 2019-06-26 10:03:25
****************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void swap(struct ListNode* l, struct ListNode* r)
{
    if(l == NULL || r == NULL)
    {
        return;
    }

    int temp = l->val;
    l->val = r->val;
    r->val = temp;
}

struct ListNode* swapPairs(struct ListNode* head){
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *l, *r;
    l = head;
    r = head->next;
    while(l->next && r->next)
    {
        swap(l, r);
        l = l->next->next;
        r = r->next->next;
    }

    return head;
}

