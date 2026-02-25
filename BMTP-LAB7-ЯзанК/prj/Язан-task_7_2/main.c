#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    int arr[14];
    int count = 0;

    printf("¬вед≥ть 14 чисел через проб≥л або Enter:\n");
    for (int i = 0; i < 14; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 150 || arr[i] == 1000 || arr[i] == 10000) {
            count++;
        }
    }

    printf("«найдено чисел (150, 1000, 10000): %d\n", count);
    return 0;
}
