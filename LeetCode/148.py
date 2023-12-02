# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeList(self, list1, list2):
        if not list1:
            return list2
        if not list2:
            return list1

        if list1.val < list2.val:
            list1.next = self.mergeList(list1.next, list2)
            return list1
        else:
            list2.next = self.mergeList(list1, list2.next)
            return list2

    def sortList(self, head):
        if not head or not head.next:
            return head

        # Find the middle of the linked list
        slow = head
        fast = head
        prev = None

        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next

        # Split the linked list into two halves
        prev.next = None

        list1 = self.sortList(head)
        list2 = self.sortList(slow)

        # Merge the sorted lists
        return self.mergeList(list1, list2)