#ifndef I2CCHARDEV_H
#define I2CCHARDEV_H

#include <linux/ioctl.h>

#define MAJOR_NUM 100
	
#define IOCTL_GET_GYROX _IOWR(MAJOR_NUM, 1, char *)

#define IOCTL_GET_GYROY _IOWR(MAJOR_NUM, 2, char *)

#define IOCTL_GET_GYROZ _IOWR(MAJOR_NUM, 3, char *)

#define IOCTL_GET_ACCELEROMETERX _IOWR(MAJOR_NUM, 4, char *)

#define IOCTL_GET_ACCELEROMETERY _IOWR(MAJOR_NUM, 5, char *)

#define IOCTL_GET_ACCELEROMETERZ _IOWR(MAJOR_NUM, 6, char *)

#define IOCTL_GET_COMPASSX _IOWR(MAJOR_NUM, 7, char *)

#define IOCTL_GET_COMPASSY _IOWR(MAJOR_NUM, 8, char *)

#define IOCTL_GET_COMPASSZ _IOWR(MAJOR_NUM, 9, char *)

#define IOCTL_GET_BAROMETER _IOWR(MAJOR_NUM, 10, char *)



#define DEVICE_FILE_NAME "/dev/imu_char"

#endif
