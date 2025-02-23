// arrange the elements in teh sorted order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,3,6,2,9};
    sort(arr,arr+5,greater<int>());
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}