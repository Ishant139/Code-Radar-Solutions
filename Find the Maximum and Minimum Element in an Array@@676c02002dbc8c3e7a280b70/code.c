#include <stdio.h>
 
 void bubbleSort(int arr[], int n) {
     int t;
     for (int i = 0; i < n-1; i++) {
         for (int j = 0; j < n-i-1; j++) {
             if (arr[j] > arr[j+1]) {
                 t = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = t;
             }
         }
     }
     return arr[];
 }
 
 int main(){
     int n,a;
     int n;
     scanf("%d", &n);
     int arr[n];
     for(int i=0; i<n; i++){
         scanf("%d", &arr[i]);
     } 
     a=bubbleSort(arr[], n);
     printf("%d %d", a[0], a[n-1]);
     bubbleSort(arr, n);
     printf("%d %d", arr[0], arr[n-1]);
     return 0;
 }