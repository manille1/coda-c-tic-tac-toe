#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

char checkvictoire(char box[3][3])
{
	for(int i=0; i<3; i++)  //colonne                                      //JOUEUR
	{
		if(box[0][i]== box[1][i]== box[2][i]=='O')
		{printf("Vous avez gagné en colonne!\n");
		return(0);
		}
	}

	for(int i=0; i<3; i++)  //ligne
	{
		if(box[i][0]==box[i][1]==box[i][2]=='O')
		{printf("Vous avez gagné en ligne!\n");
		return(0);
		}
	}
	if(box[0][0]=='O'&&box[1][1]=='O'&&box[2][2]=='O' ) //diago joueur
	{
		printf("Vous avez gagné en diagonale!\n");
		return(0);
	}
	else if(box[0][2]=='O'&&box[1][1]=='O'&&box[2][0]=='O') //diago joueur
	{
		printf("Vous avez gagné en diagonale!\n");
		return(0);
	}


	for(int i=0; i<3; i++)  //colonne                                      //ORDINATEUR
	{
		if(box[0][i]== box[1][i]== box[2][i]=='X')
		{printf("Vous avez perdu!\n");
		return(0);
		}
	}
	for(int i=0; i<3; i++)  //ligne
	{  
		if(box[i][0]==box[i][1]==box[i][2]=='X')
		{printf("Vous avez perdu!\n");
		return(0);
		}
	}
	if(box[0][0]=='X'&&box[1][1]=='X'&&box[2][2]=='X')  //diago ordi
	{
		printf("Vous avez perdu !\n");;
		return(0);
	}
	else if(box[0][2]=='X'&&box[1][1]=='X'&&box[2][0]=='X')  //diago ordi
	{
		printf("Vous avez perdu !\n");
		return(0);	
	}

	else                                                            //EGALITE
	{
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(box[i][j]!='_')
				{printf("Match nul !\n");
				return(0);
				}
				else
				{continue;
				}
			}
		}
	}
}





int main()
{
	char box[3][3]=
	{	{'_', '_', '_'},
		{'_', '_', '_'},
		{'_', '_', '_'},
	};
	int line, column;
	
	//system("clear");
	printf("  |  | \n--------\n  |  | \n--------\n  |  | \n");

	while(1)
	{
	//FAIRE JOUER LE JOUEUR
		printf("Choisissez une ligne:\n");
		scanf("%d", &line);
		printf("Choisissez une colonne:\n");
		scanf("%d", &column);

		if(box[line-1][column-1]!='_')
		{printf("Vous ne pouvez pas jouer sur une case déjà prise.\n");
		}
		else
		{box[line-1][column-1]='O';
		}

	//AFFICHER LA GRILLE MODIFIER
		for (int i = 0; i < 3; i++) 
		{  
			printf("%c | %c | %c", box[i][0], box[i][1], box[i][2]);
			printf("\n---------\n"); 
		}

	//FAIRE JOUER L'ORDINATEUR
		printf("A moi de jouer -->\n");
		for (int i = 0; i < 3; i++) //pour chaque ligne
		{ 
			if (box[i][0]== '_')
			{box[i][0]='X';
			break;
			}
			else if(box[i][1]== '_')
			{box[i][1]='X';
			break;
			}
			else if(box[i][2]== '_')
			{box[i][2]='X';
			break;
			}
			continue;
		}

	//AFFICHER LA GRILLE MODIFIER
		box[line-1][column-1]='O';
		for (int i = 0; i < 3; i++) 
		{  
			printf("%c | %c | %c", box[i][0], box[i][1], box[i][2]);
			printf("\n---------\n"); 
		}
		checkvictoire;
	}
	exit(0);
}