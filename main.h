#ifndef __MAIN_H__
#define __MAIN_H__

// include files
#include <Arduino.h>
#include <ArduinoJson.h>
#include <FreeRTOS.h>
#include <Esp.h>
#include <esp_log.h>

// constants
#define TASK_BUTTON_PRIO        4
#define TASK_PERIOD_PRIO        3
#define TASK_MQTT_PRIO          2

#define TASK_BUTTON_TYPE        0
#define TASK_PERIOD_TYPE        1

#define WIFI_SSID       "TGR17_2.4G"
#define WIFI_PASSWORD   NULL
#define MQTT_DEV_ID     32
#define MQTT_EVT_TOPIC  "my/mqtt/topic/LED"
#define MQTT_CMD_TOPIC  "tgr2023/Swamp/cmd"

// type definitions
typedef struct evt_msg_t {
    int type;
    uint32_t timestamp;
    bool pressed;
    uint32_t value;
} evt_msg_t;

// shared variables
extern xQueueHandle evt_queue;
extern bool enable_flag;

// public function prototypes

#endif 