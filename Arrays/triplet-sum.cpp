#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairsum(vector<int> &arr, int sum) {
    vector<vector<int>> ans;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            for(int k = j + 1; k < arr.size(); k++) {
                if(arr[i] + arr[j] + arr[k] == sum) {
                    vector<int> temp;
                    temp.push_back(min(arr[i], min(arr[j], arr[k])));
                    temp.push_back(max(arr[i], max(arr[j], arr[k])));
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr1 = {1, 3, 4, 5, 9};
    vector<vector<int>> result = pairsum(arr1, 8);
    for(vector<int> pair : result) {
        cout << pair[0] << " " << pair[1] << " " << pair[2] << endl;
    }
    return 0;
}
