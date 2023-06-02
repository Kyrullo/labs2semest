#include "./lib.h"

int main(){
	int *m_n1 = (int *)malloc(size * sizeof(int));
	int *m_n2 = (int *)malloc(size * sizeof(int));
	unsigned long int otv = 0;
	foo(m_n1, m_n2, otv);
	free(m_n1);
	free(m_n2);
	return 0;
}