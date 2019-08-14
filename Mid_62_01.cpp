#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int r , n1 , n2 , n3 , n4 , n5 , n6 , count;
	n1 = n2 = n3 = n4 = n5 = n6 = 0;

	srand(time(NULL));
	cout << "Random number 1 to 6" << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	for(int n = 0 ; n < 10 ; n++)
	{
		for (int i = 1 ; i <= 10 ; i++)
		{
			r = rand()%6+1;
			cout << "\t" << r ;
			if(r == 1)n1++;
			if(r == 2)n2++;
			if(r == 3)n3++;
			if(r == 4)n4++;
			if(r == 5)n5++;
			if(r == 6)n6++;
		}
		cout << endl<<endl;
	}
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "Number    " << "Requency" << endl;
	cout << "1             " << n1 << endl;
	cout << "2             " << n2 << endl;
	cout << "3             " << n3 << endl;
	cout << "4             " << n4 << endl;
	cout << "5             " << n5 << endl;
	cout << "6             " << n6 << endl;
	return(0);
}
