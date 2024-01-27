/*#include <stdio.h>
int main()
{
 int arr[100] = { 0 };
 int i, x, pos, n = 10;
 // initial array of size 10
 for (i = 0; i < 10; i++)
 arr[i] = i + 1;
 // print the original array
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");
 // element to be inserted
 x = 50;
 // position at which element
 // is to be inserted
 pos = 5;
 // increase the size by 1
 n++;
 // shift elements forward
 for (i = n - 1; i >= pos; i--)
 arr[i] = arr[i - 1];
 // insert x at pos
 arr[pos - 1] = x;
 // print the updated array
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");
 return 0;
};*/

#include <stdio.h>
int findElement(int arr[], int n, int key);
int deleteElement(int arr[], int n, int key)
{
// Find position of element to be deleted
int pos = findElement(arr, n, key);
if (pos == -1) {
printf("Element not found");
return n;
}
// Deleting element
int i;
for (i = pos; i < n - 1; i++)
arr[i] = arr[i + 1];
return n - 1;
}
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
int i;
for (i = 0; i < n; i++)
if (arr[i] == key)
return i;
return -1;
};
// Driver's code
/*int main()
{
int i;
int arr[] = { 10, 50, 30, 40, 20 };
int n = sizeof(arr) / sizeof(arr[0]);
int key = 30;
printf("Array before deletion\n");
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
// Function call
n = deleteElement(arr, n, key);
printf("\nArray after deletion\n");
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
return 0
}*/