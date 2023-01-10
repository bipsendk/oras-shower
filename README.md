# oras-shower
ESPhome code get grab data out of a Oras Hydractiva Digital shower head

I am not sure if the service and characteritics uid are the same for all shower heads.

You will need to set the MAC address of the shower head, and if the shower head cannot be found, the service and characteristics uid's must be located.
For that purpose, I used nRF connect on my Android phone. 
If the shower head cannot be found, let me know - and I will try to cook up a description on how to locate the uid's 

Sensors are only updated when water is flowing through the shower head (and ESPhome has sufficient time to connect and fetch data). When active, the sensors are updated every 5 seconds..

Sensor output (example):

![image](https://user-images.githubusercontent.com/8531428/211394034-c58902ec-b5b6-430a-81c2-8d3a6c9a9a08.png)

Once a shower has been detected/assumed finished, the "current" readings are moved to the "last" readings, and the "current" are reset to "Unknown" (until next shower starts).

![image](https://user-images.githubusercontent.com/8531428/211408135-4361e846-900c-4552-8ee0-ccd52b9efe2e.png)

The shower head is this one: https://info.oras.com/en/oras-hydractiva-digital

In the yaml file, you will have to set the right MAC address of your shower head (in the ble_client section).

If you have difficulties finding the MAC address, try to enable DEBUG logging - then it will show whatever BLE devices, that is found with the name "DHS", and the associated Service UUID (used in line 322)

If you don't want the "last" sensors to go in state unknown or unavailable if the ESP device reboots or similar, you need to filter the appropriate sensors - for example by adding the content from template-filters.txt to the "template:" section of your configuration.yaml file.
