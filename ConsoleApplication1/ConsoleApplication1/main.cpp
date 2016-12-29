#include <iostream>
#include <queue>
#include <string>
#include <Windows.h>
#include <vector>
using namespace std;

int main()
{
	queue<char> my_queue;
	my_queue.push('1');
	my_queue.push('2');
	my_queue.push('3');
	my_queue.push('4');
	my_queue.push('5');
	my_queue.push('6');
	my_queue.push('7');
	my_queue.push('8');
	queue<char> my_queue2;
	my_queue2 = my_queue;
	cout << "Queue: " << endl;
	for (int i = 0; i < my_queue.size(); i++)
	{
		cout << my_queue2.front() << endl;
		my_queue2.pop();
	}
	my_queue.pop();
	my_queue.pop();
	my_queue.push('a');
	my_queue.push('b');
	my_queue.push('c');
	my_queue2 = my_queue;
	int size = 4;
	cout << "Queue: " << endl;
	for (int i = 0; i < my_queue.size(); i++)
	{
		cout << my_queue2.front() << endl;
		my_queue2.pop();
	}
	cout << "Vector" << endl;
	vector<char> my_vector;
	my_vector.push_back('q');
	my_vector.push_back('w');
	my_vector.push_back('e');
	my_vector.push_back('r');
	int n = 0;
	int k = 0;
	cin >> n >> k;
	vector<char>::iterator p;
	p = my_vector.begin();
	for (int i = 0; i < n; i++)
	{
		p++;
	}
	my_vector.erase(p, p + k);
	for (int i = 0; i < size; i++)
	{
		my_vector.push_back(my_queue.front());
		my_queue.pop();
	}
	cout << "Result vector: ";
	for (int i = 0; i < my_vector.size(); i++)
	{
		cout << my_vector[i] << " ";
	}
	cout << endl;
	system("pause");
}