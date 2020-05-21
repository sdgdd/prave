#pragma once
#include <iostream>


class Math
{
public:
	struct Node{
		int data;
		Node* next;
		Node* pre;
	};


	Node* nodedhead;
	Node* nodedtail;
	int lengths=0;
	Node* node;
	int length=0;

public:
	Math();
	bool Solution(std::string);
	bool AddNode(int);
	bool singleInset(int);
	bool mergeTwoLists(Math math);
	int removeDuplicates(int & a);
	~Math();
};

Math::Node* mergeTwoList(Math::Node* L1, Math::Node *L2);