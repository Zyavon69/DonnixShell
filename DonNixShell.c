#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
  char argument[100];
  char command[50];
  char name[20];

  printf("Привет, это DonNix\n");

  printf("Перед началом работы с терминалом введи свое имя: ");
  scanf("%s", name);
  
  while (true) {
    printf("DonnixShell ");
    scanf("%s", command);
    if (strcmp(command, "exit") == 0) {
      printf("Работа терминала завершена");
      break;
    } else if (strcmp(command, "write")== 0) {
      scanf("%s", argument);
      printf("%s\n", argument);

    } else if (strcmp(command, "calculator") == 0) {
      int a,b;
      printf("Введите два числа: ");
      scanf("%d %d", &a, &b);
      char c;
      printf("Введите знак: (+,-,*,/) ");
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
    } else if (strcmp(command, "user") == 0) {
      printf("Вы авторизовались под пользователем: %s\n",name);
    }else if (strcmp(command, "help") == 0) {
      scanf("%s", argument);
      if (strcmp(argument, "write") == 0) {
        printf("Команда для вывода текста в консоль.\n");
      }
      if (strcmp(argument, "exit") == 0) {
        printf("Комнда для завершения работы с терминалом.\n");
      }
      if (strcmp(argument, "calculator") == 0) {
        printf("Простой калькулятор может сложить, разделить, умножить два числа.");
      }
    } else {
      printf("Ошибка, такой команды нет\n");
    }
  }
  return 0;
}
