#include <iostream>

size_t large_index(const int* arr, const size_t arr_size);
void swap(int& val1, int& va2);
void select_sort(int* arr, const size_t arr_size);

int main()
{
    int arr[] = {-11, -11, -3333, -87, -998, -99};

    for(int i = 0; i < 6; ++i)
    {
        std::cout<<arr[i]<<std::endl;
    }

    std::cout<<std::endl;
    
    select_sort(arr, 6);
    for(int i = 0; i < 6; ++i)
    {
        std::cout<<arr[i]<<std::endl;
    }

    return 0;
}

void select_sort(int* arr, const size_t arr_size)
{
    
    int index = 0;
    for(int i = arr_size -1; i >= 1; --i)
    {
        index = large_index(arr, i);
        swap(arr[index], arr[i]); 
    }
}

void swap(int& val1, int& val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

size_t large_index(const int* arr, size_t arr_size)
{
    int index = 0;
    for(int i = 1; i < arr_size; ++i)   
    {
        if(arr[index] < arr[i])
        {
            index = i;
        }
    }
    return index;
}
