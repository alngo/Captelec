/* 
 * File:   capt.h
 * Author: alngo
 *
 * Created on September 21, 2017, 11:42 AM
 */

#ifndef CAPT_H
#define	CAPT_H

//INCLUDES
#include <xc.h>

//DEFINES
#define int8_t      char
#define int16_t     short
#define int32_t     int
#define int64_t     long

#define uint8_t     unsigned char
#define uint16_t    unsigned short
#define uint32_t    unsigned int
#define uint64_t    unsigned long

//FUNCTIONS
void    init(void);
void    init_touch(void);
int     get_touch(int channel, int n);


#endif	/* CAPT_H */

