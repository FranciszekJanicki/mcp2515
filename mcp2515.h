#ifndef MCP2515_MCP2515_H
#define MCP2515_MCP2515_H

#include "mcp2515_commands.h"
#include "mcp2515_config.h"
#include "mcp2515_registers.h"
#include "mcp2515_utility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    mcp2515_config_t config;
    mcp2515_interface_t interface;
} mcp2515_t;

mcp2515_err_t mcp2515_initialize(mcp2515_t* mcp2515,
                                 mcp2515_config_t const* config,
                                 mcp2515_interface_t const* interface);
mcp2515_err_t mcp2515_deinitialize(mcp2515_t* mcp2515);

#ifdef __cplusplus
}
#endif

#endif // MCP2515_MCP2515_H