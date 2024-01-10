#include <unordered_map>
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2);
int uniqueMorseRepresentations(vector<string>& words);
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
int removeElement(vector<int>& nums, int val);

int main() {

    return 0;
}

/*Test
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2
    cout << removeElement(nums, val) << endl;;
*/
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


/*Test
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    for(const auto &i : nums1 ){
        cout << i << endl;
    }

*/
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    nums1.resize(m);
    for(int j = 0; j <= n-1; j++){
        nums1.push_back(nums2[j]);
    }
    sort(nums1.begin(),nums1.end());
}

/*Test
    vector<string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words) << endl;
*/
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

/*Test 
    vector<int> names = {4,3,2,3,1,7,7,7};
    vector<int> heights = {2,2,5,2,3,6};
    vector<int> sol = findIntersectionValues(names, heights);
    for (int i: sol){
        cout << i << ' ';
    }
    return 0;

*/
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