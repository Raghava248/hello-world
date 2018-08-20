int main() {
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
rec(arr,n);
  return 0;
}
void rec(int arr[],int n)
{
  if(n<=1)
  return ;
  rec(arr,n-1);
  arr[n-1]+=arr[n-2];
}
