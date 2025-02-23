// it is use to sort the elements using vector
// it arrange teh basic on the first elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>vec={{2,3},{4,5},{3,5},{5,3}};
    sort(vec.begin(),vec.end());
    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    
    }
    return 0;
}