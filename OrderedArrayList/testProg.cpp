
#include <iostream>

#include "orderedArrayListType.h"

using namespace std;

int main()
{
	orderedArrayListType<int> list(5);
   list.insertOrd(3);
   list.insertOrd(4);
   list.insertOrd(5);
   list.insertOrd(2);
   list.insertOrd(1);


   int loc = list.binarySearch(4);
   if(loc > 0)
	   cout << "found it at " << loc << endl;
   else
	   cout <<"not found" << endl;


	return 0;
}
