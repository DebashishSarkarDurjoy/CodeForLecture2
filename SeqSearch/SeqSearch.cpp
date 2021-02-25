#include <iostream>

using namespace std;

bool seqSearch(int list[], int target, int last, int &locn ) { 
	int looker = 0;
	bool found = false;

	while(target != list[looker]) {
		looker++;
	}
	
    locn = looker;
    if (target == list[looker] && looker != last+1)
		found = true;
    else
		found = false;

	return found;
}

int main() {
	int list[] = {4,21,36,14,62,91,8,22,7,81,77,10, 91};
	int last = 11;
	int target = 91;
	int locn = -1;
    if(seqSearch(list, target, last, locn))
		cout << "Found the target at " << locn << endl;
	else 
		cout << " Can't find the target." << endl;

    return 0;
}
