#include<bits/stdc++.h>
using namespace std;
void countstring(string arr[] , int n){
    vector<bool> visited(n, false);
    for(int i=0;i>n;i++){
        if(visited[i] ==true)
        continue;

        int count =1;
        for(int j=i+1;j<n ;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i] <<" " <<count <<endl;
    }
}
int main(){
    string arr[5];
    int b = sizeof(arr)/sizeof(arr[0]);
    for(int a=0;a<5;a++)
    cin>>arr[a];
    countstring(arr,b);
    return 0;
}