/* See the file "COPYING" for the full license governing this code. */

/*
 * Copyright (c) 2013-2015, Lawrence Livermore National Security, LLC.
 *   Produced at the Lawrence Livermore National Laboratory
 *   CODE-673838
 *
 * Copyright (c) 2006-2007,2011-2015, Los Alamos National Security, LLC.
 *   (LA-CC-06-077, LA-CC-10-066, LA-CC-14-046)
 *
 * Copyright (2013-2015) UT-Battelle, LLC under Contract No.
 *   DE-AC05-00OR22725 with the Department of Energy.
 *
 * Copyright (c) 2015, DataDirect Networks, Inc.
 * 
 * All rights reserved.
 *
 * This file is part of mpiFileUtils.
 * For details, see https://github.com/hpc/fileutils.
 * Please also read the LICENSE file.
*/

#ifndef __DCOPY_HANDLE_ARGS_H
#define __DCOPY_HANDLE_ARGS_H

#include "common.h"

void DCOPY_parse_path_args(char** argv, int optind, int argc);

void DCOPY_free_path_args(void);

void DCOPY_enqueue_work_objects(CIRCLE_handle* handle);

#endif /* __DCOPY_HANDLE_ARGS_H */
