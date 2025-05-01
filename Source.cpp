#include <iostream>
#include <string>
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
				   " RW "," AW "," FW "," VW "," KW "," FW "," AW "," RW ",
				   " SW "," SW "," SW "," SW "," SW "," SW "," SW "," SW "
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
	if(board[j] >15)
	{
		for (int ii = 8; ii < 64; ii += 8) // forward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -8; ii > 0; ii -= 8) // backward move
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
	if (board[j] <  48)
	{
		for (int ii = 8; ii < 64; ii += 8) // forward move
		{
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47) break;
		}
		for (int ii = -8; ii > 0; ii -= 8) // backward move
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
	if (board[j] < 48 )
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
int main()
{
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
		if (a[i] == 1 || a[i] == 6) // if a[i] is black hourse
		{
			if (checkab(a, i, j))check = 1;
		}
		if (a[i] == 57 || a[i] == 62) //if a[i] is white hourse
		{
			if (checkaw(a, i, j))check = 1;
		}
		if (a[i] < 16 && a[i] >7)
		{
			if (checksb(a, i, j)) check= 1;
		}
		if (a[i] < 56 && a[i] >47)
		{
			if (checksw(a, i, j)) check = 1;
		}
		if (a[i] == 0 || a[i] == 7) // if a[i] is black Rook
		{
			if (checkrb(a, i, j))check = 1;
		}
		if (a[i] == 56 || a[i] == 63) //if a[i] is white Rook
		{
			if (checkrw(a, i, j))check = 1;
		}
		if (a[i] == 2 || a[i] == 5) // if a[i] is black hourse
		{
			if (checkfb(a, i, j))check = 1;
		}
		if (a[i] == 58 || a[i] == 61) //if a[i] is white hourse
		{
			if (checkfw(a, i, j))check = 1;
		}
		if (a[i] == 3 ) // if a[i] is black Queen. Queen moves are combination of Bishop and Rook
		{
			if (checkfb(a, i, j))check = 1;
			if (checkrb(a, i, j))check = 1;
		}
		if (a[i] == 59 ) //if a[i] is white Queen. Queen moves are combination of Bishop and Rook
		{
			if (checkfw(a, i, j))check = 1;
			if (checkrw(a, i, j))check = 1;
		}
		if (a[i] == 4) // if a[i] is black King.
		{
			if (checkkb(a, i, j))check = 1;
		}
		if (a[i] == 60) //if a[i] is white King.
		{
			if (checkkw(a, i, j))check = 1;
		}
		if (check)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			if (a[i] < 16 || a[i]>47)a[i] = 16;// /////////////////////////////////////////////////
			system("cls");
			print(a);
		}
		else
		{
			cout << "Error";
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