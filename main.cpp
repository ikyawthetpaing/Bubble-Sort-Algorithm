#include <iostream>

void swap(int & a, int & b);
void bubbleSort(int array[], int size);
void print(int array[], int size);

int main()
{
    int array[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int size = sizeof(array)/sizeof(int);

    std::cout << "Before : ";
    print(array, size);

    bubbleSort(array, size);

    std::cout << "After  : ";
    print(array, size);

    return 0;
}

void swap(int & a, int & b)
{
    int temp = a; a = b; b = temp;
}

void bubbleSort(int array[], int size)
{
    bool flag;
    
    do
    {
        flag = true;

        for (int i = 0; i < size; i++)
        {
            if (i != size)
            {
                if (*(array + i) > *(array + i + 1))
                {
                    swap(*(array + i), *(array + i + 1));
                    flag = false;
                }
            }
            else
            {
                if (*(array + i - 1) > *(array + i))
                {
                    swap(*(array + i - 1), *(array + i));
                    flag = false;
                }
            }
        }
    } while (!flag);
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << " | " << *(array + i);
    }
    std::cout << " |\n";
}
