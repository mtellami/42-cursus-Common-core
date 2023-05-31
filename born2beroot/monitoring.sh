#!/bin/bash

wall "
	#Architecture	: $(uname -a)
	#CPU physical	: $(cat /proc/cpuinfo | grep processor | wc -l)
	#vCPU		: $(cat /proc/cpuinfo | grep processor | wc -l)
	#Memory Usage	: $(free -m | awk '$1 == "Mem:" {..........COMMAND..........}')
	#Disk Usage	: $(df --total -h | awk '$1 == "total" {printf("%d/%dGb (%.2f%%)", $3 * 1024, $2, ($3 * 100) / $2)}')
	#CPU load	: $(top -bn1 | grep Cpu | awk '{printf("%.2f%%", $2 + $4)}')
	#Last boot	: $(who -b | awk '{print $3 " " $4}')
	#LVM use	: $(lsblk |grep -c "lvm" | awk '{print $1 ? "yes" : "no"}')
	#Connexions TCP	: $(cat /proc/net/sockstat | awk '$1 == "TCP:" {print $3}') ESTABLISHED
	#User log	: $(users | wc -w)
	#Network	: IP $(hostname -I) "(" $(ip a | grep link/ether | awk '{print $2}') ")"
	#Sudo		: $(grep "COMMAND" /var/log/sudo/sudo.log | wc -l) cmd
"
