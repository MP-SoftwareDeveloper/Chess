#include <iostream>
#include <string>
#include <Windows.h> // to be able use handle colors job
#define re return
using namespace std;
void print(int board[])
{
	int i = 0;
	string c[64] = { " RB "," AB "," FB "," VB "," KB "," FB "," AB "," RB ",
				   " SB "," SB "," SB "," SB "," SB "," SB "," SB "," SB ",
				   "    ","    ","    ","    ","    ","    ","    ","    ",
				   "    ","    ","    ","    ","    ","    ","    ","    ",
				   "    ","    ","    ","    ","    ","    ","    ","    ",
				   "    ","    ","    ","    ","    ","    ","    ","    ",
				   " SW "," SW "," SW "," SW "," SW "," SW "," SW "," SW ",
				   " RW "," AW "," FW "," VW "," KW "," FW "," AW "," RW "
	};
	char cha = 'A';
	cout << endl;
	for (int i = 1; i < 9;i++)
		cout << "    " << i << "  ";
	cout << endl;
	{
		cout << char(218);
		int aa = 7;
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(196);
			}
			cout << char(194);
		}
		int a = 6;
		while (a--)
		{
			cout << char(196);
		}
		cout << char(191);
	}
	cout << endl;
	int b = 3;
	while (b--)
	{

		{
			int aa = 4;
			cout << char(179);
			while (aa--)
			{
				int a = 6;
				while (a--)
				{
					cout << char(178);
				}
				cout << char(179);
				a = 6;
				while (a--)
				{
					cout << char(176);
				}
				cout << char(179);
			}
		}
		cout << endl;
		{
			cout << char(179);
			int aa = 4;
			while (aa--)
			{
				cout << char(178) << c[board[i++]] << char(178) << char(179);
				cout << char(176) << c[board[i++]] << char(176) << char(179);
			}
		}
		cout << "  " << cha++;
		cout << endl;
		{
			int aa = 4;
			cout << char(179);
			while (aa--)
			{
				int a = 6;
				while (a--)
				{
					cout << char(178);
				}
				cout << char(179);
				a = 6;
				while (a--)
				{
					cout << char(176);
				}
				cout << char(179);
			}
		}
		cout << endl;
		{
			cout << char(195);
			int a = 7;
			while (a--)
				cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
		}
		cout << endl;
		{
			int aa = 4;
			cout << char(179);
			while (aa--)
			{
				int a = 6;
				while (a--)
				{
					cout << char(176);
				}
				cout << char(179);
				a = 6;
				while (a--)
				{
					cout << char(178);
				}
				cout << char(179);
			}
		}
		cout << endl;
		{
			cout << char(179);
			int aa = 4;
			while (aa--)
			{
				cout << char(176) << c[board[i++]] << char(176) << char(179);
				cout << char(178) << c[board[i++]] << char(178) << char(179);
			}
		}
		cout << "  " << cha++;
		cout << endl;
		{
			int aa = 4;
			cout << char(179);
			while (aa--)
			{
				int a = 6;
				while (a--)
				{
					cout << char(176);
				}
				cout << char(179);
				a = 6;
				while (a--)
				{
					cout << char(178);
				}
				cout << char(179);
			}
		}
		cout << endl;
		{
			cout << char(195);
			int a = 7;
			while (a--)
				cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
		}
		cout << endl;
	}
	{
		int aa = 4;
		cout << char(179);
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(178);
			}
			cout << char(179);
			a = 6;
			while (a--)
			{
				cout << char(176);
			}
			cout << char(179);
		}
	}
	cout << endl;
	{
		cout << char(179);
		int aa = 4;
		while (aa--)
		{
			cout << char(178) << c[board[i++]] << char(178) << char(179);
			cout << char(176) << c[board[i++]] << char(176) << char(179);
		}
	}
	cout << "  " << cha++;
	cout << endl;
	{
		int aa = 4;
		cout << char(179);
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(178);
			}
			cout << char(179);
			a = 6;
			while (a--)
			{
				cout << char(176);
			}
			cout << char(179);
		}
	}
	cout << endl;
	{
		cout << char(195);
		int a = 7;
		while (a--)
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
		cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
	}
	cout << endl;
	{
		int aa = 4;
		cout << char(179);
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(176);
			}
			cout << char(179);
			a = 6;
			while (a--)
			{
				cout << char(178);
			}
			cout << char(179);
		}
	}
	cout << endl;
	{
		cout << char(179);
		int aa = 4;
		while (aa--)
		{
			cout << char(176) << c[board[i++]] << char(176) << char(179);
			cout << char(178) << c[board[i++]] << char(178) << char(179);
		}
	}
	cout << "  " << cha++;
	cout << endl;
	{
		int aa = 4;
		cout << char(179);
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(176);
			}
			cout << char(179);
			a = 6;
			while (a--)
			{
				cout << char(178);
			}
			cout << char(179);
		}
	}
	cout << endl;
	{
		cout << char(192);
		int aa = 7;
		while (aa--)
		{
			int a = 6;
			while (a--)
			{
				cout << char(196);
			}
			cout << char(193);
		}
		int a = 6;
		while (a--)
		{
			cout << char(196);
		}
		cout << char(217);
	}
	cout << endl;

}
bool checkab(int board[], int i, int j) // check the move is alowed for black horses
{
	if (board[j] > 15) { // board[j] is destination if the pices are from  it own's time not allowed to move if it's opponent pices or empty move is allowed
		if ((i + 16) + 1 == j)re 1;
		if ((i + 16) - 1 == j)re 1;
		if ((i - 16) + 1 == j)re 1;
		if ((i - 16) - 1 == j)re 1;
		if ((i + 2) + 8 == j)re 1;
		if ((i + 2) - 8 == j)re 1;
		if ((i - 2) + 8 == j)re 1;
		if ((i - 2) - 8 == j)re 1;

		re 0;
	}
}
bool checkaw(int board[], int i, int j) // check the move is alowed for black horses
{
	if (board[j] < 48) { // board[j] is destination if the pices are from  it own's time not allowed to move if it's opponent pices or empty move is allowed

		if ((i + 16) + 1 == j)re 1;
		if ((i + 16) - 1 == j)re 1;
		if ((i - 16) + 1 == j)re 1;
		if ((i - 16) - 1 == j)re 1;
		if ((i + 2) + 8 == j)re 1;
		if ((i + 2) - 8 == j)re 1;
		if ((i - 2) + 8 == j)re 1;
		if ((i - 2) - 8 == j)re 1;

		re 0;
	}
}
bool checksb(int board[], int i, int j)
{
	if (board[j] > 15 || board[j] < 48)
	{
		if (i + 8 == j)re 1;
		if ((i / 8) == 1 && i + 16 == j)re 1;
	}
	if (i + 7 == j && board[j] > 47) re 1;
	if (i + 9 == j && board[j] > 47) re 1;
	re 0;
}
bool checksw(int board[], int i, int j)
{
	if (board[j] > 15 || board[j] < 48)
	{
		if (i - 8 == j)re 1;
		if ((i / 8) == 6 && i - 16 == j)re 1;
	}
	if (i - 7 == j && board[j] < 16) re 1;
	if (i - 9 == j && board[j] < 16) re 1;
	re 0;
}
bool checkrb(int board[], int i, int j) // Rook moves
{
	if (board[j] > 15)
	{
		for (int ii = 8; ii < 64; ii += 8) // forward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -8; ii > -64; ii -= 8) // backward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		int ii = 1;
		while (1) //Right move
		{
			if (i / 8 != (i + ii) / 8)break;// if it is not in same row
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii++;
		}
		ii = -1;
		while (1) //Left move
		{
			if (i / 8 != (i + ii) / 8)break;// if it is not in same row
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii--;
		}
	}
	re 0;
}
bool checkrw(int board[], int i, int j) // Rook moves
{
	if (board[j] < 48)
	{
		for (int ii = 8; ii < 64; ii += 8) // forward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -8; ii > -64; ii -= 8) // backward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		int ii = 1;
		while (1) //Right move
		{
			if (i / 8 != (i + ii) / 8)break;// if it is not in same row
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii++;
		}
		ii = -1;
		while (1) //Left move
		{
			if (i / 8 != (i + ii) / 8)break;// if it is not in same row
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii--;
		}
	}
	re 0;
}
bool checkfw(int board[], int i, int j) // Bishop
{
	if (board[j] > 15)
	{
		for (int ii = 9; ii < 64; ii += 9) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = 7; ii < 64; ii += 7) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -9; ii > 0; ii -= 9) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -7; ii > 0; ii -= 7) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
	}
	re 0;
}
bool checkfb(int board[], int i, int j) // Bishop
{
	if (board[j] < 48)
	{
		for (int ii = 9; ii < 64; ii += 9) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = 7; ii < 64; ii += 7) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -9; ii > 0; ii -= 9) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -7; ii > 0; ii -= 7) // bishop digonal move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
	}
	re 0;
}
bool checkkb(int board[], int i, int j)
{
	if (board[j] > 15)
	{
		if (i + 1 == j)re 1;
		if (i - 1 == j)re 1;
		if (i + 8 == j)re 1;
		if (i - 8 == j)re 1;
		if (i + 7 == j)re 1;
		if (i - 7 == j)re 1;
		if (i + 9 == j)re 1;
		if (i - 9 == j)re 1;
	}
	re 0;
}
bool checkkw(int board[], int i, int j)
{
	if (board[j] < 48)
	{
		if (i + 1 == j)re 1;
		if (i - 1 == j)re 1;
		if (i + 8 == j)re 1;
		if (i - 8 == j)re 1;
		if (i + 7 == j)re 1;
		if (i - 7 == j)re 1;
		if (i + 9 == j)re 1;
		if (i - 9 == j)re 1;
	}
	re 0;
}
bool kishb(int board[])
{
	int mabda, maghsad;
	for (int i = 0; i < 64; i++) // find where is the black king
	{
		if (board[i] == 4)
		{
			maghsad = i;
			break;
		}
	}
	for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
	{
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				mabda = j;
				break;
			}
		}
		if (i == 57 || i == 62) //if a[i] is white hourse
		{
			if (checkaw(board, mabda, maghsad)) re 1;
		}

		if (i < 56 && i >47)
		{
			if (checksw(board, mabda, maghsad)) re 1;
		}

		if (i == 56 || i == 63) //if a[i] is white Rook
		{
			if (checkrw(board, mabda, maghsad)) re 1;
		}

		if (i == 58 || i == 61) //if a[i] is white hourse
		{
			if (checkfw(board, mabda, maghsad)) re 1;
		}

		if (i == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
		{
			if (checkfw(board, mabda, maghsad)) re 1;
			if (checkrw(board, mabda, maghsad)) re 1;
		}

		if (i == 60) //if a[i] is white King.
		{
			if (checkkw(board, mabda, maghsad)) re 1;
		}
	}
	re 0;
}
bool kishw(int board[])
{
	int mabda, maghsad;
	for (int i = 0; i < 64; i++) // find where is the white king
	{
		if (board[i] == 60)
		{
			maghsad = i;
			break;
		}
	}
	for (int i = 0; i < 16; i++) // finding where are the oppenet(white) pieces
	{
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				mabda = j;
				break;
			}
		}
		if (i == 57 || i == 62) //if a[i] is Black hourse
		{
			if (checkab(board, mabda, maghsad)) re 1;
		}

		if (i < 1 && i >6)
		{
			if (checksb(board, mabda, maghsad)) re 1;
		}

		if (i == 0 || i == 7) //if a[i] is Black Rook
		{
			if (checkrb(board, mabda, maghsad)) re 1;
		}

		if (i == 2 || i == 5) //if a[i] is Black hourse
		{
			if (checkfb(board, mabda, maghsad)) re 1;
		}

		if (i == 3) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
		{
			if (checkfb(board, mabda, maghsad)) re 1;
			if (checkrb(board, mabda, maghsad)) re 1;
		}

		if (i == 4) //if a[i] is Black King.
		{
			if (checkkb(board, mabda, maghsad)) re 1;
		}
	}
	re 0;
}
/* there are three was to save the king from checkmate
* mat1 First: just move the king to other positions.
* mat2 Second: find a way to elemenate the attacker opponent
* mat3 third: 
*/
bool mat1b(int board[])
{
	int shah;
	for (int i = 0; i < 64; i++) // Finding the black king
	{
		if (board[i] == 4)
		{
			shah = i;
			break;
		}
	}
	if (board[shah +1] > 15 && board[shah+1] < 47)
	{
		int temp = board[shah + 1];// swap
		board[shah + 1] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah + 1]; // swap
		board[shah + 1] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 1] > 15 && board[shah - 1] < 47)
	{
		int temp = board[shah - 1];// swap
		board[shah - 1] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah - 1]; // swap
		board[shah - 1] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 8] > 15 && board[shah + 8] < 47)
	{
		int temp = board[shah + 8];// swap
		board[shah + 8] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah + 8]; // swap
		board[shah + 8] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 8] > 15 && board[shah - 8] < 47)
	{
		int temp = board[shah - 8];// swap
		board[shah - 8] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah - 8]; // swap
		board[shah - 8] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 7] > 15 && board[shah + 7] < 47)
	{
		int temp = board[shah + 7];// swap
		board[shah + 7] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah + 7]; // swap
		board[shah + 7] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 7] > 15 && board[shah - 7] < 47)
	{
		int temp = board[shah - 7];// swap
		board[shah - 7] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah - 7]; // swap
		board[shah - 7] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 9] > 15 && board[shah + 9] < 47)
	{
		int temp = board[shah + 9];// swap
		board[shah + 9] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah + 9]; // swap
		board[shah + 9] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 9] > 15 && board[shah - 9] < 47)
	{
		int temp = board[shah - 9];// swap
		board[shah - 9] = board[shah];
		board[shah] = temp;
		if (!kishb(board)) re 0;
		temp = board[shah - 9]; // swap
		board[shah - 9] = board[shah];
		board[shah] = temp;
	}
}
bool mat1w(int board[])
{
	int shah;
	for (int i = 0; i < 64; i++) // Finding the black king
	{
		if (board[i] == 60)
		{
			shah = i;
			break;
		}
	}
	if (board[shah + 1] > 15 && board[shah + 1] < 47)
	{
		int temp = board[shah + 1];// swap
		board[shah + 1] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah + 1]; // swap
		board[shah + 1] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 1] > 15 && board[shah - 1] < 47)
	{
		int temp = board[shah - 1];// swap
		board[shah - 1] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah - 1]; // swap
		board[shah - 1] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 8] > 15 && board[shah + 8] < 47)
	{
		int temp = board[shah + 8];// swap
		board[shah + 8] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah + 8]; // swap
		board[shah + 8] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 8] > 15 && board[shah - 8] < 47)
	{
		int temp = board[shah - 8];// swap
		board[shah - 8] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah - 8]; // swap
		board[shah - 8] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 7] > 15 && board[shah + 7] < 47)
	{
		int temp = board[shah + 7];// swap
		board[shah + 7] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah + 7]; // swap
		board[shah + 7] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 7] > 15 && board[shah - 7] < 47)
	{
		int temp = board[shah - 7];// swap
		board[shah - 7] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah - 7]; // swap
		board[shah - 7] = board[shah];
		board[shah] = temp;
	}
	if (board[shah + 9] > 15 && board[shah + 9] < 47)
	{
		int temp = board[shah + 9];// swap
		board[shah + 9] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah + 9]; // swap
		board[shah + 9] = board[shah];
		board[shah] = temp;
	}
	if (board[shah - 9] > 15 && board[shah - 9] < 47)
	{
		int temp = board[shah - 9];// swap
		board[shah - 9] = board[shah];
		board[shah] = temp;
		if (!kishw(board)) re 0;
		temp = board[shah - 9]; // swap
		board[shah - 9] = board[shah];
		board[shah] = temp;
	}
}
/*To solve mat2b puzzles, identify which piece is delivering checkmate,
then target that piece for attack. By systematically eliminating the opponent’s pieces 
one by one, the key attacker can be found.
*/
bool mat2b(int board[])
{
	int o, p;
	for(int i= 48; i< 64; i++)
	{ 
		p = i;
		for (int i = 0; i<64; i++)
		{
			if (board[i] == p)
			{
				o = i;
				break;
			}
		}
		board[o] = 16; // find the attacker and remove it
		if (!kishb(board))   // check new board with kish function
		{
			board[o] = i;
			int mabda, maghsad;
			for (int i = 0; i < 64; i++) // find where is the black king
			{
				if (board[i] == 4)
				{
					maghsad = i;
					break;
				}
			}
			for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
			{
				for (int j = 0; j < 64; j++)
				{
					if (board[j] == i)
					{
						mabda = j;
						break;
					}
				}
				if (mabda == 57 || mabda == 62) //if a[i] is white hourse
				{
					if (checkaw(board, mabda, maghsad)) re 0;
				}

				if (mabda < 56 && mabda >47)
				{
					if (checksw(board, mabda, maghsad)) re 0;
				}

				if (mabda == 56 || mabda == 63) //if a[i] is white Rook
				{
					if (checkrw(board, mabda, maghsad)) re 0;
				}

				if (mabda == 58 || mabda == 61) //if a[i] is white hourse
				{
					if (checkfw(board, mabda, maghsad)) re 0;
				}

				if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
				{
					if (checkfw(board, mabda, maghsad)) re 0;
					if (checkrw(board, mabda, maghsad)) re 0;
				}

				if (mabda == 60) //if a[i] is white King.
				{
					if (checkkw(board, mabda, maghsad)) re 0;
				}
			}
		}
		board[o] = i;  // revert the change to board
	}

}
bool mat2w(int board[])
{
	int o, p;
	for (int i = 48; i < 64; i++)
	{
		p = i;
		for (int i = 0; i < 64; i++)
		{
			if (board[i] == p)
			{
				o = i;
				break;
			}
		}
		board[o] = 16; // find the attacker and remove it
		if (!kishb(board))   // check new board with kish function
		{
			board[o] = i;
			int mabda, maghsad;
			for (int i = 0; i < 64; i++) // find where is the black king
			{
				if (board[i] == 4)
				{
					maghsad = i;
					break;
				}
			}
			for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
			{
				for (int j = 0; j < 64; j++)
				{
					if (board[j] == i)
					{
						mabda = j;
						break;
					}
				}
				if (mabda == 0 || mabda == 7) //if a[i] is Black Rook
				{
					if (checkrb(board, mabda, maghsad)) re 0;
				}

				if (mabda == 2 || mabda == 5) //if a[i] is Black hourse
				{
					if (checkfb(board, mabda, maghsad)) re 0;
				}

				if (mabda == 3) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
				{
					if (checkfb(board, mabda, maghsad)) re 0;
					if (checkrb(board, mabda, maghsad)) re 0;
				}

				if (mabda == 4) //if a[i] is Black King.
				{
					if (checkkb(board, mabda, maghsad)) re 0;
				}
			}
		}
		board[o] = i;  // revert the change to board
	}
	re 1;
}
/* if any pieces removed from the board should be replaced with 16 or any number between 16 to 48*/
bool mat3b(int board[])
{
	int shah;
	for (int i = 0; i < 64; i++) // Finding the black king
	{
		if (board[i] == 4)
		{
			shah = i;
			break;
		}
	}
	int o, p;
	for (int i = 48; i < 64; i++)
	{
		p = i;
		for (int i = 0; i < 64; i++)
		{
			if (board[i] == p)
			{
				o = i;
				break;
			}
		}
		board[o] = 16; // find the attacker and remove it
		if (!kishb(board))   // check new board with kish function
		{
			board[o] = i; //revert 
			if (board[o] != 57 || board[o] != 62 || board[o] > 57) //if a[i] is white hourse
			{
				int temp = abs(o-shah);
				if (temp % 9 == 0)
				{
					int t = min(o, shah);
					for (int k = 9;k < 64; k += 9)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkaw(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfw(board, mabda, maghsad)) re 0;
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkw(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 8 == 0)
				{
					int t = min(o, shah);
					for (int k = 8;k < 64; k += 8)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkaw(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfw(board, mabda, maghsad)) re 0;
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkw(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 7 == 0)
				{
					int t = min(o, shah);
					for (int k = 7;k < 64; k += 7)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkaw(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfw(board, mabda, maghsad)) re 0;
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkw(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 1 == 0)
				{
					int t = min(o, shah);
					for (int k = 1;k < 64; k += 1)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkaw(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfw(board, mabda, maghsad)) re 0;
								if (checkrw(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkw(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
			}
		}
		board[o] = i; //revert 
	}
	re 1;
}
bool mat3w(int board[]) // need to be fix ************************************************************ 
{
	int shah;
	for (int i = 0; i < 64; i++) // Finding the black king
	{
		if (board[i] == 60)
		{
			shah = i;
			break;
		}
	}
	int o, p;
	for (int i = 0; i < 16; i++)
	{
		p = i;
		for (int i = 0; i < 64; i++)
		{
			if (board[i] == p)
			{
				o = i;
				break;
			}
		}
		board[o] = 16; // find the attacker and remove it
		if (!kishw(board))   // check new board with kish function
		{
			board[o] = i; //revert 
			if (board[o] != 57 || board[o] != 62 || board[o] > 57) //if a[i] is white hourse
			{
				int temp = abs(o - shah);
				if (temp % 9 == 0)
				{
					int t = min(o, shah);
					for (int k = 9;k < 64; k += 9)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkab(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfb(board, mabda, maghsad)) re 0;
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkb(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 8 == 0)
				{
					int t = min(o, shah);
					for (int k = 8;k < 64; k += 8)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkab(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfb(board, mabda, maghsad)) re 0;
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkb(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 7 == 0)
				{
					int t = min(o, shah);
					for (int k = 7;k < 64; k += 7)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkab(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfb(board, mabda, maghsad)) re 0;
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkb(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
				if (temp % 1 == 0)
				{
					int t = min(o, shah);
					for (int k = 1;k < 64; k += 1)
					{
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) // find where is the black king
						{
							if (board[i] == k + t)
							{
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) // finding where are the oppenet(white) pieces
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 57 || mabda == 62) //if a[i] is white hourse
							{
								if (checkab(board, mabda, maghsad)) re 0;
							}

							if (mabda < 56 && mabda >47)
							{
								if (checksb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 56 || mabda == 63) //if a[i] is white Rook
							{
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 58 || mabda == 61) //if a[i] is white hourse
							{
								if (checkfb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfb(board, mabda, maghsad)) re 0;
								if (checkrb(board, mabda, maghsad)) re 0;
							}

							if (mabda == 60) //if a[i] is white King.
							{
								if (checkkb(board, mabda, maghsad)) re 0;
							}
						}
					}
				}
			}
		}
		board[o] = i; //revert 
	}
	re 1;
}
int main()
{
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 256; i++)
	{
		SetConsoleTextAttribute(o, i);
		cout << i<<"_Hello world\n";
	}
	
	while (0)
	{
		cout << "1 new game\n";
		cout << "2 load game\n";
		cout << "3 setting\n";
		cout << "4 exit\n";
		int dastor;
		cin >> dastor;
		if (dastor == 1)
		{
			bool turn = 1;
			int a[64];
			for (int i = 0; i < 64; i++) a[i] = i;
			print(a);
			while (1)
			{
				bool check = 0;
				string s;
				cin >> s;
				int i = 0, j = 0;
				/*exmple input from a player for moving b2toc2
				* 97 is a constant number to convert a digit to character
				* 8 is number of column for chess
				* 48 this is the accii code for numbers so each
				*   number in character format will be converted to digit
				* At the end there is -1 because array starts from element 0
				* a[i] is origin before move
				* a[j] is distination before move
				*/
				i = ((s[0] - 97) * 8) + (s[1] - 48) - 1;
				j = ((s[4] - 97) * 8) + (s[5] - 48) - 1;

				if (a[i] < 16)
				{
					if (turn)
					{
						if (!kishb(a))
						{
							if (a[i] == 1 || a[i] == 6) // if a[i] is black hourse
							{
								if (checkab(a, i, j))check = 1;
							}
							if (a[i] < 16 && a[i] >7)
							{
								if (checksb(a, i, j)) check = 1;
							}
							if (a[i] == 0 || a[i] == 7) // if a[i] is black Rook
							{
								if (checkrb(a, i, j))check = 1;
							}
							if (a[i] == 2 || a[i] == 5) // if a[i] is black hourse
							{
								if (checkfb(a, i, j))check = 1;
							}
							if (a[i] == 3) // if a[i] is black Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfb(a, i, j))check = 1;
								if (checkrb(a, i, j))check = 1;
							}
							if (a[i] == 4) // if a[i] is black King.
							{
								if (checkkb(a, i, j))check = 1;
							}
							if (check)
							{
								turn = !turn;
								int temp = a[i];
								a[i] = a[j];
								a[j] = temp;
								/* if any pieces removed from the board should be replaced with 16 or any number between 16 to 47*/
								if (a[i] < 16 || a[i]>47)a[i] = 16;
								system("cls");
								print(a);
							}
							else
							{
								cout << "Error in positioning\n";
							}
						}
						else
						{
							if (mat1b(a) && mat2b(a) && mat3b(a))
							{
								cout << "Check mate";
								break;
							}
							else
								cout << "Kish......Kish......Kish...\n";
						}
					}
					else
						cout << "Error     Not your turn..!! \n";
				}
				else if (a[i] > 47)
				{
					if (!turn)
					{
						if (!kishw(a))
						{
							if (a[i] == 57 || a[i] == 62) //if a[i] is white hourse
							{
								if (checkaw(a, i, j))check = 1;
							}

							if (a[i] < 56 && a[i] >47)
							{
								if (checksw(a, i, j)) check = 1;
							}

							if (a[i] == 56 || a[i] == 63) //if a[i] is white Rook
							{
								if (checkrw(a, i, j))check = 1;
							}

							if (a[i] == 58 || a[i] == 61) //if a[i] is white hourse
							{
								if (checkfw(a, i, j))check = 1;
							}

							if (a[i] == 59) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
							{
								if (checkfw(a, i, j))check = 1;
								if (checkrw(a, i, j))check = 1;
							}

							if (a[i] == 60) //if a[i] is white King.
							{
								if (checkkw(a, i, j))check = 1;
							}
							if (check)
							{
								turn = !turn;
								int temp = a[i];
								a[i] = a[j];
								a[j] = temp;
								if (a[i] < 16 || a[i]>47)a[i] = 16;// /////////////////////////////////////////////////
								system("cls");
								print(a);
							}
							else
							{
								cout << "Error in Destination positioning\n";
							}
						}
						else
						{
							cout << "Kish......Kish......Kish...\n";
						}
					}
					else
						cout << "Error     Not your turn..!!\n ";
				}
				else
					cout << "Error in Origin positioning\n";
			}
		}
		if (dastor == 2)
		{

		}
		if (dastor == 3) 
		{

		}
		if (dastor == 4) 
		{
			break;
		}
	}
	
}
/***** Trying to create square sape in console
int main()
{
	cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
	cout << char(179) << char(178) << char(178) << char(176) << char(176) << char(179) << endl;
	cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;

}**/