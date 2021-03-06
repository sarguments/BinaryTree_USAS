#pragma once

#include "resource.h"

struct st_Node
{
	st_Node()
		:_left(nullptr), _right(nullptr), _parent(nullptr), _value(0), _xPos(0)
	{
	}

	~st_Node()
	{
		_left = nullptr;
		_right = nullptr;
		_parent = nullptr;
		_value = -999;
		_xPos = -999;
	}

	st_Node* _left;
	st_Node* _right;
	st_Node* _parent;

	int _value;
	int _xPos;
};

// extern
extern st_Node* g_rootNode;

bool InsertNode(int param);
bool DeleteNode(int param);
void inDeleteNode(st_Node* parent, st_Node* node);
bool ReleaseNode(st_Node* param);

void PreorderPrint();	// 전위순회 출력
void InorderPrint();	// 중위순회 출력
void PostorderPrint();	// 후위순회 출력

void printPreorder(st_Node* param, int depth);
void printInorder(st_Node* param, int depth);
void printPostorder(st_Node* param);

void DrawCircle(int x, int y, bool param = false);
void DrawMyText(int x, int y, const WCHAR* param);
void DrawNode(int x, int y, int value, bool isRed = false);