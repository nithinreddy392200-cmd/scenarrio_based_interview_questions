#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    int salary[n];
    for(i = 0; i < n; i++) {
        printf("Enter salary of employee %d: ", i+1);
        scanf("%d", &salary[i]);
    }
    int sum = 0;
    for(i = 0; i < n; i++) sum += salary[i];
    double avg = sum / (double)n;
    printf("\nAverage salary = %.2f\n", avg);
    printf("Employees earning above average:\n");
    for(i = 0; i < n; i++) {
        if(salary[i] > avg) {
            printf("Employee %d: %d\n", i+1, salary[i]);
        }
    }
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(salary[i] > salary[j]) {
                temp = salary[i];
                salary[i] = salary[j];
                salary[j] = temp;
            }
        }
    }
    printf("\nSorted salaries:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", salary[i]);
    }
    return 0;
}