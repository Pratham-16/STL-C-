// it is used to arrange them in random order 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<string,int>m;
  m.emplace("tv",100);
  m.emplace("laptop",120);
  m.emplace("watch",130);
  m.emplace("tv",100);
// it does not repeat the any elements
  for(auto p:m)
  {
      cout<<p.first<<" "<<p.second<<endl;
  }
  return 0;
}