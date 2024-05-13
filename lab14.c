#include <stdio.h>
#include <string.h>

struct player{
    char pname[20];
}p1;

char* play(struct player *temp_pl){
    strcpy(temp_pl->pname, "Rodrigez");
    return temp_pl->pname;
}

int main(){
    strcpy(pl.name, "Chavez");
    printf("%s %s", pl.pname,play(&p1));
    return 0;
}
