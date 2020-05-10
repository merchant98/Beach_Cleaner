# Beach_Cleaner
Simple Project based on Arduino for cleaning Low-level Trash on Beaches such as Cigarette Butts, Plastics, etc. 
I built this Project in my final year of engineering. The project consists of an Aluminium Box Pipe Square frame.
The Bot is controlled through a Mobile Application and it is able to pick trash and dump it in the container(centre of the bot) which has a fine mesh for filtering out the sand.
It uses a 14.8V battery to power the system.
The bot uses 3 High Torque Motors, Controlled using the L298N Motor Driver. Could have used a better Motor Driver but there was not enough Budget
The L298 has a maximum current Rating of 2 Amperes, i.e. The Motor was not able to perform at it's full potential because of the Current Limitations.
Motor Specs: 4.0 Kg/cm torque at 200RPM (6-18V DC)
The communication used was Bluetooth, so the range was a minimal 10 metres.(I did think of RF but the interference was too much. Try nRF24L01+ and set a custom frequency to minimize the noise. )
Bluetooth Module: HC-05 (2.85 GHz)
Another Reason to use HC-05 is the ease of sending and detecting data. There are several Applications readily available on the Google Play Store,
which have the data assigned for Buttons. A user can access the commands and the data sent and accordingly program the bot.
Lastly, I used the Arduino Microcontroller. 
Could not find the proper wheels or the tank-like belt, so had to use the basic available wheels.
