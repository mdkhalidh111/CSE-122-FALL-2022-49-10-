
/**CODE NAME : Boy or Girl
CODE NO : 236A
**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char>a;
    for(int i=0;i<s.size();i++){
        a.insert(s[i]);
    }
    if(a.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
