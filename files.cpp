#include <iostream>
#include <string>
#include <vector>
class base {
public:
	int age;
};
class d1 {
public:
	int d1;
};

void swap(int& a,int&b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int get() {
	return 1;
}

int main() {
	
	for (int i = 0; i < 50; i++) {
		cout << "i="<<i<<endl;
		return 0;
	}
}

