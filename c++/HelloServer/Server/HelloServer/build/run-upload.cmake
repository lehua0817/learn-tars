EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo upload all)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -P /usr/local/other/learn-tars/HelloServer/Server/HelloServer/build/src/run-upload-HelloServer.cmake)