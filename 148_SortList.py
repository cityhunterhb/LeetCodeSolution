#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 148_SortList.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-13 08:35:14
#      LastModified: 2019-06-13 08:54:51
#****************************************************


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def findmid(self, head):
        if head is None:
            return head
        slow = head
        fast = head
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next
        return slow

    def merge(self, lhead, rhead):
        dummyNode = ListNode(0)
        dummy = dummyNode
        while lhead and rhead:
            if lhead.val < lhead.val:
                dummy.next = lhead
                lhead = lhead.next
            else:
                dummy.next = rhead
                rhead = rhead.next
            dummy = dummy.next
        if lhead:
            dummy.next = lhead
        elif rhead:
            dummy.next = rhead
        return dummyNode.next

    def sortList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        mid = self.findmid(head)
        rhead = mid.next
        mid.next = None
        return self.merge(self.sortList(head), self.sortList(rhead))
