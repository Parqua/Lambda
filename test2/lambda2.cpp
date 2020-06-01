#include <cstdio>

void badfunc(int a){ a = 29;}

int main(){
	int x = 5;
	badfunc(x);
	printf("It's five. %d\n", x);
	auto func = [&](){x = 9;};
	func();
	printf("Value changed. %d\n", x);
}
