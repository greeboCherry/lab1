#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);
//void createAndDrawCharSquare(int n); 
//this appered here as effect of misunderstanding instruction for best mark, I'll lest this stay here for next generations browsing this repo

int main(int argc, char **argv)
{
	srand(atoi(argv[2]));
	int n=atoi(argv[1]); //I'm not sure what's the point of making this variable if it's used only once but it was here since the begining so I guess it has rights to be here.
	drawCharSquare(charSquare(n), n);
}


char **charSquare(int n)
{
	char **square=new char*[n];
	for(int i=0,j=0; i<n*n; i++)
	{
		square[i]=new char [n];
		square[i][j]=rand()%26+'a'; 
	}
	//I'm so close of doing this in one instruction	:( / :)

	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i=0; i<n*n; i++ )
	{
		if (i%n==0) 
			printf(" line no.%i\n",i);
		printf("%c ",**(square+i) );
	}
}

/*
void createAndDrawCharSquare(int n)
//as explained above :)
{
	char **square=new char*[n];
	for(int i=0,j;i<n;i++)
	{
		square[i]=new char [n];
		for(j=0;j<n;j++)
		{
			square[i][j]=rand()%26+'a'; 
			printf("%c ", square[i][j]);
		}
	printf("\n");
	}
}
*/