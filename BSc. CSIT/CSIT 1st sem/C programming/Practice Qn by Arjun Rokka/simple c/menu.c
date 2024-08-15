// making a resturent menue enlisting a five items, give to choose items to user and calculate money at last

#include<stdio.h>
int main(){

// data initalization
int more,choice,quantity,total=0;


// menu
printf("****Menu List**** \n\n 1. Momo  - Rs.120 \n 2. Chowmine - Rs.90 \n 3. Burger  - Rs.200 \n 4. Pizza  - Rs.300");
do{
// user input 
printf("\nEnter your choice from 1 to 4 :->  ");
scanf("%d",&choice);

// checking if choice is between 1 to 4 or not 
if(choice==1 || choice==2 || choice==3 || choice==4){
    // user input quantity
    printf("Quantity of ordered items :->  ");
    scanf("%d",&quantity);
    // switching case
    switch(choice){
        case 1:
        total+=120*quantity;
        break;

        case 2:
        total+=90*quantity;
        break;

        case 3:
        total+=200*quantity;
        break;

        case 4:
        total+=300*quantity;
        break;
        
    }
     
}

else{
    printf("\nEnter a valid choice !");
}
    printf("\nDo you want to order more ? (Yes=1, No=0) : ");
    scanf("%d",&more);
}while(more);
printf("\nTotal money: Rs.%d",total);

return 0;

}