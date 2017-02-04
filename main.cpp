#include <set>
#include <stdio.h>
#include <tchar.h>
#include <wtypes.h>


#include "UsbDevice.h"

int main(int argc, char **argv) {
	UsbDevice::OpenDevice(0x1038, 0x1600, 0x0000); //ss game sense
    UsbDevice::OpenDevice(0x1770, 0xFF00, 0);//msi kb

    UsbDevice::OpenDevice(0x1532, 0x0C00, 0);//firefly
    UsbDevice::OpenDevice(0x1532, 0x005C, 0);//death adder elite
    UsbDevice::OpenDevice(0x1532, 0x0210, 0);//pro2016 kbd
	
    UsbDevice::OpenDevice(0x1532, 0x0C00, 1);//firefly (this is the only one that actually opened)
    UsbDevice::OpenDevice(0x1532, 0x005C, 1);
    UsbDevice::OpenDevice(0x1532, 0x0210, 1);

    UsbDevice::OpenDevice(0x1532, 0x0C00, 2);
    UsbDevice::OpenDevice(0x1532, 0x005C, 2);
    UsbDevice::OpenDevice(0x1532, 0x0210, 2);

    UsbDevice::OpenDevice(0x1532, 0x0C00, 3);
    UsbDevice::OpenDevice(0x1532, 0x005C, 3);
    UsbDevice::OpenDevice(0x1532, 0x0210, 3);

	printf("Press enter to continue...");
	getc(stdin);
	printf("\n");

	return 0;
}
