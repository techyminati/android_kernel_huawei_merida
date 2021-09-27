/*
 * Copyright (C) 2017 MediaTek Inc.
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

#include "kd_imgsensor.h"
#include "imgsensor_sensor_list.h"

/* Add Sensor Init function here
 * Note:
 * 1. Add by the resolution from ""large to small"", due to large sensor
 *    will be possible to be main sensor.
 *    This can avoid I2C error during searching sensor.
 * 2. This should be the same as
 *     mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
 */
struct IMGSENSOR_INIT_FUNC_LIST kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR] = {
#if defined(HI1333_QTECH)
	{
		HI1333_QTECH_SENSOR_ID,
		SENSOR_DRVNAME_HI1333_QTECH,
		HI1333_QTECH_SensorInit
	},
#endif
#if defined(OV13855_OFILM_TDK)
	{
		OV13855_OFILM_TDK_SENSOR_ID,
		SENSOR_DRVNAME_OV13855_OFILM_TDK,
		OV13855_OFILM_TDK_SensorInit
	},
#endif
#if defined(OV13855_OFILM)
	{
		OV13855_OFILM_SENSOR_ID,
		SENSOR_DRVNAME_OV13855_OFILM,
		OV13855_OFILM_SensorInit
	},
#endif
#if defined(S5K3L6_LITEON)
	{
		S5K3L6_LITEON_SENSOR_ID,
		SENSOR_DRVNAME_S5K3L6_LITEON,
		S5K3L6_LITEON_SensorInit
	},
#endif
#if defined(HI1336_QTECH)
	{
		HI1336_QTECH_SENSOR_ID,
		SENSOR_DRVNAME_HI1336_QTECH,
		HI1336_QTECH_SensorInit
	},
#endif
#if defined(S5K4H7_TRULY)
	{
		S5K4H7_TRULY_SENSOR_ID,
		SENSOR_DRVNAME_S5K4H7_TRULY,
		S5K4H7_TRULY_SensorInit
	},
#endif
#if defined(HI846_LUXVISIONS)
	{
		HI846_LUXVISIONS_SENSOR_ID,
		SENSOR_DRVNAME_HI846_LUXVISIONS,
		HI846_LUXVISIONS_SensorInit
	},
#endif
#if defined(HI846_OFILM)
	{
		HI846_OFILM_SENSOR_ID,
		SENSOR_DRVNAME_HI846_OFILM,
		HI846_OFILM_SensorInit
	},
#endif
#if defined(GC8054_BYD)
	{
		GC8054_BYD_SENSOR_ID,
		SENSOR_DRVNAME_GC8054_BYD,
		GC8054_BYD_SensorInit
	},
#endif
#if defined(GC2375_SUNNY)
	{
		GC2375_SUNNY_SENSOR_ID,
		SENSOR_DRVNAME_GC2375_SUNNY,
		GC2375_SUNNY_SensorInit
	},
#endif
#if defined(OV02A10_FOXCONN)
	{
		OV02A10_FOXCONN_SENSOR_ID,
		SENSOR_DRVNAME_OV02A10_FOXCONN,
		OV02A10_FOXCONN_SensorInit
	},
#endif
#if defined(OV02A10_SUNWIN)
	{
		OV02A10_SUNWIN_SENSOR_ID,
		SENSOR_DRVNAME_OV02A10_SUNWIN,
		OV02A10_SUNWIN_SensorInit
	},
#endif
#if defined(S5K5E9YX_BYD)
	{
		S5K5E9YX_BYD_SENSOR_ID,
		SENSOR_DRVNAME_S5K5E9YX_BYD,
		S5K5E9YX_BYD_SensorInit
	},
#endif
#if defined(GC5035_LUXVISIONS)
	{
		GC5035_LUXVISIONS_SENSOR_ID,
		SENSOR_DRVNAME_GC5035_LUXVISIONS,
		GC5035_LUXVISIONS_SensorInit
	},
#endif
#if defined(IMX258_SUNNY_ZET)
	{
		IMX258_ZET_SENSOR_ID,
		SENSOR_DRVNAME_IMX258_SUNNY_ZET,
		IMX258_SUNNY_ZET_SensorInit
	},
#endif
#if defined(IMX258_SUNNY)
	{
		IMX258_SENSOR_ID,
		SENSOR_DRVNAME_IMX258_SUNNY,
		IMX258_SUNNY_SensorInit
	},
#endif
#if defined(HI556_MIPI_RAW)
	{
		HI556_SENSOR_ID,
		SENSOR_DRVNAME_HI556_MIPI_RAW,
		HI556_MIPI_RAW_SensorInit
	},
#endif
#if defined(GC2375H_MIPI_RAW)
	{
		GC2375H_SENSOR_ID,
		SENSOR_DRVNAME_GC2375H_MIPI_RAW,
		GC2375H_MIPI_RAW_SensorInit
	},
#endif
#if defined(GC5035P_MIPI_RAW)
	{
		GC5035P_MIPI_SENSOR_ID,
		SENSOR_DRVNAME_GC5035P_MIPI_RAW,
		GC5035P_MIPI_RAW_SensorInit
	},
#endif
#if defined(BF2253_MIPI_RAW)
	{
		BF2253MIPI_SENSOR_ID,
		SENSOR_DRVNAME_BF2253_MIPI_RAW,
		BF2253MIPI_RAW_SensorInit
	},
#endif
#if defined(S5K3L6_TRULY)
	{
		S5K3L6_TRULY_SENSOR_ID,
		SENSOR_DRVNAME_S5K3L6_TRULY,
		S5K3L6_TRULY_SensorInit
	},
#endif
	/*  ADD sensor driver before this line */
	{0, {0}, NULL}, /* end of list */
};
/* e_add new sensor driver here */

