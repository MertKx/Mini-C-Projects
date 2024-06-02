#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct n{
    int x;
    struct n * next;
};

typedef struct n node;

void bastir(node * r){
    while(r!=NULL){
        printf("%d ", r->x);
        r = r->next;
    }
}

void ekle(node * r, int x){
    while(r->next!=NULL){
        r=r->next;
    }
    r->next =(node*)malloc(sizeof(node));//kutu boyutu kadar yer ac
    r=r->next; //pointeri o kutuya getir
    r->x = x; //kutunun datasi x olsun
    r->next=NULL; //kutunun next pointeri NULL gostersin ki listenin sonuna vardigimiz belli olsun
}
node * ekleSirali(node*r,int x){
    if(r==NULL){
        //linked list bossa eger
        r=(node*)malloc(sizeof(node));
        r->next=NULL;
        r->x=x;
        return r;
    }
    //linked list bos degilse

    if(r->x >x){ //ilk elemandan kucuk bir eleman ekliyorsak
        //root degismeli burda cunku ilk elemanin soluna ekledik
        node * temp=(node*)malloc(sizeof(node));
        temp->x=x;
        temp->next=root;
        return temp;
    }

    //eger ekleyecegimiz elemandan daha buyuk bir eleman yoksa NULL olana kadar gidiyoruz
    //eger ekleyeceimiz elemandan daha buyugu varsa onun soluna ekleme yapmaliyiz
    node * iter = r;
    while(iter->next!=NULL && iter->next->x <x){
        //yukarida iter degil de iter->next var cunku iter son kutuya gelir veya bizden kucuk elemanin oldugu
        //kutuya gelirse zaten is isten gecmis demektir
        iter = iter->next;
    }
    //bizden buyuk bir eleman ya da listenin sonuna gelince kutuyu ekle
    node * temp=(node*)malloc(sizeof(node));
    temp->next = iter->next;
    iter->next=temp;
    temp->x = x;
    return r;
}

int main(){
    node * root;
    root = NULL;
    /*root=(node*)malloc(sizeof(node));
    root->next = NULL;
    root->x=500; ekleSirali fonksiyonu ile gerek kalmadi*/
    root= ekleSirali(root,400);
    root= ekleSirali(root,40);
    root= ekleSirali(root,4);
    root= ekleSirali(root,450);
    root= ekleSirali(root,50);
    bastir(root);
    //Araya eleman ekleme
    node * iter;
    iter = root;
    for(i=0;i<3;i++){
        iter = iter -> next;
    }
    //Araya eklenecek kutuyu tutmasi icin gecici bir kutu olusturacagiz
    node * temp =(node*)malloc(sizeof(node));
    temp->next = iter->next;
    //yani gecici kutunun nexti de iterin nextiyle ayni kutuyu gosteriyor su anda

    //simdi ise iterin nextini dogal halindeki siradan kirip tempe esitleyecegiz
    iter->next = temp;
    //tempin data kismini doldurduk
    temp->x =100;
    //tum linked listi bastirdik
    bastir(root);

    return 0;
}
