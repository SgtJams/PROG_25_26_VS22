
#include <stdio.h>

/*
 * MAP FN FROM ARDUINO :
 * https://www.arduino.cc/reference/en/language/functions/math/map/
 * Return a value from a certain range in input, into a second range in output.
 */
#define GENERIC_MAP(type)                                                       \
type map_##type(type x, type in_min, type in_max, type out_min, type out_max) { \
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;    \
}
GENERIC_MAP(int)    // map_int( ... ) { ... }
GENERIC_MAP(float)  // map_float( ... ) { ... }

// The above lines will replace the following :
/*
int map_int(int x, int in_min, int in_max, int out_min, int out_max) { \
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;    \
}
float map_int(float x, float in_min, float in_max, float out_min, float out_max) { \
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;    \
}
*/

int main() {
    // Example with INT :
    int i_inMin = 0, i_inMax = 100;     // Input range :    0 to 100
    int i_outMin = 0, i_outMax = -50;   // Output range :   0 to (-50)
    int i_input = 50;                   // Input : 50 / Output expected : (-25)
    int i_output = map_int(i_input, i_inMin, i_inMax, i_outMin, i_outMax);
    printf("<< INT >> : Input value is      : %d\n", i_input);
    printf("            Output value is     : %d\n", i_output);

    // Example with FLOAT :
    float f_inMin = 0.0f, f_inMax = 50.0f;      // Input range :    0.0 to 50.0
    float f_outMin = 0.0f, f_outMax = -25.5f;   // Output range :   0.0 to -25.5
    float f_input = 23.5f;                      // Input : 23.5 /
                                                //          Output expected : ~ (-11.93)
    float f_output = map_float(f_input, f_inMin, f_inMax, f_outMin, f_outMax);
    printf("<< FLOAT >> : Input value is    : %0.2f\n", f_input);
    printf("              Output value is   : %0.2f\n", f_output);

    return 0;
}

/*
========================================================================================>
=======================================================================================
....-----------------------------------------------------------------------------------.
../ .---------------------------------------------------------------------------------. \
./´/
|x| __--""'\
|x|  ,__  -'""`;
|x| /   \  /"'  \
|x|   __// \-"-_/
|x| ´"   \  |           > Title : main.c
|x| \     |  \  _.-"',
|x| "^,-´\/\  '" ,--. \         > Src : None
|x|  \|\| | | , /    | |        >           ...
|x|     '`'\|._ |   / /
|x|         '\),/  / |          > Creation: 2021.03.10
|x|           |/.-"_/           > By :  KC5-BP
|x| .__---+-_/'|--"
|x|         _| |_--,            > Description :
|x|        ',/ |   /                Usage of macro to create multiple functions
|x|        /|| |  /                 with multiple types.
|x|     |\| |/ |- |
|x| .-,-/ | /  '/-"
|x| -\|/-/\/ ^,'|               > (Normally as a header, but the code
|x| _-     |  |/                    is more essential here.)
|x|  .  --"  /
|x| /--__,.-/
.\`\__________________________________________________________________________________/´/
..`____________________________________________________________________________________´
 */
