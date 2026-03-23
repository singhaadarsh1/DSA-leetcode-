class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int countodd = 0;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) {
                countodd++;
            }
        }
        if (countodd == 0) {
            return true;
        }
        if (countodd >= 1) {
            return true;
        }
        return false;
    }
};


Intuition
The main goal is to find whether we can convert the nums1 to num2 where the nums2 will be completely odd or even. Hence we can select a single option - odd or even.

When converting, for example if we chose to go in odd, we can keep the odd numbers as in nums1 and the even numbers alone should be changed through subtraction by another element.

Approach
Since we are focusing on converting elements to odd or even through subtraction, the rules will be as follows:

Even - Odd = Odd
Odd - Even = Odd
Even - Even = Even
Odd - Odd = Even
Remember:
If the current index is i, the subtraction is nums[i] - nums[j] and j can be any index other than i (i != j).

Let's narrow down our possibilities:

If all elements or either odd or even, we can return true.
If one element is odd, all possible operations to convert the odd number will fail because odd - even = odd.
Hence we end up converting all even numbers to odd using that single odd number.
Therefore the result is true.
If one element is even, we can easily convert the even number using any odd numbers from the given list.
Therefore the result is true.
If there are multiple Odd and Even numbers:
We can convert all odd numbers to even by subtracting odd numbers with other odd numbers.
Or we can convert all even numbers to odd by subtracting even numbers with other odd numbers.
Therefore the result is true.


  Conclusion
No matter the given array the required construction of nums2 from nums1 is completely possible. Hence we can say that the answer is true for all testcases.

Complexity
Time complexity:
O(1)

Space complexity:
O(1)
