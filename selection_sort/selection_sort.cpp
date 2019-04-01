#include <cstdio>

const int SIZE = 10;

void exchange(int *vector, int smallest, int i) {
  int tmp;

  tmp = vector[i];
  vector[i] = vector[smallest];
  vector[smallest] = tmp;
}

void selection_sort(int *vector, int size) {
  int smallest;

  for (int i = 0; i < size - 1; i++) {
    smallest = i;
    for (int j = i + 1; j < size; j++) {
      if (vector[j] < vector[smallest]) {
        smallest = j;
      }
    }
    exchange(vector, smallest, i);
  }
}

int main(int argc, char const *argv[]) {
  int vector[SIZE] = { 1, 5, 4, 2, 3, 7, 6, 9, 8, 10 };

  selection_sort(vector, SIZE);

  for (int i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }

  return 0;
}
