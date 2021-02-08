#!/bin/sh
ifconfig -a | sed '/ether/!d' | sed 's/ether//g' | cut -c10-