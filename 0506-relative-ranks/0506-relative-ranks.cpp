class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        vector<pair<int, int>> arr;

        // Store score and original index
        for (int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }

        // Sort from highest score to lowest
        for (int i = 0; i < n - 1; i++) {

            int maxIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j].first > arr[maxIndex].first) {
                    maxIndex = j;
                }
            }

            swap(arr[i], arr[maxIndex]);
        }

        vector<string> answer(n);

        // Give ranks
        for (int i = 0; i < n; i++) {

            int originalIndex = arr[i].second;

            if (i == 0)
                answer[originalIndex] = "Gold Medal";

            else if (i == 1)
                answer[originalIndex] = "Silver Medal";

            else if (i == 2)
                answer[originalIndex] = "Bronze Medal";

            else
                answer[originalIndex] = to_string(i + 1);
        }

        return answer;
    }
};