#include <stdio.h>
int matriz_identidade(int matriz[][10],int n);

void main(){
    int ar[][10]={
    {0,1,2,3,4},
    {5,6,7,8,9},
    {10,11,12,13,14},
    {15,16,17,18,19},
    {20,21,22,23,24}};

//    int ar[10][10]={
//        {1,0,0,0,0,0,0,0,0,0},
//        {0,1,0,0,0,0,0,0,0,0},
//        {0,0,1,0,0,0,0,0,0,0},
//        {0,0,0,1,0,0,0,0,0,0},
//        {0,0,0,0,1,0,0,0,0,0},
//        {0,0,0,0,0,1,0,0,0,0},
//        {0,0,0,0,0,0,1,0,0,0},
//        {0,0,0,0,0,0,0,1,0,0},
//        {0,0,0,0,0,0,0,0,1,0},
 //       {0,0,0,0,0,0,0,0,0,1},
//    };

    printf("%d",matriz_identidade(ar,10));
}
int matriz_identidade(int matriz[][10],int n){
    int i = 0, j = 0,x=0;
    do{
        do{             
            if(i==j && matriz[i][j]!= 1){
                x++;
            }
            if (matriz[i][j] != 0 && i!=j){
                x++;
            }
        i++;            
        }while(i < n-1);
    j++;
    }while(j > n-1);
    if (x!=0){
        return 0;
    }else if (x == 0){
        return 1;
    }
}