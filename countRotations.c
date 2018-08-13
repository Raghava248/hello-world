//First we should have a sorted array in order to compare with the input what we have given so we can know how many times it is sorted.
//a[] = {2,3,6,12,15,18}.
int main()
{
      int a[]={15,18,2,3,6,12};
      int n = sizeof(a)/sizeof(a[0]);
      int count = countRotations(a,n);
      printf("%d",count);
      return 0;
}
    int countRotations(int a[],int n)
    {
        int min = a[0];
        for(int i=0;i<n;i++)
        {
              if(min>a[i])
             {
                   return i;
              }
        }
    }
