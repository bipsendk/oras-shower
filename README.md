# oras-shower
ESPhome code get grab data out of a Oras Hydractiva Digital shower head

I am not sure if the service and characteritics uid are the same for all shower heads.

You will need to set the MAC address of the shower head, and if the shower hyead cannot be found, the service and characteristics uid's must be located.
For that purpose, I used nRF connect on my Android phone. 
If the shower head cannot be found, let me know - and I will try to cook up a description on how to locate the uid's 

Sensors are only updated when watwer is flowing through the shower head (and ESPhome has sufficient time to connect and fetch data). When active, the sensors are updated every 5 seconds..
