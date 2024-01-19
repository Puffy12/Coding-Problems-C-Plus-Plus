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