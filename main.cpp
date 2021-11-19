#include <iostream>
#include <stdlib.h>


char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int test = 0;
char player = 'X';


char ChangePlayer()

{

	if (player == 'X')
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
	return player;
}

void Display_board() 
{

	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << "\n";
	}

}


void Input()
{
	int a = 0;
	std::cout << "Press the number of the field: ";
	std::cin >> a;
	
	if (a == 1 && board[0][0] == '1')
	{
		board[0][0] = ChangePlayer();
	}

	else if (a == 2 && board[0][1] == '2')
	{
		board[0][1] = ChangePlayer();
	}
	else if (a == 3 && board[0][2] == '3')
	{
		board[0][2] = ChangePlayer();
	}
	else if (a == 4 && board[1][0] == '4')
	{
		board[1][0] = ChangePlayer();
	}
	else if (a == 5 && board[1][1] == '5')
	{
		board[1][1] = ChangePlayer();
	}
	else if (a == 6 && board[1][2] == '6')
	{
		board[1][2] = ChangePlayer();
	}
	else if (a == 7 && board[2][0] == '7')
	{
		board[2][0] = ChangePlayer();
	}
	else if (a == 8 && board[2][1] == '8')
	{
		board[2][1] = ChangePlayer();
	}
	else if (a == 9 && board[2][2] == '9')
	{
		board[2][2] = ChangePlayer();
	}
}

	


int main()
{
	while (test == 0)
	{

	Display_board();
	Input();

	}
	system("pause");
	return 0;
}
