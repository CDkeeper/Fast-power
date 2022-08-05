#include<iostream>
using namespace std;
int a,b,p;
int n;
typedef long long ll;
int qmi(int a,int b,int p){
    int sum=1;
    while(b){
        if(b&1) sum = ll(sum)*a%p;
        b>>=1;
        a= ll(a)*a%p;
    }
    return sum;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&p);
        printf("%d\n",qmi(a,b,p));
    }
    return 0;
}
