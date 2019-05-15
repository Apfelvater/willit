/*  Willit platforming jump'n'run test
 *
 *
 */


#include <iostream>
#include <stdlib.h>

#define CLEAR "clear" //clear cmd on unix


int update_screen() {
    return 0;
}

int main() {
    
    while(true) {
        if(!update_screen()) {
            std::cout << "Updating Screen failed... Exiting.\n";
            return 1;
        }
    }
    return 0;
}
