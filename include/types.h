
#ifndef __TYPES_H
#define __TYPES_H

#include <iostream>
#include <cstdint>
#include <cstring>
#include <vector>
#include "logs.h"

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

uint32_t TD_APP_OK = 0;

typedef int td_rc; /*return code */

namespace task_list
{
	typedef struct {
		char *name;
		u8 date:5;
		u8 month:4;
		u32 year;
	} task_t;

}

#endif

