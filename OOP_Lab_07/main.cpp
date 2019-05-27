#include <iostream>
#include <list>
#include<fstream>
#include <ctime> 


using namespace std;

int main()
{
	int a = clock();

	ifstream file; 

	file.open("my_file.txt"); 
	if (!file)
	{
		cout << "file not open" << endl;
		return -1;
	}

	list<int> l;
	int max;
	int min;
	int number;
	int count = 0;
	while(!file.eof())
	{
		file >> number;
		l.push_back(number);
		count++;
	}

	l.sort();
	cout << "min is " << l.front() << endl;
	cout << "max is " << l.back() << endl;

	

	for (int i = 0; i < count; i++)
	{
		cout << "element " << i << " = " << l.front() << endl;
		l.pop_front();
	}
	file.close();
	cout << "Time:" << ((float)a / CLOCKS_PER_SEC) << endl;
	system("pause");

}
