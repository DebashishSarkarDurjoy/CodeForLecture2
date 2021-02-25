/*	Bubble Sort
	Revised by: Dr Dongmo Zhang
	Date:       15/9/2005
	
    Origin by: G & F
	Brooks/Cole
	A division of Thomson Learning
	Copyright(c) 2001. All Rights Reserved*/
#include <iostream>
#include <iomanip>

using namespace std;

#define MAX_ARY_SIZE 15

//	Prototype Declarations 
void bubbleSort	(int list[ ], int last);
	
int main (void) 
{
//	Local Declarations 
	int i;
	int	ary[ MAX_ARY_SIZE ] = { 89, 72, 3,  15, 21,
	                            57, 61, 44, 19, 98, 
	                             5, 77, 39, 59, 61
	                           }; // ary

//	Statements 
	cout <<  "Unsorted array: ";
	for (i = 0; i < MAX_ARY_SIZE; i++)
	     cout << setw(3) << ary[ i ];
		
	bubbleSort (ary, MAX_ARY_SIZE - 1);

	cout <<  "\nSorted array:   ";
	for (i = 0; i < MAX_ARY_SIZE; i++)
	     cout << setw(3) << ary[ i ];
	cout << endl;
	return 0;
}	// main 

/*	=================== bubbleSort ==================== 
	Sort list using bubble sort. Adjacent elements are 
	compared and exchanged until list completely ordered.
	   Pre   list must contain at least one item
	         last contains index to last element in list
	   Post  list rearranged in sequence low to high
*/
void bubbleSort (int list[], int last) {	
	int i, j, temp;
	bool sorted = false;
	for (i=0; i <= last && !sorted; i++)
		for (j=last, sorted=true; j>i; j--)
		      if (list [j] < list [j-1])  {
		      	sorted = false;
		      	temp = list[j]; 
		      	list[j]=list[j-1];
		      	list[j-1] = temp;
		      } // if
	return;
} // bubbleSort
