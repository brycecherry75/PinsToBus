#include "PinsToBus.h"

uint8_t PinsToBusClass::readByte(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required) {
  uint8_t data = 0;
  if (pins_required > 0 && pins_required <= 8) {
    uint8_t mask = 1;
#if defined(__PGMSPACE_H_)
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_read = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_read, INPUT_PULLUP);
      }
      if (digitalRead(pin_to_read) == HIGH) {
        data |= mask;
      }
      mask <<= 1;
    }
#endif
  }
  return data;
}

void PinsToBusClass::writeByte(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint8_t data) {
  if (pins_required > 0 && pins_required <= 8) {
    uint8_t mask = 1;
#if defined(__PGMSPACE_H_)
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_write = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_write, OUTPUT);
      }
      if ((data & mask) != 0) {
        digitalWrite(pin_to_write, HIGH);
      }
      else {
        digitalWrite(pin_to_write, LOW);
      }
      mask <<= 1;
    }
#endif
  }
}

uint16_t PinsToBusClass::readWord(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required) {
  uint16_t data = 0;
  if (pins_required > 0 && pins_required <= 16) {
    uint16_t mask = 1;
#if defined(__PGMSPACE_H_)
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_read = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_read, INPUT_PULLUP);
      }
      if (digitalRead(pin_to_read) == HIGH) {
        data |= mask;
      }
      mask <<= 1;
    }
#endif
  }
  return data;
}

void PinsToBusClass::writeWord(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint16_t data) {
  if (pins_required > 0 && pins_required <= 16) {
#if defined(__PGMSPACE_H_)
    uint16_t mask = 1;
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_write = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_write, OUTPUT);
      }
      if ((data & mask) != 0) {
        digitalWrite(pin_to_write, HIGH);
      }
      else {
        digitalWrite(pin_to_write, LOW);
      }
      mask <<= 1;
    }
#endif
  }
}

uint32_t PinsToBusClass::readDword(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required) {
  uint32_t data = 0;
  if (pins_required > 0 && pins_required <= 32) {
    uint32_t mask = 1;
#if defined(__PGMSPACE_H_)
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_read = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_read, INPUT_PULLUP);
        }
        if (digitalRead(pin_to_read) == HIGH) {
          data |= mask;
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_read = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_read, INPUT_PULLUP);
      }
      if (digitalRead(pin_to_read) == HIGH) {
        data |= mask;
      }
      mask <<= 1;
    }
#endif
  }
  return data;
}

void PinsToBusClass::writeDword(const uint8_t *pins, uint8_t pins_required, bool DirectionChangeRequired, bool progmem_required, uint32_t data) {
  if (pins_required > 0 && pins_required <= 32) {
#if defined(__PGMSPACE_H_)
    uint32_t mask = 1;
    if (progmem_required == true) {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pgm_read_byte_near(pins + i);
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
    else {
      for (int i = 0; i < pins_required; i++) {
        uint8_t pin_to_write = pins[i];
        if (DirectionChangeRequired == true) {
          pinMode(pin_to_write, OUTPUT);
        }
        if ((data & mask) != 0) {
          digitalWrite(pin_to_write, HIGH);
        }
        else {
          digitalWrite(pin_to_write, LOW);
        }
        mask <<= 1;
      }
    }
#else
    for (int i = 0; i < pins_required; i++) {
      uint8_t pin_to_write = pins[i];
      if (DirectionChangeRequired == true) {
        pinMode(pin_to_write, OUTPUT);
      }
      if ((data & mask) != 0) {
        digitalWrite(pin_to_write, HIGH);
      }
      else {
        digitalWrite(pin_to_write, LOW);
      }
      mask <<= 1;
    }
#endif
  }
}

PinsToBusClass PinsToBus;