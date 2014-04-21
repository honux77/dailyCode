/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if (head == null) return false;
        
        Map<ListNode, Boolean> table = new HashMap<ListNode, Boolean>();
        while (table.get(head) == null) {
            table.put(head, true);
            if (head.next == null) {
                return false;
            }
            head = head.next;
        }
        return true;
    }
}
