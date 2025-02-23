// it is use to arrange the element form smallest to largest
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
   pq.push(5);
   pq.push(3);
   pq.push(10);
   pq.push(7);
   while(!pq.empty())
   {
       cout<<pq.top()<<" ";
       pq.pop();
   } 
}