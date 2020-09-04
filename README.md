# Dashboard Camera Board
This Board is designed to support both Audio and Video recording. It uses two cameras for its video feed (OV2710)  and the ICS-43432 for its audio recording. It also supports wifi and bluetooth.

[Documentation](https://docs.google.com/document/d/1LtWO_IcNbJ7sfWBFgHGUc6nKqhitYqpvLzOcLqV0Ibc/edit?usp=sharing)

#
<div class="row" align=center ><img src="https://github.com/IamNator/Dash_cam/blob/master/Media/dash_cam_rotate.gif" width=31% align=center all="Dash cam 360 view">
<img src="https://github.com/IamNator/Dash_cam/blob/master/Media/dash-cam-flip-diagonally.gif" width=31% align=center all="Dash cam 360 view"> <img src="https://github.com/IamNator/Dash_cam/blob/master/Media/dash-cam-top-rotates.gif" width=35% align=center all="Dash cam 360 view">
</div>

## Getting Started

### Fabricate the board
* click on the green code button and download the zip file for this repository.
* Extract the zip file. This contains all the files we'll be needing.
* Get the board Fabricated by your favorite PCB Manufacturer. (files needed for this can be found under the subfolder <b>PCB</b>)

### Setting up the board for programming
The board has three microchip on it; namely esp32_1, esp32_2 and stm32f4xx. Each of these chips will need to be programmed

####  esp32_1 and esp32_2
* You will require an <a href="https://learn.adafruit.com/ftdi-friend/ftdi-friend-vs-avr-programmer">FTDI</a> programmer for this.
* Connect the programmer to appropriate pins are shown in the diagram below.
* Run the install_firmware.* as explained below.

####  stm32f4xx.
* All you will need for this process a USB type-C.
* Plug the board to your computer through the USB cable 
* Run the install_firmware.* as explained below.

### Uploading the firmware
* Navigate to the <b>Binaries</b> subfolder in your already extracted file.
* Make sure the drivers listed in the driverlist.txt are installed on your system.
* Run the Batch file install_firmware.bat on windows or Bash file install_firmware.sh if you're using a mac or linux
* Follow the Prompts to complete the process (Admin/su previlleges may be required)
