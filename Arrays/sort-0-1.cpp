#include<bits/stdc++.h>
using namespace std;

void sortOne(int arr[], int n){
    int left,right;
    left =0, right=n-1;
    while(arr[left]== 0 && left<right){
      left++;
    }
      while(arr[right]== 1 && left<right){
      right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]= {1,1,0,1,1,0,0,0,0};
    sortOne(arr,9);
    print(arr,9);
    return 0;

}