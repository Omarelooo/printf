#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#define CONVERT_LOWERCASE
#define CONVERT_UNSIGNED

/**
 * struct paramaters - paramaters struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: on if plus flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if_flag specified
 * @zero_flag: on if_flag specified
 * @minus_flag: on if_flag specified
 *
 * @width: field width specified
 * @precision: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if h_modifier is specified
 *
 */
