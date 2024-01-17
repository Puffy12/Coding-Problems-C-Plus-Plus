#ifndef DYNAMIC_PROG_H
#define DYNAMIC_PROG_H

#include <unordered_map>
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

string longestCommonPrefix(vector<string>& strs);
int lengthOfLastWord(string s);
int removeElement(vector<int>& nums, int val);
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
int uniqueMorseRepresentations(vector<string>& words);
vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2);
int removeDuplicates(vector<int>& nums);
int removeDuplicates2(vector<int>& nums);
int majorityElement(vector<int>& nums);
void rotate(vector<int>& nums, int k);

int maxProfit(vector<int>& prices);
int maxProfit2(vector<int>& prices);

bool canJump(vector<int>& nums);
int jump(vector<int>& nums);

vector<int> twoSum(vector<int>& nums, int target);
int hIndex(vector<int>& citations);

vector<int> productExceptSelf(vector<int>& nums);
int romanToInt(string s);
int strStr(string haystack, string needle);

bool isPalindrome(string s);

#endif // DYNAMIC_PROG_H