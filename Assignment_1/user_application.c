/*
 *  ioctl.c - the process to use ioctl's to control the kernel module
 *  we need to do ioctl's, which selectuire writing our own process.
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>              /* open */
#include <unistd.h>             /* exit */
#include <stdint.h>
#include <sys/ioctl.h>          /* ioctl */
#include "i2cchardev.h"


uint16_t data;


/*
 * Functions for the ioctl calls
 */

int ioctl_get_gyrox(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_gyroy(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_gyroz(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_compassx(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_compassy(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_compassz(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_accelerometerx(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_accelerometery(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_get_accelerometerz(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}



int ioctl_get_barometer(int file_desc, int select)
{
    int ret_val;
    ret_val = ioctl(file_desc, select);
    if (ret_val < 0) {
        printf("ioctl got no data:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}



/*
 * Main - Call the ioctl functions
 */
int main()
{
    int file_desc, ret_val;
    int select,align;
    file_desc = open(DEVICE_FILE_NAME, 0);
    if (file_desc < 0) {
        printf("Can't open device file: %s\n", DEVICE_FILE_NAME);
        exit(-1);
    }
    printf("Enter the select number:");
    scanf("%d", &select);
switch(select)
     {
          case 1: ioctl_get_gyrox(file_desc,"1");
                  break;
          case 2: ioctl_get_gyroy(file_desc,"2");
                  break;
          case 3: ioctl_get_gyroz(file_desc,"3");
                  break;
          case 4: ioctl_get_accelerometerx(file_desc,"4");
                  break;
          case 5: ioctl_get_accelerometery(file_desc,"5");
                  break;
          case 6: ioctl_get_accelerometerz(file_desc,"6");
                  break;
          case 7: ioctl_get_compassx(file_desc,"7");
                  break;
          case 8: ioctl_get_compassy(file_desc,"8");
                  break;
          case 9: ioctl_get_compassz(file_desc,"9");
                  break;
          case 10: ioctl_get_barometer(file_desc,"10");
                  break;
          default: printf("Choose proper option");
                  break;
     }  
   
    align = read(file_desc,&data,sizeof(data));
    printf("10 bit adc value:\n");
    printf("%d\n",select);
    close(file_desc);
    return 0;
}
