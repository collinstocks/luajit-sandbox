/*
  Initialize a sandbox on Linux.
  Copyright (C) 2017 Collin RM Stocks. All rights reserved.
*/

#ifndef SANDBOX_H
#define SANDBOX_H

#include <stddef.h>

struct sandbox_settings {
  size_t max_memory;
  unsigned int max_cpu_time;
};

int sandbox_init(const struct sandbox_settings *);

#endif
