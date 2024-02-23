//first sort your array(ascendig order)
//then diivide array in half and compare middle element 
//repeat 
#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array you want\n");
    scanf("%d",&size);
    int arr[size];

    for(int i =0;i<size ;i++ )
    {

printf("Enter the no at the indexing %d",i);
scanf("%d",&arr[i]);
    }
     for(int i =0;i<size ;i++ )//sorting 
     {
        for( int j =0;j<size ;j++ )
        {
          if(arr[i]<arr[j])
          {
            int q = arr[i];
            arr[i]= arr[j];
            arr[j]= q;
          }
        }
     }//works verified
     /*for(int i =0;i<size ;i++ )
     {
        printf("%d\n",arr[i]);
     }*/
     int q;
     printf("enter the element you want to search for   \n");
     scanf("%d",&q);
 
     int right = size-1;
     int left = 0; 
     int mid ;
     int count = 0;
     while(left<=right)
     {
       mid =  (right+left)/2;
      if(q==arr[mid])
      {
        printf("element found at indexing %d  after the array has been sorted ",mid);
        count ++;

        break;
      }
      else if(q<arr[mid])
      {
        right = mid;
      }
      else
      {
        left = mid;
      }
     }
     if(count == 0)
     {
      printf("entered no is not present in the  in the array entrered by you");
     }
}