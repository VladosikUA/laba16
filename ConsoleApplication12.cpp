//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    int i, j, max;
//    int a[3][5];
//    int b[5];
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("Введіть елементи %d %d: ", i, j);
//            scanf_s("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Найбільш від'ємні числа в стовпчику:\n");
//
//    for (j = 0; j < 5; j++) {
//        max = 0;
//        for (i = 0; i < 3; i++) {
//            if (a[i][j] < 0) {
//                if (max == 0 || max < a[i][j]) {
//                    max = a[i][j];
//                }
//            }
//        }
//        b[j] = max;
//        printf("%d", b[j]);
//    }
//
//    return 0;
//}

                                                  // Завдання 2

//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    int N;
//    printf("Введіть розмір N (N <= 10): ");
//    scanf_s("%d", &N);
//
//    if ( N > 10) {
//        printf("N повинно бути менше або дорівнювати 10.\n");
//        return 0;
//    }
//    int** arr = (int**)malloc(N * sizeof(int*));
//    for (int i = 0; i < N; i++) {
//        arr[i] = (int*)malloc(N * sizeof(int));
//    }
//    printf("Згенеровані елементи матриці:\n");
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            arr[i][j] = (rand() % 1001) - 500;
//            printf("%4d ", arr[i][j]); 
//        }
//        printf("\n");
//    }
//    printf("Кількість позитивних елементів у кожному стовпці:\n");
//    for (int j = 0; j < N; j++) {
//        int d = 0;
//        for (int i = 0; i < N; i++) {
//            if (arr[i][j] > 0) {
//                d++;
//            }
//        }
//        printf("Стовпець %d: %d\n", j + 1, d);
//    }
//    for (int i = 0; i < N; i++) {
//        free(arr[i]);
//    }
//
//    free(arr);
//    return 0;
//}
                                                              // Завдання 3


//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//#include <time.h>
//int main() {
//    SetConsoleOutputCP(1251);
//    int rows = 4;
//    int cols = 6;
//    int** a = (int**)malloc(rows * sizeof(int*));
//    for (int i = 0; i < rows; i++) {
//        a[i] = (int*)malloc(cols * sizeof(int));
//    }
//    srand(time(NULL));
//    printf("Згенеровані елементи матриці:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            a[i][j] = (rand() % 4) - 2;
//            printf("%4d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Стовпці з хоча б двома елементами, рівними 0:\n");
//    for (int j = 0; j < cols; j++) {
//        int zeroCount = 0;
//        for (int i = 0; i < rows; i++) {
//            if (a[i][j] == 0) {
//                zeroCount++;
//                if (zeroCount >= 2) {
//                    printf("Стовпець:%d \n", j + 1); 
//                    break;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < rows; i++) {
//        free(a[i]);
//    }
//    free(a);
//    return 0;
//}
                                                      // завдання 4
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//
//int  main(int M, int N)
//{
//    SetConsoleOutputCP(1251);
//    printf("Введіть кількість рядків (M): ");
//    scanf_s("%d", &M);
//    printf("Введіть кількість стовпців (N): ");
//    scanf_s("%d", &N);
//    int n = 1;
//    int** arr = (int**)malloc(M * sizeof(int*));
//
//    if (arr == NULL) {
//        printf("Помилка при виділенні пам'яті.\n");
//        exit(1); 
//    }
//
//    for (int i = 0; i < M; i++) {
//        arr[i] = (int*)malloc(N * sizeof(int));
//        if (i % 2 == 0) {
//            for (int j = 0; j < N; j++) {
//                arr[i][j] = n++;
//            }
//        }
//        else {
//            for (int j = N - 1; j >= 0; j--) {
//                arr[i][j] = n++;
//            }
//        }
//    }
//    printf("Змійка:\n");
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            printf("%3d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < M; i++) {
//        free(arr[i]);
//    }
//    free(arr);
//    return 0;
//}


   