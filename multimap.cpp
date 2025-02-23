// multimapping 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  multimap<string,int>m;
  m.emplace("tv",100);
  m.emplace("tv",120);
  m.emplace("tv",120);
  //if we use the erase statement all will be delete 
  // to avoid that and delete only one statement we use
  m.erase(m.find("tv"));
  for(auto p:m)
  {
      cout<<p.first<<" "<<p.second<<endl;
  }
  return 0;
}