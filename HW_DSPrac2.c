#include<stdio.h>//make this switch case now
#include<stdlib.h>
int main()
{
    int A;
    printf("ENTER 1 FOR SEARCHING ELEMENT \nENTER 2 FOR INSERTING AN ELEMENT AT DESIRED INDEXING\nENTER 3 FOR DELETING AN ELEMENT AFTER SEARCHING IT\nENTER 4 FOR REVERSING A STRING\nENTER 5 FOR UPDATING AN ARRAY\n");
    scanf("%d",&A);
int size;
printf("enter the size of the array\n");  
scanf("%d",&size);
int *arr=(int*)malloc(size*sizeof(int));
for(int i=0;i<size;i++)     //assignment of array
{
    printf("enter the value at index=%d\n",i);
    scanf("%d",&arr[i]);
}
switch(A)
{
case 1:
{
    int a;
printf("enter the element you want to search\n");
scanf("%d",&a);
int count=0;
for(int i=0;i<size;i++)//searching
 {
    if(a==arr[i])
    {
        printf("element found at index%d\n",i);
        count++;

    }

  }
   if(count == 0)
   {
    printf("searched element not in the array\n");
    
    }
    break;
}
case 2:
{
    int ind , n;//inserting at desired indexing
printf("enter the index at which u want  to enter the element , and  also enter the element u want to enter\n");
scanf("%d%d",&ind,&n);
for(int i=size;i>=ind;i--)
{
    arr[i+1]=arr[i];
   if(ind==i)
   {
    arr[i]=n;
   }
}
for(int i=0;i<=size;i++)
{
    printf("%d\n",arr[i]);
}break;
}
case 3:
{
     int b,t,o=0;//deletion of array
    printf("enter the element you want to delete\n");
    scanf("%d",&b);
    for(int i=0;i<=size;i++)
    {
        if(b==arr[i])
        {
        t=i;
        o++;
        }
    }
    if(o==0)
    {
     printf("the inserted element is not present hence cant be deleted ");
    goto end;
    }
     break;
}


case 4:
 {
    int j=(size)/2;
 int r = size-1;
   for(int i=0;i<j;i++)   //reversing an array
{
   
    int  q= arr[r];
    int  a= arr[i];
    arr[i]=q;
    arr[r]=a;
    r--;
  
}

for(int i=0;i<size;i++) 
{
    printf("%d\n",arr[i]);
} break;
 }
 
 case 5 :
 {
    for(int i =1;i<size; i++)
 {
    if(i%2==0)
    {
       int u = arr[i];
        arr[i]= u+5;
    }
    else
    {
        int g= arr[i];
        arr[i]= g*2;
    }

 }
  break;
 }
 default:
 {
    printf("INVALID OPTION");
    break;
 }

}
end:
 free(arr);
return 0;
}

