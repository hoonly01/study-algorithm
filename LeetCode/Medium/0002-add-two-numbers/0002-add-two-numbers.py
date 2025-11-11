# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ans = ListNode()
        curr = ans
        flag = 0
        s = 0
        
        while(l1 and l2):
            temp = ListNode()
            s = l1.val + l2.val + flag
            if(s >= 10):
                flag = 1
                temp.val = s % 10
                curr.next = temp
                curr = curr.next
            else:
                flag = 0
                temp.val = s
                curr.next = temp
                curr = curr.next
            l1 = l1.next
            l2 = l2.next
        
        while(l1):
            temp = ListNode()
            s = l1.val + flag
            if(s >= 10):
                flag = 1
                temp.val = s % 10
                curr.next = temp
                curr = curr.next
            else:
                flag = 0
                temp.val = s
                curr.next = temp
                curr = curr.next
            l1 = l1.next
        
        while(l2):
            temp = ListNode()
            s = l2.val + flag
            if(s >= 10):
                flag = 1
                temp.val = s % 10
                curr.next = temp
                curr = curr.next
            else:
                flag = 0
                temp.val = s
                curr.next = temp
                curr = curr.next
            l2 = l2.next
        
        if flag:
            curr.next = ListNode(flag)
        
        return ans.next