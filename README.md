C++ Program Overview
This C++ program provides a collection of utility functions that perform various operations on vectors and strings. Below is a brief overview of each function:

Functions:

1. longestCommonPrefix
Description: Finds the longest common prefix string amongst an array of strings.
Parameters:
  std::vector<std::string>& strs: A reference to a vector of strings.
Usage Example: longestCommonPrefix({"flower", "flow", "flight"});

2. lengthOfLastWord
Description: Calculates the length of the last word in a given string.
Parameters:
  std::string s: A string input.
Usage Example: lengthOfLastWord("luffy is still joyboy");

3. removeElement
Description: Removes all instances of a specified value from a vector.
Parameters:
  std::vector<int>& nums: A reference to a vector of integers and 
  int val: An integer value to be removed.
Usage Example: removeElement({0, 1, 2, 2, 3, 0, 4, 2}, 2);

4. merge
Description: Merges two sorted integer arrays into one sorted array.
Parameters: std::vector<int>& nums1: A reference to the first vector of integers.
  int m: An integer indicating the size of the first array.
  std::vector<int>& nums2: A reference to the second vector of integers.
  int n: An integer indicating the size of the second array.
Usage Example: merge({1, 2, 3, 0, 0, 0}, 3, {2, 5, 6}, 3);

5. uniqueMorseRepresentations
Description: Determines the number of unique transformations using a given Morse code representation for each word in a list.
Parameters:
  std::vector<std::string>& words: A reference to a vector of strings representing words.
Usage Example: uniqueMorseRepresentations({"gin", "zen", "gig", "msg"});

6. findIntersectionValues
Description: Finds the intersection values between two integer arrays.
Parameters:
  std::vector<int>& nums1: A reference to the first vector of integers.
  std::vector<int>& nums2: A reference to the second vector of integers.
Usage Example: findIntersectionValues({4, 3, 2, 3, 1, 7, 7, 7}, {2, 2, 5, 2, 3, 6});

How to Run:
Compile the Program: You can compile the program using any C++ compiler. If using g++, you can run:
g++ main.cpp dynamic_prog.cpp -o main
Execute the Program: Once compiled, you can execute the program:

On Windows: .\main.exe
On Linux/macOS: ./main
