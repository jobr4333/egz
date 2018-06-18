#include <iostream>
#include "header.h"
using std::cout; using std::endl;
int main() {
	Zmogus A;
	Studentas B;
	Zmogus * A = &B;
	B.setVardas("oba");
	B.getVardas();
}