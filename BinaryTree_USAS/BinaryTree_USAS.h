#pragma once

#include "resource.h"

/*
루트가 널인가?
루트부터 현재 노드 값 보다 큰지 작은지 판단해서
로컬 포인터에 작으면 left, 크면 right 노드 포인터 넣고
로컬 포인터가 nullptr이면 만들고, 아니면 로컬포인터로 진입

전위, 중휘, 후위의 차이는 값을 언제 찍냐의 차이

*/

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
};

bool InsertNode(int param);
void PreorderPrint();	// 전위순회 출력
void InorderPrint();	// 중위순회 출력
void PostorderPrint();	// 후위순회 출력

void printPreorder(st_Node* param);
void printInorder(st_Node* param);
void printPostorder(st_Node* param);
