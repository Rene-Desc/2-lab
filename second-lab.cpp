#include <iostream>
#include "matrixx.hpp"

int main(){
	mx::matrixx m1(2,3);
	m1.print();
	mx::matrixx m2(2,3);
	m2 = m1;
	m2.print();
}