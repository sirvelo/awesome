/* See LICENSE file for copyright and license details. */

#ifndef AWESOME_DRAW_H
#define AWESOME_DRAW_H

#include <string.h>
#include "config.h"

#define textw(text)         (textnw(text, strlen(text)) + dc.font.height)

void drawstatus(Display *, awesome_config *);          /* draw the bar */
unsigned int textnw(const char *, unsigned int);

#endif
