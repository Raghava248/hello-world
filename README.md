# hello-world

Iam Raghavendra(Btech CS) graduate
//A Number is said to be a strong number if factorial sum of its digits is equal to its number
int main() {
int n=145,k,s,sum=0,number;
number =n;
  while(n!=0)
  {
    s=n%10;
    k=fact(s);
    sum+=k;
    n=n/10;
  }
  if(number==sum)
  {
    printf("The given number is a strong number");
  }
  return 0;
}
int fact(int x)
{
  if(x==1||x==0)
  {
    return 1;
  }
  x= x*fact(x-1);
  return x;
}
