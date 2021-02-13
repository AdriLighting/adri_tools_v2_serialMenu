# adri_tools_v2_serialMenu

<pre>
Librairies
<details>
adri_tools_v2_serialMenu        = https://github.com/AdriLighting/adri_tools_v2_serialMenu
adri_tools_v2                   = https://github.com/AdriLighting/adri_tools_v2

esp8266/arduino                 = https://github.com/esp8266/Arduino/tree/master/libraries
</details>
Dependency Graph
<details>
|-- [adri_tools_v2_serialMenu] 1.0.0
|   |-- [adri_tools_v2] 1.0.0
|   |   |-- [ESP8266WiFi] 1.0
|   |   |-- [LittleFS(esp8266)] 0.1.0</details>
</pre>

<hr>

#### examples

adri_tools_v2_serialMenu_1
<details>
platformio.ini
<details>
<pre>
[env:nodemcuv2]
platform=espressif8266
board=nodemcuv2
framework=arduino
lib_extra_dirs= ${env.lib_extra_dirs}
[platformio]
src_dir= ${env.src_dir}

</pre>
</details>
<pre>
Librairies
<details>
adri_tools_v2                   = https://github.com/AdriLighting/adri_tools_v2
adri_tools_v2_serialMenu        = https://github.com/AdriLighting/adri_tools_v2_serialMenu

esp8266/arduino                 = https://github.com/esp8266/Arduino/tree/master/libraries
</details>
Dependency Graph
<details>
|-- [adri_tools_v2] 1.0.0
|   |-- [ESP8266WiFi] 1.0
|   |-- [LittleFS(esp8266)] 0.1.0
|-- [adri_tools_v2_serialMenu] 1.0.0
|   |-- [adri_tools_v2] 1.0.0
|   |   |-- [ESP8266WiFi] 1.0
|   |   |-- [LittleFS(esp8266)] 0.1.0</details>
</pre>

</details>
<hr>
