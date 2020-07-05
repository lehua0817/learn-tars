EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo http://192.168.226.131:3000/api/upload_and_publish -Fsuse=@ProxyServer.tgz -Fapplication=TMF -Fmodule_name=ProxyServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND curl http://192.168.226.131:3000/api/upload_and_publish?ticket= -Fsuse=@ProxyServer.tgz -Fapplication=TMF -Fmodule_name=ProxyServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo 
---------------------------------------------------------------------------)
