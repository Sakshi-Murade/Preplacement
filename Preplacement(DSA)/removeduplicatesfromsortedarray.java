public class removeduplicatesfromsortedarray {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        // Pointer for the position of the next unique element
        int k = 1;

        // Iterate over the array starting from the second element
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                // If the current element is different from the previous one
                nums[k] = nums[i];
                k++;
            }
        }

        // k is the number of unique elements
        return k;
    }
}
