/*

ADE7953_ESP82

Copyright (C) 2019 by Jaromir Kopp <macwyznawca at me dot com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef ADE7953_h
#define ADE7953_h

#include "os_type.h"
#include "C_types.h"
#include "osapi.h"
#include "gpio.h"
#include "Osapi.h"
#include "c_types.h"
#include "ets_sys.h"

#ifdef __cplusplus
extern "C"
{
#endif

int8_t Ade7953_init();

void Ade7953GetData(void);
uint16_t Ade7953_getCurrent(uint8_t channel); // A x100 (dyvide by 100 for Amper)
uint16_t Ade7953_getVoltage(); 
uint16_t Ade7953_getActivePower(uint8_t channel); 

uint32_t Ade7953_getEnergy(uint8_t channel); // Don't working (bad data)! 

#ifdef __cplusplus
}
#endif /* End of CPP guard */
#endif //ADE7953_h
