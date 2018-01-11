#include <iostream>
#include <vector>
#include "maxSubArrayCommon.h"
#include "vectorPractice.h"

using namespace std;

int main() {
    maxSubArrayCommon msac;
    // int arr[] = {1, 2, 3, 5, 4};
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(4);
    int maxOut = msac.maxList(arr);
    cout    << "max pretty "
            << maxOut
            << endl;



    vectorPractice vp;
    vector<int> practice;
    vp.practicePush(practice, 10);
    vp.practicePrint(practice);
    unsigned int at = 4;
    int vp_at = vp.vectorAt(practice, at);
    // int vp_begin = vp.vectorBegin(practice);
    int vp_size = vp.vectorSize(practice);
    cout << vp_at << vp_size << endl;
    cout << "vp at" << "vp_size" << endl;
    unsigned int loc = 2;
    vp.vectorInsert(practice, loc, 23);
    cout << "inserted" << endl;
    vp.practicePrint(practice);
    vp.vectorErase(practice);
    cout << "erased" << endl;
    vp.practicePrint(practice);
    return 0;
}
