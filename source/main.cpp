/* 
 * Copyright (c) 2015 Robert May
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "MicroBit.h"

void app_main() {

    char name[] = "XXXXX*";
    uBit.ble_firmware_update_service->getName(name);

    while (1) {
       uBit.display.print(name,1000);
       uBit.sleep(1000);
    }
}
