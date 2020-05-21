#include "Math.h"
#include <stack>
#include <map>


Math::Math()
{
	node = new Node;
	node->data = 0;
	node->next = 0;
	node->pre  = 0;
	nodedhead = new Node;
	nodedtail = nodedhead;
	nodedhead->data = 0;
	nodedhead->next = 0;
}


Math::~Math()
{
}


bool Math::Solution(std::string strs){
	std::map<char, char> map{ {'[',']'}, {'(',')'}, {'{','}'} };
	std::stack<char> stac;
	for (auto ch:strs){
		if (stac.empty() || map[stac.top()] != ch){
			stac.push(ch);
		}
		else{
			stac.pop();
		}
	}
	if (stac.empty()){
		return 1;
	}
		return 0;
	
}


bool Math::AddNode(int data){
	Node *tmp = new Node;
	tmp->data = data;
	if (node->next==0){
		tmp->next = node->next;
		node->next = tmp;		
		tmp->pre = node;
	}
	else{
		node->next->pre = tmp;
		tmp->next = node->next;
		node->next = tmp;
		tmp->pre = node;
	}

	++length;
	return 1;
}


bool Math::mergeTwoLists(Math math){
	Node * tmp = node->next;
	Node * ttp = math.node->next;
	Node * tsp;
	while (tmp->next && ttp)
	{
		tsp = ttp;
		ttp = ttp->next;
		if (tmp->data > tsp->data){
			tmp->pre->next = tsp;
			tsp->pre = tmp->pre;
			tsp->next = tmp;
			tmp->pre = tsp;
			tmp = tmp->next;
		}
		else
		{
			tsp->next = tmp->next;
			tmp->next->pre = tsp;
			tmp->next = tsp;
			tsp->pre = tmp;
			tmp = tsp->next;
		}
	}
	if (ttp){
		tmp->next = ttp;
		ttp->pre = tmp;
	}
	return 1;

}




Math::Node* mergeTwoList(Math::Node* L1, Math::Node* L2){
	if (L1 == NULL)
		return L2;
	if (L2 == NULL)
		return L1;
	if (L1->data < L2->data){
		L1->next = mergeTwoList(L1->next, L2);
		return L1;
	}
	else
	{
		L2->next = mergeTwoList(L2->next, L1);
		return L2;
	}

}



bool Math::singleInset(int data){
	Node* tmp=new Node;
	tmp->data = data;
	tmp->next = 0;
	if (nodedhead==nodedtail){
		nodedhead->next = tmp;
	}
	else{
		nodedtail->next = tmp;
	}
	nodedtail = tmp;
	lengths++;

	return 1;
}