#include <stdio.h>

int count_arrays(int arr[], int n, int k)
{
  if (k==0)
  {
    return 1;
  }
  int count = 0;
  for(int i = 0; i<n; i++)
  {
    int new_arr[n];
    for(int j = 0; j<n; j++)
    {
      new_arr[j]=arr[j];
    }
    new_arr[i]*= -1;
    count +=count_arrays(new_arr, n, k-1);
  }
  return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    int k;
    for(int i=0; i<n; i++)
    {
      
      scanf("%d", &k);
      for( int j=0; j<k; j++)
      {
        scanf("%d", &arr[j]);
      }
      printf("%d\n", count_arrays(arr, k, 2));
      
    }
    return 0;
}