#include "ProvaClasse.h"
#include <iostream>

int main() {
	ProvaClasse* ogg1 = new ProvaClasse();
	//ProvaClasse* ogg2 = ProvaClasse(4 , 3 , 2); Non restituisce un pointer.
	ProvaClasse* ogg2 = new ProvaClasse(4 , 3 , 2);

	std::cout << ogg1->toString() << std::endl;

	return 0;
}
