#include<bits/stdc++.h>
using namespace std;
int twosum(int *arr,int size, int target){
    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){
              if(arr[i]+arr[j]==target)
              return arr[]{i,j};
        }
    }
    return -1;
}
int main(){
    int arr[]={1,5,7,9,10};
    int sum = twosum(arr,5,8);
    cout<<sum;

    return 0;
}