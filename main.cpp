#include <iostream>
#include "cust-class/keymanage.h"

class Key key;

int main() {

	int inputKey[key.keylen];
	int val;

	std::cout << "Keys["<<key.keylen<<"]:  ";
	for(int i=0; i<key.keylen; ++i)
	{
		std::cin >> val;
		inputKey[i] = val;
	}

    key.createKey(inputKey);

    return 0;
}