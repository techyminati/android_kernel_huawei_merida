/*
 * Copyright (C) 2019 MediaTek Inc.
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

#ifndef FM_PLAT_H
#define FM_PLAT_H

#include <linux/mm.h>
#include <linux/platform_device.h>
#include <linux/ioport.h>
#include <linux/interrupt.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <linux/of.h>

#include "fm_typedef.h"
#include "fm_dbg.h"
#include "fm_err.h"
#include "fm_stdlib.h"
#include "fm_link.h"
#include "fm_utils.h"
#include "fm_rds.h"
#include "fm_ext_api.h"
#include "fm_reg_utils.h"

#if CFG_FM_CONNAC2

#include "conninfra.h"

#else  /* CFG_FM_CONNAC2 */

#include "osal_typedef.h"
#include "stp_exp.h"
#include "wmt_exp.h"

enum {
	SYS_SPI_WF1 = 0x00,
	SYS_SPI_WF  = 0x01,
	SYS_SPI_BT  = 0x02,
	SYS_SPI_FM  = 0x03,
	SYS_SPI_GPS = 0x04,
	SYS_SPI_TOP = 0x05,
	SYS_SPI_WF2 = 0x06,
	SYS_SPI_WF3 = 0x07,
	SYS_SPI_MAX
};

enum {
	SYS_SPI_OK = 0,
	SYS_SPI_BUSY,
	SYS_SPI_ERR
};

#endif /* CFG_FM_CONNAC2 */

extern signed int fm_rds_parser(
	struct rds_rx_t *rds_raw, signed int rds_size);

#endif /* FM_PLAT_H */
