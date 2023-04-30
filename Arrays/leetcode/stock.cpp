#include<bits/stdc++.h>
using namespace std;
int maxprofit(int *price, int n){
    int mini = price[0];
    int profit =0;
    for(int i=1;i<n;i++){
       int diff = price[i]-mini;
       profit= max(profit,diff);
       mini= min(mini,price[i]);
    }
  return profit;  
}
int main(){
    int arr[]= {7,1,5,3,4,9};
    int maximum_profit =maxprofit(arr,6);
    cout<< maximum_profit;
    return 0;
}