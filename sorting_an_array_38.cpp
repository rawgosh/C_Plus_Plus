#include <iostream>

void sort(int array[], int size);
int main()
{
    int array[100];
    int i, n;

    std::cout << "How many numbers do you want? :";
    std::cin >> n;

    std::cout << "Enter " << n << " different numbers :\n";
    for (i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    sort(array, n);

    for (i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}
// function to arrange in ascending order
void sort(int array[], int size)
{
    int temp;
    // outer loop to iterate through the array
    for (int i = 0; i < size - 1; i++)
    {
        // inner loop to compare elements and swap if necessary
        for (int j = 0; j < size - i - 1; j++)
        {
            // check if current element is greater than next element
            if (array[j] > array[j + 1])
            {
                // swap elements using temporary variable
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
