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
	for(int i=0; i< 15; i ++)
	{
		printf("%c",65 + i);
	}
	printf("Typing something\n");

    return 0;
}
