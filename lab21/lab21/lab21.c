#include <stdio.h>
int f(int arr[], int n) {
if (n < 3) {
   return 0;
}
if (arr[0] < arr[1]) {
   if (arr[1] < arr[2]) {
      return 1; 
    }
}
return f(arr + 1, n - 1);
}
int main() { 
    int n;
    int arr[100];
    printf("введите n: ");
    scanf("%d", &n);
    
    printf("введите %d чисел:\n", n);
    for (int i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
}
if (f(arr, n) == 1) {
   printf("true\n");
} else {
   printf("false\n");
}
return 0;
}
