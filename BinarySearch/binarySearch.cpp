#include <iostream>

using namespace std;

bool binarySearch(int list[], int end, int target, int &locn ) { 
	int first = 0;
	int last = end;
	int mid = -1;
	bool found = false;
	while(first <= last) {
		mid = (first + last) / 2; // return an integer
		if (target > list[mid])  // look in upper half
			first = mid + 1;
		else if (target < list[mid]) // look in lower half
				last = mid - 1; 
			 else  // target found: force exit
				first = last +1;
	}

	locn = mid;
	
	if (target == list[mid])
		found = true;
	else
		found = false;

	return found;
}

int main() {
	int list[] = {4,7,8,10,14,21, 22,36,62,77,81,91};
	int end = 11;
	int target = 9999;
	int locn = -1;
    if(binarySearch(list, end, target, locn))
		cout << "Found the target at " << locn << endl;
	else 
		cout << " Can't find the target." << endl;
    return 0;
}
