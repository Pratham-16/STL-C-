// it show at which location which element is present 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  deque<int>D={1,5,4,3};
for(int val :D)
{
    cout<<"the elements are = "<<val<<endl;
}
   cout<<"the element present inthe location is "<<D[2]<<endl;
return 0;
}