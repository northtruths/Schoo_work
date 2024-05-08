#define _CRT_SECURE_NO_WARNINGS

#include"queue.h"

int main()
{
	Queue<int> test1(4);
	test1.Push(1);
	test1.Push(2);
	test1.Push(3);
	test1.Push(4);
	test1.Push(5);

	for(int i = 0; i < test1.Num(); ++i)
	{
		cout << test1[i] << " ";
	}
	cout << endl;

	test1.Pop();
	test1.Pop();
	
	for (int i = 0; i < test1.Num(); ++i)
	{
		cout << test1[i] << " ";
	}

	cout << endl;
	for (int i = 0; i < test1.Num(); ++i)
	{
		++test1[i];
		cout << test1[i] << " ";
	}
	return 0;
}
