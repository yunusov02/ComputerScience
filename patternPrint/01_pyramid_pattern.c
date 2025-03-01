#include <stdio.h>

void right_star_pattern();
void right_number_pattern();
void right_character_pattern();

void left_star_pattern();
void left_number_pattern();
void left_character_pattern();

void full_star_pattern();
void full_number_pattern();
void full_character_pattern();

void inverted_star_pattern();
void inverted_number_pattern();
void inverted_character_pattern();

int main() {
  right_star_pattern();
  right_number_pattern();
  right_character_pattern();

  left_star_pattern();
  left_number_pattern();
  left_character_pattern();

  full_star_pattern();
  full_number_pattern();
  full_character_pattern();

  inverted_star_pattern();
  inverted_number_pattern();
  inverted_character_pattern();

  return 0;
}

void right_star_pattern() {
  char character = '*';

  int N = 5;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", character);
    }
    printf("\n");
  }
  printf("\n\n");
}

void right_number_pattern() {
  int N = 5;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  printf("\n\n");
}

void right_character_pattern() {
  int N = 5;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      int c = 64;
      printf("%c ", c + j);
    }
    printf("\n");
  }

  printf("\n\n");
}

void left_star_pattern() {
  int N = 5;

  for (int i = 1; i <= N; i++) {
    int space = N - i;

    for (int j = 1; j <= space; j++) {
      printf("  ");
    }

    for (int k = 1; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n\n");
}

void left_number_pattern() {
  int N = 5;

  for (int i = 1; i <= N; i++) {
    int space = N - i;

    for (int j = 1; j <= space; j++) {
      printf("  ");
    }

    for (int k = 1; k <= i; k++) {
      printf("%d ", k);
    }

    printf("\n");
  }

  printf("\n\n");
}

void left_character_pattern() {
  int N = 5;

  for (int i = 1; i <= N; i++) {
    int space = N - i;

    for (int j = 1; j <= space; j++) {
      printf("  ");
    }

    for (int k = 1; k <= i; k++) {
      int c = 64;
      printf("%c ", c + k);
    }
    printf("\n");
  }

  printf("\n\n");
}

void full_star_pattern() {
  int N = 9;

  int half = N - 1;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= half; j++) {
      printf(" ");
    }
    half -= 1;

    for (int k = 1; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n\n");
}
void full_number_pattern() {
  int N = 9;
  int half = N - 1;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= half; j++) {
      printf(" ");
    }

    half -= 1;

    for (int k = 1; k <= i; k++) {
      printf("%d ", k);
    }
    printf("\n");
  }

  printf("\n\n");
}

void full_character_pattern() {
  int N = 9;
  int half = N - 1;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= half; j++) {
      printf(" ");
    }

    half -= 1;

    for (int k = 1; k <= i; k++) {
      int c = 64;
      printf("%c ", c + k);
    }
    printf("\n");
  }

  printf("\n\n");
}

void inverted_star_pattern() {
  int N = 9;
  int half = 0;

  for (int i = N; i >= 0; i--) {
    for (int j = 0; j < half; j++) {
      printf(" ");
    }

    half += 1;

    for (int k = 1; k <= i; k++) {
      printf("* ");
    }

    printf("\n");
  }

  printf("\n\n");
}

void inverted_number_pattern() {
  int N = 9;
  int half = 0;

  for (int i = N; i >= 0; i--) {
    for (int j = 0; j < half; j++) {
      printf(" ");
    }

    half += 1;

    for (int k = 1; k <= i; k++) {
      printf("%d ", k);
    }

    printf("\n");
  }

  printf("\n\n");
}

void inverted_character_pattern() {
  int N = 9;
  int half = 0;

  for (int i = N; i >= 0; i--) {
    for (int j = 0; j < half; j++) {
      printf(" ");
    }

    half += 1;

    for (int k = 1; k <= i; k++) {
      int c = 64;
      printf("%c ", c + k);
    }

    printf("\n");
  }

  printf("\n\n");
}
