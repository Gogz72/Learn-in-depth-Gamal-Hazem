/*
 * bitwise.h
 *
 *  Created on: 16 Oct 2023
 *      Author: pc
 */

#ifndef FILES_BITWISE_H_
#define FILES_BITWISE_H_

#define setbit(x , y) y |= 1<<x
#define resetbit(x , y) y &= ~(1<<x)
#define togglebit(x , y) y ^= 1<<x



#endif /* FILES_BITWISE_H_ */
