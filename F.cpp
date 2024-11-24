#include<bits/stdc++.h>
using namespace std;
int main (){
    int x,ii,jj;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin>>x;
            if(x==1){
                ii=i;
                jj=j;
            }
        }
 
    }
cout<<abs(3-ii)+ abs(3-jj);
return 0;
}