#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

//��������������׼ʹ���Զ������͸�ģ��
template<class T1>
class Queue
{
public:
	//Ĭ�Ϲ����ʼ��,����ΪҪ��ʼ�������ݸ���
	Queue(int size = 0)
		:_arr(new T1[size] {})
		, _size(size)
		, _num(0)
		, _head(_arr)
		, _tail(_arr + size - 1)
		, _state(_num == size ? 1 : 0)
	{
		

	}
	//������������
	~Queue()
	{
		delete[] _arr;
	}
	//�п�
	bool isEmpty()
	{
		if (_num == 0 || _size == 0)
			return true;
		else
			return false;
	}
	//����
	bool isFull()
	{
		if(_num == _size)
			return true;
		else
			return false;
	}
	//����Ԫ�ظ���
	int Num()
	{
		return _num;
	}
	//�����
	//void Push(const T1& a)
	//{
	//	if (isFull())
	//	{
	//		T1* _new = new T1[_size * 2]{};
	//		memcpy(_new, _arr, _size * sizeof(T1));
	//		delete[] _arr;
	//		_arr = _new;
	//		_size *= 2;
	//		printf("�����ˣ�\n");
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
			printf("�����ˣ�\n");
		}
		_arr[_num] = a;
		++_num;
	}
	//������
	void Pop()
	{
		if (isEmpty())
		{
			return;
		}

		//delete _arr[_num - 1];//��Ϊ�õ�delete���٣����������Զ������ͣ����ռ�ʱ������ new ����
		--_num;
	}


	T1& operator[](int pos)
	{
		return _arr[pos];
	}
private:
	T1* _arr;//��������
	int _size;//�����С(�ܴ���ٸ�����)
	int _num;//Ԫ�ظ���
	T1* _head;//ͷָ��
	T1* _tail;//βָ��
	bool _state;//������־
};


