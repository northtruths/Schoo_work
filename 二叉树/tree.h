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

//给的数据数组，和数组下标的指针(下标初始为0)
BTNode* 建个二叉树(BTDataType* arr, int* pi);

void 销毁二叉树(BTNode** root);

void 前序遍历(BTNode* root);

void 中序遍历(BTNode* root);

void 后序遍历(BTNode* root);

void 用栈的前序遍历(BTNode* root);

void 用栈的中序遍历(BTNode* root);

void 用栈的后序遍历(BTNode* root);