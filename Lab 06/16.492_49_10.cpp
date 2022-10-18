
/**CODE NAME : Word
CODE NO : 59A
**/
#include<iostream>
using namespace std;
int main(){
	string str,s;
	cin>>s;
	str = s;
	int n = 0;
	for(int i=0;i<s.size();i++){
		str[i] = toupper(str[i]);
		if(str[i] != s[i]){
			n ++;
		}
	}
	if(2 * n>=s.size()){
		for(int i=0;i<s.size();i++)
			s[i] = tolower(s[i]);
	}else{
		for(int i=0;i<s.size();i++)
			s[i] = toupper(s[i]);
	}
	cout<<s;
	return 0;
}
