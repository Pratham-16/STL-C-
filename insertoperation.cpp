#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    
    for(auto val:s)
    {
        cout<<val<<" ";
    }
// basically lower bound function is use to print the number which is specified inside the bracket
// if that element is not present then it going to print the last element 
// if incase it is  last element then it will print 0 
    cout<<"s.lower_bound"<<*(s.lower_bound(4));
    cout<<endl;
    return 0;
}