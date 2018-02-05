#!/bin/bash
cd ~/git/netscripts/
WORKINGDIR="`pwd`"
echo $WORKINGDIR
find / -name $1 2>/dev/null
