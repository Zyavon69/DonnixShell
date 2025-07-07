#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
  char argument[100];
  char command[50];
  char name[20];

  printf("Привет, это DonNix\n");

  printf("Перед началом работы с терминалом введи свое имя:");
  scanf("%s", name);
  
  while (true) {
    scanf("%s", command);
    if (strcmp(command, "exit") == 0) {
      printf("Работа терминала завершена");
      break;
    }
    if (strcmp(command, "write")== 0) {
      scanf("%s", argument);
      printf("%s\n", argument);

    } else {
      printf("Ошибка, команда не найдена\n");
    }
    if (strcmp(command, "calculator") == 0) {
      int a,b;
      printf("Введите два числа: ");
      scanf("%d %d", &a, &b);
      char c;
      printf("Введите знак: (+,-,*,/");
      scanf(" %c", &c);

      if (c == '+') {
        printf("Сумма: %d\n", a + b);
      }
      if (c ==  '-') {
        printf("Вычитание: %d\n", a -b);
      } 
      if (c == '*') {
        printf("Умножение: %d\n", a * b);
      }
      if (c ==  '/') {
        printf("Деление: %d\n", a / b);
      }
    }
    if (strcmp(command, "User") == 0) {
      printf("%s\n",name);
    }
  }
  return 0;
}
