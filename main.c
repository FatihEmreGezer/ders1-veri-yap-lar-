#include <stdio.h>
#include <stdlib.h>
struct dugum{
	int veri;
	struct dugum*gosterici;
	
};

int main( ) {
	struct dugum*bir;
	bir=(struct dugum*)malloc(sizeof(struct dugum));
	bir->veri=06;
	struct dugum*iki;
	iki=(struct dugum*)malloc(sizeof(struct dugum));
	iki->veri=38;	
	struct dugum*uc;
	uc=(struct dugum*)malloc(sizeof(struct dugum));
	uc->veri=59;
	struct dugum*dort;
	dort=(struct dugum*)malloc(sizeof(struct dugum));
	dort->veri=89;
	bir->gosterici=iki;
	iki->gosterici=uc;
	uc->gosterici=dort;
	printf("%d - %d - %d - %d ",bir->veri,iki->veri,uc->veri,dort->veri );
	return 0;
}
