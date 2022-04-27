#include <stdio.h>
#include <string.h>
int main(){
    int x=0, length, temp;
    char arr[10] = {0,};
    scanf("%s", arr);
    length = strlen(arr);
    for(int i=0; i<length; i++){
        for(int j=0; j<length-x; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        x++;
    }
    printf("%s\n", arr);
    return 0;
}