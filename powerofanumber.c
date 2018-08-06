int main() {
  int x=4;
 int z= power(5,4);
 printf("%d",z);
  return 0;
}
int power(int n,int y)
{
  if(n==0)
  {
    return 1;
  }
  return y*power(n-1,y);
}
