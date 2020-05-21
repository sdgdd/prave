#include <iostream>
#include "Math.h"

int main(){
	Math math;
	Math math2;
	std::string strs{ "({()})(){}{}" };
	int n{5};
	int a[]{1,1,2,3,5,5,6,8};
	for (int i = 1; i <= n; i+=2){
		math.singleInset(i);
	}
	for (int i = 2; i <= n; i += 2){
		math2.singleInset(i);
	}


	//math.AddNode(12);
	math.AddNode(9);
	math.AddNode(6);
	math.AddNode(4);
	math.AddNode(1);
	
	math2.AddNode(11);
	math2.AddNode(10);
	math2.AddNode(5);	
	math2.AddNode(4);
	math2.AddNode(2);
	

	
	Math::Node *tmp;
    math.mergeTwoLists(math2);
	mergeTwoList(math.nodedhead,math2.nodedhead);
	tmp = math.node->next;
	while(tmp){
		std::cout << tmp->data << "   ";
		tmp = tmp->next;
	}
	//std::cout << math.Solution(strs) << std::endl;
}