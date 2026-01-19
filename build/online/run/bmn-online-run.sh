#!/bin/bash

device_config="/data/yaopeng/bmnroot_Yaopeng/config/devices-config.json"

env_script="/data/yaopeng/bmnroot_Yaopeng/build/config.sh"

SAMPLER="bmn-online-sampler"
SAMPLER+=" --id BmnOnlineSampler1"
SAMPLER+=" --mq-config $device_config"
xterm -geometry 80x25+0+0 -hold -e ". $env_script; /data/yaopeng/bmnroot_Yaopeng/build/bin/$SAMPLER" &

PROCESSOR_1="bmn-online-processor"
PROCESSOR_1+=" --id BmnOnlineProcessor1"
PROCESSOR_1+=" --mq-config $device_config"
PROCESSOR_1+=" --config-key BmnOnlineProcessor"
xterm -geometry 80x25+500+0 -hold -e ". $env_script; /data/yaopeng/bmnroot_Yaopeng/build/bin/$PROCESSOR_1" &

# PROCESSOR_2="bmn-online-processor"
# PROCESSOR_2+=" --id BmnOnlineProcessor2"
# PROCESSOR_2+=" --mq-config $device_config"
# PROCESSOR_2+=" --config-key BmnOnlineProcessor"
# xterm -geometry 80x25+500+330 -hold -e /data/yaopeng/bmnroot_Yaopeng/build/bin/$PROCESSOR_2 &

# SINK="bmn-online-sink"
# SINK+=" --id BmnOnlineSink1"
# SINK+=" --mq-config $device_config"
# xterm -geometry 80x25+1000+0 -hold -e ". $env_script; /data/yaopeng/bmnroot_Yaopeng/build/bin/$SINK" &
