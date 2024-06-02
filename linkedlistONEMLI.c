#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct n{
    int x;
    //nodeun data kismi
    struct n * next;
    //nodeun pointer kismi
};

typedef struct n node;

//linked listi bastiran fonksiyon
void bastir(node * r){
    while(r!=NULL){
        printf("%d ", r->x);
        r=r->next;
    }
}


int main(){
    node * root;
    //node pointeri turunde bir rootum yani yol gostericim olsun
    root=(node*)malloc(sizeof(node));
    //root node pointeri olcak buyuklugu de benim bir tane kutum kadar

    //Yani suan rootun gosterdigi bir tane kutu var suan icinde de bi int bi pointer sakliyor

    root -> x=10;
    //rootun xi 10 sayisini tutsun
    root->next = (node*)malloc(sizeof(node));
    //rootun next pointeri bizi yeni bir kutu boyutunda bir konuma gotursun(yeni kutu olusturmus olduk)
    root->next->x=20;
    //rootun (baslangic kutusunun) nextinin x degeri yani ikinci kutunun x degeri 20 oldu
    root->next->next=(node*)malloc(sizeof(node));
    //rootun nextinin nextine yani ikinci kutunun sonrasina yeni bir kutu koy demek
    root->next->next->x=30;
    //rootun nextinin nextinin xine 30 koyduk, ne kadar karmasik olmaya basladi degil mi?
    root->next->next->next = NULL;
    //en son listemizi kapattik

    //bu problemi cozmek icin iter yani iteration turunde linked list icinde kafasina gore takilan
    //yine node turunde (node * iter) bir pointer olusturacagiz

    node * iter;
    iter = root;
    //hem root hem iter ayni kutuyu gosterecek en basta ki sonrasinda root sabit kalirken
    //iteri oraya buraya surebilelim
    printf("%d\n",iter->x); //root ile ayni kutuyu gosterdiginden 10 degeri cikmasini bekleriz

    iter = iter -> next;
    //iter burada rootla beraber gosterdigi ilk kutunun nextine yani ikinci kutuya gecti

    printf("%d\n", iter->x);//ikinci kutuya yukarida gecmistik burada 20 degerini beklememiz surpriz olmaz




    //Listenin sonuna bir node girecegiz
    iter = root;
    int i=0;
    while(iter->next != NULL){//iteration NULL pointera ulastiginda listedeki son nodeun o bos pointer kismina ulasmisiz demektir
            /*
            yanliz iter NULL a ulastiginda artik her sey icin cok gec olmus oluyor
            biz kutuyu nereye baglayacagiz ki o yuzden iterin nexti NULL a ulasirsa biz hala bir
            onceki kutuda olmus oluruz
            */
            i++;
            printf("%d inci eleman: %d \n",i,iter->x);
            iter = iter->next;
    }
    //iter sondan bir onceki kutuda

    for(i=0;i<5;i++){
        iter -> next=(node*)malloc(sizeof(node));
        iter = iter -> next;
        iter->x = i*10;
        iter->next = NULL;
        /*her zaman son kutudan bir sonraki kutu NULL olsun ki linked listin
        nerde bittigini bilelim*/
    }

    bastir(root);
}
