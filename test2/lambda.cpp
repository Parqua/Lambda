#include <cstdio>

int main(){
	int x = 5;
	auto func = [=](){x = 5;};
	func();
}
