# ***THE BUCKBOARD***

The buckboard is a 60% keyboard with a integrated joystick that simulates the arrow keys and a tiny oled screen.
This project uses a custom raspberry pi pico which can be found here -> ([Fredboard v2](https://github.com/Thebucket-ops/Fredboard)).
Altough the project offers a pcb for the keyboard, the case is made for hand wired keyboard and it should be used just for reference on how to wire up everything (still you could use the pcb, you just need to make some adjustments to the bottom part of the case)

## **CASE**

the case 3d files can be found in /case

![front of the fredboard v2](/images/render1.png "render 1")
![back of the fredboard v2](/images/render2.png "render 2")

### **FIRMWARE**

The firmware for the board is made in qmk, the keymap offered has the italian layout.
All files can be found on /firmware.
To flash the firmware simply turn on the devboard on bootloader mode and drag the uf2 file in the devboard.

### **BOM**

  The build requires:
 - [Fredboard v2](https://github.com/Thebucket-ops/Fredboard)
 - 1 rotary encoder
 - 77 keyswitches
 - 78 diodes 1N914
 - 1 joystick moudule
 - 1 0.91" oled screen
