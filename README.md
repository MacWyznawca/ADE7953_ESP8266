# ADE7953 ESP8266
ESP8266 library for ADE7953 energy measurement chip i2c.

Written in **NONOS**, but should work with FreeRTOS and Arduino. Unfortunately, the Ade7953_getEnergy() function does not return valid data. Workaround: measuring power every 1 second and adding measurements. The result gives Ws (Watt-second), to get Wh should be divided by 3600, to kWh dyvide by 3600000.

Copyright (C) 2019 by Jaromir Kopp
