#include<stdio.h>
int input()
{
  int x;
  printf("enter 3 numbers\n");
  scanf("%d",&x);
  return x;
}
int cmp( int a,int b,int c){
  if(a>b && a>c){
    return a;
  }
  else if(b>a && b>c){
    return b;
  }
  else{
    return c;
  }
}
void output( int large)
{
  printf("largest of 3 numbers  is %d",large);
}
int main(){
  int p,q,r,s;
  p=input();
  q=input();
  r=input();
  s=cmp(p,q,r);
  printf("%d\n",s);
  output(s);
  return 0;
}




