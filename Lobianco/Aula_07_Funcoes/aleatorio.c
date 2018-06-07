#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int apostas, i, N, mega[61];
	
	for(i=0;i<61;i++)
		mega[i]=0;
		
	srand(time(NULL));
	
    printf("MEGASENA\n");
    printf("Digite o numero de apostas: ");
    scanf("%d",&apostas);
    
    for(i=0;i<apostas; )
    {
    	N=1+rand()%60;
    	if(mega[N]==0)
		{
    		mega[N]=1;
    		i++;
    	}
	}
	
	for(i=1;i<61;i++)
		if(mega[i]==1)
			printf("%4d",i);
}
