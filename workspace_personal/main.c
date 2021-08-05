// Fibonacci Series
// 1, 1, 2, 3, 5, 8, 13, 21, 34...
// Find the nth element of a series. n being the value that is entered

#include <stdio.h>
#include <stdint.h>

uint32_t firstterm = 1;
uint32_t secondterm = 1;
uint32_t retVal = 0;

uint32_t get_element_fibonacciseries(uint32_t element_number);

int main()
{
    uint32_t user_defined_element = 0;

    printf("\nEnter the desired element number for the fibonacci series: ");
    scanf(" %d", &user_defined_element);
    printf("\nElement number %d = %d", user_defined_element, get_element_fibonacciseries(user_defined_element));
}

uint32_t get_element_fibonacciseries(uint32_t element_number)
{
    // First Element
    if(element_number == 0)
    {
        return firstterm;
    }
    if(element_number == 1)
    {
        return secondterm;        
    }
    if(element_number > 1)
    {
        for(uint8_t index = 2; index <= element_number; ++index)
        {
            retVal = firstterm + secondterm;
            firstterm = secondterm;
            secondterm = retVal;
        }
        return retVal;
    }
}