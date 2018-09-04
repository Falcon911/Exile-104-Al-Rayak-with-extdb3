@echo off
::IMPORTANT TO NAME IT SO WE CAN KILL IT
title servermonitor.bat
:start
C:\Windows\System32\tasklist /FI "IMAGENAME eq exile_arma3server_x64.exe" 2>NUL | C:\Windows\System32\find /I /N "exile_arma3server_x64.exe">NUL
if "%ERRORLEVEL%"=="0" goto loop
echo Server is not running, will be started now 
start "" /min /wait "D:\Steam\steamapps\common\Exile_server\Exile_restartserver_x64.bat" 
timeout 30
echo Server started succesfully
exit
goto started
:loop
cls
echo Server is already running, running monitoring loop
:started
::THE 80 REFERS TO SECONDS AND HOW OFTEN IT WILL CHECK,YOU CAN SET IT TO WHATEVER YOU WANT. I JUST DONT WANT MY SERVER DOWN FOR MUCH LONGER THAN THAT!
::New error fault kill, will check for err fault and clear it and hopefully restart, a little more promise but no guarantee :)
taskkill /f /im WerFault.exe /fi "WINDOWTITLE eq exile_arma3server"
C:\Windows\System32\timeout /t 30
C:\Windows\System32\tasklist /FI "IMAGENAME eq exile_arma3server_x64.exe" 2>NUL | C:\Windows\System32\find /I /N "exile_arma3server_x64.exe">NUL
if "%ERRORLEVEL%"=="0" goto loop
goto start