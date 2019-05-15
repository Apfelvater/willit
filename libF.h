/* Willit Game 
 * 
 * Library No1
 *
 * Figure Header
 */
#ifndef _libF_h_
#define _libF_h_

enum Dir {left, right, up, down};

class Figure {
private:
    //Add enum type for type of figure, name, etc..
    int pos_x;
    int pos_y;
    int height;
    
public:
    Figure(int, int, int);
    void move(Dir);
    
};

#endif
