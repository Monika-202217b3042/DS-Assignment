#include <stdio.h>

void main() {
    int n, a[10], b[10], t[10], w[10], i;
    float att = 0, awt = 0;

    // Initialize arrays
    for (i = 0; i < 10; i++) {
        a[i] = 0;
        b[i] = 0;
        w[i] = 0;
    }

    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Input burst times
    printf("Enter the burst times: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Input arrival times
    printf("Enter the arrival times: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Calculate waiting time and turnaround time
    int currentTime = 0;
    for (i = 0; i < n; i++) {
        if (currentTime < a[i]) {
            currentTime = a[i];
        }
        w[i] = currentTime - a[i];
        currentTime += b[i];
        t[i] = currentTime - a[i];
        awt += w[i];
        att += t[i];
    }

    // Calculate averages
    awt /= n;
    att /= n;

    // Output the results
    printf("\n\tProcess\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("\tp%d\t\t%d\t\t%d\n", i, w[i], t[i]);
    }

    printf("The average waiting time is %.2f\n", awt);
    printf("The average turnaround time is %.2f\n", att);
}
 



