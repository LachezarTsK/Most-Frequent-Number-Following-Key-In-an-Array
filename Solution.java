
public class Solution {

    public int mostFrequent(int[] nums, int key) {
        final int size = nums.length;
        int[] frequency = new int[1001];
        int elementWithMaxFrequency = 0;

        for (int i = 0; i < size - 1; i++) {
            if (nums[i] == key && (++frequency[nums[i + 1]]) > frequency[elementWithMaxFrequency]) {
                elementWithMaxFrequency = nums[i + 1];
            }
        }
        return elementWithMaxFrequency;
    }
}
