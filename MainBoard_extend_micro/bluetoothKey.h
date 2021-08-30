/*
bluetoothkey.h
Gatsby Jan
gatsby.jan@ppt.com.tw

Copyright (c) 2018 ~ 2019 CreatorArk technology

Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
and associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, 
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or 
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __BLUETOOTHKEY_H__
#define __BLUETOOTHKEY_H__

#define BTKEY_TX_PIN  15
#define BTKEY_RX_PIN  14

int16_t btkey_init(uint8_t id);
int16_t btkey_enable(uint8_t id);
int16_t btkey_disable(uint8_t id);




enum{
  BTKEY_CMD_START = 'A',
  BTKEY_CMD_RIGHT,        // 'B'
  BTKEY_CMD_BACKWARD,     // 'C'
  BTKEY_CMD_LEFT,         // 'D'
  BTKEY_CMD_FORWARD,      // 'E'
  BTKEY_CMD_SIDE_KICK,    // 'F'
  BTKEY_CMD_RIGHT_HOOK,   // 'G'
  BTKEY_CMD_SEAT,         // 'H'
  BTKEY_CMD_LEFT_HOOK,    // 'I'
  BTKEY_CMD_LEFT_SIDEWAY, // 'J'
  BTKEY_CMD_RIGHT_SIDEWAY,// 'K'
  BTKEY_CMD_LEFT_PUNCH,   // 'L'
  BTKEY_CMD_RIGHT_PUNCH,  // 'M'
  BTKEY_CMD_SELECT,       // 'N'
  BTKEY_CMD_GETUP_FORWARD,// 'O'
  BTKEY_CMD_GETUP_BACKWARD,// 'P'
  BTKEY_CMD_MAX
};

#endif
