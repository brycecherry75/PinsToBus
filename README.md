#PinsToBus Library#

PinsToBus is a discrete library for combining Arduino pins into a bus.

Revisions

1.0.0	First release

USAGE:

read(Byte/Word/Dword)(*pins, pins_required, DirectionChangeRequired, progmem_required) - returns a byte/word/dword read from pins defined by *pins

write(Byte/Word/Dword)(*pins, pins_required, DirectionChangeRequired, progmem_required, data) - writes a byte/word/dword to pins defined by *pins - bits are written in sequence from Bit 0

progmem_required (for const arrays using the PROGMEM keyword - ignored if the compiler does not use the PROGMEM keyword) and DirectionChangeRequired (for changing bus direction based on the operation) are bool values and *pins is a uint8_t array with Bit 0 corresponding to Element 0 of the array which is interpreted from left to right starting at Element 0.

How to define the *pins object in program memory (3 pins for this example):

const byte pins_required = 3;

const byte pins[pins_required] PROGMEM = {9, A2, A3};