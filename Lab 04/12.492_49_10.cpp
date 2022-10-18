
/**CODE NAME : Stones on the Table
CODE NO : 266A
**/
#include <iostream>
using namespace std;

int main() {
int n,temp=0,c=0;
string s;
cin>>n>>s;
for(int i=1;i<n;i++){
	if(s[temp]==s[i])
	c++;
	temp=i;
}
cout<<c;
	return 0;
}
EA
