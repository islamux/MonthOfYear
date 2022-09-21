#include <iostream>
using namespace std;

// temp put enum here 
// enum enMonthName{
//     Jan=1,
//     Feb=2,
//     Mar=3,
//     Apr=4,
//     May=5,
//     Jun=6,
//     Jul=7,
//     Aug=8,
//     Sep=9,
//     Oct=10,
//     Nov=11,
//     Dec=12
// };


string CheckMonthNumber(enMonthName enMonth){

    // call enum

    switch (enMonth)
    {
    case enMonthName::Jan:
        return "January";
    
    case enMonthName::Feb:
        return "February";
    
    case enMonthName::Mar:
        return "Mars";

    case enMonthName::Apr:
        return "April";
    
    case enMonthName::May:
        return "May";
    
    case enMonthName::Jun:
        return "Junio";
    
    case enMonthName::Jul:
        return "Julay";

   case enMonthName::Aug:
        return "August";

   case enMonthName::Sep:
        return "September";

   case enMonthName::Oct:
        return "Octuber";

   case enMonthName::Nov:
        return "November";

   case enMonthName::Dec:
        return "December";
    
    default: 
        return "Not Proper Choice!\n";
        
    }
}