C++ Program Overview
This C++ program provides a collection of utility functions that perform various operations on vectors and strings. Below is a brief overview of each function:

How to Run:
Compile the Program: You can compile the program using any C++ compiler. If using g++, you can run:
g++ main.cpp dynamic_prog.cpp -o main
Execute the Program: Once compiled, you can execute the program:

On Windows: .\main.exe
On Linux/macOS: ./main

Functions:

1. longestCommonPrefix
 * Description: Finds the longest common prefix string amongst an array of strings.
 * Parameters: vector<string>& strs - A reference to a vector of strings.
 * Usage Example: longestCommonPrefix({"flower", "flow", "flight"});

2. lengthOfLastWord
 * Description: Calculates the length of the last word in a given string.
 * Parameters: string s - A string input.
 * Usage Example: lengthOfLastWord("luffy is still joyboy");

3. removeElement
 * Description: Removes all instances of a specified value from a vector.
 * Parameters: vector<int>& nums - A reference to a vector of integers. int val - An integer value to be removed.
 * Usage Example: removeElement({0, 1, 2, 2, 3, 0, 4, 2}, 2);

4. merge
 * Description: Merges two sorted integer arrays into one sorted array.
 * Parameters:
 *   vector<int>& nums1 - A reference to the first vector of integers.
 *   int m - An integer indicating the size of the first array.
 *   vector<int>& nums2 - A reference to the second vector of integers.
 *   int n - An integer indicating the size of the second array.
 * Usage Example: merge({1, 2, 3, 0, 0, 0}, 3, {2, 5, 6}, 3);

5. uniqueMorseRepresentations
 * Description: Determines the number of unique transformations using a given Morse code representation for each word in a list.
 * Parameters: vector<string>& words - A reference to a vector of strings representing words.
 * Usage Example: uniqueMorseRepresentations({"gin", "zen", "gig", "msg"});

6. findIntersectionValues
 * Description: Finds the intersection values between two integer arrays.
 * Parameters:
 *   vector<int>& nums1 - A reference to the first vector of integers.
 *   vector<int>& nums2 - A reference to the second vector of integers.
 * Usage Example: findIntersectionValues({4, 3, 2, 3, 1, 7, 7, 7}, {2, 2, 5, 2, 3, 6});

7. maxProfit / maxProfit2 (one trade vs multiple)
 * Description: Calculates the maximum profit that can be obtained by buying and selling stocks.
 * Parameters: std::vector<int>& prices - A reference to a vector representing the stock prices on consecutive days.
 * Usage Example: maxProfit({7, 1, 5, 3, 6, 4});

8. canJump
 * Description: Checks if it is possible to reach the last index in an array using the values as jump lengths.
 * Parameters: std::vector<int>& nums - A reference to a vector representing the jump lengths at each index.
 * Usage Example: canJump({2, 3, 1, 1, 4});

9. jump
 * Description: Calculates the minimum number of jumps required to reach the last index in an array.
 * Parameters: std::vector<int>& nums - A reference to a vector representing the maximum jump lengths at each index.
 * Usage Example: jump({2, 3, 1, 1, 4});

10.twoSum
 * Description: Finds the indices of two numbers in a vector that add up to a target value.
 * Parameters: std::vector<int>& nums - A reference to a vector of integers. int target - The target sum.
 * Usage Example: twoSum({2, 7, 11, 15}, 9);

11. H-Index
 * Description: Calculates the H-index of a researcher based on their citation values.
 * Parameters: std::vector<int>& citations - A reference to a vector representing the citation values in ascending order.
 * Usage Example: hIndex({0, 1, 3, 5, 6});

12. ProductExceptSelf
 * Description: Calculates the product of all elements in a vector except the one at the current index.
 * Parameters: std::vector<int>& nums - A reference to a vector of integers.
 * Usage Example: productExceptSelf({1, 2, 3, 4});

13. RomanToInt
 * Description: Converts a Roman numeral string to an integer.
 * Parameters: std::string s - A string representing a Roman numeral.
 * Usage Example: romanToInt("LVIII");

14. strStr
 * Description: Finds the index of the first occurrence of a substring within a string.
 * Parameters: string haystack - The main string to search within, string needle - The substring to search for.
 * Usage Example: strStr("hello", "ll");

15. isPalindrome
 * Description: Checks if a given string is a palindrome after removing non-alphanumeric characters and ignoring case.
 * Parameters: std::string s - The input string to check for palindrome.
 * Usage Example: isPalindrome("A man, a plan, a canal, Panama!");
