#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[] , int size){
    int start =0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;   
    }

}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {12,56,78,21,6};
    int brr[6] = {1,2,3,4,5,6};
    reverse(arr,5);
    reverse(brr,6);
    print(arr,5);
    print(brr,6);
   
    return 0;
}