#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,l;
    cin>>n>>q;
    int *arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>l;
        int *arr2 = new int[l];
        arr[i]=arr2;
        for (int j=0; j<l; j++) {
            cin>>arr2[j];
        } 
    }
    for (int i=0; i<q; i++) {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<"\n";    
    
    }
      
    return 0;
}