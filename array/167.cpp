/*
Problem: 167. Two Sum II - Input Array is Sorted
Difficulty: Medium
Tags: Array, Binary Search, Two Pointers
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            if (target == numbers[left] + numbers[right]){
                return {left+1, right+1};
            }
            else if (target > numbers[left] + numbers[right]) left++;
            else right--;
        }
        return {-1, -1};
    }
};

/*
Context: We have been provided a Sorted Array of Integers and a Target Sum.
  We need to find two numbers in the array that adds up to the target sum.
  And return their 1-based indices.

Approach: Two Pointer Technique
    left - starts at the beginning of the array.
    right - starts at the end of the array.
  - It checks if the integers at left and right indices add upto the target sum, if yes return 1-based indices.
  - If their sum is less than the target sum, the left is incremented.
  - Else the right is decremented.
  - And finally, if no pair is found return {-1, -1}

Efficiency:
  Time Complexity: O(n) - each element is visited at most once.
  Space complexity: O(1) - no extra space used.
*/
