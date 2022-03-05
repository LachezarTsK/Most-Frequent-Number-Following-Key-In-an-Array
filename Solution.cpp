
#include <vector>
using namespace std;

class Solution {
    
public:

    int mostFrequent(vector<int>& nums, int key) {
        const size_t size = nums.size();
        vector<int> frequency(1001, 0);
        int elementWithMaxFrequency = 0;

        for (int i = 0; i < size - 1; i++) {
            if (nums[i] == key && (++frequency[nums[i + 1]]) > frequency[elementWithMaxFrequency]) {
                elementWithMaxFrequency = nums[i + 1];
            }
        }
        return elementWithMaxFrequency;
    }
};
