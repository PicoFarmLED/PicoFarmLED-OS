/*
 * =====================================================================================
 *
 *       Filename:  ble_db.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/09/2018 11:57:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef BLE_DB_H_
#define BLE_DB_H_

#include "esp_gatts_api.h"

#define CHAR_VAL(name) IDX_CHAR_##name, \
  IDX_CHAR_VAL_##name

#define CHAR_VAL_CFG(name) IDX_CHAR_##name, \
  IDX_CHAR_VAL_##name, \
  IDX_CHAR_CFG_##name

#define IDX(name) IDX_CHAR_##name
#define IDX_VALUE(name) IDX_CHAR_VAL_##name
#define IDX_CFG(name) IDX_CHAR_CFG_##name

#define LED_CFG(i) CHAR_VAL_CFG(LED_##i##_DUTY)

enum idx
{
  IDX_SVC,

  CHAR_VAL_CFG(DEVICE_NAME),

  CHAR_VAL_CFG(TIME),

  CHAR_VAL_CFG(STATE),

  CHAR_VAL(LED_INFO),

  LED_CFG(0),
  LED_CFG(1),
  LED_CFG(2),
  LED_CFG(3),
  LED_CFG(4),
  LED_CFG(5),

  CHAR_VAL(TIMER_TYPE),
  CHAR_VAL_CFG(TIMER_OUTPUT),

  CHAR_VAL_CFG(SIMULATED_TIME),
  CHAR_VAL(START_DATE_MONTH),
  CHAR_VAL(START_DATE_DAY),
  CHAR_VAL(DURATION_DAYS),
  CHAR_VAL(SIMULATION_DURATION_DAYS),
  CHAR_VAL(STARTED_AT),

  CHAR_VAL(ON_HOUR),
  CHAR_VAL(ON_MIN),
  CHAR_VAL(OFF_HOUR),
  CHAR_VAL(OFF_MIN),

  CHAR_VAL_CFG(WIFI_STATUS),
  CHAR_VAL(WIFI_SSID),
  CHAR_VAL(WIFI_PASS),

  CHAR_VAL(LED_DIM),

  HRS_IDX_NB,
};

extern const esp_gatts_attr_db_t gatt_db[HRS_IDX_NB];

#endif
