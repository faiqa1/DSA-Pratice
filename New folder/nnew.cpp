#include <iostream>
using namespace std;
void palidrome(string str){
   
    int flag =0;
    int n = str.length();
    for(int i=0;i<=n/2 && n!=0;i++){
     if(str[i]!=str[n-i-1]){
        flag=1;
        break;
     }
    }
    if (flag == 1)
		cout << "Not Palindrome";
	else
		cout << "Palindrome";

    }

int main()
{
    string str ="loml";
    palidrome(str);
}
       