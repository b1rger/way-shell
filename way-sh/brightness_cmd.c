#include <stdbool.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#include "../lib/cmd_tree/include/cmd_tree.h"
#include "../src/services/ipc_service/ipc_commands.h"
#include "commands.h"

static int brightness_exec(void *ctx, uint8_t argc, char **argv) {
    printf(
        "Summary:\n"
        "\tChange the brightness of the display attached to the system.\n"
        "Commands:\n"
        "\tup   - increase the brightness a step (1000)\n"
        "\tdown - decrease the brightness a step (1000)\n");
    return 0;
};

// The root command for way-sh and is displayed when no other arguments are
// provided to the CLI.
//
// A short help blurb is presented along with a list of all available root level
// commands.
cmd_tree_node_t brightness_root = {.name = "brightness",
                                   .exec = brightness_exec};

static int brightness_up_exec(void *ctx, uint8_t argc, char **argv) {
    int ret = 0;
    way_sh_ctx *way_ctx = ctx;

    IPCMessageTrayOpen msg = {.header.type = IPC_CMD_BRIGHTNESS_UP};

    IPC_SEND_MSG(way_ctx, msg);

    if (ret == -1) {
        perror("[Error] Failed to send IPCBrightnessUp");
        return -1;
    }

    bool response = false;
    IPC_RECV_MSG(way_ctx, addr, &response);

    return response;
};

cmd_tree_node_t brightness_up_cmd = {.name = "up", .exec = brightness_up_exec};

static int brightness_down_exec(void *ctx, uint8_t argc, char **argv) {
    int ret = 0;
    way_sh_ctx *way_ctx = ctx;

    IPCMessageTrayOpen msg = {.header.type = IPC_CMD_BRIGHTNESS_DOWN};

    IPC_SEND_MSG(way_ctx, msg);

    if (ret == -1) {
        perror("[Error] Failed to send IPCBrightnessDown");
        return -1;
    }

    bool response = false;
    IPC_RECV_MSG(way_ctx, addr, &response);

    return response;
};

cmd_tree_node_t brightness_down_cmd = {.name = "down",
                                       .exec = brightness_down_exec};

cmd_tree_node_t *brightness_cmd() {
    cmd_tree_node_add_child(&brightness_root, &brightness_up_cmd);
    cmd_tree_node_add_child(&brightness_root, &brightness_down_cmd);

    return &brightness_root;
};