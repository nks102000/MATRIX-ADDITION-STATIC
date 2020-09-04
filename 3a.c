//1905622 - NITISH KUMAR SONTHALIA
//MATRIX ADDITION STATIC
#include <stdio.h>
#include <stdlib.h>

int add(int r1,int r2,int c1,int c2,int a1[][c1], int a2[][c2]){
    if((r1==r2)&&(c1=c2)){
        int a3[r2][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                a3[i][j]=a1[i][j]+a2[i][j];
            }
        }

    printf("\nElements in array are:\n ");
    for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",a3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Addition not possible as number of rows and columb are different");
    }
}

int main(){
    int r1,c1,r2,c2;
    
    printf("Enter size of array1 rows: ");
    scanf("%d",&r1);
    printf("Enter size of array1 coloumb: ");
    scanf("%d",&c1);
    int a1[r1][c1];

    printf("Enter elements in the array 1: \n ");
    for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                printf("Enter elements at position [%d,%d] : ",i,j);
                scanf("%d",&a1[i][j]);
            }
        }
    
    printf("Enter size of array2 rows: ");
    scanf("%d",&r2);
    printf("Enter size of array2 coloumb: ");
    scanf("%d",&c2);
    int a2[r2][c2];

    printf("Enter elements in the array 2 :\n ");
    for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("Enter elements at position [%d,%d] : ",i,j);
                scanf("%d",&a2[i][j]);
            }
    }
    add(r1,r2,c1,c1,a1,a2);
    return 0;
}