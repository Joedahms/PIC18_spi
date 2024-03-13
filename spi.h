/* 
 * File:   spi.h
 * Author: joe
 *
 * Created on March 6, 2024, 7:46 PM
 */

#ifndef SPI_H
#define	SPI_H

#define MESSAGE_START 0b11111111

void spi_master_init();
void spi_slave_init();

struct spi_transmission
{
    uint8_t beginning_flag;
    uint8_t sending_flag;
    uint8_t end_flag;
};

#endif	/* SPI_H */

