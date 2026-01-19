#!/bin/bash
linux_flavour=$(lsb_release -sd | sed -e 's/^"//' -e 's/"$//')
system=$(uname -m)
same_system=1

echo "System during compilation: $Linux_Flavour_"
echo "                           $System_"
echo "System now               : $linux_flavour"
echo "                           $system"

if [ ! "$linux_flavour" = "$Linux_Flavour_" ]; then
  echo "You try to run the software on a different"
  echo "linux flavour than it was compiled on."
  echo "The option was turned on to bypass the security issue, 
but the stability of the software cannot be guaranteed"
  same_system=1
fi
if [ ! "$system" = "$System_" ]; then
  echo "You try to run the software on a different"
  echo "linux architecture than it was compiled on."
  echo "The option was turned on to bypass the security issue, 
but the stability of the software cannot be guaranteed"
  same_system=1
fi

export same_system
