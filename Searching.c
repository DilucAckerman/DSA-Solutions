#include<stdio.h>
int arr[100];

int menu();
int ls_itr(int,int);
int ls_rec(int,int,int);
// int bs_itr();
// int bs_rec();
int array_maker(int);

int main(){
    int ch,n,found,num;

    ch = menu();

    if(ch==5){return 0;}

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    array_maker(n);

    printf("Enter the element you want to find: ");
    scanf("%d", &num);

    switch(ch){
        case 1:
            found = ls_itr(n,num);
            break;
        case 2:
            found = ls_rec(0,num,n);
            break;
        case 3:
            // found = bs_itr();
            // menu();
            // break;
        case 4:
            // found = bs_rec();
            // menu();
            // break;
        case 5:
            break;
        default:
            printf("Please enter a valid choice");
    }

    if(found == -1){
        printf("Element not Found");
    }else{
        printf("Element Found at %dth position", found+1);
    }

    printf("\n\n-----x-----x-----x-----x-----x-----x-----x-----x-----x-----x-----x-----\n\n");
    menu();

    return 0;
}


int menu(){
    int ch;
    printf("------------MENU------------\n|1.Linear Search(Iterative)|\n|2.Linear Search(Recursive)|\n|3.Binary Search(Iterative)|\n|4.Binary Search(Recursive)|\n|5.Exit                    |\n----------------------------\n");
    scanf("%d",&ch);
    return ch;
}

int array_maker(int n){
    for(int i=0 ;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
}

int ls_itr(int n,int num){
    for(int i=0;i<=n-1;i++){
        if(arr[i]==num){
            return i;
        }  
    }
    return -1;
}

int ls_rec(int i, int num, int n){
    if(i>=n){
        return -1;
    }
    if (num == arr[i]){
        return i;
    }else{
        return ls_rec(i+1,num,n);
    }
}

int bs_itr(int i)