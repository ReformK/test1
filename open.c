#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

//进程
int main()
{
	//int open(const char *pathname, int flags);
	int fd = open ("1.txt", O_RDWR | O_CREAT);
	if (fd == -1)
	{
		//printf("open failed\n");
		perror("open failed");
		return -1;
	}
	
	//2 64 1024 ==== 
	//printf("%d %d %d\n", O_RDWR, O_CREAT,O_APPEND);
	printf("fd=%d\n", fd);
	
	int fd1 = open ("1.txt", O_RDWR | O_CREAT);
	if (fd1 == -1)
	{
		//printf("open failed\n");
		perror("open failed");
		return -1;
	}
	
	//2 64 1024 ==== 
	//printf("%d %d %d\n", O_RDWR, O_CREAT,O_APPEND);
	printf("fd1=%d\n", fd1);
	
	int fd2 = open ("1.txt", O_RDWR | O_CREAT);
	if (fd2 == -1)
	{
		//printf("open failed\n");
		perror("open failed");
		return -1;
	}
	
	//2 64 1024 ==== 
	//printf("%d %d %d\n", O_RDWR, O_CREAT,O_APPEND);
	printf("fd2=%d\n", fd2);
	
	
	return 0;
}