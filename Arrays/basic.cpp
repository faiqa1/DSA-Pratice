#include<bits/stdc++.h>
using namespace std;
//get maximum value in array
int getMAX(int arr_ay[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){

    maxi = max(maxi, arr_ay[i]);
       /* if(arr_ay[i]>max){
        max = arr_ay[i];
        }*/
    }
    return maxi;
}

//get minimum value in array
int getMIN(int arr_ay[], int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr_ay[i]<min){
        min = arr_ay[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;
    int arr[100];
    //take input element for array
    cout<<"enter element in array followed by a space: ";
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    cout<<"MAXIMUM NUMBER OF ARRAY IS: "<<getMAX(arr,size)<<endl;
    cout<<"MINIIMUM NUMBER OF ARRAY IS: "<<getMIN(arr,size);
    return 0;
}