class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
        hashSet = set()

        for num in nums:
            hashSet.add(num)

        ptr = head
        while ptr.next:
            if ptr.next.val in hashSet:
                ptr.next = ptr.next.next
            else: ptr = ptr.next

        if head.val in hashSet:
            head = head.next

        return head