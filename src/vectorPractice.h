#include <vector>

using namespace std;

class vectorPractice {
    public:
        vector<int> practicePush(vector<int>& v, int vectorLen);
        void practicePrint(const vector<int>& v);
        int vectorAt(const vector<int>& v, int loc);
        int vectorSize(const vector<int>& v);
        // int vectorBegin(const vector<int>& v);
        vector<int> vectorInsert(vector<int>& v, unsigned int loc, int val);
        vector<int> vectorErase(vector<int>& v);
};