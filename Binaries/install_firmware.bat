cls
@echo off     
echo                       Dashboard Camera firmware installer
echo .
echo .
echo                       This will guide you through the process

pause
cls


idf.py -p PORT [-b BAUD] flash


echo Replace PORT with your ESP32 board’s serial port name from Step 6. Connect Your Device.

You can also change the flasher baud rate by replacing BAUD with the baud rate you need. The default baud rate is 460800.

esptool.py --chip esp32 -p /dev/ttyUSB0 -b 460800 --before=default_reset --after=hard_reset write_flash --flash_mode dio --flash_freq 40m --flash_size 2MB 0x8000 partition_table/partition-table.bin 0x1000 bootloader/bootloader.bin
0x10000 hello-world.bin



Step 6. Connect Your Device
Now connect your ESP32 board to the computer and check under what serial port the board is visible.

Serial ports have the following patterns in their names:

Windows: names like COM1

Linux: starting with /dev/tty

macOS: starting with /dev/cu.

If you are not sure how to check the serial port name, please refer to Establish Serial Connection with ESP32 for full details.


