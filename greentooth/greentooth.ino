#include "BluetoothA2DPSink.h"

// Create a BluetoothA2DPSink object
BluetoothA2DPSink a2dp_sink;

void setup() {
  // Start the BluetoothA2DPSink
  a2dp_sink.start("Greentooth");

  // Define the pins for I2S
  i2s_pin_config_t pin_config;
  pin_config.bck_io_num = 26; // This should be the pin connected to IN+ on the amplifier
  pin_config.ws_io_num = I2S_PIN_NO_CHANGE;
  pin_config.data_out_num = I2S_PIN_NO_CHANGE;
  pin_config.data_in_num = I2S_PIN_NO_CHANGE;

  // Set the I2S pins
  a2dp_sink.set_pin_config(pin_config);
}

void loop() {
  // Nothing to do here - the a2dp_sink object handles everything
}
