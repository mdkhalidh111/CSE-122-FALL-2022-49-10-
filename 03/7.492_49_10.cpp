
/**CODE NAME : Beautiful Matrix
CODE NO : 263A
**/
#include<iostream>
using namespace std;
int main(){
	int a[5][5],i,j,c1,c2;
	for (i =0;i<5;i++){
		for(j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				c1=i;
				c2=j;
			}
		}
	}
	cout<<abs(c1-2)+abs(c2-2)<<"\n";
	return 0;
}
