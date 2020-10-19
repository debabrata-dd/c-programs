#include <stdio.h>
#include <conio.h>

void letterA(int);
void letterB(int);
void letterC(int);
void letterD(int);
void letterE(int);
void letterF(int);
void letterG(int);
void letterH(int);
void letterI(int);
void letterJ(int);
void letterK(int);
void letterL(int);
void letterM(int);
void letterN(int);
void letterO(int);
void letterP(int);
void letterQ(int);
void letterR(int);
void letterS(int);
void letterT(int);
void letterU(int);
void letterV(int);
void letterW(int);
void letterX(int);
void letterY(int);
void letterZ(int);

void main()
{
	char name[12], ch;
	int i,j,k;
	printf("\nEnter any name: ");
	gets(name);
	printf("\n\n");
	
	if(strlen(name)<=11)
	{
	for(i=1; i<=6; i++)
	{
		for(j=0; name[j]!='\0'; j++)
		{
			ch=toupper(name[j]);
			switch(ch)
			{
				case 'A':
					letterA(i);
					printf(" ");
					break;
				case 'B':
					letterB(i);
					printf(" ");
					break;
				case 'C':
					letterC(i);
					printf(" ");
					break;
				case 'D':
					letterD(i);
					printf(" ");
					break;
				case 'E':
					letterE(i);
					printf(" ");
					break;
				case 'F':
					letterF(i);
					printf(" ");
					break;
				case 'G':
					letterG(i);
					printf(" ");
					break;
				case 'H':
					letterH(i);
					printf(" ");
					break;
				case 'I':
					letterI(i);
					printf(" ");
					break;
				case 'J':
					letterJ(i);
					printf(" ");
					break;
				case 'K':
					letterK(i);
					printf(" ");
					break;
				case 'L':
					letterL(i);
					printf(" ");
					break;
				case 'M':
					letterM(i);
					printf(" ");
					break;
				case 'N':
					letterN(i);
					printf(" ");
					break;
				case 'O':
					letterO(i);
					printf(" ");
					break;
				case 'P':
					letterP(i);
					printf(" ");
					break;
				case 'Q':
					letterQ(i);
					printf(" ");
					break;
				case 'R':
					letterR(i);
					printf(" ");
					break;
				case 'S':
					letterS(i);
					printf(" ");
					break;
				case 'T':
					letterT(i);
					printf(" ");
					break;
				case 'U':
					letterU(i);
					printf(" ");
					break;
				case 'V':
					letterV(i);
					printf(" ");
					break;
				case 'W':
					letterW(i);
					printf(" ");
					break;
				case 'X':
					letterX(i);
					printf(" ");
					break;
				case 'Y':
					letterY(i);
					printf(" ");
					break;
				case 'Z':
					letterZ(i);
					printf(" ");
					break;
				case ' ':
					for(k=0; k<=6; k++)
						printf(" ");
			}	/* end of switch-case */
		}	/* end of inner for loop */
		printf("\n");
	}	/* end of outer for loop */
	}	/* end of if condition */
	else
		printf("\n\tToo many characters.\n\n");
	getch();
	return;
}
void letterA(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
				if(k==3 || k==4)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
				if(k==2 || k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				printf("#");
				break;
			case 3:
			case 5:
			case 6:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterB(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 6:
				if(k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 4:
			case 5:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterC(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==1 || k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 5:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
			case 4:
				if(k==1)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterD(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==5 || k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 5:
				if(k==1 || k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
			case 4:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterE(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				printf("#");
				break;
			case 2:
			case 4:
			case 5:
				if(k==1)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
				if(k==6)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterF(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:

				printf("#");
				break;
			case 2:
			case 4:
			case 5:
			case 6:
				if(k==1)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
				if(k==6)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterG(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==1 || k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 5:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
				if(k==1)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				if(k==2 || k==3)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterH(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
			case 2:
			case 4:
			case 5:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
				printf("#");
				break;
		}
	}
}
void letterI(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==3||k==4||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterJ(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
				if(k==4||k==5||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
			case 3:
			case 4:
				if(k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
				if(k==1||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 6:
				if(k==2||k==3||k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterK(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 3:
				if(k==5||k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 5:
				if(k==1||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 1:
			case 6:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				if(k==1||k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterL(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==1)
					printf("#");
				else
					printf(" ");
				break;
			case 6:
				printf("#");
				
		}
	}
}
void letterM(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{

			case 1:
			case 4:
			case 5:
			case 6:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
				if(k==3||k==4)
					printf(" ");
				else
					printf("#");
				break;
			case 3:
				if(k==2||k==5)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterN(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==1 || k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==1||k==i||k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterO(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==1 || k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterP(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 4:
				if(k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 3:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
			case 6:
				if(k==1)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterQ(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
				if(k==1 || k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 3:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				if(k==1||k==4||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
				if(k==1||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 6:
				if(k==1||k==5)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterR(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 4:
				if(k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 3:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
			case 6:
				if(k==1||k==i)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterS(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 6:
				if(k==1||k==6)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
				if(k==1)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				if(k==6)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterT(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
				if(k==1)
					printf(" ");
				else
					printf("#");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if(k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterU(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 6:
				if(k==1||k==6)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterV(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 5:
				if(k==2||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 6:
				if(k==3||k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterW(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{

			case 1:
			case 2:
			case 3:
			case 6:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 4:
				if(k==3||k==4)
					printf(" ");
				else
					printf("#");
				break;
			case 5:
				if(k==2||k==5)
					printf(" ");
				else
					printf("#");
		}
	}
}
void letterX(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				if(k==1||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
			case 5:
				if(k==2||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
			case 4:
				if(k==3||k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterY(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
				if(k==2||k==6)
					printf("#");
				else
					printf(" ");
				break;
			case 2:
				if(k==3||k==5)
					printf("#");
				else
					printf(" ");
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				if(k==4)
					printf("#");
				else
					printf(" ");
		}
	}
}
void letterZ(int i)
{
	int k;
	for(k=1; k<=6; k++)
	{
		switch(i)
		{
			case 1:
			case 6:
				printf("#");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
				if(k==7-i)
					printf("#");
				else
					printf(" ");
		}
	}
}