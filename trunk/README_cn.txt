���:
--------------------------------

RoboPeak USB Connector����RoboPeak�Ŷ�(www.RoboPeak.com)�����Ĺ�AVR/C51��Ƭ��ʹ�õ�USB������ISP�������

RoboPeak USB Connector����AVR-Doper��Ŀ(http://www.obdev.at/products/vusb/avrdoper.html)������һ�����STK500��ISP������͸�ѹ�����(HVSP). 

USB��ͨѶ������ͨ��v-usb��(�Դ����ģ��ʵ�ֻ���AVR��Ƭ���ĵ���USBͨѶ)�� ��RoboPeak USB Connector�����ǽ�ʹ����һ��AVRоƬ��

RoboPeak USB Connector������Ϊ��AVR-Doper�ļ򻯰汾���������⣬����ʹ��Arduino-Lite�̼�����д��RoboPeak USB Connector�Ĺ̼������Ҳ���Arduino-Lite�ı���ϵͳ��


֧�ֵĲ���ϵͳ:
---------------------------------
������˵���κ��ڽ���HID usb��������Ĳ���ϵͳ���ɹ�����

��ΪPC�Ŀͻ��˳���(avrdude.exe)�Լ����������²���ϵͳ�Ϲ��������RoboPeak USB ConnectorӦ��Ҳ֧����Щ����ϵͳ:

<> Linux with libusb
<> Windows from the version WinXP
<> MacOS

�����Ѿ���֤�����µ�Windows����ϵͳ�汾:
<> Windows XP
<> Windows Vista, 32λ�� �� 64λ��
<> Windows 7, 32λ�� �� 64λ��


��α���̼�?
---------------------------------

RoboPeak USB Connector��Ҫʹ��Arduino-Lite���������hex�ļ�����ο���firmwareĿ¼�µ��ļ�(���ȶ���!.txt)�˽���ϸ���̡�

�ڹ̼�������ɺ���ʹ��make burnall�����һ���µ�RP USB Connector���б����¼���ö�������ѱ��������hex�ĵ��Լ�BootloaderHID��¼��оƬ��������ȷ����˿λ��

�������Ӳ��?
---------------------------------

��hardwareĿ¼�°�����RoboPeak USB Connector��ԭ��ͼ��PCB�Ĳ����ĵ����ý��ᷢ�����������Ȳο�Ŀ¼referece_layout/�µ��ĵ���
����, AVR-DoperӦ������ֱ��ʹ�����ǵĹ̼���


��θ���������RoboPeak USB Connector���?
---------------------------------
�����ʹ��Arduino-Lite����make burnall��������ɶ���������RoboPeak USB Connector�ı�̡��������ѹ̼�hex�ļ��Լ�BootLoaderHID�Ĺ̼����ص�Ŀ��AVRоƬ������Ŀ��оƬ����˿Ҳ���Զ��õ����á�

Ҳ�����˹���RoboPeak USB Connector���б�̣�ʹ�����µ���˿���ã�

// ������Atmega88
LFUSE=CE
HFUSE=DD
EFUSE=00

��Ҳ��Ҫȥ��¼BootloaderHID �̼�������hex�ļ�������Arduino-Lite��Ŀ���ҵ�( <Arduino-Lite/src/bootloaders/hidbootloader/pre-compiled/mega88_12M.hex)

���ʹ��?
---------------------------------
�����Բο�AVR-doper��Ŀ��վ�˽�����һ��ʹ�ù���:
  http://www.obdev.at/products/vusb/avrdoper.html

�����Ƽ������Arduino-Lite��ʹ��RoboPeak USB Connector����ΪArduino-Lite�ı���ϵͳ�ڽ��˶�RoboPeak USB Connector(AVR-Doper)��ʹ��֧�֡�

ʹ��Arduino-Lite��ʱ�򣬿�����"make burn"�������ɶ�AVRоƬ���б����¼��

����Բο�һ��ʹ��Arduino-Liteͨ��RoboPeak USB Connector��¼�������Ƶ��Ƭ:
  http://www.tudou.com/programs/view/Den9uh3HTHE/


���ұ��?
---------------------------------
RoboPeak USB Connector֧�����ұ���������ڹ̼��а�����һ����������USB Bootloader��BootloadHID (http://www.obdev.at/products/vusb/bootloadhid.html).

��ĳЩ����£���������Ҫ����RoboPeak USB Connector�Ĺ̼�����ȴֻ��һ��RoboPeak USB Connector�豸����ʱ�����ұ�������ͺ����ô���

�밴�����²���������ұ��:
<> ����λ��P_ADC�����ϵ�ADC0(PC1)��VCC���š�
<> ��RoboPeak USB Connector������PC��
<> ��ʱ������ϵͳӦ������ʾ��һ����ΪHIDBoot���豸�����ˡ�
<> ����RoboPeak USB Connector�Ĺ̼�����Ŀ¼, �������ڱ����bash shell�ն�, ���벢ִ�� 
   make usbupload


�ο���Դ:
---------------------------------
����Ŀ��ҳ:             http://code.google.com/p/rp-usb-connector/
Arduino-Lite ��Ŀ��ҳ:  http://code.google.com/p/arduino-lite/
RoboPeak �Ŷ�:          http://www.RoboPeak.com
AVR-Doper:              http://www.obdev.at/products/vusb/avrdoper.html
