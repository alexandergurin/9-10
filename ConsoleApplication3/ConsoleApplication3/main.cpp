#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

void main()
{
	queue<char> my;
	queue<char> my2;
	vector<char> temp;
	my.push('Q');
	my.push('B');
	my.push('A');
	my.push('T');
	cout << "---------------------------- Queue ----------------------------" << endl;
	my2 = my;
	for (int i = 0; i < my2.size(); i++)
	{
		cout << my.front() << endl;
		temp.push_back(my.front());
		my.pop();
	}
	cout << "---------------------------- Queue after sort ----------------------------" << endl;
	vector<char> temp_for_sort;
	
	int k = 0;
	bool flag = 0;

	temp_for_sort.push_back(temp[0]);

	for (int i = 1; i < temp.size(); i++)
	{
		for (int j = 0; j < temp_for_sort.size(); j++)
		{
			if (temp_for_sort[j] < temp[i]) { k++;}
		}
		if (k == 0)
		{
			temp_for_sort.push_back(temp[i]);
		}
		else
		{
			vector<char>::iterator it = temp_for_sort.end();
			it -= k;
			temp_for_sort.insert(it, temp[i]);
			k = 0;
			it = temp_for_sort.begin();
		}
	}
	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		my.push(temp_for_sort[i]);
	}
	my2 = my;
	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		cout << my.front() << endl;
		my.pop();
	}
	my = my2;
	cout << "----------------------- Add in vector elements more A -----------------" << endl;
	vector<char> my_vector;

	for (int i = 0; i < my.size(); i++)
	{
		if (my2.front() >= 'B')
		{
			my_vector.push_back(my2.front());
		}
		my2.pop();
	}
	for (int i = 0; i < my_vector.size(); i++)
	{
		cout << my_vector[i] << endl;
	}
	cout << "----------------------- Sort container -----------------" << endl;
	cout << "----------------------- Queue sort -----------------" << endl;
	temp_for_sort.clear();
	temp_for_sort.push_back(temp[0]);

	for (int i = 1; i < temp.size(); i++)
	{
		for (int j = 0; j < temp_for_sort.size(); j++)
		{
			if (temp_for_sort[j] > temp[i]) { k++; }
		}
		if (k == 0)
		{
			temp_for_sort.push_back(temp[i]);
		}
		else
		{
			vector<char>::iterator it = temp_for_sort.end();
			it -= k;
			temp_for_sort.insert(it, temp[i]);
			k = 0;
			it = temp_for_sort.begin();
		}
	}
	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		my2.push(temp_for_sort[i]);
	}
	my = my2;
	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		cout << my.front() << endl;
		my.pop();
	}
	my = my2;
	cout << "----------------------- Vector sort -----------------" << endl;
	temp_for_sort.clear();
	temp_for_sort.push_back(my_vector[0]);

	for (int i = 1; i < my_vector.size(); i++)
	{
		for (int j = 0; j < temp_for_sort.size(); j++)
		{
			if (temp_for_sort[j] > my_vector[i]) { k++; }
		}
		if (k == 0)
		{
			temp_for_sort.push_back(my_vector[i]);
		}
		else
		{
			vector<char>::iterator it = temp_for_sort.end();
			it -= k;
			temp_for_sort.insert(it, my_vector[i]);
			k = 0;
			it = temp_for_sort.begin();
		}
	}
	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		cout << temp_for_sort[i] << endl;
	}
	cout << "----------------------- Third container -----------------" << endl;
	vector<char> rez;
	for (int i = 0; i < my2.size(); i++)
	{
		rez.push_back(my.front());
		my.pop();
	}
	for (int i = 0; i < my_vector.size(); i++)
	{
		rez.push_back(my_vector[i]);
	}
	for (int i = 0; i < rez.size(); i++)
		cout << rez[i] << endl;
	cout << "T in vector: ";
	k = 0;
	for (int i = 0; i < rez.size(); i++)
		if (rez[i] == 'T') k++;
	cout << k << endl;
	system("pause");
}