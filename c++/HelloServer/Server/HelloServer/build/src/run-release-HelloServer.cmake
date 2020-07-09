EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E make_directory /home/tarsproto/TMF/HelloServer)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo cp -rf /usr/local/other/learn-tars/c++/HelloServer/Server/HelloServer/src/Hello.h /home/tarsproto/TMF/HelloServer)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E copy /usr/local/other/learn-tars/c++/HelloServer/Server/HelloServer/src/Hello.h /home/tarsproto/TMF/HelloServer)
