#include<iostream> 
#include "res.h"
#include<queue>
using namespace std;

void main() {

	Object *a = new Object("data1");
	Object *b = new Object("data2");
	Object *c = new Object("data3");
	cout << "---------------------------- Queue -----------------------------";
	queue<Object> container;
	container.push(*a);
	container.push(*b);
	container.push(*c);
	cout << endl;
	int size = container.size();
	for (int i = 0; i < size; i++)
	{
		cout << "----- Element " << i + 1 << " -----" << endl;
		cout << container.front();
		container.pop();
		cout << endl;
	}
	system("pause");
}