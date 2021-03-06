/*
 * lm3697.h
 *
 * lm3697 backlight driver head file
 *
 * Copyright (c) 2018-2019 Huawei Technologies Co., Ltd.
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

#ifndef __LINUX_LM3697_H
#define __LINUX_LM3697_H

#define LM3697_SLAV_ADDR	0x36

#define DTS_COMP_LM3697		"ti,lm3697"
#define LM3697_SUPPORT		"lm3697_support"
#define LM3697_I2C_BUS_ID	"lm3697_i2c_bus_id"
#define LM3697_HW_ENABLE	"lm3697_hw_enable"
#define LM3697_HW_EN_GPIO	"lm3697_hw_en_gpio"
#define LM3697_HW_EN_DELAY	"bl_on_lk_mdelay"
#define LM3697_BACKLIGHT_CONFIG_LSB_REG_ADDR	"lm3697_backlight_config_lsb_reg_addr"
#define LM3697_BACKLIGHT_CONFIG_MSB_REG_ADDR	"lm3697_backlight_config_msb_reg_addr"
#define MAX_STR_LEN	50

/* base reg */
#define LM3697_REG_DEV_ID	0x15
#define LM3697_REG_SW_RESET	0x01

/* config reg */
#define LM3697_REG_SINK_OUTPUT_CONFIG	0x10
#define LM3697_REG_RAMP_ON_OFF_L		0x11
#define LM3697_REG_RAMP_ON_OFF_R		0x12
#define LM3697_REG_RAMP_TIME			0x13
#define LM3697_REG_RAMP_TIME_CONFIG		0x14
#define LM3697_REG_BRIGHTNESS_CONFIG		0x16
#define LM3697_REG_FULL_SCALE_CURRENT_SETTING_A	0x17
#define LM3697_REG_FULL_SCALE_CURRENT_SETTING_B	0x18
#define LM3697_REG_CURRENT_SINK_FEEDBACK_ENABLE	0x19
#define LM3697_REG_BOOST_CONTROL		0x1A
#define LM3697_REG_AUTO_FREQUENCY_THRESHOLD	0x1B
#define LM3697_REG_PWM_CONFIG		0x1C
#define LM3697_REG_BRIGHTNESS_LSB_A	0x20
#define LM3697_REG_BRIGHTNESS_MSB_A	0x21
#define LM3697_REG_BRIGHTNESS_LSB_B	0x22
#define LM3697_REG_BRIGHTNESS_MSB_B	0x23
#define LM3697_REG_BANK_ENABLE	0x24
#define LM3697_REG_OPEN_FAULTS	0xB0
#define LM3697_REG_SHORT_FAULTS	0xB2
#define LM3697_REG_FAULT_ENABLE	0xB4

#define LM3697_VENDOR_ID	0x33

#define LM3697_RW_REG_MAX	20

#define BRIGHTNESS_LEVEL	256

struct lm3697_backlight_information {
	/* whether support lm3697 or not */
	unsigned int lm3697_support;
	/* which i2c bus controller lm3697 mount */
	unsigned int lm3697_i2c_bus_id;
	unsigned int lm3697_hw_en;
	/* lm3697 hw_en gpio */
	unsigned int lm3697_hw_en_gpio;
	unsigned int lm3697_reg[LM3697_RW_REG_MAX];
	unsigned int bl_on_lk_mdelay;
	unsigned int lm3697_level_lsb_reg;
	unsigned int lm3697_level_msb_reg;
};

static int lm3697_reg_brightness_lsb_b_brightness[BRIGHTNESS_LEVEL] = {
	0x00, 0x00, 0x07, 0x06, 0x01, 0x00, 0x05, 0x05,
	0x07, 0x06, 0x02, 0x03, 0x03, 0x00, 0x04, 0x07,
	0x01, 0x01, 0x01, 0x00, 0x06, 0x03, 0x00, 0x04,
	0x00, 0x04, 0x06, 0x01, 0x03, 0x05, 0x06, 0x07,
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x07, 0x06, 0x05, 0x03, 0x02, 0x00, 0x06, 0x04,
	0x02, 0x00, 0x06, 0x03, 0x01, 0x06, 0x03, 0x01,
	0x06, 0x03, 0x00, 0x04, 0x01, 0x06, 0x02, 0x07,
	0x03, 0x00, 0x04, 0x00, 0x05, 0x01, 0x05, 0x01,
	0x05, 0x01, 0x04, 0x00, 0x04, 0x00, 0x03, 0x07,
	0x03, 0x06, 0x02, 0x05, 0x00, 0x04, 0x07, 0x02,
	0x06, 0x01, 0x04, 0x07, 0x02, 0x05, 0x00, 0x03,
	0x06, 0x01, 0x04, 0x07, 0x02, 0x05, 0x00, 0x02,
	0x05, 0x00, 0x02, 0x05, 0x00, 0x02, 0x05, 0x00,
	0x02, 0x05, 0x07, 0x02, 0x04, 0x07, 0x01, 0x03,
	0x06, 0x00, 0x02, 0x05, 0x07, 0x01, 0x04, 0x06,
	0x00, 0x02, 0x05, 0x07, 0x01, 0x03, 0x05, 0x07,
	0x01, 0x03, 0x06, 0x00, 0x02, 0x04, 0x06, 0x00,
	0x02, 0x04, 0x06, 0x00, 0x01, 0x03, 0x05, 0x07,
	0x01, 0x03, 0x05, 0x07, 0x00, 0x02, 0x04, 0x06,
	0x00, 0x01, 0x03, 0x05, 0x07, 0x00, 0x02, 0x04,
	0x06, 0x07, 0x01, 0x03, 0x04, 0x06, 0x00, 0x01,
	0x03, 0x04, 0x06, 0x00, 0x01, 0x03, 0x04, 0x06,
	0x00, 0x01, 0x03, 0x04, 0x06, 0x07, 0x01, 0x02,
	0x04, 0x05, 0x07, 0x00, 0x02, 0x03, 0x04, 0x06,
	0x07, 0x01, 0x02, 0x04, 0x05, 0x06, 0x00, 0x01,
	0x03, 0x04, 0x05, 0x07, 0x00, 0x01, 0x03, 0x04,
	0x05, 0x07, 0x00, 0x01, 0x03, 0x04, 0x05, 0x06,
	0x00, 0x01, 0x02, 0x03, 0x05, 0x06, 0x07, 0x00,
	0x02, 0x03, 0x04, 0x05, 0x07, 0x00, 0x01, 0x02,
	0x03, 0x05, 0x06, 0x07, 0x00, 0x01, 0x02, 0x04,
	0x05, 0x06, 0x07, 0x00, 0x01, 0x02, 0x04, 0x05
};

static int lm3697_reg_brightness_msb_b_brightness[BRIGHTNESS_LEVEL] = {
	0x00, 0x4D, 0x5C, 0x67, 0x70, 0x77, 0x7C, 0x81,
	0x85, 0x89, 0x8D, 0x90, 0x93, 0x96, 0x98, 0x9A,
	0x9D, 0x9F, 0xA1, 0xA3, 0xA4, 0xA6, 0xA8, 0xA9,
	0xAB, 0xAC, 0xAD, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3,
	0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC,
	0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC1, 0xC2,
	0xC3, 0xC4, 0xC4, 0xC5, 0xC6, 0xC6, 0xC7, 0xC8,
	0xC8, 0xC9, 0xCA, 0xCA, 0xCB, 0xCB, 0xCC, 0xCC,
	0xCD, 0xCE, 0xCE, 0xCF, 0xCF, 0xD0, 0xD0, 0xD1,
	0xD1, 0xD2, 0xD2, 0xD3, 0xD3, 0xD4, 0xD4, 0xD4,
	0xD5, 0xD5, 0xD6, 0xD6, 0xD7, 0xD7, 0xD7, 0xD8,
	0xD8, 0xD9, 0xD9, 0xD9, 0xDA, 0xDA, 0xDB, 0xDB,
	0xDB, 0xDC, 0xDC, 0xDC, 0xDD, 0xDD, 0xDE, 0xDE,
	0xDE, 0xDF, 0xDF, 0xDF, 0xE0, 0xE0, 0xE0, 0xE1,
	0xE1, 0xE1, 0xE1, 0xE2, 0xE2, 0xE2, 0xE3, 0xE3,
	0xE3, 0xE4, 0xE4, 0xE4, 0xE4, 0xE5, 0xE5, 0xE5,
	0xE6, 0xE6, 0xE6, 0xE6, 0xE7, 0xE7, 0xE7, 0xE7,
	0xE8, 0xE8, 0xE8, 0xE9, 0xE9, 0xE9, 0xE9, 0xEA,
	0xEA, 0xEA, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
	0xEC, 0xEC, 0xEC, 0xEC, 0xED, 0xED, 0xED, 0xED,
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEF, 0xEF, 0xEF,
	0xEF, 0xEF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF1, 0xF1,
	0xF1, 0xF1, 0xF1, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2,
	0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF4, 0xF4,
	0xF4, 0xF4, 0xF4, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5,
	0xF5, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF7, 0xF7,
	0xF7, 0xF7, 0xF7, 0xF7, 0xF8, 0xF8, 0xF8, 0xF8,
	0xF8, 0xF8, 0xF9, 0xF9, 0xF9, 0xF9, 0xF9, 0xF9,
	0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFB,
	0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFC, 0xFC, 0xFC,
	0xFC, 0xFC, 0xFC, 0xFC, 0xFD, 0xFD, 0xFD, 0xFD,
	0xFD, 0xFD, 0xFD, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE
};

int lm3697_set_backlight_init(unsigned int bl_level);
void lm3697_set_backlight_status(void);
#endif /* __LINUX_LM3697_H */
