class Solution {
public:
    int binary(vector<int>& arr, int s, int e, int target) {
        int mid = s + (e - s) / 2;

        while (s <= e) {
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                e = mid - 1;

            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        // BRUTE FORCE ->giving tle
        /* vector<int> ans;
         int n = nums.size();

         for (int i = 0; i < queries.size(); i++) {
             int j = queries[i];
             int l = (j + 1) % n;
             int mini = INT_MAX;
             do {
                 if (nums[j] == nums[l]) {
                     mini = min(mini, min(abs(j - l), n - abs(j - l)));
                 }
                 l = (l + 1) % n;
             } while (l != j);
             int j1 = queries[i];
             int l1 = (j1 - 1 + n) % n;
             do {
                 if (nums[j1] == nums[l1]) {
                     mini = min(mini, min(abs(j1 - l1), n - abs(j1 - l1)));
                 }
                 l1 = (l1 - 1 + n) % n;
             } while (l1 != j1);
             if (nums.size() == 1) {
                 ans.push_back(-1);
             }

             else if (mini == INT_MAX) {
                 ans.push_back(-1);
             } else {
                 ans.push_back(mini);
             }
         }
         return ans;*/
        // OPTIMIZED WAY
        vector<int> result;
        int N=nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        for (int i = 0; i < queries.size(); i++) {
            int element = nums[queries[i]];
            vector<int>& vec = mp[element];
            int n = vec.size();
            if (n == 1) {
                result.push_back(-1);
                continue;
            }
            int pos = binary(vec, 0, n - 1, queries[i]);

            int mini = INT_MAX;
            // right neighbout of pos
            int right = vec[(pos + 1) % n];
            int d = abs(queries[i] - right);
            int circd = N - d;
            mini = min({mini, circd, d});

            // left neighbour of pos
            int left = vec[(pos - 1 + n) % n];
            d = abs(queries[i] - left);
            circd = N - d;
            mini = min({mini, circd, d});

            result.push_back(mini);
        }
        return result;
    }
};