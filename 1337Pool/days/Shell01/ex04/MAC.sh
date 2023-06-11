#!/bin/sh
ifconfig | grep "ether " | cut -f2 -d " "
