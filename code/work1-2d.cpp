#include <iostream>
#include <math.h>

using namespace std;
void recursion(int n,int *a){
    if(n==1)
        return ;
    else{
        for(int i=0;i<n/2;i++){
            a[i]+=a[n-1-i];
        }
            n=n/2;
            recursion(n,a);
    }
}
int main()
{
    int m=10;
    int n=pow(2,m);
    int* a;
    a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    recursion(n,a);
    int sum=a[0];
    cout<<sum;
    return 0;
}
