//Please do not delete or modify the code below. 
//Please write your code wherever comments are given as "//Write your code here"

#include <stdio.h>

void calculate_frequency(int input_arr[], int size, int freq_arr[]) {
    for (int i = 0; i < size; i++) {
      switch(input_arr[i]){
        case 1:
        freq_arr[0]++;
        break;
        case 2:
        freq_arr[1]++;
        break;
        case 3:
        freq_arr[2]++;
        break;
        case 4:
        freq_arr[3]++;
        break;
        case 5:
        freq_arr[4]++;
        break;
      }
    }    
}


int main() {
    
    const int size = 7; // For giving fixed no of inputs

    int arr1[size];

    printf("Enter 7 integers in the range 1 to 5\n");
   
   for(int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
   }
   int arr_freq[5] = {0, 0, 0, 0, 0};
   calculate_frequency(arr1, size, arr_freq);
    
   for(int i = 0; i < 5; i++) {
    printf("Frequency of %d is %d\n", i+1, arr_freq[i]);
    //Write your code here
   }

}