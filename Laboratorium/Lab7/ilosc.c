// Sebastian Pavlovič
// Tablica
// 2023-01-22

#include <stdio.h>

int liczb(char *text, int len);

int main(void) {
  char text[] =
      "Texas Borders sensor Health Metrics Checking Cotton a46xiliary S12all "
      "Penn89ylvania proje83tion morph Soap Ergonomic Cloned Market Solutions "
      "Loaf Awesome scalable 36itcairn Home s68atic Investor Venezue89a Shoes "
      "Investment Account Secured al72orit1m94auxiliary Of39icer";

  int len = sizeof(text) / sizeof(text[0]);
  int ilosc = liczb(text, len);

  for (int i = 0; i < len; i++) {
    printf("%c", text[i]);
  }
  printf("\n%d", ilosc);
  return 0;
}

int liczb(char *text, int len) {
  int ilosc = 0;
  for (int i = 0; i < len; i++) {
    if (text[i] > 47 && text[i] < 58) {
      ilosc++;
    }
  }

  return ilosc;
}
