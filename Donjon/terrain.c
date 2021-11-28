#include <stdio.h>
#include <stdlib.h>
#include "Terrain.h"

int distanceManhattan(int i1, int j1, int i2, int j2){
	return abs(i1-i2) + abs(j1-j2);
}
void initialiseTerrain(Terrain *T){
	int i, j;
	for(i = 0; i < NB_LIG; i++){
		for(j = 0; j < NB_COL; j++){
			T->terrain[i][j].type = WALL;
		}
	}
	T->terrain[NB_LIG/2][NB_COL/2].type = STAIR_UP;
}

void afficheTerrain(Terrain T){
	int i, j;
	for(i = 0; i < NB_LIG; i++){
		for(j = 0; j < NB_COL; j++){
			if(T.terrain[i][j].type == WALL){
				printf(" * ");
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
}

int isAdmissible(Terrain T, int x, int y, int a, int b){
	/*si la case est un mur  et on n'est pas aux bordures du terrain*/
	if(T.terrain[x][y].type == WALL && x != NB_LIG-1 && y != NB_COL-1 && x != 0 && y != 0){
		if(distanceManhattan(x, y, a, b) == 1 || distanceManhattan(x, y, a, b) == 2){
			return 1;
		}
		return 0;
	}
	return 0;
}

/*Fonction supprimant un élément dans un tableau !*/
void removeFromArray(Celltype[] liste, int ndice){
	int i;
	for(i = indice; i < 63*43; i++){
		liste[i] = liste[i+1];
	}
}

int addElement(Coord T[TAILL], int x, int y){
	/*fonction qui pemet d'ajouter un élément dans un tableau de type Coord : changer la valeur d'un élément par ce qu'on met en paramètre*/
	int i;
	for(i = 0; i < TAILLE; i++){
		if(T[i].x == -1){
			T[i].x = x;
			T[i].y = y;
			return 1;
		}
	}
	return 0; 
}

void removeElement(Coord T[TAILLE], int indice){
	int i;
	if(T[indice].x != -1 && T[indice].y != -1){
		for(i = indice; i < TAILLE; i++){
			T[indice+1].x = -1;
			T[indice+1].y = -1;
		}
	}

}
