# Copyright (C) 2017 MediaTek Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See http://www.gnu.org/licenses/gpl-2.0.html for more details.

LOCAL_PATH := $(call my-dir)

ifeq ($(notdir $(LOCAL_PATH)),$(strip $(LINUX_KERNEL_VERSION)))
ifneq ($(strip $(TARGET_NO_KERNEL)),true)
include $(LOCAL_PATH)/kenv.mk

ifeq ($(FINAL_RELEASE),true)
KERNEL_CONFIG_OVERRIDE += CONFIG_FINAL_RELEASE=y
KERNEL_CONFIG_OVERRIDE += CONFIG_EXT4_ENCRYPTION=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_KASLR_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_FREELIST_RANDOM_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_VIRT_TO_PHYS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_SLOW_PATH_COUNT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_KERNEL_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HANDSET_SYSRQ_RESET=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_LMK_DBG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_STATISTICS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SLUB_DEBUG_ON=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SLUB_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HW_DIE_CATCH=n
KERNEL_CONFIG_OVERRIDE += CONFIG_BOOTPARAM_SOFTLOCKUP_PANIC=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PANIC_ON_RT_THROTTLING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_LOG_TOO_MUCH_WARNING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_SELINUX_AEE_WARNING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PANIC_TIMEOUT=1
KERNEL_CONFIG_OVERRIDE += CONFIG_LOG_TOO_MUCH_DETECT_COUNT=0xC8
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_CPU_HOTPLUG_DEBUG_X=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_LOCK_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_IRQ_NEW_DESIGN_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_TIMEKEEPING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SND_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SND_DEBUG_VERBOSE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SND_PCM_XRUN_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_BLOCK_TAG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MMC_BLOCK_IO_LOG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CMA_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CFG80211_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_NET_LOGGING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_ENG_BUILD=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_RT_THROTTLE_MON=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HMP_TRACER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_SCHED_MONITOR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PREEMPT_MONITOR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_WQ_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_RCU_MONITOR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DM_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_EXT4_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_RCU_TRACE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_FTRACE_DEFAULT_ENABLE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DMA_API_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_KGDB=n
KERNEL_CONFIG_OVERRIDE += CONFIG_KGDB_KDB=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PAGE_OWNER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS_FREE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS_TIMERS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS_WORK=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS_RCU_HEAD=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_OBJECTS_PERCPU_COUNTER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_KMEMLEAK=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_KMEMLEAK_DEFAULT_OFF=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_STACK_USAGE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_MEMORY_INIT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_SPINLOCK=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_LIST=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FAULT_INJECTION=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FAIL_PAGE_ALLOC=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FAULT_INJECTION_DEBUG_FS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FAULT_INJECTION_STACKTRACE_FILTER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_BLK_DEV_IO_TRACE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_PAGEALLOC=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_MUTEXES=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEVMEM=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEVKMEM=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_RT_MUTEXES=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_LOCK_ALLOC=n
KERNEL_CONFIG_OVERRIDE += CONFIG_LOCKDEP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_LOCK_STAT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PROVE_LOCKING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SQUASHFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_ATOMIC_SLEEP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_LOCKDEP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_LOCKUP_DETECTOR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PAGE_POISONING=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_PREEMPT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_RELAY=n
KERNEL_CONFIG_OVERRIDE += CONFIG_USB_NET_SMSC75XX=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PM_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SPI_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CMA_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_IOSCHED_DEADLINE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FUNCTION_GRAPH_TRACER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_IRQSOFF_TRACER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PREEMPT_TRACER=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DYNAMIC_FTRACE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_FTRACE_MCOUNT_RECORD=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CLEANCACHE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SCHED_STACK_END_CHECK=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MEMTEST=n
KERNEL_CONFIG_OVERRIDE += CONFIG_L2TP_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PAGE_EXTENSION=n
KERNEL_CONFIG_OVERRIDE += CONFIG_EXT4_FS_ENCRYPTION=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CC_STACKPROTECTOR_REGULAR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_BUGVERBOSE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_DEBUG_SECTION_MISMATCH=n
KERNEL_CONFIG_OVERRIDE += CONFIG_EXTREME_LOW_RAM=y
KERNEL_CONFIG_OVERRIDE += CONFIG_KASAN_INLINE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_KASAN=n
KERNEL_CONFIG_OVERRIDE += CONFIG_CONSOLE_LOCK_DURATION_DETECT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_FD_LEAK_DETECT=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_FD_LEAK_SPECIFIC_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_SCHED_TRACE=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_USB_TYPEC_U3_MUX=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MT_TRUSTY_DEBUGFS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_PAGE_OWNER_SLIM=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HW_MEMORY_MONITOR=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SECURITY_SELINUX_DEVELOP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_SCHED_HWSTATUS=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HW_KERNEL_STP_ENG_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HW_ROOT_SCAN_ENG_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_IRQ_DOMAIN_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_IOSCHED_NOOP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_MET_MEM_ALLOC=y
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_BLOCK_TAG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_PID_MAP=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_MMC_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_MTK_KERNEL_HARDEN_DEBUG=n
KERNEL_CONFIG_OVERRIDE += CONFIG_HUAWEI_CFI_DEBUG=n
endif

ifeq ($(KASAN_BUILD),true)
KERNEL_CONFIG_OVERRIDE += CONFIG_KASAN=y
KERNEL_CONFIG_OVERRIDE += CONFIG_TEST_KASAN=m
KERNEL_CONFIG_OVERRIDE += CONFIG_FRAME_WARN=5120
KERNEL_CONFIG_OVERRIDE += CONFIG_RANDOMIZE_BASE=n
endif

ifeq ($(strip $(kcov)), true)
KERNEL_CONFIG_OVERRIDE += CONFIG_KCOV=y
endif
ifneq (true, $(USE_IOCACHE))
	KERNEL_CONFIG_OVERRIDE += CONFIG_IOCACHE=n
endif

ifeq ($(wildcard $(TARGET_PREBUILT_KERNEL)),)
KERNEL_MAKE_DEPENDENCIES := $(shell find $(KERNEL_DIR) -name .git -prune -o -type f | sort)
KERNEL_MAKE_DEPENDENCIES := $(filter-out %/.git %/.gitignore %/.gitattributes,$(KERNEL_MAKE_DEPENDENCIES))

$(TARGET_KERNEL_CONFIG): PRIVATE_DIR := $(KERNEL_DIR)
$(TARGET_KERNEL_CONFIG): $(KERNEL_CONFIG_FILE) $(LOCAL_PATH)/Android.mk
$(TARGET_KERNEL_CONFIG): $(KERNEL_MAKE_DEPENDENCIES)
	$(hide) mkdir -p $(dir $@)
	$(PREBUILT_MAKE_PREFIX)$(MAKE) -C $(PRIVATE_DIR) $(KERNEL_MAKE_OPTION) $(KERNEL_DEFCONFIG)
	$(hide) if [ ! -z "$(KERNEL_CONFIG_OVERRIDE)" ]; then \
	echo "Overriding kernel config with '$(KERNEL_CONFIG_OVERRIDE)'"; \
	for CONFIG_OVERRIDE in $(KERNEL_CONFIG_OVERRIDE); do echo $$CONFIG_OVERRIDE >> $(KERNEL_OUT)/.config; done; \
	$(MAKE) -C $(KERNEL_DIR) $(KERNEL_MAKE_OPTION) oldconfig; fi

$(BUILT_DTB_OVERLAY_TARGET): $(KERNEL_ZIMAGE_OUT)

.KATI_RESTAT: $(KERNEL_ZIMAGE_OUT)
$(KERNEL_ZIMAGE_OUT): PRIVATE_DIR := $(KERNEL_DIR)
$(KERNEL_ZIMAGE_OUT): $(TARGET_KERNEL_CONFIG) $(KERNEL_MAKE_DEPENDENCIES)
	$(hide) mkdir -p $(dir $@)
	$(PREBUILT_MAKE_PREFIX)$(MAKE) -C $(PRIVATE_DIR) $(KERNEL_MAKE_OPTION)
	$(hide) $(call fixup-kernel-cmd-file,$(KERNEL_OUT)/arch/$(KERNEL_TARGET_ARCH)/boot/compressed/.piggy.xzkern.cmd)
	# check the kernel image size
	python device/mediatek/build/build/tools/check_kernel_size.py $(KERNEL_OUT) $(KERNEL_DIR)

ifeq ($(strip $(MTK_HEADER_SUPPORT)), yes)
$(BUILT_KERNEL_TARGET): $(KERNEL_ZIMAGE_OUT) $(TARGET_KERNEL_CONFIG) $(LOCAL_PATH)/Android.mk | $(HOST_OUT_EXECUTABLES)/mkimage$(HOST_EXECUTABLE_SUFFIX)
	$(hide) $(HOST_OUT_EXECUTABLES)/mkimage$(HOST_EXECUTABLE_SUFFIX) $< KERNEL 0xffffffff > $@
else
$(BUILT_KERNEL_TARGET): $(KERNEL_ZIMAGE_OUT) $(TARGET_KERNEL_CONFIG) $(LOCAL_PATH)/Android.mk | $(ACP)
	$(copy-file-to-target)
endif

$(TARGET_PREBUILT_KERNEL): $(BUILT_KERNEL_TARGET) $(LOCAL_PATH)/Android.mk | $(ACP)
	$(copy-file-to-new-target)

endif#TARGET_PREBUILT_KERNEL is empty

$(INSTALLED_KERNEL_TARGET): $(BUILT_KERNEL_TARGET) $(LOCAL_PATH)/Android.mk | $(ACP)
	$(copy-file-to-target)

.PHONY: kernel save-kernel kernel-savedefconfig kernel-menuconfig menuconfig-kernel savedefconfig-kernel clean-kernel
kernel: $(INSTALLED_KERNEL_TARGET)
save-kernel: $(TARGET_PREBUILT_KERNEL)

kernel-savedefconfig: $(TARGET_KERNEL_CONFIG)
	cp $(TARGET_KERNEL_CONFIG) $(KERNEL_CONFIG_FILE)

kernel-menuconfig:
	$(hide) mkdir -p $(KERNEL_OUT)
	$(MAKE) -C $(KERNEL_DIR) $(KERNEL_MAKE_OPTION) menuconfig

menuconfig-kernel savedefconfig-kernel:
	$(hide) mkdir -p $(KERNEL_OUT)
	$(MAKE) -C $(KERNEL_DIR) $(KERNEL_MAKE_OPTION) $(patsubst %config-kernel,%config,$@)

clean-kernel:
	$(hide) rm -rf $(KERNEL_OUT) $(KERNEL_MODULES_OUT) $(INSTALLED_KERNEL_TARGET)
	$(hide) rm -f $(INSTALLED_DTB_OVERLAY_TARGET)


.PHONY: check-kernel-config check-kernel-dotconfig check-mtk-config
droid: check-kernel-config check-kernel-dotconfig
check-mtk-config: check-kernel-config check-kernel-dotconfig
check-kernel-config: PRIVATE_COMMAND := $(if $(wildcard device/mediatek/build/build/tools/check_kernel_config.py),$(if $(filter yes,$(DISABLE_MTK_CONFIG_CHECK)),-)python device/mediatek/build/build/tools/check_kernel_config.py -c $(MTK_TARGET_PROJECT_FOLDER)/ProjectConfig.mk -k $(KERNEL_CONFIG_FILE) -p $(MTK_PROJECT_NAME))
check-kernel-config:
	$(PRIVATE_COMMAND)

check-kernel-dotconfig: PRIVATE_COMMAND := $(if $(wildcard device/mediatek/build/build/tools/check_kernel_config.py),$(if $(filter yes,$(DISABLE_MTK_CONFIG_CHECK)),-)python device/mediatek/build/build/tools/check_kernel_config.py -c $(MTK_TARGET_PROJECT_FOLDER)/ProjectConfig.mk -k $(TARGET_KERNEL_CONFIG) -p $(MTK_PROJECT_NAME))
check-kernel-dotconfig: $(TARGET_KERNEL_CONFIG)
	$(PRIVATE_COMMAND)

### DTB
ifdef BOARD_PREBUILT_DTBIMAGE_DIR
INSTALLED_MTK_DTB_TARGET := $(BOARD_PREBUILT_DTBIMAGE_DIR)/mtk_dtb
$(shell if [ ! -f $(INSTALLED_MTK_DTB_TARGET) ]; then mkdir -p $(dir $(INSTALLED_MTK_DTB_TARGET)); touch $(INSTALLED_MTK_DTB_TARGET);fi)
$(INSTALLED_MTK_DTB_TARGET): $(INSTALLED_KERNEL_TARGET)
	@mkdir -p $(dir $@)
	@cp -f $(KERNEL_DTB_FILE) $@
endif

endif#TARGET_NO_KERNEL
endif#LINUX_KERNEL_VERSION