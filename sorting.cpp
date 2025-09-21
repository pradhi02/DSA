#include <iostream>
#include <algorithm>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

void bubblesort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
     bool swapped = false; //HAR PASS K BAD RESET HOGA HENCE SWAPPING BOOLEIN WILL BE REST AFTER 1ST PASS SO IN ANY PASS THERE IS NO SWAPPING MEANS THE SWPP REMINAS UNCHANGED WE WILL BREAK THE LOOP 
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
            swap(array[j], array[j + 1]);
            swapped = true; 
        }
        } 

        if(!swapped) break; //if no swaps in this pass then the array is already sored and hence no futhure checking should be done 
    }
} 


void insertionSort(int arr[], int size){ 
    for(int i=0;i<=size-1;i++){
        int j=i; 
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1]; 
            arr[j-1]=arr[j]; 
            arr[j]=temp; 
            j--; 
        } 
        
    }

 
}


int main()
{
    cout << "HELLO WORLD FOR CHECK";
    int array[5] = {23, 24, 12, 45, 43};
    selectionSort(array, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    } 
    
    cout<<"BUBBLESORT WORKS HERE";
    bubblesort(array,5);
    
    for(int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    } 
     
    cout<<"PRINTING INSERTION SORT"<<endl;
    //insertionSort(array,5);
    
    for(int i = 0; i < 5; i++)
    {
        insertionSort(array,5);
        cout << array[i] << " ";
    } 
   


    return 0;
}