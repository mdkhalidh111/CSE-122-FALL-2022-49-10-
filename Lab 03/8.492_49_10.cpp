
/**CODE NAME : Petya and Strings
CODE NO : 112A
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,z;
cin>>s>>z;
for(int i=0;i<s.length();i++)
{
s[i]=tolower(s[i]);
z[i]=tolower(z[i]);
if(s[i]<z[i])
{
cout<<"-1";
return 0;
}
else if(s[i]>z[i])
{
cout<<"1";
return 0;
}
}
cout<<"0";
}
