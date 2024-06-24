#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char* s, int low, int high) {
    char pivot = s[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (s[j] <= pivot) {
            i++;
            swap(&s[i], &s[j]);
        }
    }
    swap(&s[i + 1], &s[high]);
    return (i + 1);
}

void quickSort(char* s, int low, int high) {
    if (low < high) {
        int pi = partition(s, low, high);
        quickSort(s, low, pi - 1);
        quickSort(s, pi + 1, high);
    }
}

int max_occurence(char *s) {
  int count = 1, max = 0;
  for (int i = 1; i < strlen(s); i++) {
    if (s[i] == s[i - 1]) {
      count++;
    } else {
      if (count > max) {
        max = count;
      }
      count = 1;
    }
  }
  if (count > max) {
    max = count;
  }
  return max;
}

int main() {
  char s[100];
  printf("Enter a string: ");
  fgets(s, 100, stdin); // Use fgets to read the entire line
  int length = strlen(s);
  if (s[length - 1] == '\n') {
    s[length - 1] = '\0'; // Remove the newline character
  }
  quickSort(s, 0, strlen(s) - 1);
  printf("Maximum of occurence of a character is: %d\n", max_occurence(s));
  return 0;
}
