#include <stdio.h>
#include <string.h>


int main () {
  int n;

  scanf("%d", &n);

  char str[n][64];

  int i, j;
  for (i = 0; i < n; i++) {
    scanf("%s", &str[i]);
  }

  int roll;
  scanf("%d", &roll);

  char temp[64];

  for (i = 0; i < roll; i++) {
    // Tampung elemen yang pertama
    strcpy(temp, str[0]);

    // Penggeseran
    for (j = 0; j < n-1; j++) {
      strcpy(str[j], str[j+1]);
    }

    // simpan tampungan ke akhir array
    strcpy(str[n-1], temp);
  }

  for (i = 0; i < n; i++) {
    printf("%d. %s\n", i+1, str[i]);
  }

  return 0;
}