/*
custom.ino

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

#include "ultrasound.h"
#include "acceler.h"
#include "bluetoothKey.h"
#include "custom.h"


volatile uint8_t btn_mode = BTN_MODE_NONE;

uint8_t auto_edge_cnt = 0;
uint8_t auto_turn_cnt = 0;
uint8_t auto_fight_cnt = 0;
int16_t auto_distance_0 = NO_DETECT, auto_distance_1 = NO_DETECT;
int16_t auto_acce_x, auto_acce_y, auto_acce_z;
int16_t auto_ir_data_0, auto_ir_data_1;
int16_t auto_time_cnt = 0;
uint32_t auto_millis_cnt = 0;

void custom_setup()
{
}

void custom_loop()
{ 
  uint16_t btn_key = 0; 

  
  uart_disableMotor();

  // wait the key to start machine
  while((btn_key = GP_getkeyStatus()) < 1) {  
    if(uart_isConnectToPC() != 0){
      return;
    }
  }
  
  while(uart_isUartMode == 0){  
    custom_gamepadKeyFun();
    
    if(uart_isConnectToPC() != 0){
      return;
    }    
  } 
}

int16_t custom_gamepadKeyFun()
{  
  uint16_t btn_key = 0, btn_dir = 0, btn_dirL = 0, btn_dirR = 0;
  int16_t acce_z;
  
  if((btn_dir = GP_getDir4Way()) != 0){
    //Serial.print("GPDIRKEY=");  Serial.println(btn_key); 
    do{
      switch(btn_dir){
        case BTN_DIR_RIGHT:
          do {
            SetFrameRun(12, 40);
            SetFrameRun(11, 60);
          } while((btn_dir = GP_getDir4Way()) == BTN_DIR_RIGHT);
          SetFrameRun(1, 10);
         
        break;
        
        case BTN_DIR_BACKWARD:
        {
          uint8_t jumpFlag = 0;
             SetFrameRun(0, 80);
             SetFrameRun(2, 60);
          do {
            SetFrameRun(3, 60);
            SetFrameRun(8, 110);
            if((btn_dir = GP_getDir4Way()) != BTN_DIR_BACKWARD){
              jumpFlag = 1;
              break;
            }
            SetFrameRun(5, 60);
            SetFrameRun(10, 110);
          } while((btn_dir = GP_getDir4Way()) == BTN_DIR_BACKWARD);
          
          if(jumpFlag == 1){
            SetFrameRun(5, 70);
          }else {
            SetFrameRun(3, 70);
          }
        }  
        SetFrameRun(1, 10);
        SetFrameRun(58, 10);
        break;
        
        case BTN_DIR_LEFT:
          do {
             SetFrameRun(13, 40);
             SetFrameRun(11, 60);
           } while((btn_dir = GP_getDir4Way()) == BTN_DIR_LEFT);
          SetFrameRun(1, 10);
          
        break;
        
        case BTN_DIR_FORWARD:
        {
          uint8_t jumpFlag = 0;
          
          SetFrameRun(0, 120);
          SetFrameRun(2, 80);
          do {
            SetFrameRun(3, 60);
            SetFrameRun(4, 100);
            
            if((btn_dir = GP_getDir4Way()) != BTN_DIR_FORWARD){
              jumpFlag = 1;
              break;
            }
            SetFrameRun(5, 60);
            SetFrameRun(6, 100);
          } while((btn_dir = GP_getDir4Way()) == BTN_DIR_FORWARD);
          
          if(jumpFlag == 1){
            SetFrameRun(5, 90);
          }else {
            SetFrameRun(3, 90);
          }
        }  
        SetFrameRun(1, 10);
        
        break;   
      }
      btn_dir = 0;
    } while((btn_dir = GP_getDir4Way()) != 0);
    
  }

  
  if((btn_key = GP_getkeyStatus()) != 0){
    do{
      switch(btn_key){
        case BTN_KEY_TRIANGLE:
          SetFrameRun(0, 100);
          SetFrameRun(2, 60);
          SetFrameRun(38, 120);
          do {
             SetFrameRun(39, 100);
          }while((btn_dir = GP_getkeyStatus()) == BTN_KEY_TRIANGLE); 
          SetFrameRun(32, 200);
          SetFrameRun(1, 30);
        
          break;
          
        case BTN_KEY_CIRCLES:
          SetFrameRun(35, 150); 
          SetFrameRun(36, 80);    
          SetFrameRun(36, 80);
          SetFrameRun(37, 150);    
          do {
            SetFrameRun(46, 30);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_CIRCLES);        
          SetFrameRun(32, 250);
          SetFrameRun(1, 10);
          SetFrameRun(1, 30);
          
        break;

        case BTN_KEY_CROSS:
          do {
             SetFrameRun(40, 30);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_CROSS);
          SetFrameRun(1, 10);
          SetFrameRun(1, 10);
         
        break;

        case BTN_KEY_SQUARE:
          SetFrameRun(41, 150);
          SetFrameRun(42, 80);
          SetFrameRun(42, 80);
          SetFrameRun(43, 150);
          do {
            SetFrameRun(47, 50);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_SQUARE);
          SetFrameRun(32, 250);
          SetFrameRun(1, 10); 
          SetFrameRun(1, 30);       
          
        break;

        case BTN_KEY_L1:
            SetFrameRun(33, 120);
          do {
            SetFrameRun(34, 50);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_L1);  
          SetFrameRun(32, 250);
          SetFrameRun(1, 10);
          SetFrameRun(1, 10);
         
        break;

        case BTN_KEY_R1:
             SetFrameRun(30, 120);
          do {
             SetFrameRun(31, 50);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_R1); 
          SetFrameRun(32, 250);
          SetFrameRun(1, 10);
          SetFrameRun(1, 10);
          
        break;

        case BTN_KEY_L2:
          do {
            SetFrameRun(16, 100);
            SetFrameRun(14, 60);   
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_L2);
          SetFrameRun(1, 10);
          
        break;

        case BTN_KEY_R2:
            
          do {
            SetFrameRun(15, 100);
            SetFrameRun(14, 60);
          } while((btn_dir = GP_getkeyStatus()) == BTN_KEY_R2);
          SetFrameRun(1, 10);
          
        break;

        case BTN_KEY_SELECT:
          uart_disableMotor();
        break;
        
        case BTN_KEY_START:
          SetFrameRun(20, 400);
          SetFrameRun(1, 200);
         
        break;
        
        case BTN_KEY_L3:
           //L3
          SetFrameRun(26, 250);
          SetFrameRun(27, 300);
          SetFrameRun(28, 400);
          SetFrameRun(29, 700);
          SetFrameRun(25, 300);
          SetFrameRun(1, 200);
          SetFrameRun(58, 10);
        break;

        case BTN_KEY_R3:
         
          // R3
          SetFrameRun(19, 100);
          SetFrameRun(20, 300);
          SetFrameRun(21, 300);
          SetFrameRun(22, 250);
          SetFrameRun(23, 350);
          SetFrameRun(24, 400);
          SetFrameRun(25, 300);
          SetFrameRun(1, 200);
          SetFrameRun(58, 10);
        break;
      }
      
    } while((btn_key = GP_getkeyStatus()) != 0);  

  }


  return 0;
}



