// it is use to print the previous outcome
#include <bits/stdc++.h>
using namespace std;
int main() {
string s = "abc";
cout << "Original string: " << s << endl;
do 
{
        cout << s << endl;
}
while (prev_permutation(s.begin(), s.end()));
return 0;
}

