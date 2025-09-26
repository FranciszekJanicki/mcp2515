#include "mcp2515.h"
#include <string.h>

mcp2515_err_t mcp2515_initialize(mcp2515_t* mcp2515,
                                 mcp2515_config_t const* config,
                                 mcp2515_interface_t const* interface)
{
    if (mcp2515 == NULL || config == NULL || interface == NULL) {
        return MCP2515_ERR_NULL;
    }

    memset(mcp2515, 0, sizeof(*mcp2515));
    memcpy(&mcp2515->config, config, sizeof(*config));
    memcpy(&mcp2515->interface, interface, sizeof(*interface));

    return MCP2515_ERR_OK;
}

mcp2515_err_t mcp2515_deinitialize(mcp2515_t* mcp2515)
{
    if (mcp2515 == NULL) {
        return MCP2515_ERR_NULL;
    }

    memset(mcp2515, 0, sizeof(*mcp2515));

    return MCP2515_ERR_OK;
}
