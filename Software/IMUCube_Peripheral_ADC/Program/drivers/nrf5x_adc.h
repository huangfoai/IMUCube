/* #include "nrf5x_adc.h" */

#ifndef __NRF5x_ADC_H
#define __NRF5x_ADC_H

#include "nrf5x_system.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define ADCx_CHANNEL  0 // AIN0
/*====================================================================================================*/
/*====================================================================================================*/
void    ADC_Config( void );
int16_t ADC_Read( nrf_adc_config_input_t channel );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 