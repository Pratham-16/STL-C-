#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int>m;
   m["Tv"]=50;
   m["Apple"]=60;
   m["tablet"]=100;
   m["headphone"]=250;
   m.erase("Tv");
   if(m.find("Apple")!=m.end())
   {
       cout<<"found";
   }
   else{
       cout<<"not found";
   }
   cout<<endl;
   for(auto p:m)
   {
       cout<<p.first<<" "<<p.second<<endl;
   }
   cout<<"count ="<<m.count("Apple")<<endl;
   cout<<"quantity ="<<m["laptop"]<<endl;
   return 0;
}