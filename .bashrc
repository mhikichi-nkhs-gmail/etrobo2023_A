#--- begin autostart feature for HackSPi/RasPike -------
if [ -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.2" ]; then
    mv -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.2" "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.3"
fi
if [ -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.1" ]; then
    mv -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.1" "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.2"
fi
if [ -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log" ]; then
    mv -f "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log" "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log.1"
fi
"/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/hackspi" | tee "/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/.hackspi/autostart.log"
#--------- autostart feature for HackSPi/RasPike end ---
