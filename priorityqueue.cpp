//it is use print the highest number inthe top and arrange this accordingly
#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int>pq;
   pq.push(5);
   pq.push(3);
   pq.push(10);
   pq.push(7);
   while(!pq.empty())
   {
       cout<<pq.top()<<" ";
       pq.pop();
   }
   cout<<endl;
   return 0;
}