#include <iostream>

using namespace std;

class Parent {
public : 
	void parent() {
	std::cout << " Ez a szülő osztály " << std::endl;
	}
};

class Gyerek : public Parent {
public :
	void gyerek() {
	std::cout << " Ez a gyerek osztály " << std::endl;
	}
};

int main(){
	Parent* something = new Gyerek();
	something->parent();
	something->gyerek();
	}
