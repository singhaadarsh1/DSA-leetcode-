
class Solution {
public:
    int findMin(vector<int>& nums) {
    
        
       int n=nums.size();
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] <= nums[n-1]) {
                e = mid;
            } else if (nums[mid] >= nums[n-1]) {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return nums[s];
    }
};
approach -> The description says "You must write an algorithm that runs in O(logn) time.", so we will solve this question with Binary Search.

Input: nums = [3,4,5,1,2]
Let me put left, right and middle pointer.

[3,4,5,1,2]
 L   M   R
Typical Binary Search is like this.

If a middle number is greater than a target number, we move right to middle - 1. On the other hand if the middle number is less than the target number, we will move left to middle + 1.

Binary search assumes that the input is sorted.

The target number for this question is a minimum number in the input, but problem here is that input array is rorated a few times.

How can we decide to move left or right pointer?
It's tough to think about whole array but part of array is still sorted in ascending order, even if the input is rotated.

For example,

[0,1,2,3,4,5]
↓
[4,5,0,1,2,3]
Rotated twice. Between 4 and 5, they are sorted and between 0 and 3, they are also sorted. We will use those parts of array.

Let's go back to main story.

My strategy is to compare middle number with right number. In this case, 5 and 2.

[3,4,5,1,2]
 L   M   R
5 is greater than 2. That means we don't know how many numbers we have on the right side of the middle number, but we can say the numbers return to the minimum value and then begin to increase again on the right side of the middle number.

To prove that, let's think about this example quickly.

[1,2,3,4,5]
 L   M   R
In this case, 3 is less than 5. That means minimum number is definitely on the left side of the middle number. That's because input array is sorted and the last number(= right number) is greater than middle number. We are sure that the numbers increase from middle to right.

Let's go back to main story again.

[3,4,5,1,2]
 L   M   R
Middle number is greater than right number, so we can say at some point, the numbers return to minimum value. That's why we should move the left pointer to middle pointer + 1.

[3,4,5,1,2]
     M L R
Next, middle pointer should be...

[3,4,5,1,2]
       L R
       M
Compare 1 with 2. The middle number is less than the right number, so we are sure that the minimum number is on the left of the middle number.

There is one point when we move right pointer.

⭐️ Points

When we move right pointer to left side, we will update right pointer with middle pointer. On the other hand when we move left pointer, we will update left pointer with middle pointer + 1.
Complexity
Time complexity: O(logn)
Space complexity: O(1)
