#include <iostream>
#include <vector>
#include "vectorPractice.h"

using namespace std;

vector<int> vectorPractice::practicePush(vector<int>& v, int inputLen) {
    for (int i=0; i<=inputLen; i++) {
        v.push_back(i);
    }
    return v; 
}

void vectorPractice::practicePrint(const vector<int>& v) {
    for (unsigned int i=0; i<v.size()-1; i++) {
        printf("vector component: %i\n", v[i]);
    }
}

int vectorPractice::vectorAt(const vector<int>& v, int loc) {
    return v.at(loc);
}

int vectorPractice::vectorSize(const vector<int>& v) {
    return v.size();
}

// int vectorPractice::vectorBegin(const vector<int>& v) {
//     //reads the vector from the beginning
//     int v_begin = v.begin() + 1;
//     return v_begin;
// }

vector<int> vectorPractice::vectorInsert(vector<int>& v, unsigned int loc, int val) {
    if (loc < v.size()) {
        v.insert(v.begin() + loc, val);
    }
    return v;
}

vector<int> vectorPractice::vectorErase(vector<int>& v) {
    v.erase(v.begin()+3, v.begin()+5);
    return v;
}


