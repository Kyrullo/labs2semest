#include "list.h"

int main() {

Packages *firstpackage = newPackages("Yes", "Nova Poshta", 12, 09, "Clothes", "120");
Packeges *secondpackage = newPackages("Yes", "Justin", 11, 22, "Iphone", "150");
Packages *thirdpackage = new Packages("Yes", "Ukr Poshta", 11, 28, "Tshirt", "400");
Packages *fourthpackage = new Packages("No", "Nova Poshta", 12, 01, "Samsung", "400");
	Node *container = new Node();
	container->addPackage(1, firstpackage);
	container->addPackage(2, secondpackage);
	container->addPackage(3, thirdpackage);
	container->addPackage(4, fourthpackage);
	container->printNode();

    container->delElementPackages(1);
    container->printNode();

    container->findElementPackages(1);

    container->findPackageold();

    container->readfile();
    container->printNode();
    container->console();
    container->printNode();
    container->writeFile();
    return 0;
}