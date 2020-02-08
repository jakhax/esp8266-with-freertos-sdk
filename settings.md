# Settings
- A bunch of configurations inluding ide and environ
## Vscode
- `.vscode/c_cpp_properties.json`
```json
{
    "configurations": [
        {
            "name": "ESP8266-IDF",
            "includePath": [
                "${IDF_PATH}/components/**"

            ],
            "cStandard": "c11",
            "cppStandard": "c++11",
            "intelliSenseMode": "clang-x64"
        }
    ],
    "version": 4
}
```
## Env
```bash
#esp8266 idf
export IDF_PATH="/home/octojob/esp/ESP8266_RTOS_SDK"
## xtensa
export PATH="$PATH:$HOME/esp/xtensa-lx106-elf/bin"
```