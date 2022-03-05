
/**
 * @param {number[]} nums
 * @param {number} key
 * @return {number}
 */
var mostFrequent = function (nums, key) {
    const size = nums.length;
    const frequency = new Array(1001).fill(0);
    let elementWithMaxFrequency = 0;

    for (let i = 0; i < size - 1; i++) {
        if (nums[i] === key && (++frequency[nums[i + 1]]) > frequency[elementWithMaxFrequency]) {
            elementWithMaxFrequency = nums[i + 1];
        }
    }
    return elementWithMaxFrequency;
};
