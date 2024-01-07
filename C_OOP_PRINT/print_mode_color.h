#ifndef __PRINT_COLOR_H__
#define __PRINT_COLOR_H__

struct color_printer *color_printer_new(const char *prefix);

void color_printer_cleanup(struct color_printer *self);

#endif 

