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


int maxProfit(vector<int>& prices) {
    int profit = 0;
    for(int i=1;i<prices.size();i++) {
        if(prices[i] > prices[i-1]) {
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}

int maxProfit2(vector<int>& prices) {
    int min = 9999999,max = 0;
    for(int i = 0; i < prices.size();i++){
        if(prices[i] < min){
            min = prices[i];
        }else if( (prices[i] - min) > max ){
            max = (prices[i] - min);
        }
    }

    return max;
}


bool canJump(vector<int>& nums) {
    int reach = 0; 
    for(int i = 0; i < nums.size(); i++) {

        if(reach < i){return false;};

        reach = max(reach, (i + nums[i]) );
    
    }
    
    return true;
    
}
//at every index I'll check if my reach was atleast able to 
//reach that particular index.

//reach >= idx -> great, carry on. Otherwise, 

//now as you can reach this index, it's time to update your reach
//as at every index, you're getting a new jump length.

int jump(vector<int>& nums) {
    int res = 0; 
    int l = 0, r = 0;
    while(r < (nums.size() - 1)){
        int furthest = 0;
        for(int i = l; i < (r + 1); i++){
            furthest = max(furthest, (i + nums[i]) );
        }
        l = (r + 1);
        r = furthest;
        res++;
    }
    
    return res;
}



vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for(int i = 0; i < nums.size();i++){
        int comp = target - nums[i];
        if(map.count(comp)){
            return {map[comp],i};
        }
        map[nums[i]] = i;
    }
    return {}; 
}

int hIndex(vector<int>& citations) {
    sort(citations.begin(),citations.end());
    int n = citations.size(),i;
    for(i = 1; i <= n; i++){
        if(i > citations[n-i]){
            break;
        }
    }
    return i-1;
}

vector<int> productExceptSelf(vector<int>& nums) {
    
    int prod = 1,post = 1, n = nums.size(),reverse;
    vector<int> ans(n,1);
    //itterates through the array from both sides so you dont need two for loops 
    for(int i = 0; i < n; i++){
        ans[i] *= prod;
        prod *= nums[i];
        reverse = n - i - 1;
        ans[reverse] *= post;
        post *=  nums[reverse];
        
    }
        
    return ans;
}
/* for(int i = 0; i < n; i++){ start to end 
    ans[i] *= prod;
    prod *= nums[i]; 
}
for(int j = n - 1; j >= 0; j--){ end to start
    ans[j] *= post;
    post *=  nums[j];
}        */ 


int romanToInt(string s) {
    int ans = 0, prev = 0, current;
    unordered_map<char, int> map = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    for (char& c : s) {
        current = map[c];
        
        if (current > prev) {
            ans += current - (2 * prev);  // Subtract twice the previous value.
        } else {
            ans += current;  // Otherwise, add the current value to the answer.
        }
        prev = current;  // Update the previous value for the next iteration.
    }
    return ans;
}


int strStr(string haystack, string needle) {
    return haystack.find(needle);
}
/*  int strStr(string haystack, string needle) { og answer
        int n = haystack.length(), m = needle.length(), j;
        char first = needle[0], last = needle[m - 1];
        for(int i = 0; i < (n - m); i++ ){
            if( (haystack[i] == first) && (haystack[m + i - 1] == last)){
                bool t = true;
                int temp = 0;
                for(j = i + 1; j < m; j++){
                    temp++;
                    if(haystack[j] != needle[temp]){
                        t = false;
                    }
                }
                if(t == true){
                    return i;
                }
            }
        }
        return -1;
    }*/


bool isPalindrome(string s) {
    string word;
    for (int i = 0; i < s.size(); i++) {
        if ( isalpha(s[i]) || isdigit(s[i]) ) {
            word += putchar(tolower(s[i]));
        }

    }
    string temp = word;
    reverse(word.begin(), word.end());
    cout << s << " " << temp << endl;
    return (temp == word);
}