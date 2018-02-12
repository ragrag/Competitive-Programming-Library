#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	
	int ar[30];
	int size;
	queue <int> myQ;
	int t;
	cin >> t;
	while (t--){
		
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			myQ.push(i);
		}


		for (int i = 1; i <= size; i++)
		{

			for (int j = 0; j <i % myQ.size(); j++)
			{
				myQ.push(myQ.front());
				myQ.pop();
				

			}
		
			ar[myQ.front()] = i;		
			myQ.pop();
		}



		for (int i = 0; i < size; i++)
		{
			
			if (i== size-1)
				cout << ar[i] << endl;
			else 
			cout << ar[i] << " ";

		}

	}
	return 0;
}