#ifndef insert_delete_random
#define insert_delete_random

#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>  
#include <ctime>
#include <bits/stdc++.h> 

using namespace std;

/*
Due to the size of this problem the test cases will be left here
    RandomizedSet randomizedSet;
    cout << randomizedSet.insert(1) << endl; // Inserts 1 to the set. Returns true as 1 was inserted successfully.
    cout <<  randomizedSet.remove(2) << endl; // Returns false as 2 does not exist in the set.
    cout <<  randomizedSet.insert(2) << endl; // Inserts 2 to the set, returns true. Set now contains [1,2].
    cout <<  randomizedSet.getRandom() << endl; // getRandom() should return either 1 or 2 randomly.
    cout <<  randomizedSet.remove(1) << endl; // Removes 1 from the set, returns true. Set now contains [2].
    cout <<  randomizedSet.insert(2) << endl; // 2 was already in the set, so return false.
    cout <<  randomizedSet.getRandom() << endl; // Since 2 is the only number in the set, getRandom() will always return 2.

*/
class RandomizedSet {

private:
    unordered_map<int, int> umap;  
    vector<int> vec;

public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if(umap.count(val)) {
            return false;
        } else {
            umap[val] = vec.size();
            vec.push_back(val);
            return true;
        }
    }

    bool remove(int val) {
        if (umap.count(val)) {
            int index = umap[val], last = (vec.size() - 1), lastVal = vec[last];
            vec[index] = lastVal;
            vec.pop_back();
            umap[lastVal] = index;
            umap.erase(val);
            return true;
        } else {
            return false;
        }
    }

    int getRandom() {
        //srand(time(0));
        return (vec[rand() % vec.size()]);
    }
};


#endif // insert_delete_random