#include "dynamic_prog.h"
#include <string>
#include <vector>

using namespace std;
//The code for all the solutions 

string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    for(int i = 0;i < strs[0].size() ; i++){
        for(int j = 0; j < strs.size(); j++){
            
            string temp = strs[j];
            if(temp[i] != strs[0][i] || i == temp.length() ){
                return ans;
            }
            
        }
        ans += strs[0][i];
    }
    return ans;
}

int lengthOfLastWord(string s) {
    int count = 0, num = s.length();
    for (int i = num - 1 ; i >= 0; i--) {
        if (s[i] != ' ') {
            count++;
        } else if (count > 0) {
            return count;
        }
    }
    return count;
}

int removeElement(vector<int>& nums, int val) {
    int count = 0;
    
    for(int i = 0;i < nums.size();i++){
        if(nums[i] != val) {
            nums[count] = nums[i]; // Move the element to the 'i' position.
            count++; // Move the pointer forward.
        }
    }
    
    return count;
    /* ALT SOL
    for(int i = 0;i < nums.size();i++){
                if(val == nums[i]){
                    nums.erase(nums.begin() + i);
                }else{
                    count++;
                }

            }
            return count;
    */
}


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    nums1.resize(m);
    for(int j = 0; j <= n-1; j++){
        nums1.push_back(nums2[j]);
    }
    sort(nums1.begin(),nums1.end());
}

int uniqueMorseRepresentations(vector<string>& words) {
    
    unordered_map<string,int> tracker;
    unordered_map<char, string> alpha;
    alpha = {
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."},
        {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"},
        {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"},
        {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
        {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"},
        {'z', "--.."}
    };
    
    for(string Word: words){
        string new_word;
        for(int i = 0; i < Word.size();i++){
            new_word += alpha[Word[i]];
        }
        
        tracker[new_word]++;
    }
    return tracker.size();
}


vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> map;
    vector<int> sol;
    //int max_size = max(nums1.size(),nums2.size());

    for(int i = 0; i < nums1.size(); i++){
        if(map[nums1[i]] == 0){
            map[nums1[i]] = 1;
        }
    }
    for(int j = 0; j < nums2.size(); j++){
        if(map[nums2[j]] == 1){
            map[nums2[j]]--;
            sol.push_back(nums2[j]);
        }
    }

    for (const auto & pair: map) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    
    return sol;
}


int removeDuplicates(vector<int>& nums) {
    int count = 0;
    unordered_map<int,int> map;

    for(int i = 0;i < nums.size();i++){
        if(map[nums[i]] == 0) {
            nums[count] = nums[i]; // Move the element to the 'i' position.
            count++; // Move the pointer forward.
        }
        map[nums[i]]++;
    }
    
    return count;       
}

int removeDuplicates2(vector<int>& nums) {
    int n = nums.size();
    if (n <= 2) return n; // If the array has 2 or fewer elements, no need to remove any

    int writeIndex = 2; // The position where the next valid element should be placed
    
    for (int i = 2; i < n; ++i) {
        // Check if the current element is not a duplicate
        if (nums[i] != nums[writeIndex - 2]) {
            nums[writeIndex++] = nums[i];
        }
    }
    
    return writeIndex; // The length up to writeIndex is the size of the new array
    /*
    int removeDuplicates2(vector<int>& nums) {
    int count = 0;
        unordered_map<int,int> map;

        for(int i = 0;i < nums.size();i++){
            map[nums[i]]++;
            
            if(map[nums[i]] > 2) {
                nums.erase(nums.begin() + i);
                i--;       
            }else{count++;};
           
        }
        
        return count;             
    }
    */
}

int majorityElement(vector<int>& nums) {
    unordered_map<int,int> map;
    for(int i = 0; i < nums.size();i++){
        map[nums[i]]++;
        if(map[nums[i]] > (nums.size()/2) ){
            return nums[i];
        }
    }
    return 0;
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    // Create a new array of the same size as nums
    vector<int> rotated(nums.size());
    
    // Copy the last k elements to the beginning of rotated
    for (int i = 0; i < k; ++i) {
        rotated[i] = nums[n - k + i];
    }
    // Copy the first n - k elements to the end of rotated
    for (int i = 0; i < n - k; ++i) {
        rotated[k + i] = nums[i];
    }
    
    // Copy the rotated array back to nums
    nums = rotated;
}
/*
        vector<int> nums2;
        
        for(int i = k; i < nums.size();i++){
            nums2.push_back(nums[i]);
        }
        
        for(int j = 0; j < k;j++){
            nums2.push_back(nums[j]);
        }

        nums = nums2;
    }
*/


