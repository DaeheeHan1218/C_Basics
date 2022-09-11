#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* Array1D[] = {"Alia","Bea","Che","Derick","Elena","Fatma","Giun","Henry","Ina","Jaden"};
    int left = 0;
    int mid;
    int right = 9;
    char srch;//accepts user input for the name to be searched
    for(int i = 0; i < 9; i++){//prints list of names that can be searched
        printf("%c, ", *Array1D[i]);
    }
    printf("\n\nPlease input a name to be searched by a binary search algorithm.");//asks user to input a name to search
    while(left <= right){
        mid = (left + right) / 2;
        if(srch > *Array1D[mid]){
            left = mid + 1;
        }
    }
    return 0;
}
