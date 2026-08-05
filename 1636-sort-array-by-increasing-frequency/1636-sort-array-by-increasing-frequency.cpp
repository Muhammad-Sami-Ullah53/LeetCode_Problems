class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        int n = nums.size();

        // Selection Sort
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {

                // Smaller frequency comes first
                if (freq[nums[j]] < freq[nums[minIndex]]) {
                    minIndex = j;
                }
                // If frequencies are equal, larger value comes first
                else if (freq[nums[j]] == freq[nums[minIndex]] &&
                         nums[j] > nums[minIndex]) {
                    minIndex = j;
                }
            }

            swap(nums[i], nums[minIndex]);
        }

        return nums;
    }
};