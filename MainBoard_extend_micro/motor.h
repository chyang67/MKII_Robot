/*motor.h by MotorAdjust.jar 
Gatsby Jan
gatsby.jan@ppt.com.tw

Copyright (c) 2018 - 2019 Phoenix Pioneer technology
*/
#ifndef __MOTOR_H__
#define __MOTOR_H__

#define MOTOR_FRAME_MAX 60
#define MOTOR_MOTOR_MAX 16

enum{
	MOTOR_EN  = 0,
	MOTOR_POS,
	MOTOR_SPEED,
	MOTOR_PARA_MAX
};


const PROGMEM uint16_t motor_para[MOTOR_FRAME_MAX][MOTOR_MOTOR_MAX][MOTOR_PARA_MAX]={
	{ // frame 0	
		{1, 1400, 10}, {1, 900, 10}, {1, 1600, 10}, {1, 1485, 10}, {1, 1570, 10}, 
		{1, 1480, 10}, {1, 1485, 10}, {1, 1600, 10}, {1, 2100, 10}, {1, 1400, 10}, 
		{1, 1515, 10}, {1, 1430, 10}, {1, 1520, 10}, {1, 1515, 10}, {1, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 1	
		{1, 1200, 150}, {1, 900, 150}, {1, 2060, 150}, {1, 1600, 150}, {1, 1580, 150}, 
		{1, 1500, 150}, {1, 1600, 150}, {1, 1800, 150}, {1, 2100, 150}, {1, 940, 150}, 
		{1, 1400, 150}, {1, 1420, 150}, {1, 1500, 150}, {1, 1400, 150}, {1, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 2	
		{1, 1400, 80}, {1, 900, 80}, {1, 1550, 80}, {1, 1515, 80}, {1, 1600, 80}, 
		{1, 1450, 80}, {1, 1470, 80}, {1, 1600, 80}, {1, 2100, 80}, {1, 1450, 80}, 
		{1, 1485, 80}, {1, 1400, 80}, {1, 1550, 80}, {1, 1440, 80}, {1, 1500, 80}, 
		{0, 1500, 80}, 
	},
	{ // frame 3	
		{1, 1400, 20}, {1, 900, 20}, {1, 1550, 20}, {1, 1515, 20}, {1, 1620, 20}, 
		{1, 1420, 20}, {1, 1460, 20}, {1, 1600, 20}, {1, 2100, 20}, {1, 1450, 20}, 
		{1, 1485, 20}, {1, 1750, 20}, {1, 1250, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 4	
		{1, 1400, 90}, {1, 900, 90}, {1, 1550, 90}, {1, 1515, 90}, {1, 1750, 90}, 
		{1, 1510, 90}, {1, 1500, 90}, {1, 1600, 90}, {1, 2100, 90}, {1, 1450, 90}, 
		{1, 1485, 90}, {1, 1480, 90}, {1, 1650, 90}, {1, 1490, 90}, {1, 1500, 90}, 
		{0, 1500, 90}, 
	},
	{ // frame 5	
		{1, 1400, 20}, {1, 900, 20}, {1, 1550, 20}, {1, 1515, 20}, {1, 1250, 20}, 
		{1, 1750, 20}, {1, 1500, 20}, {1, 1600, 20}, {1, 2100, 20}, {1, 1450, 20}, 
		{1, 1485, 20}, {1, 1380, 20}, {1, 1580, 20}, {1, 1540, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 6	
		{1, 1400, 90}, {1, 900, 90}, {1, 1550, 90}, {1, 1515, 90}, {1, 1520, 90}, 
		{1, 1350, 90}, {1, 1510, 90}, {1, 1600, 90}, {1, 2100, 90}, {1, 1450, 90}, 
		{1, 1485, 90}, {1, 1250, 90}, {1, 1490, 90}, {1, 1500, 90}, {1, 1500, 90}, 
		{0, 1500, 90}, 
	},
	{ // frame 7	
		{1, 1400, 90}, {1, 900, 90}, {1, 1550, 90}, {1, 1515, 90}, {1, 1620, 90}, 
		{1, 1430, 90}, {1, 1470, 90}, {1, 1600, 90}, {1, 2100, 90}, {1, 1450, 90}, 
		{1, 1485, 90}, {1, 1750, 90}, {1, 1250, 90}, {1, 1500, 90}, {1, 1500, 90}, 
		{0, 1500, 90}, 
	},
	{ // frame 8	
		{1, 1400, 80}, {1, 900, 80}, {1, 1550, 80}, {1, 1515, 80}, {1, 1500, 80}, 
		{1, 1270, 80}, {1, 1510, 80}, {1, 1600, 80}, {1, 2100, 80}, {1, 1450, 80}, 
		{1, 1485, 80}, {1, 1300, 80}, {1, 1500, 80}, {1, 1490, 80}, {1, 1500, 80}, 
		{0, 1500, 80}, 
	},
	{ // frame 9	
		{1, 1400, 90}, {1, 900, 90}, {1, 1550, 90}, {1, 1515, 90}, {1, 1250, 90}, 
		{1, 1750, 90}, {1, 1500, 90}, {1, 1600, 90}, {1, 2100, 90}, {1, 1450, 90}, 
		{1, 1485, 90}, {1, 1380, 90}, {1, 1570, 90}, {1, 1530, 90}, {1, 1500, 90}, 
		{0, 1500, 90}, 
	},
	{ // frame 10	
		{1, 1400, 80}, {1, 900, 80}, {1, 1550, 80}, {1, 1515, 80}, {1, 1700, 80}, 
		{1, 1500, 80}, {1, 1510, 80}, {1, 1600, 80}, {1, 2100, 80}, {1, 1450, 80}, 
		{1, 1485, 80}, {1, 1500, 80}, {1, 1730, 80}, {1, 1490, 80}, {1, 1500, 80}, 
		{0, 1500, 80}, 
	},
	{ // frame 11	
		{1, 1400, 20}, {1, 950, 20}, {1, 1600, 20}, {1, 1550, 20}, {1, 1600, 20}, 
		{1, 1460, 20}, {1, 1550, 20}, {1, 1600, 20}, {1, 2050, 20}, {1, 1400, 20}, 
		{1, 1450, 20}, {1, 1400, 20}, {1, 1540, 20}, {1, 1450, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 12	
		{1, 1300, 20}, {1, 950, 20}, {1, 1600, 20}, {1, 1550, 20}, {1, 1640, 20}, 
		{1, 1390, 20}, {1, 1650, 20}, {1, 1500, 20}, {1, 2050, 20}, {1, 1400, 20}, 
		{1, 1450, 20}, {1, 1360, 20}, {1, 1610, 20}, {1, 1350, 20}, {1, 1400, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 13	
		{1, 1500, 20}, {1, 950, 20}, {1, 1600, 20}, {1, 1550, 20}, {1, 1640, 20}, 
		{1, 1390, 20}, {1, 1650, 20}, {1, 1700, 20}, {1, 2050, 20}, {1, 1400, 20}, 
		{1, 1450, 20}, {1, 1360, 20}, {1, 1610, 20}, {1, 1350, 20}, {1, 1600, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 14	
		{1, 1400, 10}, {1, 950, 10}, {1, 1600, 10}, {1, 1560, 10}, {1, 1550, 10}, 
		{1, 1500, 10}, {1, 1570, 10}, {1, 1600, 10}, {1, 2050, 10}, {1, 1400, 10}, 
		{1, 1440, 10}, {1, 1450, 10}, {1, 1500, 10}, {1, 1430, 10}, {1, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 15	
		{1, 1400, 130}, {1, 1000, 130}, {1, 1600, 130}, {1, 1650, 130}, {1, 1500, 130}, 
		{1, 1550, 130}, {1, 1500, 130}, {1, 1600, 130}, {1, 2000, 130}, {1, 1400, 130}, 
		{1, 1320, 130}, {1, 1300, 130}, {1, 1670, 130}, {1, 1420, 130}, {1, 1500, 130}, 
		{0, 1500, 130}, 
	},
	{ // frame 16	
		{1, 1400, 130}, {1, 1000, 130}, {1, 1600, 130}, {1, 1680, 130}, {1, 1700, 130}, 
		{1, 1330, 130}, {1, 1580, 130}, {1, 1600, 130}, {1, 2000, 130}, {1, 1400, 130}, 
		{1, 1350, 130}, {1, 1500, 130}, {1, 1450, 130}, {1, 1500, 130}, {1, 1500, 130}, 
		{0, 1500, 130}, 
	},
	{ // frame 17	
		{1, 1400, 150}, {1, 1000, 150}, {1, 1600, 150}, {1, 1680, 150}, {1, 1700, 150}, 
		{1, 1330, 150}, {1, 1580, 150}, {1, 1600, 150}, {1, 2000, 150}, {1, 1400, 150}, 
		{1, 1350, 150}, {1, 1500, 150}, {1, 1470, 150}, {1, 1500, 150}, {1, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 18	
		{1, 1400, 150}, {1, 1000, 150}, {1, 1600, 150}, {1, 1650, 150}, {1, 1500, 150}, 
		{1, 1530, 150}, {1, 1500, 150}, {1, 1600, 150}, {1, 2000, 150}, {1, 1400, 150}, 
		{1, 1320, 150}, {1, 1300, 150}, {1, 1670, 150}, {1, 1420, 150}, {1, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 19	
		{1, 1400, 10}, {1, 950, 10}, {1, 1600, 10}, {1, 1570, 10}, {1, 1570, 10}, 
		{1, 1460, 10}, {1, 1570, 10}, {1, 1600, 10}, {1, 2050, 10}, {1, 1400, 10}, 
		{1, 1430, 10}, {1, 1430, 10}, {1, 1540, 10}, {1, 1430, 10}, {1, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 20	
		{1, 1500, 300}, {1, 1550, 300}, {1, 1200, 300}, {1, 1600, 300}, {1, 1600, 300}, 
		{1, 1430, 300}, {1, 1600, 300}, {1, 1500, 300}, {1, 1450, 300}, {1, 1800, 300}, 
		{1, 1400, 300}, {1, 1400, 300}, {1, 1570, 300}, {1, 1400, 300}, {1, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 21	
		{1, 2100, 300}, {1, 1550, 300}, {1, 1600, 300}, {1, 1600, 300}, {1, 1600, 300}, 
		{1, 1430, 300}, {1, 1600, 300}, {1, 900, 300}, {1, 1450, 300}, {1, 1400, 300}, 
		{1, 1400, 300}, {1, 1400, 300}, {1, 1570, 300}, {1, 1400, 300}, {1, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 22	
		{1, 2100, 350}, {1, 850, 350}, {1, 2000, 350}, {1, 1600, 350}, {1, 1250, 350}, 
		{1, 1750, 350}, {1, 1600, 350}, {1, 900, 350}, {1, 2150, 350}, {1, 1000, 350}, 
		{1, 1400, 350}, {1, 1750, 350}, {1, 1250, 350}, {1, 1400, 350}, {1, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 23	
		{1, 1850, 300}, {1, 950, 300}, {1, 1300, 300}, {1, 1600, 300}, {1, 1250, 300}, 
		{1, 1750, 300}, {1, 1600, 300}, {1, 1150, 300}, {1, 2050, 300}, {1, 1700, 300}, 
		{1, 1400, 300}, {1, 1750, 300}, {1, 1250, 300}, {1, 1400, 300}, {1, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 24	
		{1, 1700, 300}, {1, 950, 300}, {1, 1300, 300}, {1, 1600, 300}, {1, 1250, 300}, 
		{1, 1750, 300}, {1, 1600, 300}, {1, 1600, 300}, {1, 2050, 300}, {1, 1700, 300}, 
		{1, 1400, 300}, {1, 1750, 300}, {1, 1250, 300}, {1, 1400, 300}, {1, 1900, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 25	
		{1, 1500, 400}, {1, 1300, 400}, {1, 1500, 400}, {1, 1600, 400}, {1, 1450, 400}, 
		{1, 1550, 400}, {1, 1600, 400}, {1, 1500, 400}, {1, 1700, 400}, {1, 1500, 400}, 
		{1, 1400, 400}, {1, 1550, 400}, {1, 1450, 400}, {1, 1400, 400}, {1, 1500, 400}, 
		{0, 1500, 400}, 
	},
	{ // frame 26	
		{1, 1500, 300}, {1, 1300, 300}, {1, 1500, 300}, {1, 1600, 300}, {1, 1250, 300}, 
		{1, 1750, 300}, {1, 1600, 300}, {1, 1500, 300}, {1, 1700, 300}, {1, 1500, 300}, 
		{1, 1400, 300}, {1, 1750, 300}, {1, 1250, 300}, {1, 1400, 300}, {1, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 27	
		{1, 1000, 200}, {1, 1450, 200}, {1, 1300, 200}, {1, 1600, 200}, {1, 1250, 200}, 
		{1, 1750, 200}, {1, 1600, 200}, {1, 2000, 200}, {1, 1550, 200}, {1, 1700, 200}, 
		{1, 1400, 200}, {1, 1750, 200}, {1, 1250, 200}, {1, 1400, 200}, {1, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 28	
		{1, 1000, 200}, {1, 850, 200}, {1, 1300, 200}, {1, 1600, 200}, {1, 1250, 200}, 
		{1, 1750, 200}, {1, 1600, 200}, {1, 2000, 200}, {1, 2150, 200}, {1, 1700, 200}, 
		{1, 1400, 200}, {1, 1750, 200}, {1, 1250, 200}, {1, 1400, 200}, {1, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 29	
		{1, 1300, 250}, {1, 950, 250}, {1, 1300, 250}, {1, 1600, 250}, {1, 1250, 250}, 
		{1, 1750, 250}, {1, 1600, 250}, {1, 1700, 250}, {1, 2050, 250}, {1, 1700, 250}, 
		{1, 1400, 250}, {1, 1750, 250}, {1, 1250, 250}, {1, 1400, 250}, {1, 1500, 250}, 
		{0, 1500, 250}, 
	},
	{ // frame 30	
		{1, 1150, 100}, {1, 900, 100}, {1, 2000, 100}, {1, 1600, 100}, {1, 1590, 100}, 
		{1, 1460, 100}, {1, 1650, 100}, {1, 1700, 100}, {1, 2000, 100}, {1, 1000, 100}, 
		{1, 1400, 100}, {1, 1470, 100}, {1, 1490, 100}, {1, 1420, 100}, {1, 1650, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 31	
		{1, 1800, 10}, {1, 1300, 10}, {1, 1300, 10}, {1, 1500, 10}, {1, 1800, 10}, 
		{1, 1600, 10}, {1, 1570, 10}, {1, 1900, 10}, {1, 1900, 10}, {1, 1500, 10}, 
		{1, 1400, 10}, {1, 1650, 10}, {1, 1650, 10}, {1, 1470, 10}, {1, 1900, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 32	
		{1, 1300, 20}, {1, 1000, 400}, {1, 2050, 20}, {1, 1600, 400}, {1, 1500, 400}, 
		{1, 1500, 400}, {1, 1600, 400}, {1, 1700, 20}, {1, 2000, 400}, {1, 950, 20}, 
		{1, 1400, 400}, {1, 1500, 400}, {1, 1500, 400}, {1, 1400, 400}, {1, 1500, 400}, 
		{0, 1500, 400}, 
	},
	{ // frame 33	
		{1, 1300, 100}, {1, 1000, 100}, {1, 2000, 100}, {1, 1600, 100}, {1, 1540, 100}, 
		{1, 1510, 100}, {1, 1580, 100}, {1, 1850, 100}, {1, 2100, 100}, {1, 1000, 100}, 
		{1, 1400, 100}, {1, 1410, 100}, {1, 1540, 100}, {1, 1370, 100}, {1, 1350, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 34	
		{1, 1100, 10}, {1, 1100, 10}, {1, 1600, 10}, {1, 1600, 10}, {1, 1350, 10}, 
		{1, 1350, 10}, {1, 1530, 10}, {1, 1200, 10}, {1, 1700, 10}, {1, 1700, 10}, 
		{1, 1500, 10}, {1, 1200, 10}, {1, 1400, 10}, {1, 1430, 10}, {1, 1100, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 35	
		{1, 1350, 20}, {1, 1100, 20}, {1, 1100, 20}, {1, 1750, 20}, {1, 1450, 20}, 
		{1, 1600, 20}, {1, 1630, 20}, {1, 1300, 20}, {1, 2000, 20}, {1, 1000, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1370, 20}, {1, 1300, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 36	
		{1, 1550, 10}, {1, 1150, 10}, {1, 1000, 10}, {1, 1750, 10}, {1, 1380, 10}, 
		{1, 1550, 10}, {1, 1650, 10}, {1, 1400, 10}, {1, 2000, 10}, {1, 1500, 10}, 
		{1, 1550, 10}, {1, 1550, 10}, {1, 1500, 10}, {1, 1400, 10}, {1, 1800, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 37	
		{1, 2150, 10}, {1, 1150, 10}, {1, 2060, 10}, {1, 1550, 10}, {1, 1400, 10}, 
		{1, 1250, 10}, {1, 1580, 10}, {1, 1600, 10}, {1, 2000, 10}, {1, 1600, 10}, 
		{1, 1350, 10}, {1, 1300, 10}, {1, 1400, 10}, {1, 1370, 10}, {1, 1900, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 38	
		{1, 1300, 20}, {1, 1100, 20}, {1, 2050, 20}, {1, 1550, 20}, {1, 1650, 20}, 
		{1, 1500, 20}, {1, 1450, 20}, {1, 1600, 20}, {1, 2100, 20}, {0, 1450, 20}, 
		{1, 1485, 20}, {1, 1750, 20}, {1, 1450, 20}, {1, 1500, 20}, {1, 1650, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 39	
		{1, 1900, 10}, {1, 1150, 10}, {1, 1300, 10}, {1, 1550, 10}, {1, 1850, 10}, 
		{1, 1620, 10}, {1, 1590, 10}, {1, 1700, 10}, {1, 1900, 10}, {1, 1450, 10}, 
		{1, 1430, 10}, {1, 1650, 10}, {1, 1750, 10}, {1, 1450, 10}, {1, 1900, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 40	
		{1, 1300, 170}, {1, 900, 170}, {1, 1800, 170}, {1, 1600, 170}, {1, 1270, 170}, 
		{1, 1730, 170}, {1, 1600, 170}, {1, 1700, 170}, {1, 2100, 170}, {1, 1200, 170}, 
		{1, 1400, 170}, {1, 1730, 170}, {1, 1270, 170}, {1, 1400, 170}, {1, 1500, 170}, 
		{0, 1500, 170}, 
	},
	{ // frame 41	
		{1, 1700, 20}, {1, 1000, 20}, {1, 1900, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1630, 20}, {1, 1650, 20}, {1, 1800, 20}, {1, 1900, 20}, 
		{1, 1250, 20}, {1, 1550, 20}, {1, 1400, 20}, {1, 1370, 20}, {1, 1700, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 42	
		{1, 1600, 10}, {1, 1000, 10}, {1, 1500, 10}, {1, 1450, 10}, {1, 1450, 10}, 
		{1, 1470, 10}, {1, 1600, 10}, {1, 1550, 10}, {1, 1850, 10}, {1, 2000, 10}, 
		{1, 1250, 10}, {1, 1620, 10}, {1, 1450, 10}, {1, 1350, 10}, {1, 1200, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 43	
		{1, 1400, 10}, {1, 1100, 10}, {1, 1400, 10}, {1, 1650, 10}, {1, 1700, 10}, 
		{1, 1600, 10}, {1, 1630, 10}, {1, 850, 10}, {1, 1950, 10}, {1, 950, 10}, 
		{1, 1450, 10}, {1, 1600, 10}, {1, 1750, 10}, {1, 1420, 10}, {1, 1100, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 44	
		{1, 1900, 10}, {1, 900, 10}, {1, 800, 10}, {1, 1600, 10}, {1, 1500, 10}, 
		{1, 1450, 10}, {1, 1600, 10}, {1, 1100, 10}, {1, 2100, 10}, {1, 2200, 10}, 
		{1, 1400, 10}, {1, 1500, 10}, {1, 1550, 10}, {1, 1400, 10}, {1, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 45	
		{1, 2100, 10}, {1, 850, 10}, {1, 2000, 10}, {1, 1600, 10}, {1, 1500, 10}, 
		{1, 1450, 10}, {1, 1600, 10}, {1, 900, 10}, {1, 2150, 10}, {1, 1000, 10}, 
		{1, 1400, 10}, {1, 1500, 10}, {1, 1550, 10}, {1, 1400, 10}, {1, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 46	
		{1, 2150, 10}, {1, 1150, 10}, {0, 2060, 10}, {1, 1550, 10}, {1, 1400, 10}, 
		{1, 1250, 10}, {1, 1600, 10}, {1, 1600, 10}, {1, 2000, 10}, {1, 1600, 10}, 
		{1, 1350, 10}, {1, 1300, 10}, {1, 1400, 10}, {1, 1380, 10}, {1, 1900, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 47	
		{1, 1400, 10}, {1, 1000, 10}, {1, 1400, 10}, {1, 1650, 10}, {1, 1700, 10}, 
		{1, 1600, 10}, {1, 1620, 10}, {1, 850, 10}, {1, 1950, 10}, {0, 940, 10}, 
		{1, 1450, 10}, {1, 1600, 10}, {1, 1750, 10}, {1, 1400, 10}, {1, 1100, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 48	
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 49	
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 50	
		{1, 1400, 20}, {1, 900, 20}, {1, 1550, 20}, {1, 1510, 20}, {1, 1630, 20}, 
		{1, 1400, 20}, {1, 1480, 20}, {1, 1600, 20}, {1, 2100, 20}, {1, 1450, 20}, 
		{1, 1480, 20}, {1, 1750, 20}, {1, 1250, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 51	
		{1, 1400, 20}, {1, 900, 20}, {1, 1550, 20}, {1, 1520, 20}, {1, 1250, 20}, 
		{1, 1750, 20}, {1, 1500, 20}, {1, 1600, 20}, {1, 2100, 20}, {1, 1450, 20}, 
		{1, 1490, 20}, {1, 1370, 20}, {1, 1600, 20}, {1, 1520, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 52	
		{1, 1400, 20}, {1, 900, 20}, {1, 1600, 20}, {1, 1500, 20}, {1, 1600, 20}, 
		{1, 1430, 20}, {1, 1500, 20}, {1, 1600, 20}, {1, 2100, 20}, {1, 1400, 20}, 
		{1, 1500, 20}, {1, 1400, 20}, {1, 1570, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 53	
		{1, 1400, 350}, {1, 900, 350}, {1, 1550, 350}, {1, 1550, 350}, {1, 1550, 350}, 
		{1, 1470, 350}, {1, 1420, 350}, {1, 1600, 350}, {1, 2100, 350}, {1, 1450, 350}, 
		{1, 1500, 350}, {1, 950, 350}, {1, 1250, 350}, {1, 1460, 350}, {1, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 54	
		{1, 1400, 1}, {1, 900, 1}, {1, 1550, 1}, {1, 1550, 1}, {1, 1570, 1}, 
		{1, 1450, 1}, {1, 1420, 1}, {1, 1600, 1}, {1, 2100, 1}, {1, 1450, 1}, 
		{1, 1500, 1}, {1, 1550, 1}, {1, 1450, 1}, {1, 1420, 1}, {1, 1500, 1}, 
		{0, 1500, 1}, 
	},
	{ // frame 55	
		{1, 1400, 1}, {1, 900, 1}, {1, 1550, 1}, {1, 1550, 1}, {1, 1550, 1}, 
		{1, 1470, 1}, {1, 1424, 1}, {1, 1600, 1}, {1, 2100, 1}, {1, 1450, 1}, 
		{1, 1520, 1}, {1, 1650, 1}, {1, 1900, 1}, {1, 1420, 1}, {1, 1500, 1}, 
		{0, 1500, 1}, 
	},
	{ // frame 56	
		{1, 1400, 350}, {1, 900, 350}, {1, 1550, 350}, {1, 1530, 350}, {1, 1550, 350}, 
		{1, 1470, 350}, {1, 1420, 350}, {1, 1600, 350}, {1, 2100, 350}, {1, 1450, 350}, 
		{1, 1480, 350}, {1, 1450, 350}, {1, 1450, 350}, {1, 1460, 350}, {1, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 57	
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 58	
		{1, 1200, 150}, {1, 900, 150}, {1, 2060, 150}, {1, 1600, 150}, {1, 1580, 150}, 
		{1, 1500, 150}, {1, 1600, 150}, {1, 1800, 150}, {1, 2100, 150}, {1, 940, 150}, 
		{1, 1400, 150}, {1, 1420, 150}, {1, 1500, 150}, {1, 1400, 150}, {1, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 59	
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, {1, 1500, 20}, 
		{0, 1500, 20}, 
	},
};

#endif