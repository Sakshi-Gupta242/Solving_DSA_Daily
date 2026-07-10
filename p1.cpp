#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findElementAtIndex(int i ,vector<int> &arr){
        return arr[i];
    }
};

int main(){
    Solution obj;
    vector<int> arr = {10,20,30,40,50};
    cout<<obj.findElementAtIndex(2,arr);
    return 0;
}