#define _CRT_SECURE_NO_WARNINGS

#include"tree.h"

BTNode* ����������(BTDataType* arr, int* pi)
{
	if (arr[*pi] == '#')
	{
		++(*pi);
		return nullptr;
	}

	BTNode* node = (BTNode*)malloc(sizeof(BTNode));

	node->_data = arr[(*pi)++];
	node->_left = ����������(arr, pi);
	node->_right = ����������(arr, pi);
	return node;
}

void ���ٶ�����(BTNode** root)
{
	//�����ͷ�
	if (!root)	return;

	���ٶ�����(&(*root)->_left);
	���ٶ�����(&(*root)->_right);
	free(*root);
	*root = nullptr;
}

void ǰ�����(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	cout << root->_data;
	ǰ�����(root->_left);
	ǰ�����(root->_right);
	return;
}

void �������(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	�������(root->_left);
	cout << root->_data;
	�������(root->_right);
	return;
}

void �������(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	�������(root->_left);
	�������(root->_right);
	cout << root->_data;
	return;
}

void ��ջ��ǰ�����(BTNode* root)
{
	assert(root);
	BTNode* p = root;//��ǰ�Ľ��ָ��
	

}

void ��ջ���������(BTNode* root)
{

}

void ��ջ�ĺ������(BTNode* root);