#include <cstdio>

int main(){
	int x = 5;
	auto func = [=](){printf("THIS %d", x);};
	func();
}
