# Algorytm rozkładu liczby naturalnej na czynniki pierwsze
Rozłożenie liczby na czynniki pierwsze - to zapisanie jej w postaci iloczynu liczb pierwszych.
Liczby pierwsze to są liczby które dzielą się przez siebie i przez jeden.

Pseudokod
```
rozklad(n) {
  k = 2;

  while (n > 1) {
    while (n % k == 0) {
      k // output
      n = n / k
    }
    k++;
  }
}
```

Realizacja w C
```
#include <stdio.h>
#include <time.h>

void rozklad(int n);

int main() {
  int n;
  clock_t t;

  printf("Podaj liczbę: ");
  scanf("%d", &n);

  printf("Czynniki pierwsze liczby %d :", n);

  t = clock();
  rozklad(n);
  t = clock() - t;
  double time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("\nobliczenie rozkladu liczby na czynniki naturalne %f seconds \n", time_taken);

  return 0;
}

void rozklad(int n) {
  int k = 2;

  while (n > 1) {
    while (n % k == 0) {
      printf(" %d", k);
      n = n / k;
    }
    k++;
  }
}
```


| liczba |    50    |    69    |    164   |   4954   |  264874  |
| :----: |  :----:  |  :----:  |  :----:  |  :----:  |  :----:  |
| czas S | 0.000002 | 0.000003 | 0.000002 | 0.000007 | 0.000254 |

# Algorytm naiwny wyszukiwania palindromów
Palindrom – wyrażenie brzmiące tak samo czytane od lewej do prawej i od prawej do lewej. 
Przykładem palindromu jest: anna, bob, radar.

Pseudokod
```
palindrom(str) {
  i, c = 0, n;
  n = len(str); // dlugosc slowa
  for (i = 0; i < n / 2; i++) {
    if (str[i] == str[n - i - 1])
      c++
  }
  if (c == i)
    return 1
  else
    return 0
}
```

Realizacja w C
```
#include <stdio.h>
#include <string.h>
#include <time.h>

void palindrom(char *str);

int main() {
  clock_t t;

  char str[] = "anna";

  t = clock();
  palindrom(str);
  t = clock() - t;
  double time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("\nobliczenie czy slowo jest palindromem zajelo %f seconds \n",
         time_taken);

  return 0;
}

void palindrom(char *str) {
  int i, c = 0, n;
  n = strlen(str);
  for (i = 0; i < n / 2; i++) {
    if (str[i] == str[n - i - 1])
      c++;
  }
  if (c == i)
    printf("To jest palindrom");
  else
    printf("To nie jest palindrom");
}
```


|  slowo |   anna   |   macam  | apokopa  |
| :----: |  :----:  |  :----:  |  :----:  |
| czas S | 0.000030 | 0.000036 | 0.000046 |

# Algorytm wyszukiwania liniowego na liście cyklicznej
