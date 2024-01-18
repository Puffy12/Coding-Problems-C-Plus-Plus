#include <unordered_map>
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include "dynamic_prog.h"
#include "pointers_linked.h"
using namespace std;

int main() {

    string s = "A man, a plan, a canal: Panama";
    cout << isPalindromePointer(s) << endl;
    
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums,k);
    for (int i: nums){
        cout << i << ' ';
    }
    
    return 0;
}

/*
Test dynamic_prog -> int lengthOfLastWord(string s)
    "   fly me   to   the moon  " ,  "luffy is still joyboy"
    string s = "Hello World"
    cout << lengthOfLastWord(s) << endl;

Test dynamic_prog -> string longestCommonPrefix(vector<string>& strs) 
    "dog","racecar","car"
    vector<string> nums = {"flower","flow","flight"};
    cout << longestCommonPrefix(nums) << endl;

Test dynamic_prog -> removeElement(vector<int>& nums, int val)
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2
    cout << removeElement(nums, val) << endl;

Test dynamic_prog -> merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    for(const auto &i : nums1 ){
        cout << i << endl;
    }

Test dynamic_prog -> uniqueMorseRepresentations(vector<string>& words)
    vector<string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words) << endl;

Test dynamic_prog -> findIntersectionValues(vector<int>& nums1, vector<int>& nums2)
    vector<int> names = {4,3,2,3,1,7,7,7};
    vector<int> heights = {2,2,5,2,3,6};
    vector<int> sol = findIntersectionValues(names, heights);
    for (int i: sol){
        cout << i << ' ';
    }
    return 0;

Test dynamic_prog -> removeDuplicates(vector<int>& nums) /2
    1,1,2 
    0,0,1,1,1,1,2,3,3
    1,1,1,2,2,3
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;
    for (int i: nums){
        cout << i << ' ';
    }

Test dynamic_prog -> majorityElement(vector<int>& nums)
    3,2,3
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;


Test dynamic_prog -> rotate(vector<int>& nums, int k)
    -1,-100,3,99 , 2

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3
    rotate(nums,k);
    for (int i: nums){
        cout << i << ' ';
    }

Test dynamic_prog -> int maxProfit(vector<int>& prices) /2
    7,6,4,3,1  1,2,3,4,5
    vector<int> nums = {7,1,5,3,6,4};

    cout << maxProfit(nums) << endl;

Test dynamic_prog -> bool canJump(vector<int>& nums)
                  -> int jump(vector<int>& nums);

    2,3,0,1,4  3,2,1,0,4
    vector<int> nums = {2,3,1,1,4};
    cout << canJump(nums) << endl;
    cout << jump(nums) << endl;


Test dynamic_prog -> vector<int> twoSum(vector<int>& nums, int target)
    3,2,4  6 
    3,3  6
    int target = 9;
    vector<int> nums = {2,7,11,15};
    nums = twoSum(nums,target);
    for (int i: nums){
        cout << i << ' ';
    }
    
Test dynamic_prog -> int hIndex(vector<int>& citations)
    vector<int> nums = {3,0,6,1,5};
    1,3,1

    cout << hIndex(nums) << endl;

Test dynamic_prog -> vector<int> productExceptSelf(vector<int>& nums)
    -1,1,0,-3,3
    vector<int> nums = {1,2,3,4};

    nums = productExceptSelf(nums);
    for (int i: nums){
        cout << i << ' ';
    }

Test dynamic_prog -> int romanToInt(string s)
    "LVIII" "MCMXCIV"
    string s = "III";
    cout << romanToInt(s) << endl;

Test dynamic_prog -> int strStr(string haystack, string needle)
    haystack = "leetcode", needle = "leeto"
    string haystack = "sadbutsad", needle = "sad";
    cout << strStr(haystack,needle) << endl;


Test dynamic_prog -> bool isPalindrome(string s);
    "race a car" , " " 
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;


*/



