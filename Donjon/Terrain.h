#define NB_LIG 43
#define NB_COL 63 /*oui oui ! graphiquement c'est l'inverse !*/
/*==================CASE=============*/
typedef enum {
	WALL, 
	ROOM, 
	MONSTER, 
	TREASURE,
	STAIR_UP, 
	STAIR_DOWN
} Celltype;

typedef struct {
	Celltype type ;
	union {
		Monster monster;
		Treasure treasure;
	}
} Cell;
typedef struct{
	Cell Terrain[NB_LIG][NB_LIG]
}Terrain;
/*==================================*/
