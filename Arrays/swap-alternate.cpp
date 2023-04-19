#include<bits/stdc++.h>
using namespace std;
void swapalternate(int arr[], int n){
    for(int i=0; i<n; i+=2){   // to move index to from 0 to 2 index because index 0 and 1 are already swapped
        if(i+1<n){            // checking if elementat index 1 exist or not within array length
            swap(arr[i],arr[i+1]);
        }
    }

}
void print(int arr[], int n){      //display output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6] = {34,57,32,89,1,2};    //for even length of array
    int brr[5] = {7,8,9,3,4};          //for odd length of array
    swapalternate(arr,6);
     swapalternate(brr,5);
    print(arr,6);
     print(brr,5);
    return 0;
}