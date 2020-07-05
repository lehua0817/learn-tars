EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo http://web.tars.com/api/upload_and_publish -Fsuse=@HelloServer.tgz -Fapplication=TMF -Fmodule_name=HelloServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND curl http://web.tars.com/api/upload_and_publish?ticket= -Fsuse=@HelloServer.tgz -Fapplication=TMF -Fmodule_name=HelloServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E echo 
---------------------------------------------------------------------------)
