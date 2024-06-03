#include <stdio.h>

FILE *f;

void readFile(){
    char buffer[11];
    if(f=fopen("C:/Users/mertk/Desktop/out.txt", "r")){
        fread(buffer,1,10,f);
        buffer[10]=0;
        fclose(f);
        printf("First 10 characters of the file:\n%s\n",buffer);
    }else{
        printf("File cannot open...");
    }
}

void writeFile(){
    char a[10]={'1','2','3','4','5','6','7','8','9','a'};
    FILE *fs;
    fs=fopen("C:/Users/mertk/Desktop/Project.txt","w");
    fwrite(a,1,10,fs);
    //a arrayinden 1 karakter 1 karakter 10 kez yaz bunu da fs yolu icin yap
    fclose(fs);
}

void seekFunc(){
    FILE *f;
    f=fopen("C:/Users/mertk/Desktop/randomFile.txt","w");
    fputs("Random text",f);
    fseek(f,6,SEEK_SET);
    fputs(" Mert",f);
    fclose(f);
}
int main(){
    readFile();
    writeFile();
    seekFunc();
    return 0;
}
