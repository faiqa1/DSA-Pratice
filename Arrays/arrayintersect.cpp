#include<bits/stdc++.h>
using namespace std; 

vector<int> findarrayintersect(vector<int> &arr1 ,int n,int m ,vector<int> &arr2){
    vector<int> ans;
    int i=0, j=0;
    while (i<n && j<m)
    {
        if(arr1[i]==arr2[j]){
            ans.push_back(arr2[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 3, 4, 6};
    vector<int> result = findarrayintersect(arr1, arr1.size(), arr2.size(), arr2);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}
