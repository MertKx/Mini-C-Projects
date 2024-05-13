#include <stdio.h>

main(){
    enum result {pass=1,fail};
    enum result s1,s2;
    s1=pass;
    s2=fail;
    printf("%d",s2);
}
