#pragma once

#include"stack.h"

#include<iostream>
#include<assert.h>
using namespace std;

#define BTDataType char

typedef struct BTreeNode
{
	BTDataType _data;
	struct BTreeNode* _left;
	struct BTreeNode* _right;
}BTNode;

//�����������飬�������±��ָ��(�±��ʼΪ0)
BTNode* ����������(BTDataType* arr, int* pi);

void ���ٶ�����(BTNode** root);

void ǰ�����(BTNode* root);

void �������(BTNode* root);

void �������(BTNode* root);

void ��ջ��ǰ�����(BTNode* root);

void ��ջ���������(BTNode* root);

void ��ջ�ĺ������(BTNode* root);