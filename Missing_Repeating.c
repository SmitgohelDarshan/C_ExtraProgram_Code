// Input: arr[] = {3, 1, 3}
// Output: Missing = 2, Repeating = 3
// Explanation: In the array, 2 is missing and 3 occurs twice 


// Input: arr[] = {4, 3, 6, 2, 1, 1}
// Output: Missing = 5, Repeating = 1
#include <stdio.h>
void main(){
    int n,j,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],same;
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(j=0,i=0; i<n; i++,j++){
        arr[j]=arr[i];
    }
    int min=arr[0],max=arr[0];
    for(j=0,i=1; i<=n; i++,j++){
        if(arr[j]==arr[i]){
            same=arr[i];
        }
    }
    for(i=0; i<n; i++){
        min=arr[i]>min?(min):(arr[i]);
        max=arr[i]<max?(max):(arr[i]);
    }
     printf("repeating=%d\n",same);
    for(int i=0; i<n; i++){
        while(min<max-1){
            min+=1;
        }
    }
    printf("missing=%d",min);
    
}