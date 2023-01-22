// Sebastian Pavlovič
// 2023-01-22

#include <stdio.h>

int max_dlugosc_slowa(char *text, int len);
void brute_force_remove(char *text, int len, int max);

int main(void) {
  char text[] =
      "Natus nemo molestiae quos eius cum quia ducimus est. Et totam "
      "reiciendis ea dignissimos cupiditate dolores autem. Error mollitia sed "
      "soluta. Eos autem nostrum consequatur quo eligendi cumque. Nihil "
      "aliquam magnam atque autem est quia optio voluptatum voluptatibus.";
  
  int len = sizeof(text) / sizeof(text[0]);
  int max = max_dlugosc_slowa(text, len);

  for (int i = 0; i < len; i++) {
    printf("%c", text[i]);
  }
  printf("\n");
  
  brute_force_remove(text, len, max);
  
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%c", text[i]);
  }
  return 0;
}

int max_dlugosc_slowa(char *text, int len) {
  int i, max = 0, j = 0;
  for (i = 0; i < len; i++) {
    if (text[i] != 32) {
      j++;
    }
    if (text[i] == 32) {
      if (j > max) {
        max = j;
      }
      j = 0;
    }
  }
  return max;
}

void brute_force_remove(char *text, int len, int max) {
  int tak;
  
  for (int i = 0; i < len; i++) {
    tak = 0;
    
    for (int j = 0; j < max; j++) {
      if (text[i + j] != 32) {
        tak = 100;
      }
    }
    
    if (tak == 100) {
      if (i + max < len) {
        for (int j = 0; i + j < len; j++) {
          text[i + j] = text[i + j + 1];
        }
      }
    }
  }
}
