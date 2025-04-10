/*generating a fractal known as the Mandelbrot set using ASCII characters for visualization*/
#include <stdio.h>

#define WIDTH 80
#define HEIGHT 24

int mandelbrot(double x0, double y0) {
    int maxIterations = 100;
    double x = 0.0, y = 0.0, xtemp;
    int iteration = 0;

    while (x * x + y * y < 4.0 && iteration < maxIterations) {
        xtemp = x * x - y * y + x0;
        y = 2 * x * y + y0;
        x = xtemp;
        iteration++;
    }

    return iteration;
}

int main() {
    double xmin = -2.0, xmax = 1.0;
    double ymin = -1.5, ymax = 1.5;
    double dx = (xmax - xmin) / WIDTH;
    double dy = (ymax - ymin) / HEIGHT;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            double x0 = xmin + j * dx;
            double y0 = ymin + i * dy;
            int iteration = mandelbrot(x0, y0);

            if (iteration == 100) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
