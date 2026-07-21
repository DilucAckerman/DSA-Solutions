#include<stdio.h>
int arr[100];

//Functions
int menu();
int ls_itr(int,int);
int ls_rec(int,int,int);
int bs_itr(int,int,int);
int bs_rec(int,int,int);
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
            found = bs_itr():
            break;
        case 4:
            found = bs_rec(0,n-1,num):
            break;
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

//Linear Search(Iterative)
int ls_itr(int n,int num){
    for(int i=0;i<=n-1;i++){
        if(arr[i]==num){
            return i;
        }  
    }
    return -1;
}

//Linear Search(Recursive)
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

//Binary Search(Recursive)
int bs_rec(int lb, int ub, int num){
    mid = (lb+ub)/2;
    if(lb>ub){
        return -1;
    }else{
        if(arr[mid]==num){
            return mid;
        }else if(arr[mid]>num){
            bs_rec(lb,mid-1,num);
        }else{
            bs_rec(mid+1,ub,num);
        }
    }
}

//Binary Search(Iterative)
int bs_itr(int lb, int ub, int num){
    int mid;
    mid = (lb+ub)/2;
    while(lb<=ub){
        if(arr[mid]==num){
            return mid;
        }else if(arr[mid]>num){
            ub = mid-1;
        }else{
            lb = mid+1;
        }
        mid = (lb+ub)/2;
    }
    return -1;
}
