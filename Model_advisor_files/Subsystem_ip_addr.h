/*
 * File Name:         check/ipcore/Subsystem_ip_v1_0/include/Subsystem_ip_addr.h
 * Description:       C Header File
 * Created:           2026-03-08 12:02:41
*/

#ifndef SUBSYSTEM_IP_H_
#define SUBSYSTEM_IP_H_

#define  IPCore_Reset_Subsystem_ip       0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_Subsystem_ip      0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Timestamp_Subsystem_ip   0x8  //contains unique IP timestamp (yymmddHHMM): 2603081202
#define  In1_Data_Subsystem_ip           0x100  //data register for Inport In1. Vector with 2 elements. Register is split across a total of 2 addresses, last address is 0x104.
#define  In1_Strobe_Subsystem_ip         0x108  //strobe register for port In1
#define  theta_Data_Subsystem_ip         0x10C  //data register for Inport theta
#define  In2_Data_Subsystem_ip           0x110  //data register for Inport In2. Vector with 2 elements. Register is split across a total of 2 addresses, last address is 0x114.
#define  In2_Strobe_Subsystem_ip         0x118  //strobe register for port In2
#define  In3_Data_Subsystem_ip           0x120  //data register for Inport In3. Vector with 2 elements. Register is split across a total of 2 addresses, last address is 0x124.
#define  In3_Strobe_Subsystem_ip         0x128  //strobe register for port In3
#define  In4_Data_Subsystem_ip           0x130  //data register for Inport In4. Vector with 2 elements. Register is split across a total of 2 addresses, last address is 0x134.
#define  In4_Strobe_Subsystem_ip         0x138  //strobe register for port In4
#define  y_Data_Subsystem_ip             0x140  //data register for Outport y. Vector with 2 elements. Register is split across a total of 2 addresses, last address is 0x144.
#define  y_Strobe_Subsystem_ip           0x148  //strobe register for port y

#endif /* SUBSYSTEM_IP_H_ */
