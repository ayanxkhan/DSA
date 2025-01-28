#include<bits/stdc++.h>
using namespace std;

int searchElem(vector<int> &nums,int target){
    for(int i=0;i<nums.size();i++){
        if(nums[i] >= target){
            return i;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target1 = 5,target2 = 2;

    cout << searchElem(nums,target1) << endl;
    cout << searchElem(nums,target2);
    return 0;
}