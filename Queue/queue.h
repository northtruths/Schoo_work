#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

//技术还不够，不准使用自定义类型给模板
template<class T1>
class Queue
{
public:
	//默认构造初始化,参数为要初始化的数据个数
	Queue(int size = 0)
		:_arr(new T1[size] {})
		, _size(size)
		, _num(0)
		, _head(_arr)
		, _tail(_arr + size - 1)
		, _state(_num == size ? 1 : 0)
	{
		

	}
	//析构函数销毁
	~Queue()
	{
		delete[] _arr;
	}
	//判空
	bool isEmpty()
	{
		if (_num == 0 || _size == 0)
			return true;
		else
			return false;
	}
	//判满
	bool isFull()
	{
		if(_num == _size)
			return true;
		else
			return false;
	}
	//计算元素个数
	int Num()
	{
		return _num;
	}
	//入队列
	//void Push(const T1& a)
	//{
	//	if (isFull())
	//	{
	//		T1* _new = new T1[_size * 2]{};
	//		memcpy(_new, _arr, _size * sizeof(T1));
	//		delete[] _arr;
	//		_arr = _new;
	//		_size *= 2;
	//		printf("扩容了！\n");
	//	}
	//	_arr[_num] = a;
	//	++_num;
	//}

	void Push(const T1& a)
	{
		if (isFull())
		{
			T1* _new = new T1[_size * 2]{};
			memcpy(_new, _arr, _size * sizeof(T1));
			delete[] _arr;
			_arr = _new;
			_size *= 2;
			printf("扩容了！\n");
		}
		_arr[_num] = a;
		++_num;
	}
	//出队列
	void Pop()
	{
		if (isEmpty())
		{
			return;
		}

		//delete _arr[_num - 1];//因为用的delete销毁，所以若是自定义类型，开空间时必须用 new 来开
		--_num;
	}


	T1& operator[](int pos)
	{
		return _arr[pos];
	}
private:
	T1* _arr;//数据数组
	int _size;//数组大小(能存多少个数据)
	int _num;//元素个数
	T1* _head;//头指针
	T1* _tail;//尾指针
	bool _state;//队满标志
};


