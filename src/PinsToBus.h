#ifndef PinsToBus_h
#define PinsToBus_h

#include <Arduino.h>

class PinsToBusClass {

  public:
  uint8_t readByte(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required);
  void writeByte(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint8_t data);
  uint16_t readWord(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required);
  void writeWord(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint16_t data);
  uint32_t readDword(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required);
  void writeDword(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint32_t data);

};

extern PinsToBusClass PinsToBus;

#endif