# oras-shower
ESPhome code get grab data out of a Oras Hydractiva Digital shower head

I am not sure if the service and characteritics uid are the same for all shower heads.

You will need to set the MAC address of the shower head, and if the shower hyead cannot be found, the service and characteristics uid's must be located.
For that purpose, I used nRF connect on my Android phone. 
If the shower head cannot be found, let me know - and I will try to cook up a description on how to locate the uid's 

Sensors are only updated when water is flowing through the shower head (and ESPhome has sufficient time to connect and fetch data). When active, the sensors are updated every 5 seconds..

Sensor output (example):
![image](https://user-images.githubusercontent.com/8531428/211394034-c58902ec-b5b6-430a-81c2-8d3a6c9a9a08.png)

The shower head is this one: https://info.oras.com/en/oras-hydractiva-digital


