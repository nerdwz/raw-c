/*
 * Challenge 12 - Pixel Art Canvas
 *
 * Practice:
 *   - scanf with int and float
 *   - arithmetic (area, memory calculations)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for canvas width, height, and pixel size in mm.
 *   Print total pixels, total area in mm², cm², and m²,
 *   and memory usage in bytes (each pixel = 3 bytes for RGB).
 *
 *   Expected output:
 *   Canvas width (px) : 1920
 *   Canvas height (px): 1080
 *   Pixel size (mm)   : 0.25
 *
 *   Total pixels  : 2073600
 *   Area (mm2)    : 129600.00
 *   Area (cm2)    : 1296.00
 *   Area (m2)     : 0.13
 *   Memory (bytes): 6220800
 *   Memory (KB)   : 6075.00
 *   Memory (MB)   : 5.93
 */

#include <stdio.h>

int main() {
    int width, height;
    float pixelSize;

    // Input
    printf("Canvas width (px) : ");
    scanf("%d", &width);

    printf("Canvas height (px): ");
    scanf("%d", &height);

    printf("Pixel size (mm)   : ");
    scanf("%f", &pixelSize);

    // Calculations
    int totalPixels = width * height;

    float areaMm2 = totalPixels * (pixelSize * pixelSize);
    float areaCm2 = areaMm2 / 100;
    float areaM2  = areaMm2 / 1000000;

    int memoryBytes = totalPixels * 3;
    float memoryKB = memoryBytes / 1024;
    float memoryMB = memoryKB / 1024;

    // Output
    printf("\nTotal pixels  : %d\n", totalPixels);
    printf("Area (mm2)    : %.2f\n", areaMm2);
    printf("Area (cm2)    : %.2f\n", areaCm2);
    printf("Area (m2)     : %.2f\n", areaM2);

    printf("Memory (bytes): %d\n", memoryBytes);
    printf("Memory (KB)   : %.2f\n", memoryKB);
    printf("Memory (MB)   : %.2f\n", memoryMB);

    return 0;
}