// this code is basically on queue operation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
}