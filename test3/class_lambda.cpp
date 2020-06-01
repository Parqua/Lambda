#include "class_lambda.hpp"
#include <cstdio>

template <typename Func>
void Classy::get_lambda(Func arbit){
	if(arbit()){
		printf("Lambda returned true.\n");
	}
	else{
		printf("Lambda returned false.\n");
	}
}

int main(){
	auto truth = [](){return true;};
	auto falsehood = [](){return false;};
	Classy associate;
	associate.get_lambda(truth);
	associate.get_lambda(falsehood);
}
