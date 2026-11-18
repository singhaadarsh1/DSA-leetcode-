class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

    int total = accumulate(
        cardPoints.begin(), cardPoints.end(), 0
    );

    if (k == n) return total;

    int window = n - k;

    int sum = 0;

    for (int i = 0; i < window; i++) {
        sum += cardPoints[i];
    }

    int minSum = sum;

    for (int i = window; i < n; i++) {
        sum += cardPoints[i] - cardPoints[i - window];
        minSum = min(minSum, sum);
    }

    return total - minSum;
        
    }
};