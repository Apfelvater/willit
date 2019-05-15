/* Willit Game
 *
 * Library No1
 *
 * Figure Implementation
 */

#include <iostream>
#include "libF.h"

Figure::Figure(int x, int y, int h = 1): pos_x(x), pos_y(y), height(h) {
        std::cout << "Figure created\n";
};

void Figure:move(Dir d) {
    switch (d) {
        //TODO Implementation
    }
}
