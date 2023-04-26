/*#include<bits/stdc++.h>
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

}*/
#include<bits/stdc++.h>
using namespace std;

void sortOne(int arr[], int n){      //only swap elements when we find 1 on the left side and 0 on the right side. 
                                    //We move the left pointer forward if the element is 0, and move the right pointer 
                                    //backward if the element is 1
    int left = 0, right = n - 1;
    while (left < right) {
        if (arr[left] == 1 && arr[right] == 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] == 0) {
            left++;
        }
        else if (arr[right] == 1) {
            right--;
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 1, 0, 1, 1, 0, 0, 0, 0};
    sortOne(arr, 9);
    print(arr, 9);
    return 0;
}
