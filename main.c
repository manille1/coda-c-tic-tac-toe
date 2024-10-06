#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void affichergrille()
{
	for (int i = 0; i < 3; i++) 
	{  
		printf("%d | %d | %d", box[i][0], box[i][1], box[i][2]);
		printf("\n-----------\n"); 
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
	
	printf("  |  | \n--------\n  |  | \n--------\n  |  | \n");
	printf("Choisissez une ligne:\n");
	scanf("%d", &line);
	printf("Choisissez une colonne:\n");
	scanf("%d", &column);

//AFFICHER LA GRILLE MODIFIER
	box[line+1][column+1]='O';
	affichergrille;


//FAIRE JOUER L'ORDINATEUR


//QUI GAGNE
	if(line=='O' || column=='O')                                    //JOUEUR
	{
		printf("Vous avez gagné !\n");
		return(0);
	}
	else if(box[0][0]=='O'&&box[1][1]=='O'&&box[2][2]=='O') //diago joueur
	{
		printf("Vous avez gagné !\n");
		return(0);
	}
	else if(box[0][2]=='O'&&box[1][1]=='O'&&box[2][0]=='O') //diago joueur
	{
		printf("Vous avez gagné !\n");
		return(0);
	}


	else if(line=='X' || column=='X')                               //ORDINATEUR
	{
		printf("Vous avez perdu !\n");
		return(0);
	}
	else if(box[0][0]=='X'&&box[1][1]=='X'&&box[2][2]=='X')  //diago ordi
	{
		printf("Vous avez perdu !\n");
		return(0);
	}
	else if(box[0][2]=='X'&&box[1][1]=='X'&&box[2][0]=='X')  //diago ordi
	{
		printf("Vous avez perdu !\n");
		return(0);	
	}

	else                                                            //EGALITE
	{
		printf("Match nul !\n");
		return(0);
	}
	exit(0);
}