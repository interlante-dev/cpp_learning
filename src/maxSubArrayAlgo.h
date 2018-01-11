#include <vector>

using namespace std;

class maxSubArrayAlgo {
    public:
        int maxSubArray(vector<int>& arr, int low, int high);
        int maxSubArrayCrossing(vector<int>& arr, int low, int middle, int high);
}