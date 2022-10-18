
/**CODE NAME : Next Round
CODE NO : 158A
**/
#include<iostream>
using namespace std;
main(){
    int n,k,cont=0;
    cin>>n>>k;
    int a[n];
   for(int i=0;i<n;i++)
    {cin>>a[i];cout<<" ";}
   for(int i=0;i<n;i++)
   if(a[i]>=a[k-1]&&a[i]!=0)
   cont++;
   cout<<cont<<endl;


}
