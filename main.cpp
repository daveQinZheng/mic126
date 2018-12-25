#include "pxt.h"

namespace robobloq {
     /**
     * Read a line of text from the serial port and return the buffer when the delimiter is met.
     * @param delimiter text delimiter that separates each text chunk
     */

    //% help=robobloq/robobloq_readUntil
    //% blockId=robobloq_readUntil block="robobloq|read until %delimiter=serial_delimiter_conv"
    String readUntil(String delimiter) {
      return PSTR(uBit.serial.readUntil(MSTR(delimiter)));
    }

    //% help=robobloq/robobloq_readBufferSize
    //% blockId=robobloq_readBufferSize block="robobloq|read readBufferSize"
    int readBufferSize(){
      int Siz = uBit.serial.getRxBufferSize();
      return Siz;
    }
}