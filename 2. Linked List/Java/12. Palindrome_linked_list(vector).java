class Solution {
    public boolean isPalindrome(ListNode head) {
        return isNodesEqual(head, reverseHalfNode(findMiddleNode(head)));
    }
    
    private ListNode findMiddleNode(ListNode head) {
        ListNode slow = head, fast = head;
        while(fast != null) {
            slow = slow.next;
            fast = fast.next;
            if (fast != null) {
                fast = fast.next;
            }
        }
        return slow;
    }
    
    private ListNode reverseHalfNode(ListNode head) {
        ListNode rev = null, cur = head, prev = head;
        while(cur != null) {
            cur = cur.next;
            prev.next = rev;
            rev = prev;
            prev = cur;
        }
        return rev;
    }
    
    private boolean isNodesEqual(ListNode head, ListNode reversed) {
        while(reversed != null) {
            if (head.val != reversed.val) {
                return false;
            }
            head = head.next;
            reversed = reversed.next;
        }
        return true;
    }
}
