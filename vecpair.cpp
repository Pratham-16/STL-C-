//vector and pair
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,char>>vec={{1,'A'},{2,'B'}};
    for(auto p: vec)
    {
        cout<<p.first <<" "<<p.second<<endl;
    }
    return 0;
}
