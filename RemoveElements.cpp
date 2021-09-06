//Remove all the occurences of a given element from a vector.

#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
vector<int> removeElement(vector<int> vec,int ele)
{
    for(int i=0;i<vec.size();++i)
    {
        if(vec[i]==ele)
            vec.erase(vec.begin()+i);
    }
    return vec;
} 
int main()
{
    vector<int> vec={0,3,2,0,2,0,4};
    int ele=0;
    vec=removeElement(vec,ele);
    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";
    return 0;
}