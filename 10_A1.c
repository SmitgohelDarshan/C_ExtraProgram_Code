#include <stdio.h>
void main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    // for (int  i = 1; i < n; i++)
    // {
    //     if (a[i] >= a[i-1] && a[i] >= a[i+1])
    //     {
    //         printf("=%d",a[i]);
            
    //     }
        
    // }

        
    if (n == 1) {
        printf("Peak element: %d\n", a[0]);
        return;
    }

    // Check first element
    if (a[0] >= a[1]) {
        printf("Peak element: %d\n", a[0]);
        return;
    }

    // Check middle elements
    for (int i = 1; i <= n - 1; i++) {
        if (a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
            printf("Peak element: %d\n", a[i]);
            return;
        }
    }    
}
