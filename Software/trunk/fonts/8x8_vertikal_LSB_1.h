/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Project Transistor Tester
 *
 *  File:       8x8_vertikal_LSB_1.h
 *  Funktion:   table of the bits for the 8x8 character set
 *              - 8 bytes per character
 *              - first byte: first vertical line (left to right)
 *              - bit #0: top / bit #7: bottom (vertically flipped)
 *
 * History:     Date        Sign    Kommentar
 *              2021-01-05  Bohu    ISO 8859-2 charakter added
 *              2021-01-10  Karl    defined added
 *              2021-01-13  Karl    sequence of characters in area 3-15 changed
 *              2021-01-27  Bohu    some special characters changed
 *              2021-02-13  Karl    defines in std_defines.h
 *              2021-02-16  Karl    dual tables for tester and characters
 * ************************************************************************ */

#include "std_defines.h"	/* use standard defines for special characters */

#if defined(MAIN_C)
const unsigned char PROGMEM sfont[9][FONT_WIDTH]=
{
{0x08,0x3E,0x22,0x22,0x22,0x22,0x3E,0x08},  /* 0x00 Resistor3 */
{0x08,0x7F,0x7F,0x3E,0x1C,0x08,0x7F,0x08},  /* 0x01 Diode1 */
{0x08,0x7F,0x08,0x1C,0x3E,0x7F,0x7F,0x08},  /* 0x02 Diode2 */
{0x08,0x7F,0x7F,0x00,0x00,0x7F,0x7F,0x08},  /* 0x03 Capacitor */
{0x08,0x7F,0x41,0x41,0x41,0x41,0x41,0x41},  /* 0x04 Resistor2 */
{0x41,0x41,0x41,0x41,0x41,0x41,0x7F,0x08},  /* 0x05 Resistor1 */
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08},  /* 0x06 Line1  */
{0x38,0x40,0x58,0x24,0x58,0x40,0x58,0x24},  /* 0x07 Inductor1 */
{0x58,0x40,0x58,0x24,0x58,0x40,0x38,0x08},  /* 0x08 Inductor2 */
};
const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][(FONT_WIDTH-1)]=
{
{0xC0,0x7C,0x3E,0x41,0x49,0x7F,0x36},  /* 0x1c Beta   */
{0x4C,0x5E,0x72,0x02,0x72,0x5E,0x4C},  /* 0x1d Omega  */
{0xC0,0x7E,0x3E,0x20,0x1E,0x3E,0x20},  /* 0x1e micro  */
{0x00,0x00,0x02,0x05,0x02,0x00,0x00},  /* 0x1f degree */
/* ----ASCII-0x20-0x79---------------- */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x20 ' ' */
{0x00,0x06,0x6F,0x6F,0x06,0x00,0x00},  /* 0x21 '!' */
{0x00,0x0B,0x07,0x00,0x00,0x0B,0x07},  /* 0x22 '"' */
{0x36,0x7F,0x7F,0x36,0x7F,0x7F,0x36},  /* 0x23 '#' */
{0x04,0x2E,0x2A,0x6B,0x2A,0x3A,0x10},  /* 0x24 '$' */
{0x63,0x73,0x38,0x1C,0x0E,0x67,0x63},  /* 0x25 '%' */
{0x36,0x49,0x49,0x49,0x36,0x60,0x50},  /* 0x26 '&' */
{0x00,0x00,0x07,0x0B,0x00,0x00,0x00},  /* 0x27 ''' */
{0x00,0x00,0x1C,0x3E,0x63,0x41,0x00},  /* 0x28 '(' */
{0x00,0x00,0x41,0x63,0x3E,0x1C,0x00},  /* 0x29 ')' */
{0x00,0x15,0x0A,0x1F,0x1F,0x0A,0x15},  /* 0x2a '*' */
{0x00,0x18,0x18,0x7E,0x7E,0x18,0x18},  /* 0x2b '+' */
{0x00,0x00,0xB0,0x70,0x00,0x00,0x00},  /* 0x2c ',' */
{0x08,0x08,0x08,0x08,0x08,0x08,0x08},  /* 0x2d '-' */
{0x00,0x00,0x60,0x60,0x00,0x00,0x00},  /* 0x2e '.' */
{0x60,0x70,0x38,0x1C,0x0E,0x07,0x03},  /* 0x2f '/' */
{0x1C,0x3E,0x73,0x49,0x67,0x3E,0x1C},  /* 0x30 '0' */
{0x00,0x42,0x7F,0x7F,0x40,0x00,0x00},  /* 0x31 '1' */
{0x62,0x73,0x51,0x59,0x49,0x4F,0x46},  /* 0x32 '2' */
{0x22,0x63,0x41,0x49,0x49,0x77,0x36},  /* 0x33 '3' */
{0x18,0x1C,0x16,0x13,0x7F,0x7F,0x10},  /* 0x34 '4' */
{0x27,0x67,0x45,0x45,0x45,0x7D,0x38},  /* 0x35 '5' */
{0x3C,0x7E,0x4B,0x49,0x49,0x79,0x30},  /* 0x36 '6' */
{0x03,0x03,0x71,0x79,0x0D,0x07,0x03},  /* 0x37 '7' */
{0x36,0x7F,0x49,0x49,0x49,0x7F,0x36},  /* 0x38 '8' */
{0x06,0x4F,0x49,0x49,0x69,0x3F,0x1E},  /* 0x39 '9' */
{0x00,0x00,0x00,0x66,0x66,0x00,0x00},  /* 0x3a ':' */
{0x00,0x00,0x00,0xA6,0x66,0x00,0x00},  /* 0x3b ';' */
{0x00,0x08,0x1C,0x36,0x63,0x00,0x00},  /* 0x3c '<' */
{0x36,0x36,0x36,0x36,0x36,0x36,0x36},  /* 0x3d '=' */
{0x00,0x41,0x63,0x36,0x1C,0x08,0x00},  /* 0x3e '>' */
{0x02,0x03,0x69,0x6D,0x07,0x06,0x00},  /* 0x3f '?' */
{0x3E,0x63,0x41,0x5D,0x55,0x5F,0x60},  /* 0x40 '@' */
{0x7C,0x7E,0x13,0x11,0x13,0x7E,0x7C},  /* 0x41 'A' */
{0x7F,0x7F,0x49,0x49,0x49,0x7F,0x36},  /* 0x42 'B' */
{0x1C,0x3E,0x63,0x41,0x41,0x63,0x22},  /* 0x43 'C' */
{0x7F,0x7F,0x41,0x41,0x63,0x3E,0x1C},  /* 0x44 'D' */
{0x7F,0x7F,0x49,0x49,0x49,0x49,0x41},  /* 0x45 'E' */
{0x7F,0x7F,0x09,0x09,0x09,0x09,0x01},  /* 0x46 'F' */
{0x1C,0x3E,0x63,0x41,0x49,0x79,0x79},  /* 0x47 'G' */
{0x7F,0x7F,0x08,0x08,0x08,0x7F,0x7F},  /* 0x48 'H' */
{0x00,0x00,0x41,0x7F,0x7F,0x41,0x00},  /* 0x49 'I' */
{0x30,0x70,0x40,0x40,0x40,0x7F,0x3F},  /* 0x4a 'J' */
{0x7F,0x7F,0x18,0x3C,0x36,0x63,0x41},  /* 0x4b 'K' */
{0x7F,0x7F,0x40,0x40,0x40,0x40,0x40},  /* 0x4c 'L' */
{0x7F,0x7F,0x0E,0x1C,0x0E,0x7F,0x7F},  /* 0x4d 'M' */
{0x7F,0x7F,0x0E,0x1C,0x38,0x7F,0x7F},  /* 0x4e 'N' */
{0x1C,0x3E,0x63,0x41,0x63,0x3E,0x1C},  /* 0x4f 'O' */
{0x7F,0x7F,0x11,0x11,0x11,0x1F,0x0E},  /* 0x50 'P' */
{0x3E,0x7F,0x41,0x51,0x71,0x3F,0x5E},  /* 0x51 'Q' */
{0x7F,0x7F,0x09,0x19,0x39,0x6F,0x46},  /* 0x52 'R' */
{0x26,0x6F,0x49,0x49,0x49,0x7B,0x32},  /* 0x53 'S' */
{0x00,0x01,0x01,0x7F,0x7F,0x01,0x01},  /* 0x54 'T' */
{0x3F,0x7F,0x40,0x40,0x40,0x7F,0x3F},  /* 0x55 'U' */
{0x0F,0x1F,0x38,0x70,0x38,0x1F,0x0F},  /* 0x56 'V' */
{0x3F,0x7F,0x40,0x38,0x40,0x7F,0x3F},  /* 0x57 'W' */
{0x63,0x77,0x3E,0x1C,0x3E,0x77,0x63},  /* 0x58 'X' */
{0x00,0x07,0x0F,0x78,0x78,0x0F,0x07},  /* 0x59 'Y' */
{0x61,0x71,0x79,0x5D,0x4F,0x47,0x43},  /* 0x5a 'Z' */
{0x00,0x7F,0x7F,0x41,0x41,0x00,0x00},  /* 0x5b '[' */
{0x03,0x07,0x0E,0x1C,0x38,0x70,0x60},  /* 0x5c '\' */
{0x00,0x41,0x41,0x7F,0x7F,0x00,0x00},  /* 0x5d ']' */
{0x08,0x0C,0x06,0x03,0x06,0x0C,0x08},  /* 0x5e '^' */
{0x80,0x80,0x80,0x80,0x80,0x80,0x80},  /* 0x5f '_' */
{0x00,0x00,0x07,0x0B,0x00,0x00,0x00},  /* 0x60 '`' */
{0x30,0x7A,0x4A,0x4A,0x7E,0x3C,0x40},  /* 0x61 'a' */
{0x7F,0x7F,0x44,0x42,0x62,0x7E,0x3C},  /* 0x62 'b' */
{0x18,0x3C,0x66,0x42,0x42,0x66,0x24},  /* 0x63 'c' */
{0x3C,0x7E,0x42,0x42,0x44,0x7F,0x7F},  /* 0x64 'd' */
{0x3C,0x7E,0x4A,0x4A,0x4A,0x6E,0x2C},  /* 0x65 'e' */
{0x00,0x08,0x7E,0x7F,0x09,0x0A,0x00},  /* 0x66 'f' */
{0x1C,0x3E,0xA2,0xA2,0x92,0xFE,0x7C},  /* 0x67 'g' */
{0x7F,0x7F,0x04,0x02,0x02,0x7E,0x7C},  /* 0x68 'h' */
{0x00,0x00,0x44,0x7D,0x7D,0x40,0x00},  /* 0x69 'i' */
{0x00,0x40,0xC0,0x84,0xFD,0x7D,0x00},  /* 0x6a 'j' */
{0x00,0x7F,0x7F,0x08,0x34,0x66,0x42},  /* 0x6b 'k' */
{0x00,0x00,0x01,0x7F,0x7F,0x00,0x00},  /* 0x6c 'l' */
{0x7E,0x7E,0x02,0x7E,0x04,0x7E,0x7C},  /* 0x6d 'm' */
{0x7E,0x7E,0x04,0x02,0x06,0x7C,0x78},  /* 0x6e 'n' */
{0x18,0x3C,0x66,0x42,0x66,0x3C,0x18},  /* 0x6f 'o' */
{0xFE,0xFE,0x22,0x42,0x42,0x7E,0x3C},  /* 0x70 'p' */
{0x00,0x3C,0x7E,0x42,0x22,0xFE,0xFE},  /* 0x71 'q' */
{0x7E,0x7E,0x04,0x02,0x02,0x0E,0x0C},  /* 0x72 'r' */
{0x24,0x6E,0x4A,0x4A,0x4A,0x7A,0x30},  /* 0x73 's' */
{0x04,0x04,0x3F,0x7F,0x44,0x64,0x20},  /* 0x74 't' */
{0x3E,0x7E,0x40,0x40,0x20,0x7E,0x7E},  /* 0x75 'u' */
{0x0E,0x1E,0x30,0x60,0x30,0x1E,0x0E},  /* 0x76 'v' */
{0x3E,0x7E,0x40,0x30,0x40,0x7E,0x3E},  /* 0x77 'w' */
{0x62,0x76,0x1C,0x08,0x1C,0x76,0x62},  /* 0x78 'x' */
{0x1E,0x3E,0xA0,0xA0,0x90,0xFE,0x7E},  /* 0x79 'y' */
{0x42,0x62,0x72,0x5A,0x4E,0x46,0x00},  /* 0x7a 'z' */
{0x08,0x3E,0x77,0x41,0x41,0x00,0x00},  /* 0x7b '{' */
{0x00,0x00,0x00,0x7F,0x7F,0x00,0x00},  /* 0x7c '|' */
{0x00,0x00,0x41,0x41,0x77,0x3E,0x08},  /* 0x7d '}' */
{0x08,0x04,0x02,0x04,0x08,0x10,0x08},  /* 0x7e '~' */
{0x08,0x1C,0x3E,0x7F,0x1C,0x1C,0x1C},  /* 0x7f  */

/* All language specific characters are defined below, only the required are added with          */
/* #include "language-dependend_characters.h"                                                    */
/* Please note, that the position of special characters defined in "std_defines.h" must match to */
/* the sequence in "language-dependend_characters.h" !                                           */
/* Cyrillic characters are included additionally, if required.                                   */


#define PIX_a_acute  {0x20,0x74,0x54,0x56,0x7D,0x38,0x40}, 
#define PIX_c_acute  {0x18,0x3C,0x64,0x46,0x45,0x68,0x28}, 
#define PIX_e_acute  {0x38,0x7C,0x54,0x56,0x55,0x5C,0x08}, 
#define PIX_i_acute  {0x00,0x00,0x40,0x7C,0x7E,0x41,0x00}, 
#define PIX_l_acute  {0x00,0x02,0x3E,0x7E,0x40,0x02,0x01}, 
#define PIX_n_acute  {0x0E,0x7E,0x04,0x06,0x05,0x7C,0x78}, 
#define PIX_o_acute  {0x10,0x28,0x44,0x46,0x45,0x28,0x10}, 
#define PIX_r_acute  {0x7C,0x7C,0x0A,0x05,0x04,0x1C,0x18}, 
#define PIX_s_acute  {0x08,0x5C,0x54,0x56,0x55,0x74,0x20}, 
#define PIX_u_acute  {0x3C,0x78,0x40,0x42,0x21,0x78,0x7C}, 
#define PIX_y_acute  {0x1C,0x38,0xA0,0xA2,0x91,0xF8,0x7C}, 
#define PIX_z_acute  {0x44,0x64,0x54,0x56,0x4D,0x44,0x00}, 
#define PIX_A_acute  {0x70,0x78,0x2C,0x26,0x2D,0x78,0x70}, 
#define PIX_C_acute  {0x18,0x3E,0x66,0x43,0x43,0x66,0x24}, 
#define PIX_E_acute  {0x7C,0x7C,0x54,0x56,0x55,0x54,0x44}, 
#define PIX_I_acute  {0x00,0x00,0x44,0x7C,0x7E,0x45,0x00}, 
#define PIX_L_acute  {0x7F,0x7F,0x40,0x42,0x41,0x40,0x40}, 
#define PIX_N_acute  {0x7F,0x7F,0x08,0x1A,0x31,0x7C,0x7F}, 
#define PIX_O_acute  {0x10,0x38,0x6C,0x46,0x6D,0x38,0x10}, 
#define PIX_R_acute  {0x7C,0x7C,0x14,0x36,0x35,0x5C,0x48}, 
#define PIX_S_acute  {0x24,0x6E,0x4A,0x53,0x53,0x76,0x24}, 
#define PIX_U_acute  {0x3C,0x7C,0x40,0x42,0x41,0x7C,0x3C}, 
#define PIX_Y_acute  {0x00,0x04,0x5C,0x70,0x72,0x5D,0x04}, 
#define PIX_Z_acute  {0x64,0x64,0x74,0x56,0x5D,0x4C,0x4C}, 

#define PIX_a_breve  {0x20,0x75,0x56,0x55,0x78,0x30,0x40}, 
#define PIX_A_breve  {0x70,0x78,0x29,0x26,0x29,0x78,0x70}, 

#define PIX_c_caron  {0x10,0x38,0x6D,0x46,0x45,0x6C,0x28}, 
#define PIX_d_caron  {0x30,0x78,0x48,0x4B,0x28,0x7F,0x7F}, 
#define PIX_e_caron  {0x38,0x7C,0x55,0x56,0x55,0x5C,0x08}, 
#define PIX_l_caron  {0x00,0x02,0x3E,0x7C,0x41,0x02,0x01}, 
#define PIX_n_caron  {0x7C,0x7D,0x0A,0x05,0x0C,0x78,0x70}, 
#define PIX_r_caron  {0x7C,0x7D,0x0A,0x05,0x04,0x1C,0x18}, 
#define PIX_s_caron  {0x08,0x5C,0x55,0x56,0x55,0x74,0x20}, 
#define PIX_t_caron  {0x04,0x04,0x3E,0x7E,0x44,0x64,0x23}, 
#define PIX_z_caron  {0x44,0x64,0x55,0x56,0x4D,0x44,0x00}, 
#define PIX_C_caron  {0x38,0x7C,0x45,0x46,0x45,0x6C,0x28}, 
#define PIX_D_caron  {0x7C,0x7C,0x45,0x46,0x6D,0x38,0x10}, 
#define PIX_E_caron  {0x7C,0x7C,0x55,0x56,0x55,0x54,0x44}, 
#define PIX_L_caron  {0x7F,0x7F,0x40,0x41,0x42,0x41,0x40}, 
#define PIX_N_caron  {0x7C,0x7C,0x09,0x1A,0x31,0x7C,0x7C}, 
#define PIX_R_caron  {0x7C,0x7C,0x15,0x36,0x35,0x5C,0x48}, 
#define PIX_S_caron  {0x68,0x4C,0x55,0x56,0x55,0x64,0x2C}, 
#define PIX_T_caron  {0x00,0x04,0x05,0x7E,0x7D,0x04,0x04}, 
#define PIX_Z_caron  {0x64,0x64,0x75,0x56,0x5D,0x4C,0x4C}, 

#define PIX_c_cedil  {0x18,0xBC,0xA6,0x62,0x22,0x26,0x14}, 
#define PIX_s_cedil  {0x04,0xAE,0xAA,0x6A,0x2A,0x3A,0x10}, 
#define PIX_t_cedil  {0x04,0x04,0xBF,0xBF,0x44,0x64,0x20}, 
#define PIX_C_cedil  {0x1C,0xBE,0xA3,0x61,0x21,0x33,0x12}, 
#define PIX_S_cedil  {0x06,0xAF,0xA9,0x69,0x29,0x3B,0x12}, 
#define PIX_T_cedil  {0x00,0x01,0x81,0xBF,0x5F,0x01,0x01}, 

#define PIX_a_circ   {0x20,0x74,0x56,0x55,0x7E,0x38,0x40}, 
#define PIX_e_circ   {0x38,0x7C,0x56,0x55,0x56,0x5C,0x08}, 
#define PIX_i_circ   {0x00,0x00,0x4A,0x7D,0x7A,0x40,0x00}, 
#define PIX_o_circ   {0x10,0x28,0x46,0x45,0x46,0x28,0x10}, 
#define PIX_u_circ   {0x3C,0x78,0x42,0x41,0x22,0x78,0x7C}, 
#define PIX_A_circ   {0x70,0x78,0x2E,0x25,0x2E,0x78,0x70}, 
#define PIX_E_circ   {0x7C,0x7C,0x56,0x55,0x56,0x54,0x44}, 
#define PIX_I_circ   {0x00,0x00,0x46,0x7D,0x7D,0x46,0x00}, 
#define PIX_O_circ   {0x18,0x3C,0x66,0x45,0x66,0x3C,0x18}, 
#define PIX_U_circ   {0x3F,0x7C,0x42,0x41,0x42,0x7C,0x3F}, 

#define PIX_o_dblac  {0x10,0x3B,0x6C,0x44,0x6C,0x3B,0x10}, 
#define PIX_u_dblac  {0x3C,0x78,0x43,0x40,0x23,0x78,0x7C}, 
#define PIX_O_dblac  {0x18,0x3B,0x64,0x42,0x64,0x3B,0x18}, 
#define PIX_U_dblac  {0x3C,0x7C,0x43,0x40,0x43,0x7C,0x3C}, 

#define PIX_z_dot    {0x44,0x64,0x55,0x55,0x4C,0x44,0x00}, 
#define PIX_Z_dot    {0x62,0x72,0x7A,0x5F,0x4F,0x46,0x42}, 

#define PIX_a_elig   {0x20,0x54,0x54,0x7C,0x54,0x5C,0x08}, 
#define PIX_o_elig   {0x10,0x28,0x44,0x7C,0x54,0x54,0x08}, 
#define PIX_A_elig   {0x7C,0x0A,0x09,0x7F,0x7F,0x49,0x41}, 
#define PIX_O_elig   {0x1C,0x22,0x41,0x7F,0x7F,0x49,0x41}, 

#define PIX_d_eth    {0x3C,0x7E,0x42,0x42,0x54,0x7F,0x7F}, 
#define PIX_D_eth    {0x08,0x7F,0x7F,0x49,0x63,0x3E,0x1C}, 

#define PIX_a_grave  {0x20,0x74,0x55,0x56,0x7C,0x38,0x40}, 
#define PIX_e_grave  {0x38,0x7C,0x55,0x56,0x54,0x5C,0x08}, 
#define PIX_i_grave  {0x00,0x00,0x48,0x79,0x7A,0x40,0x00}, 
#define PIX_o_grave  {0x10,0x28,0x44,0x45,0x46,0x28,0x10}, 
#define PIX_u_grave  {0x3C,0x78,0x41,0x42,0x20,0x78,0x7C}, 
#define PIX_A_grave  {0x70,0x78,0x2D,0x26,0x2C,0x78,0x70}, 
#define PIX_E_grave  {0x7C,0x7C,0x55,0x56,0x54,0x54,0x44}, 
#define PIX_I_grave  {0x00,0x00,0x44,0x7D,0x7E,0x44,0x00}, 
#define PIX_O_grave  {0x18,0x3C,0x64,0x45,0x66,0x3C,0x18}, 
#define PIX_U_grave  {0x3E,0x7C,0x41,0x42,0x40,0x7C,0x3E}, 

#define PIX_a_ogon   {0x30,0x7A,0x4A,0x4A,0x3E,0x7C,0xA0}, 
#define PIX_e_ogon   {0x18,0x3C,0x4E,0x4A,0x2A,0x6E,0xA0}, 
#define PIX_A_ogon   {0x7C,0x7E,0x13,0x11,0x13,0x5E,0xB0}, 
#define PIX_E_ogon   {0x3F,0x3F,0x25,0x25,0x25,0x65,0xA1}, 

#define PIX_a_ring   {0x20,0x74,0x52,0x55,0x7A,0x38,0x40}, 
#define PIX_u_ring   {0x3C,0x78,0x42,0x45,0x22,0x78,0x7C}, 
#define PIX_A_ring   {0x70,0x78,0x2A,0x25,0x2A,0x78,0x70}, 
#define PIX_U_ring   {0x3C,0x78,0x42,0x45,0x22,0x78,0x7C}, 

#define PIX_s_sharp  {0xFF,0xFF,0x49,0x49,0x49,0x7F,0x36}, 

#define PIX_o_slash  {0x00,0x58,0x24,0x52,0x4A,0x24,0x1A}, 
#define PIX_O_slash  {0x5C,0x3E,0x51,0x49,0x65,0x3E,0x1D}, 

#define PIX_l_stroke {0x00,0x00,0x12,0x3E,0x7C,0x48,0x00}, 
#define PIX_L_stroke {0x08,0x7F,0x7F,0x44,0x40,0x40,0x00}, 

#define PIX_a_uml    {0x31,0x7A,0x4A,0x4A,0x7E,0x3D,0x40}, 
#define PIX_e_uml    {0x38,0x7C,0x55,0x54,0x55,0x5C,0x08}, 
#define PIX_i_uml    {0x00,0x00,0x4A,0x78,0x7A,0x40,0x00}, 
#define PIX_o_uml    {0x10,0x38,0x6D,0x44,0x6D,0x38,0x10}, 
#define PIX_u_uml    {0x3C,0x78,0x41,0x40,0x21,0x78,0x7C}, 
#define PIX_y_uml    {0x1C,0x38,0xA2,0xA0,0x92,0xF8,0x7C}, 
#define PIX_A_uml    {0x7D,0x7E,0x13,0x11,0x13,0x7E,0x7D}, 
#define PIX_E_uml    {0x7E,0x7E,0x4B,0x4A,0x4B,0x4A,0x42}, 
#define PIX_I_uml    {0x00,0x00,0x45,0x7C,0x7C,0x45,0x00}, 
#define PIX_O_uml    {0x18,0x3D,0x66,0x42,0x66,0x3D,0x18}, 
#define PIX_U_uml    {0x3F,0x7E,0x41,0x40,0x41,0x7E,0x3E}, 
#define PIX_Y_uml    {0x00,0x06,0x0D,0x78,0x78,0x0D,0x06}, 

#include "language-dependent_characters"

 #if defined LCD_CYRILLIC                              
{0x7F,0x7F,0x49,0x49,0x49,0x79,0x30},  /* 0x80 Cyr_B    */
{0x7F,0x7F,0x01,0x01,0x01,0x01,0x01},  /* 0x81 Cyr_G    */
{0x7C,0x7D,0x55,0x54,0x55,0x55,0x44},  /* 0x82 Cyr_Jo   */
{0x63,0x36,0x08,0x7F,0x08,0x36,0x63},  /* 0x83 Cyr_Zsch */
{0x22,0x63,0x41,0x49,0x49,0x77,0x36},  /* 0x84 Cyr_Z    */
{0x7F,0x7F,0x30,0x18,0x0C,0x7F,0x7F},  /* 0x85 Cyr_I    */
{0x7C,0x7C,0x31,0x19,0x0D,0x7C,0x7C},  /* 0x86 Cyr_J    */
{0x60,0x3C,0x02,0x01,0x01,0x7F,0x7F},  /* 0x87 Cyr_L    */
{0x7F,0x7F,0x01,0x01,0x01,0x7F,0x7F},  /* 0x88 Cyr_P    */
{0x07,0x0F,0x48,0x48,0x48,0x7F,0x3F},  /* 0x89 Cyr_U    */
{0x1C,0x3E,0x22,0x7F,0x22,0x3E,0x1C},  /* 0x8a Cyr_F    */
{0x07,0x0F,0x08,0x08,0x08,0x7F,0x7F},  /* 0x8b Cyr_Tsch */
{0x7F,0x7F,0x40,0x7F,0x40,0x7F,0x7F},  /* 0x8c Cyr_Sch  */
{0x03,0x7F,0x7F,0x48,0x48,0x78,0x30},  /* 0x8d Cyr_HH   */
{0x7F,0x7F,0x48,0x78,0x30,0x7F,0x7F},  /* 0x8e Cyr_Y    */
{0x22,0x63,0x41,0x49,0x49,0x7F,0x3E},  /* 0x8f Cyr_E    */
{0x7F,0x7F,0x08,0x3E,0x41,0x7F,0x3E},  /* 0x90 Cyr_Ju   */
{0x06,0x4F,0x69,0x39,0x19,0x7F,0x7F},  /* 0x91 Cyr_Ja   */
{0x3C,0x7E,0x4B,0x49,0x49,0x78,0x30},  /* 0x92 Cyr_b    */
{0x7E,0x7E,0x4A,0x4A,0x4A,0x7E,0x34},  /* 0x93 Cyr_v    */
{0x7E,0x7E,0x02,0x02,0x02,0x06,0x06},  /* 0x94 Cyr_g    */
{0x38,0x7D,0x55,0x54,0x55,0x55,0x18},  /* 0x95 Cyr_jo   */
{0x62,0x34,0x08,0x7E,0x08,0x34,0x62},  /* 0x96 Cyr_zsch */
{0x24,0x66,0x42,0x4A,0x4A,0x7E,0x34},  /* 0x97 Cyr_z    */
{0x7E,0x7E,0x30,0x18,0x0C,0x7E,0x7E},  /* 0x98 Cyr_i    */
{0x7C,0x7C,0x31,0x19,0x0D,0x7C,0x7C},  /* 0x99 Cyr_j    */
{0x7E,0x7E,0x08,0x1C,0x36,0x62,0x40},  /* 0x9a Cyr_k    */
{0x60,0x3C,0x02,0x02,0x02,0x7E,0x7E},  /* 0x9b Cyr_l    */
{0x7E,0x7E,0x0C,0x18,0x0C,0x7E,0x7E},  /* 0x9c Cyr_m    */
{0x7E,0x7E,0x08,0x08,0x08,0x7E,0x7E},  /* 0x9d Cyr_n    */
{0x7E,0x7E,0x02,0x02,0x02,0x7E,0x7E},  /* 0x9e Cyr_p    */
{0x02,0x02,0x7E,0x7E,0x02,0x02,0x00},  /* 0x9f Cyr_t    */
{0x0E,0x1E,0x10,0x10,0x10,0x7E,0x7E},  /* 0xa0 Cyr_tsch    */
{0x7E,0x7E,0x40,0x7E,0x40,0x7E,0x7E},  /* 0xa1 Cyr_sch     */
{0x06,0x7E,0x7E,0x48,0x48,0x78,0x30},  /* 0xa2 Cyr_hh      */
{0x7E,0x7E,0x48,0x78,0x30,0x7E,0x7E},  /* 0xa3 Cyr_y       */
{0x7E,0x7E,0x48,0x48,0x48,0x78,0x30},  /* 0xa4 Cyr_ww      */
{0x24,0x66,0x42,0x4A,0x7E,0x3C,0x00},  /* 0xa5 Cyr_e       */
{0x7E,0x7E,0x08,0x3C,0x42,0x7E,0x3C},  /* 0xa6 Cyr_ju      */
{0x0C,0x5E,0x72,0x32,0x12,0x7E,0x7E},  /* 0xa7 Cyr_ja      */
{0xC0,0x70,0x4E,0x41,0x7F,0xFF,0xC0},  /* 0xa8 Cyr_D       */
{0x7F,0x7F,0x40,0x40,0x7F,0xFF,0xC0},  /* 0xa9 Cyr_C       */
{0x7F,0x7F,0x40,0x7F,0x40,0xFF,0xFF},  /* 0xaa Cyr_Schtsch */
{0xC0,0x70,0x4C,0x42,0x7E,0xFE,0xC0},  /* 0xab Cyr_d       */
{0x38,0x7C,0x44,0xFE,0x44,0x7C,0x38},  /* 0xac Cyr_f       */
{0x7E,0x7E,0x40,0x40,0x7E,0xFE,0xC0},  /* 0xad Cyr_c       */
{0x7E,0x7E,0x40,0x7E,0x40,0xFE,0xFE},  /* 0xae Cyr_schtsch */
 #endif
};
#else
 #ifndef __ASSEMBLER__
 extern const unsigned char PROGMEM sfont[9][FONT_WIDTH];
 extern const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][(FONT_WIDTH-1)];
  #endif
 #endif
 /* ****************************** EOF *********************** */


