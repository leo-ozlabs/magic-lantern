// constants for 7D 1.2.3 slave

#define HIJACK_INSTR_BL_CSTART      0xFF010158
#define HIJACK_INSTR_BSS_END        0xFF011058
#define HIJACK_FIXBR_BZERO32        0xFF010FC0
#define HIJACK_FIXBR_CREATE_ITASK   0xFF011048
#define HIJACK_INSTR_MY_ITASK       0xFF011064
#define HIJACK_TASK_ADDR                0x1A18

// RESTARTSTART in Makefile at 0x87000