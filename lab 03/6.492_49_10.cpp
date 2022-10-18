
/**CODE NAME : Bit++
CODE NO : 282A
**/
#include <iostream>
using namespace std;

int main(){
	int m,n;
	string str ;
	m=0;
	cin>>n;
	while(n--){
		cin>>str;
		if(str =="X++" || str == "++X"){
			m++;}
		else{
			m--;
		}

	}
	cout<<m;
}
