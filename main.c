#include <stdio.h>

int main()
{
    int vize, final, a;
    printf("vize notunu giriniz: ");
    scanf("%d", &vize);
    while (vize<0 || vize>100){
        printf("vize notunuzu hatalı girdiniz, tekrar giriniz: ");
        scanf("%d", &vize);
    }
    printf("final notunu giriniz: ");
    scanf("%d", &final); 
    while (final<0 || final>100){
        printf("final notunuzu hatalı girdiniz, tekrar giriniz: ");
        scanf("%d", &final);
    }
    
    a = vize*0.4 + final*0.6;
    if(a>=60){
        printf("geçtiniz %d",a);
    }
    else{
        printf("kaldınız %d",a);
    }
    return 0;
}
