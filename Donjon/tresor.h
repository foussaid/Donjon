typedef enum{
	SOIN,
	MAGIE,
	REGENERATION,
	PRECISION,
	APPRENTISSAGE
}Potion;
typedef enum{
	ARMURES,
	ARMES,
	BAGUETTES_MAGIQUES
}TypeEquipement;

typedef struct equipement{
	TypeEquipement equip;
	int qualite;

}Equipement;

/*equipement doit avoir Qualite*/

typedef struct treasure{
	Potion pot;
	Equipement equip;
}Treasure;