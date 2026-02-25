#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main() {
    // Налаштування для кирилиці в консолі Windows
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[500];
    const char *word = "програма";

    printf("Введіть речення: ");
    fgets(str, sizeof(str), stdin);

    // Перевод в нижній регістр вручну
    for(int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    if (strstr(str, word) != NULL) {
        printf("Результат: Слово знайдено.\n");
    } else {
        printf("Результат: Слово не знайдено.\n");
    }

    return 0;
}
