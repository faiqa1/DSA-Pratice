#include<iostream>
using namespace std;
int main(){
	const int a=3,b=3;
	int arr[a][b]= {{1,2,3}, {3,4,5},{6,7,8} };
	for(auto &row : arr) {
		for(auto &column :row){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	return 0;
}
