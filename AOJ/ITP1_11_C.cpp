#if 0
#include<iostream>
using namespace std;
void moveE(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[3];
	dice[3] = dice[5];
	dice[5] = dice[2];
	dice[2] = tmp;
}
void moveN(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[1];
	dice[1] = dice[5];
	dice[5] = dice[4];
	dice[4] = tmp;
}
void moveS(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[4];
	dice[4] = dice[5];
	dice[5] = dice[1];
	dice[1] = tmp;
}
void moveW(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[2];
	dice[2] = dice[5];
	dice[5] = dice[3];
	dice[3] = tmp;
}
int main()
{
	int dice1[6], dice2[6];
	for (int i = 0; i < 6; i++)
		cin >> dice1[i];
	for (int i = 0; i < 6; i++)
		cin >> dice2[i];
	for(int i = 0;i < 6;i++)
	{
		if(dice2[i] == dice1[0])
		{
			switch(i)
			{
			case 1:
				moveN(dice2);
				break;
			case 2:
				moveE(dice2);
				break;
			case 3:
				moveW(dice2);
				break;
			case 4:
				moveN(dice2);
				break;
			case 5:
				moveN(dice2);
				moveN(dice2);
				break;
			}
		}
	}
	int tmp[4] = { dice2[1],dice2[2],dice2[4],dice2[3] };
	bool isSame = false;
	for(int i = 0;i < 4;i++)
	{
		if(tmp[i] == dice1[1])
		{
			if(tmp[(i + 1) % 4] == dice1[2] && tmp[(i + 2) % 4] == dice1[4] && tmp[(i + 3) % 4] == dice1[3])
			{
				isSame = true;
				break;
			}
		}
	}
	if (isSame)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
#endif
