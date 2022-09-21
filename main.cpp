#include <iostream>
using namespace std;

#include "casting_reading_func_to_enum.h"
#include "check_en_month_number.h"
#include "print_number_int_with_double_msg.h"

/*
    * User enter a month as number 
    *       1 ==> January, 2==> February ...
    *               Wrong month and ask again....
*/


int main(){

    // Reading and casting 
    enMonthName castedNumber = CastingReadingFuncToEnum();
    
    // Cheaking 
    string numberToString = CheckMonthNumber(castedNumber);
    
    // Printing 
    PrintNumberIntWithDoubleMsg("Month: ", numberToString,".");
    
    // Or in One LIne of code 
    //PrintNumberIntWithDoubleMsg("Month: ", CheckMonthNumber(CastingReadingFuncToEnum()) ,".");



    return 0;
}