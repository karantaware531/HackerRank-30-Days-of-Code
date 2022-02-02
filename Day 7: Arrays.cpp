#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    int k = n-1;
    while(j<k){
        int temp = a[j];
        a[j]= a[k];
        a[k]= temp;
        j++;
        k--;
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
