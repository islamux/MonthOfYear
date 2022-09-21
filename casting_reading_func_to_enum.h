#include <iostream>
using namespace std;


// enum make error
//   error: expected unqualified-id before ‘using’
//   2 | using namespace std; when calling from seperate file so i put it here 
enum enMonthName{
    Jan=1,
    Feb=2,
    Mar=3,
    Apr=4,
    May=5,
    Jun=6,
    Jul=7,
    Aug=8,
    Sep=9,
    Oct=10,
    Nov=11,
    Dec=12
};

#include "read_number_in_ragne.h"

enMonthName CastingReadingFuncToEnum(){

    return (enMonthName) ReadNumberInRange("Enter a number from 1 to 12: ", 1, 12);
}