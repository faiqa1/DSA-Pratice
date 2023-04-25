#include<bits/stdc++.h>
using namespace std;vector<vector<int>> pairsum (vector <int> &arr , int sum){
    vector <vector <int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                vector <int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
   vector<int> arr1 = {1, 3, 4, 5, 9};
    vector<vector<int>> result = pairsum(arr1, 4);
    for (vector<int> pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}