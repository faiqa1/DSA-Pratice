#include<bits/stdc++.h>
using namespace std;
void countzero(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        arr[count++] = arr[i];
    }
    while(count<n)
    arr[count++]=0;
}
int main(){
    int arr[]={12,34,0,34,0,12,89,6,0,1,2,3,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    countzero(arr,len);
    for(int i=0;i<len;i++)
    cout<<arr[i]<<" ";
    return 0;
}