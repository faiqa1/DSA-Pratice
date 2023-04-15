#include<bits/stdc++.h>
using namespace std;
void reverse(string& name){
   int n = name.length();
    for(int i=0; i<n/2;i++)
        swap(name[i], name[n-i-1]);
        
}
/*void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}*/
int main(){
    string str = "word";
    reverse(str);
    cout<<str;
    return 0;
}