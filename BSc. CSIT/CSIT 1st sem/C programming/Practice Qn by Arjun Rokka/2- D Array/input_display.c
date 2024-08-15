// make a 3*3 matrix and take an input from user and print it out 
#include<stdio.h>

// main function
int main(){
    int i,j;
    int mat[3][3];

// taking input from user 
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Enter 'matrix's', row %d column %d: ",i,j);
        scanf("%d",&mat[i][j]);
    }
}

// printing an output 
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
} 

}