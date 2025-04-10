#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
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

#include "resistor_color.h"
#include<stdio.h>

const char* color_to_string(resistor_band_t color) {
    switch (color) {
    case black: return "Black";
    case brown: return "Brown";
    case red: return "Red";
    case orange: return "Orange";
    case yellow: return "Yellow";
    case green: return "Green";
    case blue: return "Blue";
    case violet: return "Violet";
    case grey: return "Grey";
    case white: return "White"; 
    default: return "Unknown";
    }
}

int color_value(resistor_band_t color) {
    if (color >= black && color <= white)
        return color;
    return -1;
}

void list_color(void) {
    for (int color = black; color <= white; ++color) {
        printf("\n%s: %d", color_to_string((resistor_band_t)color), color_value((resistor_band_t)color));
    }
}

int main() {
    int band;
    list_color();
    printf("\nEnter the color: ");
    scanf("%d", &band);

    if (band < 0 || band > 9) {
        printf("Invalid input.\n");
    } else {
        printf("%s: %d\n", color_to_string((resistor_band_t)band), color_value((resistor_band_t)band));
    }
    return 0;
}
