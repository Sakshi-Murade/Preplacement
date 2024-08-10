class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Solution {
    public int getDecimalValue(ListNode head) {
        int result = 0;
        
        while (head != null) {
            result = (result << 1) | head.val;
            head = head.next;
        }
        
        return result;
    }
    
    public static void main(String[] args) {
       
        ListNode head = new ListNode(1);
        head.next = new ListNode(0);
        head.next.next = new ListNode(1);

        Solution solution = new Solution();
        int decimalValue = solution.getDecimalValue(head);
        System.out.println("Decimal Value: " + decimalValue); 
        
       
        ListNode head2 = new ListNode(0);
        int decimalValue2 = solution.getDecimalValue(head2);
        System.out.println("Decimal Value: " + decimalValue2); 
    }
}
