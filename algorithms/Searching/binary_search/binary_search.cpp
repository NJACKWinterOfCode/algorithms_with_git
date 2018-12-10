#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, index = 0, index1 = 0, index2 = 0, key, flag = 0, beg, end, mid;

	cout << "Enter the no of items in the list: ";
	cin >> N;

	int arr[N];
	beg = 0;
	end = N - 1;

	while(index < N)
	{
		cout << "Enter the value: ";
		cin >> arr[index];
		index++;
	}

	cout << "Enter the value to search: ";
	cin >> key;

	cout << "The list you entered is: [";
	while(index1 < N-1)
	{
		cout << arr[index1] << ", ";
		index1++;
	}
	cout << arr[index1] << "]" << endl;

	sort(arr, arr + N);

	cout << "The sorted list is: [";
	while(index2 < N-1)
	{
		cout << arr[index2] << ", ";
		index2++;
	}
	cout << arr[index2] << "]" << endl;

	while(beg < end)
	{
		mid = (beg + end) / 2;

		if(arr[mid] == key)
		{
			end = 0;
			flag = 1;
		}
		else if(arr[mid] > key)
		{
			end = mid - 1;
		}
		else if(arr[mid] < key)
		{
			beg = mid + 1;
		}
	}

	if(flag == 1)
	{
		cout << "Search Successful." << endl;
	}
	else
	{
		cout << "Search Unsuccessful." << endl;
	}

	return 0;
}