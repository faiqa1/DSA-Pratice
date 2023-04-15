// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

void countFreq(string arr[], int n)
{
	// Mark all array elements as not visited
	vector<bool> visited(n, false);

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {

		// Skip this element if already processed
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}

int main()
{
	//string arr[] = { "geeks", "word" , "lenghth" };
	string arr[5];
	
	for(int b=0;b<5;b++)
	cin>>arr[b];
	
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	
}
