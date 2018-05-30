#include <iostream>
using namespace std;
#include <string>
int main()
{
	int A=0;
	int B=0;
	int C=0;
	char car[3];
	string  ar[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> ar[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (ar[i][1] == '>')
		{
			if (ar[i][0] == 'A')
				A++;
			else if (ar[i][0] == 'B')
				B++;
			else C++;
		}
		else if (ar[i][1] == '<')
		{
			if (ar[i][2] == 'A')
				A++;
			else if (ar[i][2] == 'B')
				B++;
			else C++;
		}
	}
	
	if (A != 0 && B != 0 && C != 0)
	{
	
		cout << "Impossible";
		goto end;
	}
	else  
	{
		if (A == 2)
		{
			car[0] = 'A';
			(B < C) ? car[1] = 'C' : car[1] = 'B';
			(car[1] == 'C') ? car[2] = 'B' : car[2] = 'C';
		}
		else if (B == 2)
		{
			car[0] = 'B';
			(A < C) ? car[1] = 'C' : car[1] = 'A';
			(car[1] == 'C') ? car[2] = 'A' : car[2] = 'C';
		}
		else 
		{
			car[0] = 'C';
			(A < B) ? car[1] = 'B' : car[1] = 'A';
			(car[1] == 'B') ? car[2] = 'A' : car[2] = 'B';
		}
	}
	cout << car[2] << car[1] << car[0];
	goto end;
end : 
	cout << endl;
	return 0;
}
