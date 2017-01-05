/*
 * Filename: DDPC_SPI.h
 * FEATURES:
 * Ultra-lowpower consumption, quiet, pumpless design
 * Two digitally controlled, 256-position potentiometers
 * Serial port provides means for setting and reading both potentiometers
 * Resistors can be connected in series to provide increased total resistance
 * 20-pin TSSOP, 16-pin SOIC, and 14-pin DIP packages are available.
 * Resistive elements are temperature compensated to ±0.3 LSB relative linearity
 * Standard resistance values: - DS1868-10 ?10 k? - DS1868-50 ?50 k? - DS1868-100 ?100 k?
 * +5V or ±3V operation
 * Operating Temperature Range: - Industrial: -40°C to 85°C
 * 
 * PIN DESCRIPTION
 * L0, L1 - Low End of Resistor
 * H0, H1 - High End of Resistor
 * W0, W1 - Wiper Terminal of Resistor
 * SOUT - Stacked Configuration Output
 * RST - Serial Port Reset Input
 * DQ - Serial Port Data Input
 * CLK - Serial Port Clock Input
 * COUT - Cascade Port Output
 * VCC - +5 Volt Supply
 * GND - Ground Connections
 * NC - No Internal Connection
 * VB - Substrate Bias Voltage
 * DNC - Do Not Connect *All
 * GND pins must be connected to ground.
 */

//
#ifndef DDPC_SPI_H
#define DDPC_SPI_H

//
#include<DDPC_SPI.h>
#include<Arduino.h>
#include"DDPC_SPI.h"
#include"Arduino.h"

//
#define DDPC_SPI_RST
#define DDPC_SPI_DQ
#define DDPC_SPI_CLK

//
#define 256_MULTIPLEXER
#define WIPER_0_8_BITS
#define WIPER_1_8_BITS
#define CONTROL_LOGIC
#define 17_BIT_IO_SHIFT_REGISTER
#define STACK_MULTIPLEXER

class DDPC_SPI{
  DDPC_SPI(uint8_t DDPC_SPI_RST, uint8_t DDPC_SPI_DQ, uint8_t DDPC_SPI_CLK); //
  
  //
  public:
void begin(); //
void end(); //
void write(); //
void init(); //
  
  //
  private:
  
  //
  protected:
  
  
}

extern DDPC_SPI_class DDPC_SPI_RST;
extern DDPC_SPI_class DDPC_SPI_DQ;
extern DDPC_SPI_class DDPC_SPI_CLK;

#endif;
