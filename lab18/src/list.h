#include "entity.h"

class Node {
    private:
	size_t size;
	Violins *package_node;

    public:
	
	void printNode();
   
    Packages& addPackage(size_t pos, Packages *element);
    
    Packages& findElementPackages(size_t pos);
    
    void delElementPackages(const size_t pos);
    
    Packages& findPackageold();
  
    void readfile();
    
    void writeFile();
    
    void console();
    
};