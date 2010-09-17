
@echo on
echo Running Loginscript GTB .....
@echo off
rem gtb

echo Adding Drives.....

net use g: /delete 1>NUL 2>NUL
net use g: \\dcalswgb02\%username% 1>NUL 2>NUL
echo G:

net use i: /delete 1>NUL 2>NUL
net use i: \\dcalswst02\alla 1>NUL 2>NUL
echo I:

net use k: /delete 1>NUL 2>NUL
net use k: \\dcalswgb01\jeeves 1>NUL 2>NUL
echo K:

net use l: /delete 1>NUL 2>NUL
net use l: \\dcalswgb02\alla 1>NUL 2>NUL
echo L:

net use m: /delete 1>NUL 2>NUL
net use m: \\alsw_sql2000\hands 1>NUL 2>NUL
echo M:

net use n: /delete 1>NUL 2>NUL
net use n: \\alsw_alliance\program 1>NUL 2>NUL
echo N:

net use o: /delete 1>NUL 2>NUL
net use o: \\dcalswst02\program 1>NUL 2>NUL
echo O:

net use p: /delete 1>NUL 2>NUL
net use p: \\dcalswgb01\program 1>NUL 2>NUL
echo P:

net use s: /delete 1>NUL 2>NUL


rem \\dcalswst02\netlogon\con2prt /c \\dcalswgb01\GBCOPY01
rem \\dcalswst02\netlogon\con2prt /c \\dcalswgb01\GBCOPY02
