// C++ program to demonstrate
// FCFS Disk Scheduling algorithm

#include <bits/stdc++.h>
using namespace std;

int size = 8;

void FCFS(int arr[], int head)
{
	int seek_count = 0;
	int distance, cur_track;

	for (int i = 0; i < size; i++) {
		cur_track = arr[i];

		// calculate absolute distance
		distance = abs(cur_track - head);

		// increase the total count
		seek_count += distance;

		// accessed track is now new head
		head = cur_track;
	}

	cout << "Total number of seek operations = "
		<< seek_count << endl;

	// Seek sequence would be the same
	// as request array sequence
	cout << "Seek Sequence is" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

// Driver code
int main()
{

	// request array
	int arr[size] = { 98 , 189 , 33 , 127 , 18 , 124 , 65 , 67 };
	int head = 43 ;

	FCFS(arr, head);

	return 0;
}
