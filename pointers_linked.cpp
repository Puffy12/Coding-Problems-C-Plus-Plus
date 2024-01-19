#include "pointers_linked.h"
#include <string>
#include <vector>

using namespace std;


bool isPalindromePointer(string s) {
    int R = s.size() - 1, L = 0;
    while (L < R) {
        while (L < R && !(isalpha(s[L]) || isdigit(s[L]))) {
            L++;
        }
        while (L < R && !(isalpha(s[R]) || isdigit(s[R]))) {
            R--;
        }
        if (tolower(s[L]) != tolower(s[R])) {
            return false;
        }
        L++;
        R--;
    }

    return true;
}

bool isSubsequence(string s, string t) {
    int i,j = 0;
    if(s.length() == 0){return true;}; 
    for(i = 0; i < t.length(); i++){
        if(t[i] == s[j]){ 
            j++;
        }
        if(j == s.length()){
            return true;
        }
    }
    return false;

}

//same thing as twosum but the numbers are ordered and I use a two pointer solution
vector<int> twoSum2(vector<int>& numbers, int target) {
    int n = numbers.size();
    int first = 0, last = n - 1;

    while(first < last){
        int temp = numbers[first] + numbers[last];
        if( temp == target){
            return {++first, ++last};
        }else if(temp > target){
            last--;
        }else{
            first++;
        }

    }
    return {};
}