#include <stdio.h>
#include <linux/input.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char **argv){
	struct input_event e;
	int fd;
	int ret;
	int type,code,value;
	ret=open("/dev/input/event3",O_RDONLY);
	if(ret<=0){
		fprintf(stderr,"fail to open \n");
		return -1;
	}
	while(1){
		ret=read(fd,&t,sizeof(t));
		if(ret<0){
			fprintf(stderr,"fail to read\n");
			return -1;
		}
		if(ret==sizeof(t)){
			fprintf(stderr,"val: %d, type: %d, code: %d\n");
		}
	}
}