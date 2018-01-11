#include <iostream>
#include <vector>
#include "maxSubArrayCommon.h"

using namespace std;

int maxSubArrayCommon::max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int maxSubArrayCommon::maxList(vector<int>& arr) {
    int maxVal = arr[0];
    for (unsigned int i=1; i < arr.size()-1; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
