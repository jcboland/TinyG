/* 
 * tinyg_feedhold_test.h 
 *
 * Notes:
 *	  -	The character array should be the same name as the filename (by convention)
 *	  - Comments are not allowed in the char array, but gcode comments are OK e.g. (g0 test)
 */
const char PROGMEM tinyg_feedhold_test[] = "\
(MSG**** Feedhold Test - Version 001 ****)\n\
(MSG**** Manually enter ! and ~ during movement to test ****)\n\
g00g17g21g40g49g80g90\n\
f600\n\
g0x100v76.765\n\
x0y0\n\
m30";
