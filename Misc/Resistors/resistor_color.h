#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum{
    black = 0, 
    brown = 1,
    red = 2, 
    orange = 3, 
    yellow = 4, 
    green = 5,
    blue = 6, 
    violet = 7, 
    grey = 8, 
    white = 9
} resistor_band_t;

//required function prototypes
const char* color_to_string(resistor_band_t color);
int color_value(resistor_band_t color);
void list_color(void);

#endif