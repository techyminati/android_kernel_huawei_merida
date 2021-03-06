

#ifndef __TP_KIT_PLATFORM_ADAPTER_H_
#define __TP_KIT_PLATFORM_ADAPTER_H_

enum ts_charger_type {
	TS_CHARGER_TYPE_SDP = 0,	/* Standard Downstreame Port */
	TS_CHARGER_TYPE_CDP,		/* Charging Downstreame Port */
	TS_CHARGER_TYPE_DCP,		/* Dedicate Charging Port */
	TS_CHARGER_TYPE_UNKNOWN,	/* non-standard */
	TS_CHARGER_TYPE_NONE,		/* not connected */

	/* other messages */
	TS_PLEASE_PROVIDE_POWER,	/* host mode, provide power */
};

int charger_type_notifier_register(struct notifier_block *nb);
int charger_type_notifier_unregister(struct notifier_block *nb);
enum ts_charger_type get_charger_type(void);
void set_tp_dev_flag(void);
int read_tp_color_adapter(char *buf, int buf_size);
int write_tp_color_adapter(const char *buf);
unsigned int get_into_recovery_flag_adapter(void);
unsigned int get_pd_charge_flag_adapter(void);
int fb_esd_recover_disable(int value);
#endif
