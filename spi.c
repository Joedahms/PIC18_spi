#include <xc.h>

#include "spi.h"

void spi_master_init()
{
    TRISC4 = 1; // SDI (pin 23) set as input
    TRISC7 = 0; // SDO (pin 26) set as output
    TRISC5 = 0; // SCK (pin 24) set as output
   
    SMP = 1;    // input sampled at end of output time
    CKP = 0;    // clock idle low
    CKE = 0;    // data transmitted on falling edge of SCK
    //SSPIE = 1;
    
    // SPI master mode, clock = Fosc/4
    SSPM0 = 0;  
    SSPM1 = 0;
    SSPM2 = 0;
    SSPM3 = 0;
    
    SSPEN = 1;  // enable serial port and configure SCK, SDO, and SCL as serial port pins
}

void spi_slave_init()
{
    TRISC4 = 1; // SDI (pin 23) set as input
    TRISC7 = 0; // SDO (pin 26) set as output
    TRISC5 = 1; // SCK (pin 24) set as input
    
    SMP = 0;
    CKP = 0;    // clock idle low
    CKE = 0;    // data transmitted on falling edge of SCK
    
    // SPI slave mode, SS bar disabled
    SSPM0 = 1;  
    SSPM1 = 0;
    SSPM2 = 1;
    SSPM3 = 0;
    
    SSPEN = 1;  // enable serial port and configure SCK, SDO, and SCL as serial port pins    
}

//void spi_

