// in this we are transvering the code from one satck to another stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    stack<int>s1;
    s1.swap(s);
    cout<<s.size()<<endl;
    cout<<s1.size()<<endl;
    return 0;
}