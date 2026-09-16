# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head):
        prev = None
        cur = head
        while cur:
            nxt = cur.next
            cur.next = prev
            prev = cur
            cur = nxt
        return prev

    def addTwoNumbers(self, l1, l2):
        l1 = self.reverseList(l1)
        l2 = self.reverseList(l2)
        
        dummy = ListNode(0)
        cur = dummy
        carry = 0
        
        while l1 or l2 or carry:
            total = carry
            if l1:
                total += l1.val
                l1 = l1.next
            if l2:
                total += l2.val
                l2 = l2.next
            
            carry = total // 10
            cur.next = ListNode(total % 10)
            cur = cur.next
        
        return self.reverseList(dummy.next)
