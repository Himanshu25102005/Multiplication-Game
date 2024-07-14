#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ques (int a ,int b)
{
  srand(time(0));
  int min = 1;
  int max = 10;
  
  a = min + rand() % (max - min + 1);
  b = min + rand() % (max - min + 1);
  
  
  
  printf("how much is %d time %d \n",a,b);
  int n;
  printf("enter your answer \n");
  scanf("%d",&n);
  
  if(n==a*b)
  {
    printf("very good \n");
    int x,y;
    ques(x,y);
  }
    
  else
  {
    printf("No,Try again \n");
    
    while (1) {
        printf("How much is %d times %d?\n", a, b);
        scanf("%d", &n); 
        
        if (n == a * b) {
            printf("Very good, try another \n");
            break; 
        } else {
            printf("No, please try again.\n");
        }
    }

    printf("Here's another one\n");
    ques(a, b);
  }
}

int main()
    
{
  printf("Welcome to the multiplication game \n");
  int a ,b;
  ques (a,b);
}
