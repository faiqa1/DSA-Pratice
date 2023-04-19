#include<bits/stdc++.h>
using namespace std;
int finduplicate(int *arr, int n){   //xoring all array element  => =0
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){     //xoring [1, n-1]  duplicate^0 =  duplicate
        ans = ans^i;
    }
    return ans;
}
int main(){
    int arr[5] = {1,4,3,2,3};
    cout<<finduplicate(arr,5);
    return 0;

}