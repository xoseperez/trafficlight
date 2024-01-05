// -----------------------------------------------------------------------------
// Features
// -----------------------------------------------------------------------------

// Disable some modules

#define ALEXA_SUPPORT               0
#define BROKER_SUPPORT              0
#define BUTTON_SUPPORT              0
#define DOMOTICZ_SUPPORT            0
#define HOMEASSISTANT_SUPPORT       0
#define INFLUXDB_SUPPORT            0
#define IR_SUPPORT                  0
#define THINGSPEAK_SUPPORT          0

// -----------------------------------------------------------------------------
// Bootstrap
// -----------------------------------------------------------------------------

// Load extraSetup(), entry point for traffic-light module
#define USE_EXTRA                   1

// -----------------------------------------------------------------------------
// Hardware
// -----------------------------------------------------------------------------

// Info
#define MANUFACTURER                "TINKERMAN"
#define DEVICE                      "TRAFFIC_LIGHT"
#define LIGHT_PROVIDER              LIGHT_PROVIDER_DIMMER

// relay
#define RELAY1_PROVIDER              RELAY_PROVIDER_LIGHT_STATE

// Light
#define LIGHT_CH1_PIN               12  // Red
#define LIGHT_CH2_PIN               13  // Yellow
#define LIGHT_CH3_PIN               14  // green
#define LIGHT_CH1_INVERSE           0
#define LIGHT_CH2_INVERSE           0
#define LIGHT_CH3_INVERSE           0

#define BUZZER_PIN                  2
