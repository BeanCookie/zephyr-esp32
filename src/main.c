/*
 * Copyright (c) 2020 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/zephyr.h>
#include <zephyr/sys/printk.h>

#include <zephyr/logging/log.h>

#include "wifi.h"
#include "mqtt.h"

LOG_MODULE_REGISTER(app, LOG_LEVEL_DBG);

void main(void)
{
	int ret;
	wifi_init_sta();

	k_msleep(10 * 1000);

	ret = do_publish();

	LOG_INF("publish");
}
