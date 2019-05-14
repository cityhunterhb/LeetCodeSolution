/***************************************************
*      FileName: 141_LinkedListCycle.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-14 06:38:57
*      LastModified: 2019-05-14 06:58:34
****************************************************/

/*
	141. Linked List Cycle

Given a linked list, determine if it has a cycle in it.
To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.
3-->2-->0
     \/
	 -4

Example 2:
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the first node.
  1--->2
   \  /
    \/

Example 3:
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
  1

分析：判断链表中是否存在环，使用双指针法，即快慢指针，快指针一次走2步，慢指针一次走一步，如果链表中存在环，则二者必然会相遇。
步骤：1.如果链表中存在环，假设慢指针slow刚走到环的某一位置(设为start)时，快指针fast距离slow的距离是L,整个环的长度是R.
      2.经过了t的时间，fast相对于初始位置start走了S+2t的距离，slow相对于初始位置start走了t的距离，假设经过t的时间他们在环的某一位置相遇，
        并假设在环中走了n圈，则得到S+2t-t = nR,进一步得到S+t = nR.
      3.由于S<R,则一定存在这样的n和t，使上面的等式成立
      4.进一步推论，只要在链表中存在环，则在未来的某一个时刻，slow和fast一定会相遇，通过这一点即可判断。
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL)
    {
        return false;
    }

    struct ListNode *slow, *fast;
    slow = fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            return true;
        }
    }

    return false;
}
