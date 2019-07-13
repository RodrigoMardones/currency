#include "stdlib.h"
#include "stdio.h"

void saludar(){
    printf("hello friend\n");
    int a = 35670;
    int qt20k = a / 20000;
    a = a%20000;
    printf("valor :%d\n",qt20k);
    int qt10k = a / 10000;
    a = a %10000;
    printf("valor :%d\n",qt10k);
    int qt5k = a/5000;
    a = a%5000;
    printf("valor :%d\n",qt5k);
    int qt1k = a/1000;
    a = a%1000;
    printf("valor :%d\n",qt1k);
    int qt500 = a/500;
    a = a%500;
    printf("valor :%d\n",qt500);
    int qt100 = a/100;
    a = a%100;
    printf("valor :%d\n",qt100);
    int qt50 = a/50;
    a = a%50;
    printf("valor :%d\n",qt50);
    int qt10 =a/10;
    a = a%10;
    printf("valor :%d\n",qt10);
    printf("------------------\n");
}

int qtycoin(int *valor,int coin){
    int qty = 0;
    qty = *valor / coin;
    *valor = *valor % coin;
    return qty;
}

void mixto(){
    int a = 0;
    int end = 1;
    int q20k,q10k,q5k,q1k,q500,q100,q50,q10;
    while(end){
        printf("Ingrese un valor para entregar vuelto: ");
        scanf("%d",&a);
        if(a%10 == 0){
            end = 0;
        }else{
            printf("valor ingresado no valido, ingrese otro. \n");
        }
    }
    q20k = qtycoin(&a,20000);
    q10k = qtycoin(&a,10000);
    q5k  = qtycoin(&a,5000);
    q1k  = qtycoin(&a,1000);
    q500 = qtycoin(&a,500);
    q100 = qtycoin(&a,100);
    q50  = qtycoin(&a,50);
    q10  = qtycoin(&a,10);
    printf("--------------------------------------\n");
    printf("------------  resultado  -------------\n");
    printf("--------------------------------------\n");
    printf("20k: %d \n",q20k);
    printf("10k: %d \n",q10k);
    printf("5k: %d \n",q5k);
    printf("1k: %d \n",q1k);
    printf("500: %d \n",q500);
    printf("100: %d \n",q100);
    printf("50: %d \n",q50);
    printf("10: %d \n",q10);
}

void solobilletes(){
    int a = 0;
    int end = 1;
    while(end){
        printf("Ingrese un valor para entregar vuelto: ");
        scanf("%d",&a);
        if(a%10 == 0){
            end = 0;
        }else{
            printf("valor ingresado no valido, ingrese otro. \n");
        }
    }
    
    if(a%10 > 0 || a%1000 > 0){
        printf("no se puede entregar vuelto");
        return;
    }
    int qt20k = qtycoin(&a,20000);
    int qt10k = qtycoin(&a,10000);
    int qt5k  = qtycoin(&a,5000);
    int qt2k  = qtycoin(&a,2000);
    int qt1k  = qtycoin(&a,1000);
    printf("billetes 20k: %d\n",qt20k);
    printf("billetes 10k: %d\n",qt10k);
    printf("billetes  5k: %d\n",qt5k);
    printf("billetes  2k: %d\n",qt2k);
    printf("billetes  1k: %d\n",qt1k);
}

void solomonedas(){
    int a = 0;
    int end = 1;
    while(end){
        printf("Ingrese un valor para entregar vuelto: ");
        scanf("%d",&a);
        if(a%10 == 0){
            end = 0;
        }else{
            printf("valor ingresado no valido, ingrese otro. \n");
        }
    }
    
    if(a%10 > 0 ){
        printf("no se puede entregar vuelto");
        return;
    }
    int qt500 = qtycoin(&a,500);
    int qt100 = qtycoin(&a,100);
    int qt50  = qtycoin(&a,50);
    int qt10  = qtycoin(&a,10);
    printf("monedas 500: %d\n",qt500);
    printf("monedas 100: %d\n",qt100);
    printf("monedas  50: %d\n",qt50);
    printf("monedas  10: %d\n",qt10);
}

void menu2(){
    int op2 = 0;
    while (1){
        printf("-------------vuelto de un monto ------------\n");
        printf("1)mixto \n");
        printf("2)solo billetes \n");
        printf("3)solo monedas \n");
        printf("0)salir del submenu \n");
        printf("---------------------------------------------\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&op2);
        switch (op2)
        {
        case 1:
            mixto();
            break;
        
        case 2:
            solobilletes();
            break;
        case 3:
            solomonedas();
            break;

        case 0:
            return;
            break;
        default:
            printf("Opcion no valida, intenta nuevamente... \n");
        }
    }
    

}
void menu(){
    int op = 0;
    while(1){
        printf("-----------------------------------------------\n");
        printf("-------------   MENU PRINCIPAL ----------------\n");
        printf("-----------------------------------------------\n");
        printf("1) en construccion\n");
        printf("2) vuelto de un monto\n");
        printf("0) salir.\n");
        printf("-----------------------------------------------\n");
        printf("Ingrese opcion:\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("en construccion le dije !\n");
            break;
        
        case 2:
            menu2();
            break;
        
        case 0:
            printf("gracias por usar el programa , cheers !\n");
            return;
            break;
        
        default:
            printf("Opcion no valida");
            break;
        }
    }
}
