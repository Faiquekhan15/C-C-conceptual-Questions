#include<iostream>
#include"conio.h"
////////n*n game//////////////////////////////////////////////////////////////////////////////////////
using namespace std;
char arr[50];
/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin(int size)

{
	bool flag;

	flag = true;

	int count1;

	int count2;

	int count3;
	for (int i = 0; i<size*size; i++)

	{

		count1 = 0;

		for (int j = i + 1; j <= i + (size - 1); j++)

		{

			if (arr[i] == arr[j])

			{

				count1++;

				if (count1 == size - 1)

				{

					return 1;

				}

			}

		}

	}

	for (int i = 0; i<size; i++)

	{

		count2 = 0;

		for (int j = i + size; j <= ((size - 1)*size) + i; j = j + size)

		{

			if (arr[i] == arr[j])

			{

				count2++;

				if (count2 == size - 1)

				{

					return 1;

					

				}

			}

		}

	}

	////////////////check///////////////////////digonals

	for (int i = 0; i<1; i++)

	{

		count3 = 0;

		for (int j = (size + 1); j<size*size; j = j + (size + 1))

		{

			if (arr[i] == arr[j])

			{

				count3++;

				if (count3 == size - 1)

				{

					return 1;

				}



			}

		}

	}

	
	for (int i = size - 1; i<size; i++)

	{

		count3 = 0;

		for (int j = i + (size + 1); j<(size*size) - 2; j = j + (size + 1))

		{

			if (arr[i] == arr[j])

			{

				count3++;

				if (count3 == size - 1)

				{

					return 1;

					
				}

			}

		}

	}

	int fill = 48;

	int retFlag = 2;

	for (int i = 0; i<size; i++)

	{

		if (arr[i] == fill)

		{

			fill++;

			return 0;

		}

	}

	if (retFlag == 0)

	{

		return 0;

	}

	else

	{

		return -1;

	}

}
/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/
void board(int size)

{

	system("cls");

	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X) - Player 2 (O)" << endl << endl;

	cout << endl;
	for (int i = 0; i <size; i++)

	{

		for (int j = 0; j <size; j++)

		{	
	        cout << "  " << arr[(i*size)+j]<<"|" ;
	        
		}

		cout << endl;

	}

}
////player turn///////////////////////
void playerturn(int player, char choice, char pos, int n)

{
	char choiceArr[50];
	int i;

	player = 1;

	char mark;
	int turnFlag=0;
	int turnFlag1=0;
	int counter=0;
	do

	{
		board(n);

		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number: ";
		int choiceIndex=0;
		cin >> choice;
		
		mark = (player == 1) ? 'X' : 'O';

		
		for (int i = 0; i<n*n; i++)
        {
			for(int k=0; k<(n*n);k++)
			{
				if(choice == choiceArr[k])
				{
					turnFlag1=1;
					turnFlag=0;
					break;
				
				}
			
			}

			if (choice == arr[i] && turnFlag1==0)
			{
				arr[i] = mark;
				turnFlag=1;
				choiceArr[choiceIndex]=choice;
				choiceIndex++;
				break;
			}
		}

		  
          if(turnFlag!=1)
           {

            cout<<"Invalid move!\n\n Play Again\n";

			cin>>choice;

			for (int i = 0; i<n*n; i++)

			{
				if (choice == arr[i])
				{
					arr[i] = mark;
					turnFlag=1;
					turnFlag1=0;
					break;
				}
			}
		
		}


		i = checkwin(n);

		player++;
		counter++;

	}

	while (i == -1 && counter != (n*n));

	board(n);

	if (i == 1)
	
		cout << "==>\aPlayer " << --player << " win ";
	
	else if(i!=1)
	{
		cout << "==>\aGame draw";
	}
		
	getch();
}

int main()
{
	int size = 0;
	cout << "enter the size" << endl;
	cin >> size;
    int fillArr = 97;
	for (int i = 0; i<(size*size); i++)
	{
		arr[i] = fillArr;
		fillArr++;
	}

	int player = 0;
	int choice = 0;
	char pos = { '\0' };
	playerturn(player, choice, pos, size);
	checkwin(size);
	board(size);
	return 0;
	system("pause");
}
/*******************************************************************
				END OF PROJECT
********************************************************************/