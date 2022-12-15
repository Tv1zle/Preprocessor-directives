#include <iostream>
#include <vector>
#define FUNCTION1 void LinealSearching()
#define FUNCTION2 void BinarySearching()
#define FUNCTION3 int main()
#define LETGO1 LinealSearching();
#define LETGO2 BinarySearching();
#define LETGO3 //Any another interesting function
#define SIZE 10
#define ARR int arr[SIZE] = {0, 12, 32, 11, 56, 3, 8, 55, 2, 20}; //Only for "LETGO1" and "LETGO2"
#define FOUND bool isfound = false;
#define Ready isfound = true;
#define FOR for(int i = 0; i < SIZE; i++)
#define User int user;
#define L int l = 0;
#define R int r = 10;
#define IF1 if(arr[i] == user)
#define IF2 if(isfound == false)
#define IF3 if (arr[mid] > user)
#define MID int mid;
#define DO1 mid = (l + r) / 2;
#define DO2 r = mid - 1;
#define DO3 l = mid + 1;
#define IF3 if (arr[mid] > user)
#define ELSE else
#define Begin {
#define End }
#define COUT1A std::cout << "What are looking for (Lineal searching)?\n";
#define COUT1B std::cout << "What are looking for (Binary searching)?\n";
#define CIN std::cin >> user;
#define COUT2 std::cout << "Found index of this element:" << i << "\n";
#define COUT3 std::cout << -1 << "\n";
#define BREAK break;

#define COUT4 std::cout << array[i][j] << " ";
#define FOR2 for (int i = 0; i < 3; i++)
#define FOR3 for (int j = 0; j < 3; j++)
#define CIN2 std::cin >> array[i][j];
#define ENDL std::cout << std::endl;
#define MININIT int min = array[i][0];
#define IF4 if (array[i][j] < min)
#define MIN min = array[i][j];
#define COUT5 std::cout << "In " << i << " min = " << min;
#define MAXINIT int max = array[i][0];
#define IF5 if (array[i][j] > max)
#define MAX max = array[i][j];
#define COUT6 std::cout << "In " << i << " max = " << max;
#define TEMP int temp = 0;
#define IF6 if (array[i][j] > array[i][j + 1])
#define TEMPINIT temp = array[i][j];
#define SORT1 array[i][j] = array[i][j + 1];
#define SORT2 
#define FUNCTION4 void MatrixInitiating(int array[3][3])
#define FUNCTION5 void MatrixOutput(int array[3][3])
#define FUNCTION6 void MatrixMin(int array[3][3])
#define FUNCTION7 void MatrixMax(int array[3][3])
#define FUNCTION8 void MatrixSort(int array[3][3])
#define FUNCTION9 void MatrixInitiating(double array[3][3])
#define FUNCTION10 void MatrixOutput(double array[3][3])
#define FUNCTION11 void MatrixMin(double array[3][3])
#define FUNCTION12 void MatrixMax(double array[3][3])
#define FUNCTION13 void MatrixSort(double array[3][3])
#define FUNCTION14 void MatrixInitiating(char array[3][3])
#define FUNCTION15 void MatrixOutput(char array[3][3])
#define FUNCTION16 void MatrixMin(char array[3][3])
#define FUNCTION17 void MatrixMax(char array[3][3])
#define FUNCTION18 void MatrixSort(char array[3][3])



//Task 1
FUNCTION1
Begin
	FOUND
	User
	COUT1A
	CIN
	ARR


	FOR
	Begin
		IF1
		Begin
			COUT2
			Ready
			BREAK;
		End
	End


	IF2
		COUT3
End


//Task 2
FUNCTION2
Begin
	FOUND
	User
	COUT1B
	CIN
	MID
	L
	R
	ARR


	FOR
	Begin
		DO1

		IF1
		Begin
			Ready
			COUT2
			BREAK;
		End
		IF3
			DO2
		ELSE
			DO3
	End


	IF2
		COUT3
End


//Task 3
FUNCTION4
Begin
	FOR2
	Begin
		FOR3
		Begin
			CIN2
		End
		ENDL
	End
End


FUNCTION5
Begin
	FOR2
	Begin
		FOR3
		Begin
			COUT4
		End
		ENDL
	End
End


FUNCTION6
Begin
	FOR2
	Begin
		MININIT
		FOR3
		Begin
			IF4
				MIN
		End
		COUT5
	End
End


FUNCTION7
Begin
	FOR2
	Begin
		MAXINIT
		FOR3
		Begin
			IF5
				MAX
		End
		COUT6
	End
End


FUNCTION8
Begin
	TEMP

	FOR2
	Begin
		FOR3
		Begin
			IF6
			Begin
				TEMPINIT
				SORT1
				SORT2
			End
		End
	End
End


//2
FUNCTION9
Begin
	FOR2
	Begin
		FOR3
		Begin
			CIN2
		End
		ENDL
	End
End


FUNCTION10
Begin
	FOR2
	Begin
		FOR3
		Begin
			COUT4
		End
		ENDL
	End
End


FUNCTION11
Begin
	FOR2
	Begin
		MININIT
		FOR3
		Begin
			IF4
			MIN
		End
		COUT5
	End
End


FUNCTION12
Begin
	FOR2
	Begin
		MAXINIT
		FOR3
		Begin
			IF5
			MAX
		End
		COUT6
	End
End


FUNCTION13
Begin
	TEMP
	
	FOR2
	Begin
		FOR3
		Begin
			IF6
			Begin
				TEMPINIT
				SORT1
				SORT2
			End
		End
	End
End


//3
FUNCTION14
Begin
	FOR2
	Begin
		FOR3
		Begin
			CIN2
		End
		ENDL
	End
End


FUNCTION15
Begin
	FOR2
	Begin
		FOR3
		Begin
			COUT4
		End
		ENDL
	End
End


FUNCTION16
Begin
	FOR2
	Begin
		MININIT
		FOR3
		Begin
			IF4
			MIN
		End
		COUT5
	End
End


FUNCTION17
Begin
	FOR2
	Begin
		MAXINIT
		FOR3
		Begin
			IF5
			MAX
		End
		COUT6
	End
End


FUNCTION18
Begin
	TEMP
	
	FOR2
	Begin
		FOR3
		Begin
			IF6
			Begin
				TEMPINIT
				SORT1
				SORT2
			End
		End
	End
End


FUNCTION3 // int main()
Begin
	LETGO1
	
	LETGO2
End