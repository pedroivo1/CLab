#ifndef COLORS_H
#define COLORS_H


#define RESET           "\033[0m"
#define BOLD            "\033[1m"


// --- BASIC COLORS (UNIVERSAL) ---
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define B_BLACK         "\033[90m"
#define B_RED           "\033[91m"
#define B_GREEN         "\033[92m"
#define B_YELLOW        "\033[93m"
#define B_BLUE          "\033[94m"
#define B_MAGENTA       "\033[95m"
#define B_CYAN          "\033[96m"
#define B_WHITE         "\033[97m"


// --- TEMPERATURE (-128 to +127) ---
// Logic: 16 steps using (val + 128) >> 4

// Negative Range (Cold -> Cool)
#define TEMP_0   "\033[38;5;21m"   // [-128 to -113]
#define TEMP_1   "\033[38;5;27m"   // [-112 to  -97]
#define TEMP_2   "\033[38;5;33m"   // [ -96 to  -81]
#define TEMP_3   "\033[38;5;39m"   // [ -80 to  -65]
#define TEMP_4   "\033[38;5;45m"   // [ -64 to  -49]
#define TEMP_5   "\033[38;5;51m"   // [ -48 to  -33]
#define TEMP_6   "\033[38;5;50m"   // [ -32 to  -17]
#define TEMP_7   "\033[38;5;49m"   // [ -16 to   -1]

// Positive Range (Green -> Yellow -> Red)
#define TEMP_8   "\033[38;5;47m"   // [   0 to   15]
#define TEMP_9   "\033[38;5;82m"   // [  16 to   31]
#define TEMP_10  "\033[38;5;154m"  // [  32 to   47]
#define TEMP_11  "\033[38;5;226m"  // [  48 to   63]
#define TEMP_12  "\033[38;5;214m"  // [  64 to   79]
#define TEMP_13  "\033[38;5;202m"  // [  80 to   95]
#define TEMP_14  "\033[38;5;196m"  // [  96 to  111]
#define TEMP_15  "\033[38;5;129m"  // [ 112 to  127]


// --- PERCENTAGE (0% to 100%) ---
// Logic: index = value >> 4
// 100% falls into PERC_6 (96-111)
#define PERC_0   "\033[38;5;46m"   // [  0 -  15]
#define PERC_1   "\033[38;5;48m"   // [ 16 -  31]
#define PERC_2   "\033[38;5;118m"  // [ 32 -  47]
#define PERC_3   "\033[38;5;226m"  // [ 48 -  63]
#define PERC_4   "\033[38;5;214m"  // [ 64 -  79]
#define PERC_5   "\033[38;5;196m"  // [ 80 -  95]
#define PERC_6   "\033[38;5;196m"  // [ 96 - 111]
#define PERC_7   "\033[38;5;129m"  // [112 - 127]

#endif
