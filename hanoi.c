#include <stdio.h>
const char* getDiskSize(int n) {
    const char* sizes[] = {"small", "medium", "large"}; 
    return sizes[n - 1];
}

void hanoi(int n, char* FIRST, char* THIRD, char* SECOND) {
    if (n == 1) {
        printf("Put the %s disk from the |%s| in the |%s|.\n", getDiskSize(n), FIRST, THIRD);
    } else {
        hanoi(n - 1, FIRST, SECOND, THIRD);
        printf("Put the %s disk from the |%s| in the |%s|\n", getDiskSize(n), FIRST, THIRD);
        hanoi(n - 1, SECOND, THIRD, FIRST);
    }
}

int main() {
    int n = 3; 
    hanoi(n, "FIRST", "LAST", "SECOND"); 
    return 0;
}
