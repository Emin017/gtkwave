/*
 * Copyright (c) Tony Bybell 2003-2010.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#include "globals.h"

#ifndef WAVE_LX2RDR_H
#define WAVE_LX2RDR_H

#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

#include "vcd.h"

enum LXT2_Loader_Type_Encodings
{
    LXT2_IS_INACTIVE,
    LXT2_IS_VLIST,
    LXT2_IS_FST,
};

void import_lx2_trace(GwNode *np);
void lx2_set_fac_process_mask(GwNode *np);
void lx2_import_masked(void);

#endif
