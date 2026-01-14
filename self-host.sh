
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2" neo-c && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    cpu=$(sysctl -n hw.logicalcpu 2>/dev/null)
    if [ -z "$cpu" ]; then
        cpu=$(getconf _NPROCESSORS_ONLN 2>/dev/null)
    fi
    if [ -z "$cpu" ]; then cpu=1; fi
    jobs=$((cpu / 2))
    if [ "$jobs" -lt 1 ]; then jobs=1; fi
    make CFLAGS_OPT="-O2 -g" neo-c -j"$jobs" && sudo make install
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    make CFLAGS_OPT="-O2 -g" neo-c -j$(sysctl -n hw.logicalcpu) && sudo make install
else # Linux
    make CFLAGS_OPT="-O2 -g" neo-c -j$(($(nproc) / 2)) && sudo make install
fi
