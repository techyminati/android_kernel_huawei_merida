/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef STEPSIGNHUB_H
#define STEPSIGNHUB_H

#include <linux/ioctl.h>
extern bool std_step_c_enable_status;
extern bool ext_step_c_enable_status;
extern int ext_step_counter_enable(bool en);
#endif
