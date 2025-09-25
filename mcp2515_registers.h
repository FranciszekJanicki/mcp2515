#ifndef MCP2515_MCP2515_REGISTERS_H
#define MCP2515_MCP2515_REGISTERS_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t abtf : 1;
    uint8_t mloa : 1;
    uint8_t txerr : 1;
    uint8_t txreq : 1;
    uint8_t txp1 : 1;
    uint8_t txp0 : 1;
} mcp2515_txbctrl_reg_t;

typedef struct {
    uint8_t b2rts : 1;
    uint8_t b1rts : 1;
    uint8_t b0rts : 1;
    uint9_t b2rtsm : 1;
    uint9_t b1rtsm : 1;
    uint9_t b0rtsm : 1;
} mcp2515_txrtsctrl_reg_t;

typedef struct {
    uint8_t sid : 11;
    uint8_t exide : 1;
    uint8_t eid : 18;
} mcp2515_txbid_reg_t;

typedef struct {
    uint8_t rtr : 1;
    uint8_t dlc : 4;
} mcp2515_txbdlc_reg_t;

typedef struct {
    uint8_t txbd[8];
} mcp2515_txbd_reg_t;

typedef struct {
    uint8_t rxm : 2;
    uint8_t rxrtr : 1;
    uint8_t bukt : 1;
    uint8_t bukt1 : 1;
    uint8_t filhit : 1;
} mcp2515_rxb0ctrl_reg_t;

typedef struct {
    uint8_t rxm : 2;
    uint8_t rxrtr : 1;
    uint8_t filhit : 3;
} mcp2515_rxb1ctrl_reg_t;

typedef struct {
    uint8_t b1bfs : 1;
    uint8_t b0bfs : 1;
    uint8_t b1bfe : 1;
    uint8_t b0bfe : 1;
    uint8_t b1bfm : 1;
    uint8_t b0bfm : 1;
} mcp2515_bfpctrl_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint8_t srr : 1;
    uint8_t ide : 1;
    uint16_t eid : 18;
} mcp2515_rxbid_reg_t;

typedef struct {
    uint8_t rtr : 1;
    uint8_t rb : 2;
    uint8_t dlc : 4;
} mcp2515_rxbdlc_reg_t;

typedef struct {
    uint8_t rxbd[8];
} mcp2515_rxbd_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint8_t exide : 1;
    uint16_t eid : 18;
} mcp2515_rxfid_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint16_t eid : 18;
} mcp2515_rxmid_reg_t;

#ifdef __cplusplus
}
#endif

#endif // MCP2515_MCP2515_REGISTERS_H