# pmutset
Test pmu function via c code

Rewrite the project https://github.com/gshanemiller/rdpmc, switch the c++ to c.
```
gcc test.c

#run as root 

sudo echo 2 > /sys/bus/event_source/devices/cpu/rdpmc

taskset -c 1 ./a.out
```
