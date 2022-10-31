/*
 * W25N_driver.h
 *
 *  Created on: Oct. 30, 2022
 *      Author: Owner
 */

#ifndef HARDWARE_PERIPHERALS_INC_W25N_DRIVER_H_
#define HARDWARE_PERIPHERALS_INC_W25N_DRIVER_H_

#define OPCODE_DEVICE_RESET                0xFF
#define OPCODE_READ_JEDEC_ID               0x9F
#define OPCODE_READ_STATUS_REGISTER        0x0F
#define OPCODE_WRITE_STATUS_REGISTER       0x1F
#define OPCODE_WRITE_ENABLE                0x06
#define OPCODE_WRITE_DISABLE               0x04
#define OPCODE_BAD_BLOCK_MANAGEMENT        0xA1
#define OPCODE_READ_BBM_LUT                0xA5
#define OPCODE_LAST_ECC_FAILURE_PAGE_ADR   0xA9
#define OPCODE_BLOCK_ERASE_128KB           0xD8
#define OPCODE_RANDOM_LOAD_PROGRAM_DATA    0x84
#define OPCODE_PROGRAM_EXECUTE             0x10
#define OPCODE_PAGE_DATA_READ              0x13
#define OPCODE_READ_DATA                   0x03

#endif /* HARDWARE_PERIPHERALS_INC_W25N_DRIVER_H_ */
