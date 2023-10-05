#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>nums,int k){
    vector<int>temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
}
int main(){
     vector<int>v(5);
     for(int i=0;i<5;i++){
        cin>>v[i];
     }
     cout<<rotate(v,3);
}
//find maximum consecutive ones in an array
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)++c;
            else c=0;
            maxi=max(maxi,c);
        }
        return maxi;
    }
};