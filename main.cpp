#include <unordered_map>
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include "dynamic_prog.h"
using namespace std;



int main() {
    
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums,k);
    for (int i: nums){
        cout << i << ' ';
    }
    
    return 0;
}

/*
Test dynamic_prog -> longestCommonPrefix(vector<string>& strs)
    //"dog","racecar","car"
    vector<int> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << endl;; 

Test dynamic_prog -> lengthOfLastWord(string s)
    "   fly me   to   the moon  " "Hello World"
    cout << lengthOfLastWord("luffy is still joyboy") << endl;

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


*/
