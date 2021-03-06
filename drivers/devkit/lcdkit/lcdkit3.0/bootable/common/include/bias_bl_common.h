/*
 * bias_bl_common.h
 *
 * bias_bl_common driver for lcd bias ic and
 * backlight ic common interface.
 *
 * Copyright (c) 2019-2019 Huawei Technologies Co., Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */
#ifndef _BIAS_BL_COMMON_H_
#define _BIAS_BL_COMMON_H_

#define LCD_BAIC_VOL_40 4000000
#define LCD_BAIC_VOL_41 4100000
#define LCD_BAIC_VOL_42 4200000
#define LCD_BAIC_VOL_43 4300000
#define LCD_BAIC_VOL_44 4400000
#define LCD_BAIC_VOL_45 4500000
#define LCD_BAIC_VOL_46 4600000
#define LCD_BAIC_VOL_47 4700000
#define LCD_BAIC_VOL_48 4800000
#define LCD_BAIC_VOL_49 4900000
#define LCD_BAIC_VOL_50 5000000
#define LCD_BAIC_VOL_51 5100000
#define LCD_BAIC_VOL_52 5200000
#define LCD_BAIC_VOL_53 5300000
#define LCD_BAIC_VOL_54 5400000
#define LCD_BAIC_VOL_55 5500000
#define LCD_BAIC_VOL_56 5600000
#define LCD_BAIC_VOL_57 5700000
#define LCD_BAIC_VOL_58 5800000
#define LCD_BAIC_VOL_59 5900000
#define LCD_BAIC_VOL_60 6000000

struct bias_bl_common_ops {
	int (*i2c_read_u8)(unsigned char i2c_num,
		unsigned char chip_addr, unsigned char reg,
		unsigned char *val);
	int (*i2c_write_u8)(unsigned char i2c_num,
		unsigned char chip_addr, unsigned char reg,
		unsigned char val);
	int (*i2c_update_u8)(unsigned char i2c_num,
		unsigned char chip_addr, unsigned char reg,
		unsigned char mask, unsigned char val);
	int (*dts_get_data_by_property)(const char *compatible,
		const char *prop_name, int *data, unsigned int *len);
	void (*dts_set_ic_name)(const char *prop_name, const char *name);
	int (*dts_get_ic_num)(const char *prop_name);
	int (*dts_get_ic_name_index)(const char *prop_name,
		int idx, char *name_buf, int buf_len);
	int (*dts_set_status_by_compatible)(const char *name,
		const char *status);
};

void bias_bl_adapt_register(struct bias_bl_common_ops *ops);
void bias_bl_adapt_unregister(struct bias_bl_common_ops *ops);
struct bias_bl_common_ops *bias_bl_get_ops(void);
#endif
