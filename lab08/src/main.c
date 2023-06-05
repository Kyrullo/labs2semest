/**
 * \mainpage
 * # Лабораторна робота №8
 *
 * \author Шевченко Кирило:КН-922Б
 * \date 20-03-2023
 */
 /*!
\file main.c
\brief Головний файл

Це файл, який містить точку входу,
виклики функцій   squareMatrix, primenumber та значення для аргументів цих функцій.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void squareMatrix (int argc,char *argv[]);
void primenumber ();
 
 /** Головна функція 
 
     Послідовність дій

- Присвоїти значення аргументам argc і argv.
\param argc - аргумент типу int необхідний для порівняння.
\param argv - масив типу char який зберігатиме в собі значення матриці*/
 
int main (int argc,char *argv[]) 

{

/** 
- Виклик другорядних функцій squareMatrix та primenumber, які містять код програми для розрахунку множення матриці саму на себе та перевірку на просте чи не просте число
*/

  squareMatrix (argc,argv);

  primenumber ();

}


void squareMatrix (int argc,char *argv[])
{
/**  

a[10][10] - квадратна матриця, що містить межу 10 рядків і стовпців, але користувач може задати будь-яку квадратну матрицю в цьому діапазоні.

MAT[10][10] - квадратна матриця, що містить розрахунок матриці а*а.

b і c - змінні що містять у собі кількість рядків і стовпців, користувач задає тільки одне значення і оскільки матриця квадратна b=c=t.

t - зберігає значення за умовчанням.

i та j - кількість стовпців і рядків матариці, які порівнюються між заданими b та c, та якщо виконується умова вони збільшуються.

*/

  long int a[10][10], MAT[10][10], b, c, i, j, f, z = 2,t;

  char *N;

  if (argc > 1)
  /** Перевіряємо чи були введені данні у командний рядок. */ 
    {

      

      t = strtol (argv[1], &N, 10);

      b = t;

      c = t;
      
      for (i = 0; i <= b - 1; i++)

  {
    for (j = 0; j <= c - 1; j++)
/** 1 цикл - записує значення у матрицю а, які були ввдені у командному рядку. */ 
      {
        a[i][j] = strtol (argv[z], &N, 10);

        z++;
      }
  }
    
    }else
    {
      b = z;

      c = z;
      
      for (i = 0; i <= b - 1; i++)

  {
    for (j = 0; j <= c - 1; j++)
 
      {
        a[i][j] = strtol (argv[z], &N, 10);

        z++;
      }
    
    }
    }

  

  for (i = 0; i < b; i++)

    {
      for (j = 0; j < c; j++)
/** 2 цикл - множення матриці саму на себе. */ 
  {
    MAT[i][j] = 0;

    for (f = 0; f < c; f++)

      {
        MAT[i][j] += a[i][f] * a[f][j];
      }
  }
    }

  for (i = 0; i < b; i++)

    {
      for (j = 0; j < c; j++)
/** 3 цикл - виводе результат множення матриці а саму на себе. */ 
  {
    printf ("%ld\t", MAT[i][j]);
  }

      printf ("\n");
    }
}

void primenumber ()
{

/** 
- Створення змінних a і res, де res=1.

- Гненеруємо рандомні числа за допомогою генератора rand() та функції srand(), після чого привласнюємо їх пріменній a.

a - задаємо межу генерованих чисел у межі від 2 до 49.

- Cтворюємо змінну i, та кажемо ділити з остечею a на i, де i++, поки не отримаємо 0.

- Перевіряємо чи a == i, та res == 1, якщо умова виконується то задаєм значення res == 0, та пишимо що число просте, якщо умова не виконується, то res == 1 та число не просте.

 */

  int a, res = 1, i;

  srand ((unsigned int) time (NULL));

  a = (rand () % 49) + 2;

  for (i = 2; a % i != 0; i++)

    {
      
    }
if (a == i && res == 1)

  {
    res = 0;

    if (res == 0)

      {
        printf ("Число простое! %d\n", a);
      }
  }
  if (res != 0)
    {

      {
  printf ("Число не простое! %d\n", a);
      }
    }
    }
