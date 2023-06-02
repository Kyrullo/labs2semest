void foo(int* m_n1, int* m_n2, unsigned long int otv){
*(m_n1 + 0) = 2;
*(m_n1 + 1) = 2;
*(m_n1 + 2) = 1;
	*(m_n1 + 3) = 1;
	*(m_n1 + 4) = 1;
	*(m_n1 + 5) = 5;
	*(m_n1 + 6) = 9;
	*(m_n1 + 7) = 8;
	*(m_n1 + 8) = 7;
	*(m_n1 + 9) = 3;
	*(m_n1 + 10) = 4;
	for(int j = 0; j < size; j++){
		if (*(m_n1 + j) == *(m_n1 + j + 1)){
			*(m_n2 + otv) = *(m_n1 + j);
			*(m_n2 + otv + 1) = *(m_n1 + j + 1);
			otv++;
			otv++;
			if (*(m_n1 + j + 1) == *(m_n1 + j + 2)){
				j++;
			}
		}
	}
	int *tr = (int *)malloc(otv * sizeof(int));
	for (unsigned long int j = 0; j < otv; j++){
		*(tr + j) = *(m_n2 + j);
	}
	printf("Результат: ");
	for (unsigned long int j = 0; j < otv; j++){
		printf("%d", *(tr + j));
	}
	free(tr);
}