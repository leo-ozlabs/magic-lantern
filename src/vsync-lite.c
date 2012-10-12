/** 
 * Vsync for LiveView - to be called from state-object.c
 * 
 **/

#include "dryos.h"

int vsync_last_msg = 0;
struct msg_queue * vsync_msg_queue = 0;

int mz_buf = 0;

void lv_vsync_signal()
{
    msg_queue_post(vsync_msg_queue, 1);
}

void lv_vsync()
{
    #if defined(CONFIG_5D3) || defined(CONFIG_5D2) || defined(CONFIG_60D)
    int msg;
    msg_queue_receive(vsync_msg_queue, &msg, 100);
    #else
    msleep(MIN_MSLEEP);
    #endif
}

static void vsync_init()
{
    vsync_msg_queue = msg_queue_create("vsync_mq", 1);
}

INIT_FUNC("vsync", vsync_init);