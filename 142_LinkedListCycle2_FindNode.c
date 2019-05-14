/*
  142. Linked List Cycle II
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) 
in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.
Note: Do not modify the linked list.

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
3-->2->0->4
     \  /
      \/
      
Example 2:
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
1->2
 \/
 
 
Example 3:
Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
1-->NULL

分析：分两步：1.判断链表是否有环？
             2.如果存在环，找出环的入口节点并返回
                   
思路：1.使用快慢指针确定链表是否存在环
     2.

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *detectCycle(struct ListNode *head) {
    if(head == NULL)
    {
        return NULL;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }
    if(fast == NULL || fast->next == NULL)
    {
        return NULL;
    }
    
    slow = head;
    while(fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    return fast;

}
