#pragma once

#include "resource.h"

#define CIRCLE_SIZE 16

struct st_Node
{
	// TODO : parent 필요?
	st_Node()
		:_left(nullptr), _right(nullptr), _parent(nullptr), _value(0)
	{
	}

	st_Node* _left;
	st_Node* _right;
	st_Node* _parent;

	int _value;
	int _xPos;
};

bool InsertNode(int param);

void PreorderPrint();	// 전위순회 출력
void InorderPrint();	// 중위순회 출력
void PostorderPrint();	// 후위순회 출력

void printPreorder(st_Node* param, int depth);
void printInorder(st_Node* param, int depth);
void printPostorder(st_Node* param);

void DrawCircle(int x, int y, bool param = false);
void DrawMyText(int x, int y, const WCHAR* param);
void DrawNode(int x, int y, int value, bool isRed = false);