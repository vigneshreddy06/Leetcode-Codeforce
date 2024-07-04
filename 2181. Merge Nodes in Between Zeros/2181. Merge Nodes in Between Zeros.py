# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        count=0
        value=0
        result=ListNode(0)
        new=result
        while head:
            if head.val==0:
                count+=1
            else:
                value+=head.val
            if count==2:
                val=ListNode(value)
                new.next=val
                new=new.next
                value=0
                count-=1
            head=head.next
        return result.next
        