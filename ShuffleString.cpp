//Given a string s and an integer array indices of the same length.
//The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
//Return the shuffled string.

#include<iostream>
#include<vector>
using namespace std;

string shuffleArray(string str,vector <int> indices)
{
    string res=str;
    for(int i=0;i<indices.size();++i)
    {
        res[indices[i]]=str[i];
    }
    return res;
}
int main()
{
    string str="codeleet";
    vector <int> indices={4,5,6,7,0,2,1,3};
    cout<<shuffleArray(str,indices);
    return 0;
}