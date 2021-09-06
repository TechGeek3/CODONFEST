//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& vec, int target)
{
    vector<int> result;
    unordered_map<int, int>mpp;
    for(int i=0;i<vec.size();++i)
    {
        if(mpp.find(target-vec[i])!=mpp.end())
        {
            result.push_back(mpp[target-vec[i]]);
            result.push_back(i);              
            return result;
        }
        mpp[vec[i]]=i;
    }
    return result;
}
int main()
{
    vector<int> vec={2,7,11,15};
    vector<int> res;
    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";
    cout<<endl;
    int target = 9;
    res=twoSum(vec,target);
    for(int i=0;i<res.size();++i)
        cout<<res[i]<<" ";
    return 0;
}