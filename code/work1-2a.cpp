#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int m=10,sum=0;
    int n=pow(2,m);
    int* a;
    a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=i;
        sum+=a[i];
    }
    cout<<sum;
    delete []a;
    return 0;
}
