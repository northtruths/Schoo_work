#define _CRT_SECURE_NO_WARNINGS

#include"tree.h"

BTNode* 建个二叉树(BTDataType* arr, int* pi)
{
	if (arr[*pi] == '#')
	{
		++(*pi);
		return nullptr;
	}

	BTNode* node = (BTNode*)malloc(sizeof(BTNode));

	node->_data = arr[(*pi)++];
	node->_left = 建个二叉树(arr, pi);
	node->_right = 建个二叉树(arr, pi);
	return node;
}

void 销毁二叉树(BTNode** root)
{
	//后序释放
	if (!root)	return;

	销毁二叉树(&(*root)->_left);
	销毁二叉树(&(*root)->_right);
	free(*root);
	*root = nullptr;
}

void 前序遍历(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	cout << root->_data;
	前序遍历(root->_left);
	前序遍历(root->_right);
	return;
}

void 中序遍历(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	中序遍历(root->_left);
	cout << root->_data;
	中序遍历(root->_right);
	return;
}

void 后序遍历(BTNode* root)
{
	if (root == nullptr)
	{
		cout << '#';
		return;
	}
	后序遍历(root->_left);
	后序遍历(root->_right);
	cout << root->_data;
	return;
}

void 用栈的前序遍历(BTNode* root)
{
	assert(root);
	BTNode* p = root;//当前的结点指针
	

}

void 用栈的中序遍历(BTNode* root)
{

}

void 用栈的后序遍历(BTNode* root);