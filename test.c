#include<stdio.h>
int main(int argc, char const *argv[])
{
     printf("Hello world\n");
     for (int i = 0; i < 10; i++)
     {
         printf("%d",i++);
        if(i%2 == 0)
        {
            i++;
        }
        else{
            i--;
        }
     }
      printf("\n");
	for(int i=0; i< 15; i ++)
	{
		printf("%c\n",65 + i);
	}
	printf("Typing something\n");
        for (int i  = 0 ;i  < 10; i ++)
        {
            printf("%d\n",i*5); 
        }
        
    return 0;
}
