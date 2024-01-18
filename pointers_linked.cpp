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