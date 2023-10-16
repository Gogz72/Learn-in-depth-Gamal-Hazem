/*
 * std_types.h
 *
 *  Created on: 16 Oct 2023
 *      Author: Gamal Hazem
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

////// SYMBOLS //////

#define CPU_TYPE                 "Intel(R) Core(TM) i7-10700 CPU @ 2.90GHz"
#define CPU_BIT_ORDER            "LSB_FIRST"
#define CPU_BYTE_ORDER           "UNKNOWN"







////// TYPES //////

////// BOOL //////
typedef unsigned char             bool;

////// 8BIT (1BYTES) //////
typedef signed char               sint8;
typedef unsigned char             uint8;
typedef volatile signed char      vsint8;
typedef volatile unsigned char    vuint8;

////// 16BIT (2BYTES) //////
typedef signed short              sint16;
typedef unsigned short            uint16;
typedef volatile signed short     vsint16;
typedef volatile unsigned short   vuint16;

////// 32BIT (4BYTES) //////
typedef signed int                sint32;
typedef unsigned int              uint32;
typedef volatile signed int       vsint32;
typedef volatile unsigned int     vuint32;

////// POINTERS //////
typedef signed char*              psint8;
typedef unsigned char*            puint8;

typedef signed short*             psint16;
typedef unsigned short*           puint16;

typedef signed int*               psint32;
typedef unsigned int*             puint32;

////// POINTERS TO VOLATILE //////
typedef volatile signed char*     vpsint8;
typedef volatile unsigned char*   vpuint8;

typedef volatile signed short*    vpsint16;
typedef volatile unsigned short*  vpuint16;

typedef volatile signed int*      vpsint32;
typedef volatile unsigned int*    vpuint32;

////// FLOAT //////
typedef float                     float32;
typedef double                    float64;




#endif /* STD_TYPES_H_ */
