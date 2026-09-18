#include <stdio.h>

int nonreccursive(int arr[],int low,int high,int target){
    int mid ;

    //we will ask array to be entered in the void main here we will do the working only
    //we will parameters of low means start and high which is end in the int main part
    while(low<=high){
        //we will calculate the mid part 
        mid = (low+high)/2;
        //now mid will help us to check were we have to go the second part from the mid 
        //or the lower half of the mid
        if(target==arr[mid]){
         
            return mid;
        }
        else if(target<arr[mid]){
            high =mid -1;
        }else{
            low = mid +1;
        }

    }
        return -1;
}

int reccursive(int arr[],int low, int high, int target){
    //there will be no while loop 
    //direct comparison checking
    int mid;
    if(low<=high){
        mid = (low+high)/2;
                if (target==arr[mid]){
            return mid;
        }
           else if (target<arr[mid]){
            return reccursive(arr,low,mid-1,target);

        }else{
            return reccursive(arr,mid+1,high,target);
        }
    }
    return -1;
}

void display(int result){
    if(  result== -1){
        printf("element is not found ");
    }else{
        printf("element is found at %d",result);
    }

}


 int main(){
    int arr[10];
    int low=0;
    int high=9;
    int target;
    int i;
    int choice;
    int result;
    
    printf("enter the array elements:");
    for (i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the target element you want to find:");
    scanf("%d",&target);
    printf("enter the users choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        result = nonreccursive(arr, low, high, target);
        display(result);
        break;

        case 2:
        result = reccursive(arr, low, high, target);
        display(result);
        break;
    }
    return 0;
}