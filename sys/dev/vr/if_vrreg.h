/*
 * Copyright (c) 1997, 1998
 *	Bill Paul <wpaul@ctr.columbia.edu>.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Bill Paul.
 * 4. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Bill Paul AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Bill Paul OR THE VOICES IN HIS HEAD
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 */

/*
 * Rhine register definitions.
 */

#define VR_PAR0			0x00	/* node address 0 to 4 */
#define VR_PAR1			0x04	/* node address 2 to 6 */
#define VR_RXCFG		0x06	/* receiver config register */
#define VR_TXCFG		0x07	/* transmit config register */
#define VR_COMMAND		0x08	/* command register */
#define VR_ISR			0x0C	/* interrupt/status register */
#define VR_IMR			0x0E	/* interrupt mask register */
#define VR_MAR0			0x10	/* multicast hash 0 */
#define VR_MAR1			0x14	/* multicast hash 1 */
#define VR_RXADDR		0x18	/* rx descriptor list start addr */
#define VR_TXADDR		0x1C	/* tx descriptor list start addr */
#define VR_CURRXDESC0		0x20
#define VR_CURRXDESC1		0x24
#define VR_CURRXDESC2		0x28
#define VR_CURRXDESC3		0x2C
#define VR_NEXTRXDESC0		0x30
#define VR_NEXTRXDESC1		0x34
#define VR_NEXTRXDESC2		0x38
#define VR_NEXTRXDESC3		0x3C
#define VR_CURTXDESC0		0x40
#define VR_CURTXDESC1		0x44
#define VR_CURTXDESC2		0x48
#define VR_CURTXDESC3		0x4C
#define VR_NEXTTXDESC0		0x50
#define VR_NEXTTXDESC1		0x54
#define VR_NEXTTXDESC2		0x58
#define VR_NEXTTXDESC3		0x5C
#define VR_CURRXDMA		0x60	/* current RX DMA address */
#define VR_CURTXDMA		0x64	/* current TX DMA address */
#define VR_TALLYCNT		0x68	/* tally counter test register */
#define VR_PHYADDR		0x6C
#define VR_MIISTAT		0x6D
#define VR_BCR0			0x6E
#define VR_BCR1			0x6F
#define VR_MIICMD		0x70
#define VR_MIIADDR		0x71
#define VR_MIIDATA		0x72
#define VR_EECSR		0x74
#define VR_TEST			0x75
#define VR_GPIO			0x76
#define VR_CONFIG		0x78
#define VR_MPA_CNT		0x7C
#define VR_CRC_CNT		0x7E

/*
 * RX config bits.
 */
#define VR_RXCFG_RX_ERRPKTS	0x01
#define VR_RXCFG_RX_RUNT	0x02
#define VR_RXCFG_RX_MULTI	0x04
#define VR_RXCFG_RX_BROAD	0x08
#define VR_RXCFG_RX_PROMISC	0x10
#define VR_RXCFG_RX_THRESH	0xE0

#define VR_RXTHRESH_32BYTES	0x00
#define VR_RXTHRESH_64BYTES	0x20
#define VR_RXTHRESH_128BYTES	0x40
#define VR_RXTHRESH_256BYTES	0x60
#define VR_RXTHRESH_512BYTES	0x80
#define VR_RXTHRESH_768BYTES	0xA0
#define VR_RXTHRESH_1024BYTES	0xC0
#define VR_RXTHRESH_STORENFWD	0xE0

/*
 * TX config bits.
 */
#define VR_TXCFG_RSVD0		0x01
#define VR_TXCFG_LOOPBKMODE	0x06
#define VR_TXCFG_BACKOFF	0x08
#define VR_TXCFG_RSVD1		0x10
#define VR_TXCFG_TX_THRESH	0xE0

#define VR_TXTHRESH_32BYTES	0x00
#define VR_TXTHRESH_64BYTES	0x20
#define VR_TXTHRESH_128BYTES	0x40
#define VR_TXTHRESH_256BYTES	0x60
#define VR_TXTHRESH_512BYTES	0x80
#define VR_TXTHRESH_768BYTES	0xA0
#define VR_TXTHRESH_1024BYTES	0xC0
#define VR_TXTHRESH_STORENFWD	0xE0

/*
 * Command register bits.
 */
#define VR_CMD_INIT		0x0001
#define VR_CMD_START		0x0002
#define VR_CMD_STOP		0x0004
#define VR_CMD_RX_ON		0x0008
#define VR_CMD_TX_ON		0x0010
#define	VR_CMD_TX_GO		0x0020
#define VR_CMD_RX_GO		0x0040
#define VR_CMD_RSVD		0x0080
#define VR_CMD_RX_EARLY		0x0100
#define VR_CMD_TX_EARLY		0x0200
#define VR_CMD_FULLDUPLEX	0x0400
#define VR_CMD_TX_NOPOLL	0x0800

#define VR_CMD_RESET		0x8000

/*
 * Interrupt status bits.
 */
#define VR_ISR_RX_OK		0x0001	/* packet rx ok */
#define VR_ISR_TX_OK		0x0002	/* packet tx ok */
#define VR_ISR_RX_ERR		0x0004	/* packet rx with err */
#define VR_ISR_TX_ABRT		0x0008	/* tx aborted due to excess colls */
#define VR_ISR_TX_UNDERRUN	0x0010	/* tx buffer underflow */
#define VR_ISR_RX_NOBUF		0x0020	/* no rx buffer available */
#define VR_ISR_BUSERR		0x0040	/* PCI bus error */
#define VR_ISR_STATSOFLOW	0x0080	/* stats counter oflow */
#define VR_ISR_RX_EARLY		0x0100	/* rx early */
#define VR_ISR_LINKSTAT		0x0200	/* MII status change */
#define VR_ISR_RX_OFLOW		0x0400	/* rx FIFO overflow */
#define VR_ISR_RX_DROPPED	0x0800
#define VR_ISR_RX_NOBUF2	0x1000
#define VR_ISR_TX_ABRT2		0x2000
#define VR_ISR_LINKSTAT2	0x4000
#define VR_ISR_MAGICPACKET	0x8000

/*
 * Interrupt mask bits.
 */
#define VR_IMR_RX_OK		0x0001	/* packet rx ok */
#define VR_IMR_TX_OK		0x0002	/* packet tx ok */
#define VR_IMR_RX_ERR		0x0004	/* packet rx with err */
#define VR_IMR_TX_ABRT		0x0008	/* tx aborted due to excess colls */
#define VR_IMR_TX_UNDERRUN	0x0010	/* tx buffer underflow */
#define VR_IMR_RX_NOBUF		0x0020	/* no rx buffer available */
#define VR_IMR_BUSERR		0x0040	/* PCI bus error */
#define VR_IMR_STATSOFLOW	0x0080	/* stats counter oflow */
#define VR_IMR_RX_EARLY		0x0100	/* rx early */
#define VR_IMR_LINKSTAT		0x0200	/* MII status change */
#define VR_IMR_RX_OFLOW		0x0400	/* rx FIFO overflow */
#define VR_IMR_RX_DROPPED	0x0800
#define VR_IMR_RX_NOBUF2	0x1000
#define VR_IMR_TX_ABRT2		0x2000
#define VR_IMR_LINKSTAT2	0x4000
#define VR_IMR_MAGICPACKET	0x8000

#define VR_INTRS							\
	(VR_IMR_RX_OK|VR_IMR_TX_OK|VR_IMR_RX_NOBUF|			\
	VR_IMR_TX_ABRT|VR_IMR_TX_UNDERRUN|VR_IMR_BUSERR|		\
	VR_IMR_RX_ERR|VR_ISR_RX_DROPPED)

/*
 * MII status register.
 */

#define VR_MIISTAT_SPEED	0x01
#define VR_MIISTAT_LINKFAULT	0x02
#define VR_MIISTAT_MGTREADERR	0x04
#define VR_MIISTAT_MIIERR	0x08
#define VR_MIISTAT_PHYOPT	0x10
#define VR_MIISTAT_MDC_SPEED	0x20
#define VR_MIISTAT_RSVD		0x40
#define VR_MIISTAT_GPIO1POLL	0x80

/*
 * MII command register bits.
 */
#define VR_MIICMD_CLK		0x01
#define VR_MIICMD_DATAOUT	0x02
#define VR_MIICMD_DATAIN	0x04
#define VR_MIICMD_DIR		0x08
#define VR_MIICMD_DIRECTPGM	0x10
#define VR_MIICMD_WRITE_ENB	0x20
#define VR_MIICMD_READ_ENB	0x40
#define VR_MIICMD_AUTOPOLL	0x80

/*
 * EEPROM control bits.
 */
#define VR_EECSR_DATAIN		0x01	/* data out */
#define VR_EECSR_DATAOUT	0x02	/* data in */
#define VR_EECSR_CLK		0x04	/* clock */
#define VR_EECSR_CS		0x08	/* chip select */
#define VR_EECSR_DPM		0x10
#define VR_EECSR_LOAD		0x20
#define VR_EECSR_EMBP		0x40
#define VR_EECSR_EEPR		0x80

#define VR_EECMD_WRITE		0x140
#define VR_EECMD_READ		0x180
#define VR_EECMD_ERASE		0x1c0

/*
 * Test register bits.
 */
#define VR_TEST_TEST0		0x01
#define VR_TEST_TEST1		0x02
#define VR_TEST_TEST2		0x04
#define VR_TEST_TSTUD		0x08
#define VR_TEST_TSTOV		0x10
#define VR_TEST_BKOFF		0x20
#define VR_TEST_FCOL		0x40
#define VR_TEST_HBDES		0x80

/*
 * Config register bits.
 */
#define VR_CFG_GPIO2OUTENB	0x00000001
#define VR_CFG_GPIO2OUT		0x00000002	/* gen. purp. pin */
#define VR_CFG_GPIO2IN		0x00000004	/* gen. purp. pin */
#define VR_CFG_AUTOOPT		0x00000008	/* enable rx/tx autopoll */
#define VR_CFG_MIIOPT		0x00000010
#define VR_CFG_MMIENB		0x00000020	/* memory mapped mode enb */
#define VR_CFG_JUMPER		0x00000040	/* PHY and oper. mode select */
#define VR_CFG_EELOAD		0x00000080	/* enable EEPROM programming */
#define VR_CFG_LATMENB		0x00000100	/* larency timer effect enb. */
#define VR_CFG_MRREADWAIT	0x00000200
#define VR_CFG_MRWRITEWAIT	0x00000400
#define VR_CFG_RX_ARB		0x00000800
#define VR_CFG_TX_ARB		0x00001000
#define VR_CFG_READMULTI	0x00002000
#define VR_CFG_TX_PACE		0x00004000
#define VR_CFG_TX_QDIS		0x00008000
#define VR_CFG_ROMSEL0		0x00010000
#define VR_CFG_ROMSEL1		0x00020000
#define VR_CFG_ROMSEL2		0x00040000
#define VR_CFG_ROMTIMESEL	0x00080000
#define VR_CFG_RSVD0		0x00100000
#define VR_CFG_ROMDLY		0x00200000
#define VR_CFG_ROMOPT		0x00400000
#define VR_CFG_RSVD1		0x00800000
#define VR_CFG_BACKOFFOPT	0x01000000
#define VR_CFG_BACKOFFMOD	0x02000000
#define VR_CFG_CAPEFFECT	0x04000000
#define VR_CFG_BACKOFFRAND	0x08000000
#define VR_CFG_MAGICKPACKET	0x10000000
#define VR_CFG_PCIREADLINE	0x20000000
#define VR_CFG_DIAG		0x40000000
#define VR_CFG_GPIOEN		0x80000000

/*
 * Rhine TX/RX list structure.
 */

struct vr_desc {
	u_int32_t		vr_status;
	u_int32_t		vr_ctl;
	u_int32_t		vr_ptr1;
	u_int32_t		vr_ptr2;
};

#define vr_data		vr_ptr1
#define vr_next		vr_ptr2


#define VR_RXSTAT_RXERR		0x00000001
#define VR_RXSTAT_CRCERR	0x00000002
#define VR_RXSTAT_FRAMEALIGNERR	0x00000004
#define VR_RXSTAT_FIFOOFLOW	0x00000008
#define VR_RXSTAT_GIANT		0x00000010
#define VR_RXSTAT_RUNT		0x00000020
#define VR_RXSTAT_BUSERR	0x00000040
#define VR_RXSTAT_BUFFERR	0x00000080
#define VR_RXSTAT_LASTFRAG	0x00000100
#define VR_RXSTAT_FIRSTFRAG	0x00000200
#define VR_RXSTAT_RLINK		0x00000400
#define VR_RXSTAT_RX_PHYS	0x00000800
#define VR_RXSTAT_RX_BROAD	0x00001000
#define VR_RXSTAT_RX_MULTI	0x00002000
#define VR_RXSTAT_RX_OK		0x00004000
#define VR_RXSTAT_RXLEN		0x07FF0000
#define VR_RXSTAT_RXLEN_EXT	0x78000000
#define VR_RXSTAT_OWN		0x80000000

#define VR_RXBYTES(x)		((x & VR_RXSTAT_RXLEN) >> 16)
#define VR_RXSTAT (VR_RXSTAT_FIRSTFRAG|VR_RXSTAT_LASTFRAG|VR_RXSTAT_OWN)

#define VR_RXCTL_BUFLEN		0x000007FF
#define VR_RXCTL_BUFLEN_EXT	0x00007800
#define VR_RXCTL_CHAIN		0x00008000
#define VR_RXCTL_RX_INTR	0x00800000

#define VR_RXCTL (VR_RXCTL_CHAIN|VR_RXCTL_RX_INTR)

#define VR_TXSTAT_DEFER		0x00000001
#define VR_TXSTAT_UNDERRUN	0x00000002
#define VR_TXSTAT_COLLCNT	0x00000078
#define VR_TXSTAT_SQE		0x00000080
#define VR_TXSTAT_ABRT		0x00000100
#define VR_TXSTAT_LATECOLL	0x00000200
#define VR_TXSTAT_CARRLOST	0x00000400
#define VR_TXSTAT_BUSERR	0x00002000
#define VR_TXSTAT_JABTIMEO	0x00004000
#define VR_TXSTAT_ERRSUM	0x00008000
#define VR_TXSTAT_OWN		0x80000000

#define VR_TXCTL_BUFLEN		0x000007FF
#define VR_TXCTL_BUFLEN_EXT	0x00007800
#define VR_TXCTL_TLINK		0x00008000
#define VR_TXCTL_FIRSTFRAG	0x00200000
#define VR_TXCTL_LASTFRAG	0x00400000
#define VR_TXCTL_FINT		0x00800000


#define VR_MAXFRAGS		16
#define VR_RX_LIST_CNT		64
#define VR_TX_LIST_CNT		128
#define VR_MIN_FRAMELEN		60
#define VR_FRAMELEN		1536
#define VR_RXLEN		1520

#define VR_TXOWN(x)		x->vr_ptr->vr_status

struct vr_list_data {
	struct vr_desc		vr_rx_list[VR_RX_LIST_CNT];
	struct vr_desc		vr_tx_list[VR_TX_LIST_CNT];
};

struct vr_chain {
	struct vr_desc		*vr_ptr;
	struct mbuf		*vr_mbuf;
	struct vr_chain		*vr_nextdesc;
};

struct vr_chain_onefrag {
	struct vr_desc		*vr_ptr;
	struct mbuf		*vr_mbuf;
	struct vr_chain_onefrag	*vr_nextdesc;
};

struct vr_chain_data {
	struct vr_chain_onefrag	vr_rx_chain[VR_RX_LIST_CNT];
	struct vr_chain		vr_tx_chain[VR_TX_LIST_CNT];

	struct vr_chain_onefrag	*vr_rx_head;

	struct vr_chain		*vr_tx_head;
	struct vr_chain		*vr_tx_tail;
	struct vr_chain		*vr_tx_free;
};

struct vr_type {
	u_int16_t		vr_vid;
	u_int16_t		vr_did;
	char			*vr_name;
};

struct vr_mii_frame {
	u_int8_t		mii_stdelim;
	u_int8_t		mii_opcode;
	u_int8_t		mii_phyaddr;
	u_int8_t		mii_regaddr;
	u_int8_t		mii_turnaround;
	u_int16_t		mii_data;
};

/*
 * MII constants
 */
#define VR_MII_STARTDELIM	0x01
#define VR_MII_READOP		0x02
#define VR_MII_WRITEOP		0x01
#define VR_MII_TURNAROUND	0x02

#define VR_FLAG_FORCEDELAY	1
#define VR_FLAG_SCHEDDELAY	2
#define VR_FLAG_DELAYTIMEO	3	

struct vr_softc {
	struct arpcom		arpcom;		/* interface info */
	struct ifmedia		ifmedia;	/* media info */
	bus_space_handle_t	vr_bhandle;	/* bus space handle */
	bus_space_tag_t		vr_btag;	/* bus space tag */
	struct resource		*vr_res;
	struct resource		*vr_irq;
	void			*vr_intrhand;
	struct vr_type		*vr_info;	/* Rhine adapter info */
	struct vr_type		*vr_pinfo;	/* phy info */
	u_int8_t		vr_unit;	/* interface number */
	u_int8_t		vr_type;
	u_int8_t		vr_phy_addr;	/* PHY address */
	u_int8_t		vr_tx_pend;	/* TX pending */
	u_int8_t		vr_want_auto;
	u_int8_t		vr_autoneg;
	caddr_t			vr_ldata_ptr;
	struct vr_list_data	*vr_ldata;
	struct vr_chain_data	vr_cdata;
};

/*
 * register space access macros
 */
#define CSR_WRITE_4(sc, reg, val)	\
	bus_space_write_4(sc->vr_btag, sc->vr_bhandle, reg, val)
#define CSR_WRITE_2(sc, reg, val)	\
	bus_space_write_2(sc->vr_btag, sc->vr_bhandle, reg, val)
#define CSR_WRITE_1(sc, reg, val)	\
	bus_space_write_1(sc->vr_btag, sc->vr_bhandle, reg, val)

#define CSR_READ_4(sc, reg)		\
	bus_space_read_4(sc->vr_btag, sc->vr_bhandle, reg)
#define CSR_READ_2(sc, reg)		\
	bus_space_read_2(sc->vr_btag, sc->vr_bhandle, reg)
#define CSR_READ_1(sc, reg)		\
	bus_space_read_1(sc->vr_btag, sc->vr_bhandle, reg)

#define VR_TIMEOUT		1000
#define ETHER_ALIGN		2

/*
 * General constants that are fun to know.
 *
 * VIA vendor ID
 */
#define	VIA_VENDORID			0x1106

/*
 * VIA Rhine device IDs.
 */
#define	VIA_DEVICEID_RHINE		0x3043
#define VIA_DEVICEID_RHINE_II		0x6100

/*
 * Delta Electronics device ID.
 */
#define DELTA_VENDORID			0x1500

/*
 * Delta device IDs.
 */
#define DELTA_DEVICEID_RHINE_II		0x1320

/*
 * Addtron vendor ID.
 */
#define ADDTRON_VENDORID		0x4033

/*
 * Addtron device IDs.
 */
#define ADDTRON_DEVICEID_RHINE_II	0x1320


/*
 * Texas Instruments PHY identifiers
 */
#define TI_PHY_VENDORID		0x4000
#define TI_PHY_10BT		0x501F
#define TI_PHY_100VGPMI		0x502F

/*
 * These ID values are for the NS DP83840A 10/100 PHY
 */
#define NS_PHY_VENDORID		0x2000
#define NS_PHY_83840A		0x5C0F

/*
 * Level 1 10/100 PHY
 */
#define LEVEL1_PHY_VENDORID	0x7810
#define LEVEL1_PHY_LXT970	0x000F

/*
 * Intel 82555 10/100 PHY
 */
#define INTEL_PHY_VENDORID	0x0A28
#define INTEL_PHY_82555		0x015F

/*
 * SEEQ 80220 10/100 PHY
 */
#define SEEQ_PHY_VENDORID	0x0016
#define SEEQ_PHY_80220		0xF83F


/*
 * PCI low memory base and low I/O base register, and
 * other PCI registers.
 */

#define VR_PCI_VENDOR_ID	0x00
#define VR_PCI_DEVICE_ID	0x02
#define VR_PCI_COMMAND		0x04
#define VR_PCI_STATUS		0x06
#define VR_PCI_CLASSCODE	0x09
#define VR_PCI_LATENCY_TIMER	0x0D
#define VR_PCI_HEADER_TYPE	0x0E
#define VR_PCI_LOIO		0x10
#define VR_PCI_LOMEM		0x14
#define VR_PCI_BIOSROM		0x30
#define VR_PCI_INTLINE		0x3C
#define VR_PCI_INTPIN		0x3D
#define VR_PCI_MINGNT		0x3E
#define VR_PCI_MINLAT		0x0F
#define VR_PCI_RESETOPT		0x48
#define VR_PCI_EEPROM_DATA	0x4C

/* power management registers */
#define VR_PCI_CAPID		0xDC /* 8 bits */
#define VR_PCI_NEXTPTR		0xDD /* 8 bits */
#define VR_PCI_PWRMGMTCAP	0xDE /* 16 bits */
#define VR_PCI_PWRMGMTCTRL	0xE0 /* 16 bits */

#define VR_PSTATE_MASK		0x0003
#define VR_PSTATE_D0		0x0000
#define VR_PSTATE_D1		0x0002
#define VR_PSTATE_D2		0x0002
#define VR_PSTATE_D3		0x0003
#define VR_PME_EN		0x0010
#define VR_PME_STATUS		0x8000

#define PHY_UNKNOWN		6

#define VR_PHYADDR_MIN		0x00
#define VR_PHYADDR_MAX		0x1F

#define PHY_BMCR		0x00
#define PHY_BMSR		0x01
#define PHY_VENID		0x02
#define PHY_DEVID		0x03
#define PHY_ANAR		0x04
#define PHY_LPAR		0x05
#define PHY_ANEXP		0x06

#define PHY_ANAR_NEXTPAGE	0x8000
#define PHY_ANAR_RSVD0		0x4000
#define PHY_ANAR_TLRFLT		0x2000
#define PHY_ANAR_RSVD1		0x1000
#define PHY_ANAR_RSVD2		0x0800
#define PHY_ANAR_RSVD3		0x0400
#define PHY_ANAR_100BT4		0x0200
#define PHY_ANAR_100BTXFULL	0x0100
#define PHY_ANAR_100BTXHALF	0x0080
#define PHY_ANAR_10BTFULL	0x0040
#define PHY_ANAR_10BTHALF	0x0020
#define PHY_ANAR_PROTO4		0x0010
#define PHY_ANAR_PROTO3		0x0008
#define PHY_ANAR_PROTO2		0x0004
#define PHY_ANAR_PROTO1		0x0002
#define PHY_ANAR_PROTO0		0x0001

/*
 * These are the register definitions for the PHY (physical layer
 * interface chip).
 */
/*
 * PHY BMCR Basic Mode Control Register
 */
#define PHY_BMCR_RESET			0x8000
#define PHY_BMCR_LOOPBK			0x4000
#define PHY_BMCR_SPEEDSEL		0x2000
#define PHY_BMCR_AUTONEGENBL		0x1000
#define PHY_BMCR_RSVD0			0x0800	/* write as zero */
#define PHY_BMCR_ISOLATE		0x0400
#define PHY_BMCR_AUTONEGRSTR		0x0200
#define PHY_BMCR_DUPLEX			0x0100
#define PHY_BMCR_COLLTEST		0x0080
#define PHY_BMCR_RSVD1			0x0040	/* write as zero, don't care */
#define PHY_BMCR_RSVD2			0x0020	/* write as zero, don't care */
#define PHY_BMCR_RSVD3			0x0010	/* write as zero, don't care */
#define PHY_BMCR_RSVD4			0x0008	/* write as zero, don't care */
#define PHY_BMCR_RSVD5			0x0004	/* write as zero, don't care */
#define PHY_BMCR_RSVD6			0x0002	/* write as zero, don't care */
#define PHY_BMCR_RSVD7			0x0001	/* write as zero, don't care */
/*
 * RESET: 1 == software reset, 0 == normal operation
 * Resets status and control registers to default values.
 * Relatches all hardware config values.
 *
 * LOOPBK: 1 == loopback operation enabled, 0 == normal operation
 *
 * SPEEDSEL: 1 == 100Mb/s, 0 == 10Mb/s
 * Link speed is selected byt his bit or if auto-negotiation if bit
 * 12 (AUTONEGENBL) is set (in which case the value of this register
 * is ignored).
 *
 * AUTONEGENBL: 1 == Autonegotiation enabled, 0 == Autonegotiation disabled
 * Bits 8 and 13 are ignored when autoneg is set, otherwise bits 8 and 13
 * determine speed and mode. Should be cleared and then set if PHY configured
 * for no autoneg on startup.
 *
 * ISOLATE: 1 == isolate PHY from MII, 0 == normal operation
 *
 * AUTONEGRSTR: 1 == restart autonegotiation, 0 = normal operation
 *
 * DUPLEX: 1 == full duplex mode, 0 == half duplex mode
 *
 * COLLTEST: 1 == collision test enabled, 0 == normal operation
 */

/* 
 * PHY, BMSR Basic Mode Status Register 
 */   
#define PHY_BMSR_100BT4			0x8000
#define PHY_BMSR_100BTXFULL		0x4000
#define PHY_BMSR_100BTXHALF		0x2000
#define PHY_BMSR_10BTFULL		0x1000
#define PHY_BMSR_10BTHALF		0x0800
#define PHY_BMSR_RSVD1			0x0400	/* write as zero, don't care */
#define PHY_BMSR_RSVD2			0x0200	/* write as zero, don't care */
#define PHY_BMSR_RSVD3			0x0100	/* write as zero, don't care */
#define PHY_BMSR_RSVD4			0x0080	/* write as zero, don't care */
#define PHY_BMSR_MFPRESUP		0x0040
#define PHY_BMSR_AUTONEGCOMP		0x0020
#define PHY_BMSR_REMFAULT		0x0010
#define PHY_BMSR_CANAUTONEG		0x0008
#define PHY_BMSR_LINKSTAT		0x0004
#define PHY_BMSR_JABBER			0x0002
#define PHY_BMSR_EXTENDED		0x0001
