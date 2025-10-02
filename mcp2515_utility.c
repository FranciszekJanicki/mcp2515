#include "mcp2515_utility.h"

mcp2515_reg_address_t mcp2515_txb_num_to_offset(mcp2515_txb_num_t num)
{
    if (num < MCP2515_TXB_NUM_0) {
        num = MCP2515_TXB_NUM_0;
    }
    if (num > MCP2515_TXB_NUM_2) {
        num = MCP2515_TXB_NUM_2;
    }

    return num * 16;
}

mcp2515_reg_address_t mcp2515_rxb_num_to_offset(mcp2515_rxb_num_t num)
{
    if (num < MCP2515_RXB_NUM_0) {
        num = MCP2515_RXB_NUM_0;
    }
    if (num > MCP2515_RXB_NUM_1) {
        num = MCP2515_TXB_NUM_1;
    }

    return num * 16;
}

mcp2515_reg_address_t mcp2515_rxf_num_to_offset(mcp2515_rxf_num_t num)
{
    if (num < MCP2515_RXF_NUM_0) {
        num = MCP2515_RXF_NUM_0;
    }
    if (num > MCP2515_RXF_NUM_5) {
        num = MCP2515_RXF_NUM_5;
    }

    return num * 4;
}

mcp2515_reg_address_t mcp2515_rxm_num_to_offset(mcp2515_rxm_num_t num)
{
    if (num < MCP2515_RXM_NUM_0) {
        num = MCP2515_RXM_NUM_0;
    }
    if (num > MCP2515_RXM_NUM_1) {
        num = MCP2515_RXM_NUM_1;
    }

    return num * 4;
}
