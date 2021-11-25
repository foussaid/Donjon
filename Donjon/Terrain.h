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
/*==================================*/
