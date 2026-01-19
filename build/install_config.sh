#!/bin/bash

export Linux_Flavour_="Ubuntu 20.04.6 LTS"
export System_="x86_64"
. /usr/local/check_system.sh
if [ $same_system -eq 1 ]; then
	export SIMPATH="/home/tools/FairSoft/fairsoft/install"
	export ROOTSYS="/home/tools/FairSoft/fairsoft/install"
	export FAIRROOTPATH="/home/tools/FairSoft/fairroot/install"
	if (true); then
		export GEANT4_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
		export GEANT4_INCLUDE_DIR="/home/tools/FairSoft/fairsoft/install/include/Geant4:/home/tools/FairSoft/fairsoft/install/transport/geant4/source/interfaces/common/include:/home/tools/FairSoft/fairsoft/install/transport/geant4/physics_lists/hadronic/Packaging/include:/home/tools/FairSoft/fairsoft/install/transport/geant4/physics_lists/hadronic/QGSP/include"
		export GEANT4VMC_INCLUDE_DIR="/home/tools/FairSoft/fairsoft/install/include/geant4vmc"
		export GEANT4VMC_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
		export GEANT4VMC_MACRO_DIR="/home/tools/FairSoft/fairsoft/install/share/Geant4VMC-6.0.1/examples/macro"
		export CLHEP_INCLUDE_DIR="/home/tools/FairSoft/fairsoft/install/include"
		export CLHEP_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
		export CLHEP_BASE_DIR="/home/tools/FairSoft/fairsoft/install"
		export PLUTO_LIBRARY_DIR="PLUTO_LIBRARY_DIR-NOTFOUND"
		export PLUTO_INCLUDE_DIR="PLUTO_INCLUDE_DIR-NOTFOUND"
		export PYTHIA6_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
		export G3SYS="/home/tools/FairSoft/fairsoft/install/lib/Geant3-4.0.0"
		export Geant3_INCLUDE_DIRS="/home/tools/FairSoft/fairsoft/install/include/TGeant3"
		export Geant3_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
		export Geant3_LIBRARIES="geant321"
		export USE_VGM="1"
		export PYTHIA8DATA="/home/tools/FairSoft/fairsoft/install/share/pythia8/xmldoc"
		export CLASSPATH=""

		export G4LEDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4EMLOW8.0"
		export G4LEVELGAMMADATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/PhotonEvaporation5.7"
		export G4NeutronHPCrossSections="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4NDL4.6"
		export G4NEUTRONHPDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4NDL4.6"
		export G4NEUTRONXSDATA="G4NEUTRONXSDATA-NOTFOUND"
		export G4PARTICLEXSDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4PARTICLEXS4.0"
		export G4PIIDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4PII1.3"
		export G4RADIOACTIVEDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/RadioactiveDecay5.6"
		export G4REALSURFACEDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/RealSurface2.2"
		export G4SAIDXSDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4SAIDDATA2.0"
		export G4ENSDFSTATEDATA="/home/tools/FairSoft/fairsoft/install/share/Geant4-11.0.1/data/G4ENSDFSTATE2.3"
	fi
	export ROOT_LIBRARY_DIR="/home/tools/FairSoft/fairsoft/install/lib"
	export ROOT_LIBRARIES="-L/home/tools/FairSoft/fairsoft/install/lib -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -Wl,-rpath,/home/tools/FairSoft/fairsoft/install/lib -pthread -lm -ldl -rdynamic"
	export ROOT_INCLUDE_DIR="/home/tools/FairSoft/fairsoft/install/include/root:/home/tools/FairSoft/fairsoft/install/include/vmc"
	export ROOT_INCLUDE_PATH=":/usr/local/include:/home/tools/FairSoft/fairroot/install/include"
	export VMCWORKDIR="/usr/local"
	export FAIRLIBDIR="/usr/local/lib"
	export PYTHONPATH="/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib/Geant4:/home/tools/FairSoft/fairsoft/install/lib/g4py:$PYTHONPATH:$PYTHONPATH"
	case $1 in
		-a | --append )
			export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:""
			export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:"/usr/local/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/data/yaopeng/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/BmnRoot/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu"
			export PATH=$PATH:"/usr/local/bin:/home/tools/FairSoft/fairsoft/install/bin:/data/yaopeng/bmnroot_Yaopeng/build/bin:$PATH"
			;;
		-p | --prepend )
			export DYLD_LIBRARY_PATH="":$DYLD_LIBRARY_PATH
			export LD_LIBRARY_PATH="/usr/local/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/data/yaopeng/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/BmnRoot/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu":$LD_LIBRARY_PATH
			export PATH="/usr/local/bin:/home/tools/FairSoft/fairsoft/install/bin:/data/yaopeng/bmnroot_Yaopeng/build/bin:$PATH":$PATH
			;;
		* )
			export DYLD_LIBRARY_PATH=""
			export LD_LIBRARY_PATH="/usr/local/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/data/yaopeng/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root:/home/tools/BmnRoot/bmnroot/build/lib:/home/tools/FairSoft/fairroot/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairsoft/install/lib/root::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu::/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu:/home/tools/FairSoft/fairsoft/install/lib:/usr/lib/x86_64-linux-gnu"
			export PATH="/usr/local/bin:/home/tools/FairSoft/fairsoft/install/bin:/data/yaopeng/bmnroot_Yaopeng/build/bin:$PATH"
			;;
	esac
fi
