@echo off
call C:\tools\BEC\bec.bat

:: Turn off all firewall rules
echo Disabling firewall rules for this server
netsh advfirewall firewall delete rule name="Exile"
timeout 2

:: RESTARTING THE ARMA 3 SERVER BE SURE TO EDIT THIS TO YOUR SERVER .EXE LOCATION -NOTE ALSO THIS IS WHERE YOU DEFINE WHERE YOU CONFIG.CFG IS
echo Starting ARMA 3 Server...
C:\Windows\System32\cmd.exe /C start "Arma3" "D:\Steam\steamapps\common\Exile_server\Exile_arma3server_x64.exe" "-mod=@CBA_A3;@ExileMod;@ALRyak;@AWM;@CUPCore;@CUP_Units;@CUP_units;@CUP_weapons;@CUPVic;@CUP_Weapons;@EBM;@KAWeapons;@NIArms;@RHSAFRF;@RHSGREF;@RHSSAF;@RHSUSAF;@Spearhead_pack;" "-servermod=@exileserver;@Towing;@Rappelling;@ESM;@Achilles;" -config=D:\Steam\steamapps\common\Exile_server\@ExileServer\config.cfg -port=2302 -profiles=Exile -cfg=D:\Steam\steamapps\common\Exile_server\@ExileServer\basic.cfg -name=Exile -autoinit -loadMissionToMemory -bandwidthAlg=2
echo ARMA 3 Server has started
timeout 60

:: THIS RUNS THE SERVER MONITOR FOR YOU SO YOU DON'T FORGET
echo Starting Server Monitor Loop
set ServerMonitorPath="D:\Steam\steamapps\common\Exile_server"
cd /d %ServerMonitorPath%
start "" "exile_servermonitor.bat"
echo Server Monitor has started. Have Fun
timeout 5

:: Turn On Firewall rule
timeout 15
echo Turning on Firewall Rule to allow server network traffic
netsh advfirewall firewall add rule name="Exile" dir=in action=allow program="D:\Steam\steamapps\common\Exile_server\Exile_arma3server_x64.exe" enable=yes
echo Firewall is on and players can join
timeout 5
Call D:\Steam\steamapps\common\Exile_server\timer.bat
@exit 