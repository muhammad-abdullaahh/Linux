#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
int n, i;
int sum_even = 0, sum_odd = 0;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
n = sizeof(arr) / sizeof(arr[0]);

pid_t pid = fork();

if (pid > 0) {
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        }
    }
    printf("Parent process (PID: %d) - Sum of even numbers: %d\n", getpid(), sum_even);
} else if (pid == 0) {
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum_odd += arr[i];
        }
    }
    printf("Child process (PID: %d) - Sum of odd numbers: %d\n", getpid(), sum_odd);
} else {
    printf("Fork failed!\n");
    return 1;
}

return 0;
}
