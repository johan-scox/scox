
@echo on
echo Running Loginscript GTB .....
@echo off
rem gtb

echo Adding Drives.....

net use g: /delete 1>NUL 2>NUL
net use g: \\dcalswgb02\%username% 1>NUL 2>NUL
echo G:


rem \\dcalswst02\netlogon\con2prt /c \\dcalswgb01\GBCOPY01
rem \\dcalswst02\netlogon\con2prt /c \\dcalswgb01\GBCOPY02
