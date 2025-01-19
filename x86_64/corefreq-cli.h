/*
 * CoreFreq
 * Copyright (C) 2015-2025 CYRIL COURTIAT
 * Licenses: GPL2
 */

#define CLEAR_EVENT_MASK	0x000000000000007eLLU

#define CLOCK_SOURCE_MASK	0x000000000000000fLLU

#define TRACK_TASK		0x0200000000000000LLU
#define TRACK_MASK		0x00000000007fffffLLU

#define CPU_ONLINE		0x0000080000000000LLU
#define CPU_OFFLINE		0x0000100000000000LLU
#define CPU_STATE_MASK		0x0000180000000000LLU
#define CPU_SELECT		0x0000200000000000LLU
#define CPU_MASK		0x00000000000000ffLLU
#define RATIO_MASK		0x000000000000ffffLLU

#define BOXKEY_CSTATE_MASK	0x00000000000000f0LLU

#define BOXKEY_TURBO_CLOCK	0x00010000
#define BOXKEY_TURBO_CLOCK_NC	0x00020000LLU

#define BOXKEY_RATIO_CLOCK	0x00040000
#define BOXKEY_RATIO_CLOCK_OR	0x00080000LLU

#define BOXKEY_CFGTDP_CLOCK	0x00220000
#define BOXKEY_CFGTDP_CLOCK_OR	0x00200000LLU

#define BOXKEY_UNCORE_CLOCK	0x00400000
#define BOXKEY_UNCORE_CLOCK_OR	0x00800000LLU

#define BOXKEY_RATIO_SELECT_OR	0x08000000LLU

#define CLOCKMOD_RATIO_MASK	0x0000ffff

#define OPS_RECORDER_MASK	0x00000000000000f0LLU

#define SMBIOS_STRING_INDEX	0x0010000000000000
#define SMBIOS_STRING_MASK	0x00000000000000ffLLU

#define BOXKEY_EVT_OR		0x3000000000020001LLU
#define BOXKEY_TDP_OR		0x3000000000021100LLU
#define BOXKEY_PLX_OP		0x3000000000021200LLU
#define BOXKEY_PL1_OR		(BOXKEY_PLX_OP | (0x8 << PL1))
#define BOXKEY_PL2_OR		(BOXKEY_PLX_OP | (0x8 << PL2))

#define BOXKEY_TDP_MASK 	0x0000000000000007LLU
#define BOXKEY_PLX_MASK 	0x0000000000000018LLU
#define BOXKEY_TDP_OFFSET	0x000000000ff00000LLU

#define BOXKEY_TDC_OR		0x3000000000021400LLU
#define BOXKEY_TDC_MASK 	0x3000000000021410LLU
#define BOXKEY_TDC_OFFSET	0x000000000ff00000LLU

#define BOXKEY_THM_OR		0x3000000000021800LLU
#define BOXKEY_THM_OP	 	0x3000000000021810LLU
#define BOXKEY_THM_OFFSET	0x0000000ffff00000LLU

#define BOXKEY_TW_OR		0x3000000000024100LLU
#define BOXKEY_TW_OP		0x3000000000024200LLU

#define BOXKEY_ROUTE_MASK	0x00000000000000f0LLU

enum KEY_ENUM {
	SORTBY_STATE		= 0x0100000000000009LLU + F_STATE,
	SORTBY_RTIME		= 0x0100000000000009LLU + F_RTIME,
	SORTBY_UTIME		= 0x0100000000000009LLU + F_UTIME,
	SORTBY_STIME		= 0x0100000000000009LLU + F_STIME,
	SORTBY_PID		= 0x0100000000000009LLU + F_PID,
	SORTBY_COMM		= 0x0100000000000009LLU + F_COMM,

	OPS_INTERVAL		= 0x1000000000001000LLU,
	OPS_INTERVAL_100	= 0x1000000000001001LLU,
	OPS_INTERVAL_150	= 0x1000000000001011LLU,
	OPS_INTERVAL_250	= 0x1000000000001021LLU,
	OPS_INTERVAL_500	= 0x1000000000001031LLU,
	OPS_INTERVAL_750	= 0x1000000000001041LLU,
	OPS_INTERVAL_1000	= 0x1000000000001051LLU,
	OPS_INTERVAL_1500	= 0x1000000000001061LLU,
	OPS_INTERVAL_2000	= 0x1000000000001071LLU,
	OPS_INTERVAL_2500	= 0x1000000000001081LLU,
	OPS_INTERVAL_3000	= 0x1000000000001091LLU,
	OPS_AUTOCLOCK		= 0x1000000000002000LLU,
	OPS_AUTOCLOCK_OFF	= 0x1000000000002001LLU,
	OPS_AUTOCLOCK_ON	= 0x1000000000002002LLU,
	OPS_EXPERIMENTAL	= 0x1000000000004000LLU,
	OPS_EXPERIMENTAL_OFF	= 0x1000000000004001LLU,
	OPS_EXPERIMENTAL_ON	= 0x1000000000004002LLU,
	OPS_INTERRUPTS		= 0x1000000000008000LLU,
	OPS_INTERRUPTS_OFF	= 0x1000000000008001LLU,
	OPS_INTERRUPTS_ON	= 0x1000000000008002LLU,
	OPS_CPU_IDLE		= 0x1000000000008010LLU,
	OPS_CPU_IDLE_OFF	= 0x1000000000008011LLU,
	OPS_CPU_IDLE_ON 	= 0x1000000000008012LLU,
	OPS_CPU_FREQ		= 0x1000000000008020LLU,
	OPS_CPU_FREQ_OFF	= 0x1000000000008021LLU,
	OPS_CPU_FREQ_ON 	= 0x1000000000008022LLU,
	OPS_GOVERNOR		= 0x1000000000008040LLU,
	OPS_GOVERNOR_OFF	= 0x1000000000008041LLU,
	OPS_GOVERNOR_ON 	= 0x1000000000008042LLU,
	OPS_CLOCK_SOURCE	= 0x1000000000008080LLU,
	OPS_CLOCK_SOURCE_1	= 0x1000000000008081LLU,
	OPS_CLOCK_SOURCE_2	= 0x1000000000008082LLU,
	OPS_CLOCK_SOURCE_3	= 0x1000000000008083LLU,
	OPS_CLOCK_SOURCE_4	= 0x1000000000008084LLU,
	OPS_CLOCK_SOURCE_5	= 0x1000000000008085LLU,
	OPS_CLOCK_SOURCE_6	= 0x1000000000008086LLU,
	OPS_CLOCK_SOURCE_7	= 0x1000000000008087LLU,
	OPS_CLOCK_SOURCE_SEL	= 0x100000000000808dLLU,
	OPS_CLOCK_SOURCE_OFF	= 0x100000000000808eLLU,
	OPS_CLOCK_SOURCE_ON	= 0x100000000000808fLLU,
	OPS_IDLE_ROUTE		= 0x1000000000008100LLU,
	OPS_ROUTE_DFLT		= OPS_IDLE_ROUTE | 1 | ( ROUTE_DEFAULT	<< 4 ),
	OPS_ROUTE_IO		= OPS_IDLE_ROUTE | 1 | ( ROUTE_IO	<< 4 ),
	OPS_ROUTE_HALT		= OPS_IDLE_ROUTE | 1 | ( ROUTE_HALT	<< 4 ),
	OPS_ROUTE_MWAIT 	= OPS_IDLE_ROUTE | 1 | ( ROUTE_MWAIT	<< 4 ),
	OPS_RECORDER		= 0x1000000000010000LLU,
	OPS_RECORDER_RESET	= 0x1000000000010010LLU,
	OPS_RECORDER_X002	= 0x1000000000010020LLU,
	OPS_RECORDER_X010	= 0x1000000000010030LLU,
	OPS_RECORDER_X020	= 0x1000000000010040LLU,
	OPS_RECORDER_X060	= 0x1000000000010050LLU,
	OPS_RECORDER_X090	= 0x1000000000010060LLU,
	OPS_RECORDER_X120	= 0x1000000000010070LLU,
	OPS_RECORDER_X240	= 0x1000000000010080LLU,
	OPS_THERMAL_SCOPE	= 0x1000000000020000LLU,
	OPS_VOLTAGE_SCOPE	= 0x1000000000021000LLU,
	OPS_POWER_SCOPE 	= 0x1000000000022000LLU,
	OPS_THERMAL_SCOPE_NONE	= OPS_THERMAL_SCOPE|(7 ^ FORMULA_SCOPE_NONE),
	OPS_THERMAL_SCOPE_SMT	= OPS_THERMAL_SCOPE|(7 ^ FORMULA_SCOPE_SMT),
	OPS_THERMAL_SCOPE_CORE	= OPS_THERMAL_SCOPE|(7 ^ FORMULA_SCOPE_CORE),
	OPS_THERMAL_SCOPE_PKG	= OPS_THERMAL_SCOPE|(7 ^ FORMULA_SCOPE_PKG),
	OPS_VOLTAGE_SCOPE_NONE	= OPS_VOLTAGE_SCOPE|(7 ^ FORMULA_SCOPE_NONE),
	OPS_VOLTAGE_SCOPE_SMT	= OPS_VOLTAGE_SCOPE|(7 ^ FORMULA_SCOPE_SMT),
	OPS_VOLTAGE_SCOPE_CORE	= OPS_VOLTAGE_SCOPE|(7 ^ FORMULA_SCOPE_CORE),
	OPS_VOLTAGE_SCOPE_PKG	= OPS_VOLTAGE_SCOPE|(7 ^ FORMULA_SCOPE_PKG),
	OPS_POWER_SCOPE_NONE	= OPS_POWER_SCOPE | (7 ^ FORMULA_SCOPE_NONE),
	OPS_POWER_SCOPE_SMT	= OPS_POWER_SCOPE | (7 ^ FORMULA_SCOPE_SMT),
	OPS_POWER_SCOPE_CORE	= OPS_POWER_SCOPE | (7 ^ FORMULA_SCOPE_CORE),
	OPS_POWER_SCOPE_PKG	= OPS_POWER_SCOPE | (7 ^ FORMULA_SCOPE_PKG),

	BOXKEY_EIST		= 0x3000000000000004LLU,
	BOXKEY_EIST_OFF 	= 0x3000000000000005LLU,
	BOXKEY_EIST_ON		= 0x3000000000000006LLU,
	BOXKEY_C1E		= 0x3000000000000008LLU,
	BOXKEY_C1E_OFF		= 0x3000000000000009LLU,
	BOXKEY_C1E_ON		= 0x300000000000000aLLU,
	BOXKEY_TURBO		= 0x3000000000000010LLU,
	BOXKEY_TURBO_OFF	= 0x3000000000000011LLU,
	BOXKEY_TURBO_ON 	= 0x3000000000000012LLU,
	BOXKEY_C1A		= 0x3000000000000020LLU,
	BOXKEY_C1A_OFF		= 0x3000000000000021LLU,
	BOXKEY_C1A_ON		= 0x3000000000000022LLU,
	BOXKEY_C3A		= 0x3000000000000040LLU,
	BOXKEY_C3A_OFF		= 0x3000000000000041LLU,
	BOXKEY_C3A_ON		= 0x3000000000000042LLU,
	BOXKEY_C1U		= 0x3000000000000080LLU,
	BOXKEY_C1U_OFF		= 0x3000000000000081LLU,
	BOXKEY_C1U_ON		= 0x3000000000000082LLU,
	BOXKEY_C3U		= 0x3000000000000100LLU,
	BOXKEY_C3U_OFF		= 0x3000000000000101LLU,
	BOXKEY_C3U_ON		= 0x3000000000000102LLU,
	BOXKEY_PKGCST		= 0x3000000000000200LLU,
	BOXKEY_PKGCST_C0	= 0x3000000000000201LLU | (  _C0 << 4 ),
	BOXKEY_PKGCST_C1	= 0x3000000000000201LLU | (  _C1 << 4 ),
	BOXKEY_PKGCST_C2	= 0x3000000000000201LLU | (  _C2 << 4 ),
	BOXKEY_PKGCST_C3	= 0x3000000000000201LLU | (  _C3 << 4 ),
	BOXKEY_PKGCST_C4	= 0x3000000000000201LLU | (  _C4 << 4 ),
	BOXKEY_PKGCST_C6	= 0x3000000000000201LLU | (  _C6 << 4 ),
	BOXKEY_PKGCST_C6R	= 0x3000000000000201LLU | ( _C6R << 4 ),
	BOXKEY_PKGCST_C7	= 0x3000000000000201LLU | (  _C7 << 4 ),
	BOXKEY_PKGCST_C7S	= 0x3000000000000201LLU | ( _C7S << 4 ),
	BOXKEY_PKGCST_C8	= 0x3000000000000201LLU | (  _C8 << 4 ),
	BOXKEY_PKGCST_C9	= 0x3000000000000201LLU | (  _C9 << 4 ),
	BOXKEY_PKGCST_C10	= 0x3000000000000201LLU | ( _C10 << 4 ),
	BOXKEY_IOMWAIT		= 0x3000000000000400LLU,
	BOXKEY_IOMWAIT_OFF	= 0x3000000000000401LLU,
	BOXKEY_IOMWAIT_ON	= 0x3000000000000402LLU,
	BOXKEY_IORCST		= 0x3000000000000800LLU,
	BOXKEY_IORCST_C0	= 0x3000000000000801LLU | (  _C0 << 4 ),
	BOXKEY_IORCST_C3	= 0x3000000000000801LLU | (  _C3 << 4 ),
	BOXKEY_IORCST_C4	= 0x3000000000000801LLU | (  _C4 << 4 ),
	BOXKEY_IORCST_C6	= 0x3000000000000801LLU | (  _C6 << 4 ),
	BOXKEY_IORCST_C7	= 0x3000000000000801LLU | (  _C7 << 4 ),
	BOXKEY_IORCST_C8	= 0x3000000000000801LLU | (  _C8 << 4 ),
	BOXKEY_ODCM		= 0x3000000000001000LLU,
	BOXKEY_ODCM_OFF 	= 0x3000000000001001LLU,
	BOXKEY_ODCM_ON		= 0x3000000000001002LLU,
	BOXKEY_DUTYCYCLE	= 0x3000000000001100LLU,
	BOXKEY_ODCM_DC00	= 0x3000000000001101LLU,
	BOXKEY_ODCM_DC01	= 0x3000000000001111LLU,
	BOXKEY_ODCM_DC02	= 0x3000000000001121LLU,
	BOXKEY_ODCM_DC03	= 0x3000000000001131LLU,
	BOXKEY_ODCM_DC04	= 0x3000000000001141LLU,
	BOXKEY_ODCM_DC05	= 0x3000000000001151LLU,
	BOXKEY_ODCM_DC06	= 0x3000000000001161LLU,
	BOXKEY_ODCM_DC07	= 0x3000000000001171LLU,
	BOXKEY_ODCM_DC08	= 0x3000000000001181LLU,
	BOXKEY_ODCM_DC09	= 0x3000000000001191LLU,
	BOXKEY_ODCM_DC10	= 0x30000000000011a1LLU,
	BOXKEY_ODCM_DC11	= 0x30000000000011b1LLU,
	BOXKEY_ODCM_DC12	= 0x30000000000011c1LLU,
	BOXKEY_ODCM_DC13	= 0x30000000000011d1LLU,
	BOXKEY_ODCM_DC14	= 0x30000000000011e1LLU,
	BOXKEY_PWR_POLICY	= 0x3000000000002100LLU,
	BOXKEY_PWR_POL00	= 0x3000000000002101LLU,
	BOXKEY_PWR_POL01	= 0x3000000000002111LLU,
	BOXKEY_PWR_POL02	= 0x3000000000002121LLU,
	BOXKEY_PWR_POL03	= 0x3000000000002131LLU,
	BOXKEY_PWR_POL04	= 0x3000000000002141LLU,
	BOXKEY_PWR_POL05	= 0x3000000000002151LLU,
	BOXKEY_PWR_POL06	= 0x3000000000002161LLU,
	BOXKEY_PWR_POL07	= 0x3000000000002171LLU,
	BOXKEY_PWR_POL08	= 0x3000000000002181LLU,
	BOXKEY_PWR_POL09	= 0x3000000000002191LLU,
	BOXKEY_PWR_POL10	= 0x30000000000021a1LLU,
	BOXKEY_PWR_POL11	= 0x30000000000021b1LLU,
	BOXKEY_PWR_POL12	= 0x30000000000021c1LLU,
	BOXKEY_PWR_POL13	= 0x30000000000021d1LLU,
	BOXKEY_PWR_POL14	= 0x30000000000021e1LLU,
	BOXKEY_PWR_POL15	= 0x30000000000021f1LLU,
	BOXKEY_CC6		= 0x3000000000004000LLU,
	BOXKEY_CC6_OFF		= 0x3000000000004001LLU,
	BOXKEY_CC6_ON		= 0x3000000000004002LLU,
	BOXKEY_PC6		= 0x3000000000004010LLU,
	BOXKEY_PC6_OFF		= 0x3000000000004011LLU,
	BOXKEY_PC6_ON		= 0x3000000000004012LLU,
	BOXKEY_HWP		= 0x3000000000004020LLU,
	BOXKEY_HWP_ON		= 0x3000000000004021LLU,
	BOXKEY_HWP_EPP		= 0x3000000000004040LLU,
	BOXKEY_HWP_EPP_MIN	= 0x3000000000004041LLU,
	BOXKEY_HWP_EPP_020	= 0x3000000000004042LLU,
	BOXKEY_HWP_EPP_040	= 0x3000000000004043LLU,
	BOXKEY_HWP_EPP_060	= 0x3000000000004044LLU,
	BOXKEY_HWP_EPP_MED	= 0x3000000000004045LLU,
	BOXKEY_HWP_EPP_0A0	= 0x3000000000004046LLU,
	BOXKEY_HWP_EPP_PWR	= 0x3000000000004047LLU,
	BOXKEY_HWP_EPP_0E0	= 0x3000000000004048LLU,
	BOXKEY_HWP_EPP_MAX	= 0x3000000000004049LLU,
	BOXKEY_FMW_CPPC		= 0x3000000000004025LLU,
	BOXKEY_FMW_CPPC_OFF	= 0x3000000000004027LLU,
	BOXKEY_HDC		= 0x3000000000004080LLU,
	BOXKEY_HDC_OFF		= 0x3000000000004081LLU,
	BOXKEY_HDC_ON		= 0x3000000000004082LLU,
	BOXKEY_EEO		= 0x3000000000004100LLU,
	BOXKEY_EEO_OFF		= 0x3000000000004101LLU,
	BOXKEY_EEO_ON		= 0x3000000000004102LLU,
	BOXKEY_R2H		= 0x3000000000004110LLU,
	BOXKEY_R2H_OFF		= 0x3000000000004111LLU,
	BOXKEY_R2H_ON		= 0x3000000000004112LLU,
  BOXKEY_L1_HW_PREFETCH 	= 0x3000000000004200LLU,
  BOXKEY_L1_HW_PREFETCH_OFF	= 0x3000000000004201LLU,
  BOXKEY_L1_HW_PREFETCH_ON	= 0x3000000000004202LLU,
  BOXKEY_L1_HW_IP_PREFETCH	= 0x3000000000004210LLU,
  BOXKEY_L1_HW_IP_PREFETCH_OFF	= 0x3000000000004211LLU,
  BOXKEY_L1_HW_IP_PREFETCH_ON	= 0x3000000000004212LLU,
  BOXKEY_L1_SCRUBBING		= 0x3000000000004214LLU,
  BOXKEY_L1_SCRUBBING_OFF	= 0x3000000000004215LLU,
  BOXKEY_L1_SCRUBBING_ON	= 0x3000000000004216LLU,
  BOXKEY_L2_HW_PREFETCH 	= 0x3000000000004220LLU,
  BOXKEY_L2_HW_PREFETCH_OFF	= 0x3000000000004221LLU,
  BOXKEY_L2_HW_PREFETCH_ON	= 0x3000000000004222LLU,
  BOXKEY_L2_HW_CL_PREFETCH	= 0x3000000000004240LLU,
  BOXKEY_L2_HW_CL_PREFETCH_OFF	= 0x3000000000004241LLU,
  BOXKEY_L2_HW_CL_PREFETCH_ON	= 0x3000000000004242LLU,
	BOXKEY_CFG_TDP_LVL	= 0x3000000000004280LLU,
	BOXKEY_CFG_TDP_LVL0	= 0x3000000000004281LLU,
	BOXKEY_CFG_TDP_LVL1	= 0x3000000000004282LLU,
	BOXKEY_CFG_TDP_LVL2	= 0x3000000000004283LLU,
	BOXKEY_WDT		= 0x3000000000004400LLU,
	BOXKEY_WDT_OFF		= 0x3000000000004401LLU,
	BOXKEY_WDT_ON		= 0x3000000000004402LLU,
	BOXKEY_HSMP		= 0x3000000000004410LLU,
	BOXKEY_HSMP_OFF		= 0x3000000000004411LLU,
	BOXKEY_HSMP_ON		= 0x3000000000004412LLU,
  BOXKEY_L2_AMP_PREFETCH	= 0x3000000000004420LLU,
  BOXKEY_L2_AMP_PREFETCH_OFF	= 0x3000000000004421LLU,
  BOXKEY_L2_AMP_PREFETCH_ON	= 0x3000000000004422LLU,
  BOXKEY_L1_STRIDE_PREFETCH	= 0x3000000000004440LLU,
  BOXKEY_L1_STRIDE_PF_OFF	= 0x3000000000004441LLU,
  BOXKEY_L1_STRIDE_PF_ON	= 0x3000000000004442LLU,
  BOXKEY_L1_REGION_PREFETCH	= 0x3000000000004480LLU,
  BOXKEY_L1_REGION_PF_OFF	= 0x3000000000004481LLU,
  BOXKEY_L1_REGION_PF_ON	= 0x3000000000004482LLU,
  BOXKEY_L1_BURST_PREFETCH	= 0x3000000000004800LLU,
  BOXKEY_L1_BURST_PF_OFF	= 0x3000000000004801LLU,
  BOXKEY_L1_BURST_PF_ON 	= 0x3000000000004802LLU,
  BOXKEY_L1_NPP_PREFETCH	= 0x3000000000004810LLU,
  BOXKEY_L1_NPP_PREFETCH_OFF	= 0x3000000000004811LLU,
  BOXKEY_L1_NPP_PREFETCH_ON	= 0x3000000000004812LLU,
  BOXKEY_L2_STREAM_HW_PREFETCH	= 0x3000000000004820LLU,
  BOXKEY_L2_STREAM_HW_PF_OFF	= 0x3000000000004821LLU,
  BOXKEY_L2_STREAM_HW_PF_ON	= 0x3000000000004822LLU,
  BOXKEY_L2_UPDOWN_PREFETCH	= 0x3000000000004840LLU,
  BOXKEY_L2_UPDOWN_PF_OFF	= 0x3000000000004841LLU,
  BOXKEY_L2_UPDOWN_PF_ON	= 0x3000000000004842LLU,
  BOXKEY_L2_NLP_PREFETCH	= 0x3000000000004880LLU,
  BOXKEY_L2_NLP_PREFETCH_OFF	= 0x3000000000004881LLU,
  BOXKEY_L2_NLP_PREFETCH_ON	= 0x3000000000004882LLU,
  BOXKEY_LLC_STREAMER		= 0x3000000000004120LLU,
  BOXKEY_LLC_STREAMER_OFF	= 0x3000000000004121LLU,
  BOXKEY_LLC_STREAMER_ON	= 0x3000000000004122LLU,
	BOXKEY_TOOLS_MACHINE	= 0x3000000000010000LLU,
	BOXKEY_TOOLS_ATOMIC	= 0x3000000000010010LLU,
	BOXKEY_TOOLS_CRC32	= 0x3000000000010020LLU,
	BOXKEY_TOOLS_CONIC	= 0x3000000000011000LLU,
	BOXKEY_TOOLS_CONIC0	= 0x3000000000011401LLU,
	BOXKEY_TOOLS_CONIC1	= 0x3000000000011411LLU,
	BOXKEY_TOOLS_CONIC2	= 0x3000000000011421LLU,
	BOXKEY_TOOLS_CONIC3	= 0x3000000000011431LLU,
	BOXKEY_TOOLS_CONIC4	= 0x3000000000011441LLU,
	BOXKEY_TOOLS_CONIC5	= 0x3000000000011451LLU,
	BOXKEY_TOOLS_TURBO_RND	= 0x3000000000012001LLU,
	BOXKEY_TOOLS_TURBO_RR	= 0x3000000000012011LLU,
	BOXKEY_TOOLS_TURBO_CPU	= 0x3000000000012021LLU,
	BOXKEY_TOOLS_MONTE_CARLO= 0x3000000000012041LLU,

	BOXKEY_LANG_ENGLISH	= 0x3000000000014021LLU,
	BOXKEY_LANG_FRENCH	= 0x3000000000014022LLU,
	BOXKEY_THEME_DFLT	= 0x3000000000014081LLU,
	BOXKEY_THEME_USR1	= 0x3000000000014082LLU,
	BOXKEY_THEME_USR2	= 0x3000000000014083LLU,

	BOXKEY_LIMIT_IDLE_STATE = 0x3000000000014800LLU,
	BOXKEY_LIMIT_IDLE_ST00	= 0x3000000000014801LLU,
	BOXKEY_LIMIT_IDLE_ST01	= 0x3000000000014811LLU,
	BOXKEY_LIMIT_IDLE_ST02	= 0x3000000000014821LLU,
	BOXKEY_LIMIT_IDLE_ST03	= 0x3000000000014831LLU,
	BOXKEY_LIMIT_IDLE_ST04	= 0x3000000000014841LLU,
	BOXKEY_LIMIT_IDLE_ST05	= 0x3000000000014851LLU,
	BOXKEY_LIMIT_IDLE_ST06	= 0x3000000000014861LLU,
	BOXKEY_LIMIT_IDLE_ST07	= 0x3000000000014871LLU,
	BOXKEY_LIMIT_IDLE_ST08	= 0x3000000000014881LLU,
	BOXKEY_LIMIT_IDLE_ST09	= 0x3000000000014891LLU,
	BOXKEY_LIMIT_IDLE_ST10	= 0x30000000000148a1LLU,

	BOXKEY_CLR_ALL_EVENTS	= BOXKEY_EVT_OR ^ 0x1,
	BOXKEY_CLR_THM_SENSOR	= BOXKEY_EVT_OR | (LSHIFT_THERMAL_LOG	<< 1),
	BOXKEY_CLR_PROCHOT_LOG	= BOXKEY_EVT_OR | (LSHIFT_PROCHOT_LOG	<< 1),
	BOXKEY_CLR_THM_CRIT	= BOXKEY_EVT_OR | (LSHIFT_CRITIC_LOG	<< 1),
	BOXKEY_CLR_THM_THOLD1	= BOXKEY_EVT_OR | (LSHIFT_THOLD1_LOG	<< 1),
	BOXKEY_CLR_THM_THOLD2	= BOXKEY_EVT_OR | (LSHIFT_THOLD2_LOG	<< 1),
	BOXKEY_CLR_PWR_LIMIT	= BOXKEY_EVT_OR | (LSHIFT_POWER_LIMIT	<< 1),
	BOXKEY_CLR_CUR_LIMIT	= BOXKEY_EVT_OR | (LSHIFT_CURRENT_LIMIT << 1),
	BOXKEY_CLR_X_DOMAIN	= BOXKEY_EVT_OR | (LSHIFT_CROSS_DOMAIN	<< 1),
	BOXKEY_CLR_CORE_HOT	= BOXKEY_EVT_OR | (LSHIFT_CORE_HOT_LOG	<< 1),
	BOXKEY_CLR_CORE_THM	= BOXKEY_EVT_OR | (LSHIFT_CORE_THM_LOG	<< 1),
	BOXKEY_CLR_CORE_RES	= BOXKEY_EVT_OR | (LSHIFT_CORE_RES_LOG	<< 1),
	BOXKEY_CLR_CORE_AVG	= BOXKEY_EVT_OR | (LSHIFT_CORE_AVG_LOG	<< 1),
	BOXKEY_CLR_CORE_VRT	= BOXKEY_EVT_OR | (LSHIFT_CORE_VRT_LOG	<< 1),
	BOXKEY_CLR_CORE_TDC	= BOXKEY_EVT_OR | (LSHIFT_CORE_TDC_LOG	<< 1),
	BOXKEY_CLR_CORE_PL1	= BOXKEY_EVT_OR | (LSHIFT_CORE_PL1_LOG	<< 1),
	BOXKEY_CLR_CORE_PL2	= BOXKEY_EVT_OR | (LSHIFT_CORE_PL2_LOG	<< 1),
	BOXKEY_CLR_CORE_EDP	= BOXKEY_EVT_OR | (LSHIFT_CORE_EDP_LOG	<< 1),
	BOXKEY_CLR_CORE_BST	= BOXKEY_EVT_OR | (LSHIFT_CORE_BST_LOG	<< 1),
	BOXKEY_CLR_CORE_ATT	= BOXKEY_EVT_OR | (LSHIFT_CORE_ATT_LOG	<< 1),
	BOXKEY_CLR_CORE_TVB	= BOXKEY_EVT_OR | (LSHIFT_CORE_TVB_LOG	<< 1),
	BOXKEY_CLR_GFX_HOT	= BOXKEY_EVT_OR | (LSHIFT_GFX_HOT_LOG	<< 1),
	BOXKEY_CLR_GFX_THM	= BOXKEY_EVT_OR | (LSHIFT_GFX_THM_LOG	<< 1),
	BOXKEY_CLR_GFX_AVG	= BOXKEY_EVT_OR | (LSHIFT_GFX_AVG_LOG	<< 1),
	BOXKEY_CLR_GFX_VRT	= BOXKEY_EVT_OR | (LSHIFT_GFX_VRT_LOG	<< 1),
	BOXKEY_CLR_GFX_TDC	= BOXKEY_EVT_OR | (LSHIFT_GFX_TDC_LOG	<< 1),
	BOXKEY_CLR_GFX_PL1	= BOXKEY_EVT_OR | (LSHIFT_GFX_PL1_LOG	<< 1),
	BOXKEY_CLR_GFX_PL2	= BOXKEY_EVT_OR | (LSHIFT_GFX_PL2_LOG	<< 1),
	BOXKEY_CLR_GFX_EDP	= BOXKEY_EVT_OR | (LSHIFT_GFX_EDP_LOG	<< 1),
	BOXKEY_CLR_GFX_EFF	= BOXKEY_EVT_OR | (LSHIFT_GFX_EFF_LOG	<< 1),
	BOXKEY_CLR_RING_HOT	= BOXKEY_EVT_OR | (LSHIFT_RING_HOT_LOG	<< 1),
	BOXKEY_CLR_RING_THM	= BOXKEY_EVT_OR | (LSHIFT_RING_THM_LOG	<< 1),
	BOXKEY_CLR_RING_AVG	= BOXKEY_EVT_OR | (LSHIFT_RING_AVG_LOG	<< 1),
	BOXKEY_CLR_RING_VRT	= BOXKEY_EVT_OR | (LSHIFT_RING_VRT_LOG	<< 1),
	BOXKEY_CLR_RING_TDC	= BOXKEY_EVT_OR | (LSHIFT_RING_TDC_LOG	<< 1),
	BOXKEY_CLR_RING_PL1	= BOXKEY_EVT_OR | (LSHIFT_RING_PL1_LOG	<< 1),
	BOXKEY_CLR_RING_PL2	= BOXKEY_EVT_OR | (LSHIFT_RING_PL2_LOG	<< 1),
	BOXKEY_CLR_RING_EDP	= BOXKEY_EVT_OR | (LSHIFT_RING_EDP_LOG	<< 1),

	BOXKEY_TDP_PKG		= BOXKEY_TDP_OR | (PWR_DOMAIN(PKG)	<< 5),
	BOXKEY_TDP_CORES	= BOXKEY_TDP_OR | (PWR_DOMAIN(CORES)	<< 5),
	BOXKEY_TDP_UNCORE	= BOXKEY_TDP_OR | (PWR_DOMAIN(UNCORE)	<< 5),
	BOXKEY_TDP_RAM		= BOXKEY_TDP_OR | (PWR_DOMAIN(RAM)	<< 5),
	BOXKEY_TDP_PLATFORM	= BOXKEY_TDP_OR | (PWR_DOMAIN(PLATFORM) << 5),

	BOXKEY_PL1_PKG_LIM_ON	= BOXKEY_PL1_OR | (PWR_DOMAIN(PKG)	<< 5)|1,
	BOXKEY_PL1_PKG_LIM_OFF	= BOXKEY_PL1_OR | (PWR_DOMAIN(PKG)	<< 5)|2,
	BOXKEY_PL1_CORE_LIM_ON	= BOXKEY_PL1_OR | (PWR_DOMAIN(CORES)	<< 5)|1,
	BOXKEY_PL1_CORE_LIM_OFF = BOXKEY_PL1_OR | (PWR_DOMAIN(CORES)	<< 5)|2,
	BOXKEY_PL1_UNCORE_LIM_ON= BOXKEY_PL1_OR | (PWR_DOMAIN(UNCORE)	<< 5)|1,
	BOXKEY_PL1_UNCORE_LIM_OFF=BOXKEY_PL1_OR | (PWR_DOMAIN(UNCORE)	<< 5)|2,
	BOXKEY_PL1_RAM_LIM_ON	= BOXKEY_PL1_OR | (PWR_DOMAIN(RAM)	<< 5)|1,
	BOXKEY_PL1_RAM_LIM_OFF	= BOXKEY_PL1_OR | (PWR_DOMAIN(RAM)	<< 5)|2,
	BOXKEY_PL1_PLT_LIM_ON	= BOXKEY_PL1_OR | (PWR_DOMAIN(PLATFORM) << 5)|1,
	BOXKEY_PL1_PLT_LIM_OFF	= BOXKEY_PL1_OR | (PWR_DOMAIN(PLATFORM) << 5)|2,
	BOXKEY_PL2_PKG_LIM_ON	= BOXKEY_PL2_OR | (PWR_DOMAIN(PKG)	<< 5)|1,
	BOXKEY_PL2_PKG_LIM_OFF	= BOXKEY_PL2_OR | (PWR_DOMAIN(PKG)	<< 5)|2,
	BOXKEY_PL2_CORE_LIM_ON	= BOXKEY_PL2_OR | (PWR_DOMAIN(CORES)	<< 5)|1,
	BOXKEY_PL2_CORE_LIM_OFF = BOXKEY_PL2_OR | (PWR_DOMAIN(CORES)	<< 5)|2,
	BOXKEY_PL2_UNCORE_LIM_ON= BOXKEY_PL2_OR | (PWR_DOMAIN(UNCORE)	<< 5)|1,
	BOXKEY_PL2_UNCORE_LIM_OFF=BOXKEY_PL2_OR | (PWR_DOMAIN(UNCORE)	<< 5)|2,
	BOXKEY_PL2_RAM_LIM_ON	= BOXKEY_PL2_OR | (PWR_DOMAIN(RAM)	<< 5)|1,
	BOXKEY_PL2_RAM_LIM_OFF	= BOXKEY_PL2_OR | (PWR_DOMAIN(RAM)	<< 5)|2,
	BOXKEY_PL2_PLT_LIM_ON	= BOXKEY_PL2_OR | (PWR_DOMAIN(PLATFORM) << 5)|1,
	BOXKEY_PL2_PLT_LIM_OFF	= BOXKEY_PL2_OR | (PWR_DOMAIN(PLATFORM) << 5)|2,

	BOXKEY_PL1_PKG_CLAMP_ON = BOXKEY_PL1_OR | (PWR_DOMAIN(PKG)	<< 5)|5,
	BOXKEY_PL1_PKG_CLAMP_OFF= BOXKEY_PL1_OR | (PWR_DOMAIN(PKG)	<< 5)|6,
	BOXKEY_PL1_CORE_CLAMP_ON= BOXKEY_PL1_OR | (PWR_DOMAIN(CORES)	<< 5)|5,
	BOXKEY_PL1_CORE_CLAMP_OFF=BOXKEY_PL1_OR | (PWR_DOMAIN(CORES)	<< 5)|6,
	BOXKEY_PL1_UNCORE_CLAMP_ON=BOXKEY_PL1_OR| (PWR_DOMAIN(UNCORE)	<< 5)|5,
	BOXKEY_PL1_UNCORE_CLAMP_OFF=BOXKEY_PL1_OR|(PWR_DOMAIN(UNCORE)	<< 5)|6,
	BOXKEY_PL1_RAM_CLAMP_ON = BOXKEY_PL1_OR | (PWR_DOMAIN(RAM)	<< 5)|5,
	BOXKEY_PL1_RAM_CLAMP_OFF= BOXKEY_PL1_OR | (PWR_DOMAIN(RAM)	<< 5)|6,
	BOXKEY_PL1_PLT_CLAMP_ON = BOXKEY_PL1_OR | (PWR_DOMAIN(PLATFORM) << 5)|5,
	BOXKEY_PL1_PLT_CLAMP_OFF= BOXKEY_PL1_OR | (PWR_DOMAIN(PLATFORM) << 5)|6,
	BOXKEY_PL2_PKG_CLAMP_ON = BOXKEY_PL2_OR | (PWR_DOMAIN(PKG)	<< 5)|5,
	BOXKEY_PL2_PKG_CLAMP_OFF= BOXKEY_PL2_OR | (PWR_DOMAIN(PKG)	<< 5)|6,
	BOXKEY_PL2_CORE_CLAMP_ON= BOXKEY_PL2_OR | (PWR_DOMAIN(CORES)	<< 5)|5,
	BOXKEY_PL2_CORE_CLAMP_OFF=BOXKEY_PL2_OR | (PWR_DOMAIN(CORES)	<< 5)|6,
	BOXKEY_PL2_UNCORE_CLAMP_ON=BOXKEY_PL2_OR| (PWR_DOMAIN(UNCORE)	<< 5)|5,
	BOXKEY_PL2_UNCORE_CLAMP_OFF=BOXKEY_PL2_OR|(PWR_DOMAIN(UNCORE)	<< 5)|6,
	BOXKEY_PL2_RAM_CLAMP_ON = BOXKEY_PL2_OR | (PWR_DOMAIN(RAM)	<< 5)|5,
	BOXKEY_PL2_RAM_CLAMP_OFF= BOXKEY_PL2_OR | (PWR_DOMAIN(RAM)	<< 5)|6,
	BOXKEY_PL2_PLT_CLAMP_ON = BOXKEY_PL2_OR | (PWR_DOMAIN(PLATFORM) << 5)|5,
	BOXKEY_PL2_PLT_CLAMP_OFF= BOXKEY_PL2_OR | (PWR_DOMAIN(PLATFORM) << 5)|6,

	BOXKEY_TW1_PKG		= BOXKEY_TW_OR | (PWR_DOMAIN(PKG)     << 5)|PL1,
	BOXKEY_TW1_CORES	= BOXKEY_TW_OR | (PWR_DOMAIN(CORES)   << 5)|PL1,
	BOXKEY_TW1_UNCORE	= BOXKEY_TW_OR | (PWR_DOMAIN(UNCORE)  << 5)|PL1,
	BOXKEY_TW1_RAM		= BOXKEY_TW_OR | (PWR_DOMAIN(RAM)     << 5)|PL1,
	BOXKEY_TW1_PLATFORM	= BOXKEY_TW_OR | (PWR_DOMAIN(PLATFORM)<< 5)|PL1,
	BOXKEY_TW2_PKG		= BOXKEY_TW_OR | (PWR_DOMAIN(PKG)     << 5)|PL2,
	BOXKEY_TW2_CORES	= BOXKEY_TW_OR | (PWR_DOMAIN(CORES)   << 5)|PL2,
	BOXKEY_TW2_UNCORE	= BOXKEY_TW_OR | (PWR_DOMAIN(UNCORE)  << 5)|PL2,
	BOXKEY_TW2_RAM		= BOXKEY_TW_OR | (PWR_DOMAIN(RAM)     << 5)|PL2,
	BOXKEY_TW2_PLATFORM	= BOXKEY_TW_OR | (PWR_DOMAIN(PLATFORM)<< 5)|PL2,

	BOXKEY_TDC		= BOXKEY_TDC_OR,
	BOXKEY_TDC_ON		= BOXKEY_TDC_OR | 1,
	BOXKEY_TDC_OFF		= BOXKEY_TDC_OR | 2,

	BOXKEY_THM		= BOXKEY_THM_OR,

	BOXKEY_TURBO_CLOCK_1C	= ((BOXKEY_TURBO_CLOCK_NC |  1) << 32),
	BOXKEY_TURBO_CLOCK_2C	= ((BOXKEY_TURBO_CLOCK_NC |  2) << 32),
	BOXKEY_TURBO_CLOCK_3C	= ((BOXKEY_TURBO_CLOCK_NC |  3) << 32),
	BOXKEY_TURBO_CLOCK_4C	= ((BOXKEY_TURBO_CLOCK_NC |  4) << 32),
	BOXKEY_TURBO_CLOCK_5C	= ((BOXKEY_TURBO_CLOCK_NC |  5) << 32),
	BOXKEY_TURBO_CLOCK_6C	= ((BOXKEY_TURBO_CLOCK_NC |  6) << 32),
	BOXKEY_TURBO_CLOCK_7C	= ((BOXKEY_TURBO_CLOCK_NC |  7) << 32),
	BOXKEY_TURBO_CLOCK_8C	= ((BOXKEY_TURBO_CLOCK_NC |  8) << 32),
	BOXKEY_TURBO_CLOCK_9C	= ((BOXKEY_TURBO_CLOCK_NC |  9) << 32),
	BOXKEY_TURBO_CLOCK_10C	= ((BOXKEY_TURBO_CLOCK_NC | 10) << 32),
	BOXKEY_TURBO_CLOCK_11C	= ((BOXKEY_TURBO_CLOCK_NC | 11) << 32),
	BOXKEY_TURBO_CLOCK_12C	= ((BOXKEY_TURBO_CLOCK_NC | 12) << 32),
	BOXKEY_TURBO_CLOCK_13C	= ((BOXKEY_TURBO_CLOCK_NC | 13) << 32),
	BOXKEY_TURBO_CLOCK_14C	= ((BOXKEY_TURBO_CLOCK_NC | 14) << 32),
	BOXKEY_TURBO_CLOCK_15C	= ((BOXKEY_TURBO_CLOCK_NC | 15) << 32),
	BOXKEY_TURBO_CLOCK_16C	= ((BOXKEY_TURBO_CLOCK_NC | 16) << 32),
	BOXKEY_TURBO_CLOCK_17C	= ((BOXKEY_TURBO_CLOCK_NC | 17) << 32),
	BOXKEY_TURBO_CLOCK_18C	= ((BOXKEY_TURBO_CLOCK_NC | 18) << 32),

	BOXKEY_RATIO_CLOCK_TGT	= ((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_TGT) << 32),
	BOXKEY_RATIO_CLOCK_MAX	= ((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_MAX) << 32),
	BOXKEY_RATIO_CLOCK_MIN	= ((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_MIN) << 32),
    BOXKEY_RATIO_CLOCK_HWP_TGT =((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_HWP_TGT)<<32),
    BOXKEY_RATIO_CLOCK_HWP_MAX =((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_HWP_MAX)<<32),
    BOXKEY_RATIO_CLOCK_HWP_MIN =((BOXKEY_RATIO_CLOCK_OR|CLOCK_MOD_HWP_MIN)<<32),

	BOXKEY_RATIO_ACTIVATION =((BOXKEY_CFGTDP_CLOCK_OR|CLOCK_MOD_ACT) << 32),

	BOXKEY_UNCORE_CLOCK_MAX =((BOXKEY_UNCORE_CLOCK_OR|CLOCK_MOD_MAX) << 32),
	BOXKEY_UNCORE_CLOCK_MIN =((BOXKEY_UNCORE_CLOCK_OR|CLOCK_MOD_MIN) << 32)
};

#if defined(FEAT_DBG) && (FEAT_DBG >= 9) && (FEAT_DBG < 100)
#define CHECK_DUPLICATE_KEY(_val)		\
int CheckDuplicateKey(void)			\
{	enum KEY_ENUM _key = _val;		\
	switch (_key) { 			\
	case SORTBY_STATE:			\
	case SORTBY_RTIME:			\
	case SORTBY_UTIME:			\
	case SORTBY_STIME:			\
	case SORTBY_PID:			\
	case SORTBY_COMM:			\
						\
	case OPS_INTERVAL:			\
	case OPS_INTERVAL_100:			\
	case OPS_INTERVAL_150:			\
	case OPS_INTERVAL_250:			\
	case OPS_INTERVAL_500:			\
	case OPS_INTERVAL_750:			\
	case OPS_INTERVAL_1000: 		\
	case OPS_INTERVAL_1500: 		\
	case OPS_INTERVAL_2000: 		\
	case OPS_INTERVAL_2500: 		\
	case OPS_INTERVAL_3000: 		\
	case OPS_AUTOCLOCK:			\
	case OPS_AUTOCLOCK_OFF: 		\
	case OPS_AUTOCLOCK_ON:			\
	case OPS_EXPERIMENTAL:			\
	case OPS_EXPERIMENTAL_OFF:		\
	case OPS_EXPERIMENTAL_ON:		\
	case OPS_INTERRUPTS:			\
	case OPS_INTERRUPTS_OFF:		\
	case OPS_INTERRUPTS_ON: 		\
	case OPS_CPU_IDLE:			\
	case OPS_CPU_IDLE_OFF:			\
	case OPS_CPU_IDLE_ON:			\
	case OPS_CPU_FREQ:			\
	case OPS_CPU_FREQ_OFF:			\
	case OPS_CPU_FREQ_ON:			\
	case OPS_GOVERNOR:			\
	case OPS_GOVERNOR_OFF:			\
	case OPS_GOVERNOR_ON:			\
	case OPS_CLOCK_SOURCE:			\
	case OPS_CLOCK_SOURCE_1:		\
	case OPS_CLOCK_SOURCE_2:		\
	case OPS_CLOCK_SOURCE_3:		\
	case OPS_CLOCK_SOURCE_4:		\
	case OPS_CLOCK_SOURCE_5:		\
	case OPS_CLOCK_SOURCE_6:		\
	case OPS_CLOCK_SOURCE_7:		\
	case OPS_CLOCK_SOURCE_SEL:		\
	case OPS_CLOCK_SOURCE_OFF:		\
	case OPS_CLOCK_SOURCE_ON:		\
	case OPS_IDLE_ROUTE:			\
	case OPS_ROUTE_DFLT:			\
	case OPS_ROUTE_IO:			\
	case OPS_ROUTE_HALT:			\
	case OPS_ROUTE_MWAIT:			\
	case OPS_RECORDER:			\
	case OPS_RECORDER_RESET:		\
	case OPS_RECORDER_X002: 		\
	case OPS_RECORDER_X010: 		\
	case OPS_RECORDER_X020: 		\
	case OPS_RECORDER_X060: 		\
	case OPS_RECORDER_X090: 		\
	case OPS_RECORDER_X120: 		\
	case OPS_RECORDER_X240: 		\
	case OPS_THERMAL_SCOPE: 		\
	case OPS_VOLTAGE_SCOPE: 		\
	case OPS_POWER_SCOPE:			\
	case OPS_THERMAL_SCOPE_NONE:		\
	case OPS_THERMAL_SCOPE_SMT:		\
	case OPS_THERMAL_SCOPE_CORE:		\
	case OPS_THERMAL_SCOPE_PKG:		\
	case OPS_VOLTAGE_SCOPE_NONE:		\
	case OPS_VOLTAGE_SCOPE_SMT:		\
	case OPS_VOLTAGE_SCOPE_CORE:		\
	case OPS_VOLTAGE_SCOPE_PKG:		\
	case OPS_POWER_SCOPE_NONE:		\
	case OPS_POWER_SCOPE_SMT:		\
	case OPS_POWER_SCOPE_CORE:		\
	case OPS_POWER_SCOPE_PKG:		\
						\
	case BOXKEY_EIST:			\
	case BOXKEY_EIST_OFF:			\
	case BOXKEY_EIST_ON:			\
	case BOXKEY_C1E:			\
	case BOXKEY_C1E_OFF:			\
	case BOXKEY_C1E_ON:			\
	case BOXKEY_TURBO:			\
	case BOXKEY_TURBO_OFF:			\
	case BOXKEY_TURBO_ON:			\
	case BOXKEY_C1A:			\
	case BOXKEY_C1A_OFF:			\
	case BOXKEY_C1A_ON:			\
	case BOXKEY_C3A:			\
	case BOXKEY_C3A_OFF:			\
	case BOXKEY_C3A_ON:			\
	case BOXKEY_C1U:			\
	case BOXKEY_C1U_OFF:			\
	case BOXKEY_C1U_ON:			\
	case BOXKEY_C3U:			\
	case BOXKEY_C3U_OFF:			\
	case BOXKEY_C3U_ON:			\
	case BOXKEY_PKGCST:			\
	case BOXKEY_PKGCST_C0:			\
	case BOXKEY_PKGCST_C1:			\
	case BOXKEY_PKGCST_C2:			\
	case BOXKEY_PKGCST_C3:			\
	case BOXKEY_PKGCST_C4:			\
	case BOXKEY_PKGCST_C6:			\
	case BOXKEY_PKGCST_C6R: 		\
	case BOXKEY_PKGCST_C7:			\
	case BOXKEY_PKGCST_C7S: 		\
	case BOXKEY_PKGCST_C8:			\
	case BOXKEY_PKGCST_C9:			\
	case BOXKEY_PKGCST_C10: 		\
	case BOXKEY_IOMWAIT:			\
	case BOXKEY_IOMWAIT_OFF:		\
	case BOXKEY_IOMWAIT_ON: 		\
	case BOXKEY_IORCST:			\
	case BOXKEY_IORCST_C0:			\
	case BOXKEY_IORCST_C3:			\
	case BOXKEY_IORCST_C4:			\
	case BOXKEY_IORCST_C6:			\
	case BOXKEY_IORCST_C7:			\
	case BOXKEY_IORCST_C8:			\
	case BOXKEY_ODCM:			\
	case BOXKEY_ODCM_OFF:			\
	case BOXKEY_ODCM_ON:			\
	case BOXKEY_DUTYCYCLE:			\
	case BOXKEY_ODCM_DC00:			\
	case BOXKEY_ODCM_DC01:			\
	case BOXKEY_ODCM_DC02:			\
	case BOXKEY_ODCM_DC03:			\
	case BOXKEY_ODCM_DC04:			\
	case BOXKEY_ODCM_DC05:			\
	case BOXKEY_ODCM_DC06:			\
	case BOXKEY_ODCM_DC07:			\
	case BOXKEY_ODCM_DC08:			\
	case BOXKEY_ODCM_DC09:			\
	case BOXKEY_ODCM_DC10:			\
	case BOXKEY_ODCM_DC11:			\
	case BOXKEY_ODCM_DC12:			\
	case BOXKEY_ODCM_DC13:			\
	case BOXKEY_ODCM_DC14:			\
	case BOXKEY_PWR_POLICY: 		\
	case BOXKEY_PWR_POL00:			\
	case BOXKEY_PWR_POL01:			\
	case BOXKEY_PWR_POL02:			\
	case BOXKEY_PWR_POL03:			\
	case BOXKEY_PWR_POL04:			\
	case BOXKEY_PWR_POL05:			\
	case BOXKEY_PWR_POL06:			\
	case BOXKEY_PWR_POL07:			\
	case BOXKEY_PWR_POL08:			\
	case BOXKEY_PWR_POL09:			\
	case BOXKEY_PWR_POL10:			\
	case BOXKEY_PWR_POL11:			\
	case BOXKEY_PWR_POL12:			\
	case BOXKEY_PWR_POL13:			\
	case BOXKEY_PWR_POL14:			\
	case BOXKEY_PWR_POL15:			\
	case BOXKEY_CC6:			\
	case BOXKEY_CC6_OFF:			\
	case BOXKEY_CC6_ON:			\
	case BOXKEY_PC6:			\
	case BOXKEY_PC6_OFF:			\
	case BOXKEY_PC6_ON:			\
	case BOXKEY_HWP:			\
	case BOXKEY_HWP_ON:			\
	case BOXKEY_HWP_EPP:			\
	case BOXKEY_HWP_EPP_MIN:		\
	case BOXKEY_HWP_EPP_020:		\
	case BOXKEY_HWP_EPP_040:		\
	case BOXKEY_HWP_EPP_060:		\
	case BOXKEY_HWP_EPP_MED:		\
	case BOXKEY_HWP_EPP_0A0:		\
	case BOXKEY_HWP_EPP_PWR:		\
	case BOXKEY_HWP_EPP_0E0:		\
	case BOXKEY_HWP_EPP_MAX:		\
	case BOXKEY_FMW_CPPC:			\
	case BOXKEY_FMW_CPPC_OFF:		\
	case BOXKEY_HDC:			\
	case BOXKEY_HDC_OFF:			\
	case BOXKEY_HDC_ON:			\
	case BOXKEY_EEO:			\
	case BOXKEY_EEO_OFF:			\
	case BOXKEY_EEO_ON:			\
	case BOXKEY_R2H:			\
	case BOXKEY_R2H_OFF:			\
	case BOXKEY_R2H_ON:			\
	case BOXKEY_L1_HW_PREFETCH:		\
	case BOXKEY_L1_HW_PREFETCH_OFF: 	\
	case BOXKEY_L1_HW_PREFETCH_ON:		\
	case BOXKEY_L1_HW_IP_PREFETCH:		\
	case BOXKEY_L1_HW_IP_PREFETCH_OFF:	\
	case BOXKEY_L1_HW_IP_PREFETCH_ON:	\
	case BOXKEY_L1_SCRUBBING:		\
	case BOXKEY_L1_SCRUBBING_OFF:		\
	case BOXKEY_L1_SCRUBBING_ON:		\
	case BOXKEY_L2_HW_PREFETCH:		\
	case BOXKEY_L2_HW_PREFETCH_OFF: 	\
	case BOXKEY_L2_HW_PREFETCH_ON:		\
	case BOXKEY_L2_HW_CL_PREFETCH:		\
	case BOXKEY_L2_HW_CL_PREFETCH_OFF:	\
	case BOXKEY_L2_HW_CL_PREFETCH_ON:	\
	case BOXKEY_L2_AMP_PREFETCH:		\
	case BOXKEY_L2_AMP_PREFETCH_OFF:	\
	case BOXKEY_L2_AMP_PREFETCH_ON: 	\
	case BOXKEY_L1_STRIDE_PREFETCH: 	\
	case BOXKEY_L1_STRIDE_PF_OFF:		\
	case BOXKEY_L1_STRIDE_PF_ON:		\
	case BOXKEY_L1_REGION_PREFETCH: 	\
	case BOXKEY_L1_REGION_PF_OFF:		\
	case BOXKEY_L1_REGION_PF_ON:		\
	case BOXKEY_L1_BURST_PREFETCH:		\
	case BOXKEY_L1_BURST_PF_OFF:		\
	case BOXKEY_L1_BURST_PF_ON:		\
	case BOXKEY_L1_NPP_PREFETCH:		\
	case BOXKEY_L1_NPP_PREFETCH_OFF:	\
	case BOXKEY_L1_NPP_PREFETCH_ON: 	\
	case BOXKEY_L2_STREAM_HW_PREFETCH:	\
	case BOXKEY_L2_STREAM_HW_PF_OFF:	\
	case BOXKEY_L2_STREAM_HW_PF_ON:		\
	case BOXKEY_L2_UPDOWN_PREFETCH:		\
	case BOXKEY_L2_UPDOWN_PF_OFF:		\
	case BOXKEY_L2_UPDOWN_PF_ON:		\
	case BOXKEY_L2_NLP_PREFETCH:		\
	case BOXKEY_L2_NLP_PREFETCH_OFF:	\
	case BOXKEY_L2_NLP_PREFETCH_ON: 	\
	case BOXKEY_LLC_STREAMER:		\
	case BOXKEY_LLC_STREAMER_OFF:		\
	case BOXKEY_LLC_STREAMER_ON:		\
	case BOXKEY_CFG_TDP_LVL:		\
	case BOXKEY_CFG_TDP_LVL0:		\
	case BOXKEY_CFG_TDP_LVL1:		\
	case BOXKEY_CFG_TDP_LVL2:		\
	case BOXKEY_WDT:			\
	case BOXKEY_WDT_OFF:			\
	case BOXKEY_WDT_ON:			\
	case BOXKEY_HSMP:			\
	case BOXKEY_HSMP_OFF:			\
	case BOXKEY_HSMP_ON:			\
						\
	case BOXKEY_TOOLS_MACHINE:		\
	case BOXKEY_TOOLS_ATOMIC:		\
	case BOXKEY_TOOLS_CRC32:		\
	case BOXKEY_TOOLS_CONIC:		\
	case BOXKEY_TOOLS_CONIC0:		\
	case BOXKEY_TOOLS_CONIC1:		\
	case BOXKEY_TOOLS_CONIC2:		\
	case BOXKEY_TOOLS_CONIC3:		\
	case BOXKEY_TOOLS_CONIC4:		\
	case BOXKEY_TOOLS_CONIC5:		\
	case BOXKEY_TOOLS_TURBO_RND:		\
	case BOXKEY_TOOLS_TURBO_RR:		\
	case BOXKEY_TOOLS_TURBO_CPU:		\
	case BOXKEY_TOOLS_MONTE_CARLO:		\
						\
	case BOXKEY_LANG_ENGLISH:		\
	case BOXKEY_LANG_FRENCH:		\
	case BOXKEY_THEME_DFLT: 		\
	case BOXKEY_THEME_USR1: 		\
	case BOXKEY_THEME_USR2: 		\
						\
	case BOXKEY_LIMIT_IDLE_STATE:		\
	case BOXKEY_LIMIT_IDLE_ST00:		\
	case BOXKEY_LIMIT_IDLE_ST01:		\
	case BOXKEY_LIMIT_IDLE_ST02:		\
	case BOXKEY_LIMIT_IDLE_ST03:		\
	case BOXKEY_LIMIT_IDLE_ST04:		\
	case BOXKEY_LIMIT_IDLE_ST05:		\
	case BOXKEY_LIMIT_IDLE_ST06:		\
	case BOXKEY_LIMIT_IDLE_ST07:		\
	case BOXKEY_LIMIT_IDLE_ST08:		\
	case BOXKEY_LIMIT_IDLE_ST09:		\
	case BOXKEY_LIMIT_IDLE_ST10:		\
						\
	case BOXKEY_CLR_ALL_EVENTS:		\
	case BOXKEY_CLR_THM_SENSOR:		\
	case BOXKEY_CLR_PROCHOT_LOG:		\
	case BOXKEY_CLR_THM_CRIT:		\
	case BOXKEY_CLR_THM_THOLD1:		\
	case BOXKEY_CLR_THM_THOLD2:		\
	case BOXKEY_CLR_PWR_LIMIT:		\
	case BOXKEY_CLR_CUR_LIMIT:		\
	case BOXKEY_CLR_X_DOMAIN:		\
	case BOXKEY_CLR_CORE_HOT:		\
	case BOXKEY_CLR_CORE_THM:		\
	case BOXKEY_CLR_CORE_RES:		\
	case BOXKEY_CLR_CORE_AVG:		\
	case BOXKEY_CLR_CORE_VRT:		\
	case BOXKEY_CLR_CORE_TDC:		\
	case BOXKEY_CLR_CORE_PL1:		\
	case BOXKEY_CLR_CORE_PL2:		\
	case BOXKEY_CLR_CORE_EDP:		\
	case BOXKEY_CLR_CORE_BST:		\
	case BOXKEY_CLR_CORE_ATT:		\
	case BOXKEY_CLR_CORE_TVB:		\
	case BOXKEY_CLR_GFX_HOT:		\
	case BOXKEY_CLR_GFX_THM:		\
	case BOXKEY_CLR_GFX_AVG:		\
	case BOXKEY_CLR_GFX_VRT:		\
	case BOXKEY_CLR_GFX_TDC:		\
	case BOXKEY_CLR_GFX_PL1:		\
	case BOXKEY_CLR_GFX_PL2:		\
	case BOXKEY_CLR_GFX_EDP:		\
	case BOXKEY_CLR_GFX_EFF:		\
	case BOXKEY_CLR_RING_HOT:		\
	case BOXKEY_CLR_RING_THM:		\
	case BOXKEY_CLR_RING_AVG:		\
	case BOXKEY_CLR_RING_VRT:		\
	case BOXKEY_CLR_RING_TDC:		\
	case BOXKEY_CLR_RING_PL1:		\
	case BOXKEY_CLR_RING_PL2:		\
	case BOXKEY_CLR_RING_EDP:		\
						\
	case BOXKEY_TDP_PKG:			\
	case BOXKEY_TDP_CORES:			\
	case BOXKEY_TDP_UNCORE: 		\
	case BOXKEY_TDP_RAM:			\
	case BOXKEY_TDP_PLATFORM:		\
						\
	case BOXKEY_PL1_PKG_LIM_ON:		\
	case BOXKEY_PL1_PKG_LIM_OFF:		\
	case BOXKEY_PL1_CORE_LIM_ON:		\
	case BOXKEY_PL1_CORE_LIM_OFF:		\
	case BOXKEY_PL1_UNCORE_LIM_ON:		\
	case BOXKEY_PL1_UNCORE_LIM_OFF: 	\
	case BOXKEY_PL1_RAM_LIM_ON:		\
	case BOXKEY_PL1_RAM_LIM_OFF:		\
	case BOXKEY_PL1_PLT_LIM_ON:		\
	case BOXKEY_PL1_PLT_LIM_OFF:		\
	case BOXKEY_PL2_PKG_LIM_ON:		\
	case BOXKEY_PL2_PKG_LIM_OFF:		\
	case BOXKEY_PL2_CORE_LIM_ON:		\
	case BOXKEY_PL2_CORE_LIM_OFF:		\
	case BOXKEY_PL2_UNCORE_LIM_ON:		\
	case BOXKEY_PL2_UNCORE_LIM_OFF: 	\
	case BOXKEY_PL2_RAM_LIM_ON:		\
	case BOXKEY_PL2_RAM_LIM_OFF:		\
	case BOXKEY_PL2_PLT_LIM_ON:		\
	case BOXKEY_PL2_PLT_LIM_OFF:		\
						\
	case BOXKEY_PL1_PKG_CLAMP_ON:		\
	case BOXKEY_PL1_PKG_CLAMP_OFF:		\
	case BOXKEY_PL1_CORE_CLAMP_ON:		\
	case BOXKEY_PL1_CORE_CLAMP_OFF: 	\
	case BOXKEY_PL1_UNCORE_CLAMP_ON:	\
	case BOXKEY_PL1_UNCORE_CLAMP_OFF:	\
	case BOXKEY_PL1_RAM_CLAMP_ON:		\
	case BOXKEY_PL1_RAM_CLAMP_OFF:		\
	case BOXKEY_PL1_PLT_CLAMP_ON:		\
	case BOXKEY_PL1_PLT_CLAMP_OFF:		\
	case BOXKEY_PL2_PKG_CLAMP_ON:		\
	case BOXKEY_PL2_PKG_CLAMP_OFF:		\
	case BOXKEY_PL2_CORE_CLAMP_ON:		\
	case BOXKEY_PL2_CORE_CLAMP_OFF: 	\
	case BOXKEY_PL2_UNCORE_CLAMP_ON:	\
	case BOXKEY_PL2_UNCORE_CLAMP_OFF:	\
	case BOXKEY_PL2_RAM_CLAMP_ON:		\
	case BOXKEY_PL2_RAM_CLAMP_OFF:		\
	case BOXKEY_PL2_PLT_CLAMP_ON:		\
	case BOXKEY_PL2_PLT_CLAMP_OFF:		\
						\
	case BOXKEY_TW1_PKG:			\
	case BOXKEY_TW1_CORES:			\
	case BOXKEY_TW1_UNCORE: 		\
	case BOXKEY_TW1_RAM:			\
	case BOXKEY_TW1_PLATFORM:		\
	case BOXKEY_TW2_PKG:			\
	case BOXKEY_TW2_CORES:			\
	case BOXKEY_TW2_UNCORE:			\
	case BOXKEY_TW2_RAM:			\
	case BOXKEY_TW2_PLATFORM:		\
						\
	case BOXKEY_TDC:			\
	case BOXKEY_TDC_ON:			\
	case BOXKEY_TDC_OFF:			\
						\
	case BOXKEY_THM:			\
						\
	case BOXKEY_TURBO_CLOCK_1C:		\
	case BOXKEY_TURBO_CLOCK_2C:		\
	case BOXKEY_TURBO_CLOCK_3C:		\
	case BOXKEY_TURBO_CLOCK_4C:		\
	case BOXKEY_TURBO_CLOCK_5C:		\
	case BOXKEY_TURBO_CLOCK_6C:		\
	case BOXKEY_TURBO_CLOCK_7C:		\
	case BOXKEY_TURBO_CLOCK_8C:		\
	case BOXKEY_TURBO_CLOCK_9C:		\
	case BOXKEY_TURBO_CLOCK_10C:		\
	case BOXKEY_TURBO_CLOCK_11C:		\
	case BOXKEY_TURBO_CLOCK_12C:		\
	case BOXKEY_TURBO_CLOCK_13C:		\
	case BOXKEY_TURBO_CLOCK_14C:		\
	case BOXKEY_TURBO_CLOCK_15C:		\
	case BOXKEY_TURBO_CLOCK_16C:		\
	case BOXKEY_TURBO_CLOCK_17C:		\
	case BOXKEY_TURBO_CLOCK_18C:		\
						\
	case BOXKEY_RATIO_CLOCK_TGT:		\
	case BOXKEY_RATIO_CLOCK_MAX:		\
	case BOXKEY_RATIO_CLOCK_MIN:		\
	case BOXKEY_RATIO_CLOCK_HWP_TGT:	\
	case BOXKEY_RATIO_CLOCK_HWP_MAX:	\
	case BOXKEY_RATIO_CLOCK_HWP_MIN:	\
						\
	case BOXKEY_RATIO_ACTIVATION:		\
						\
	case BOXKEY_UNCORE_CLOCK_MAX:		\
	case BOXKEY_UNCORE_CLOCK_MIN:		\
		return 0;			\
	}					\
	return -1;				\
}
#else
#define CHECK_DUPLICATE_KEY(_val)
#endif /* FEAT_DBG */

#define POWERED(bit)	( (bit) ? (char*) RSC(PRESENT).CODE()		\
				: (char*) RSC(MISSING).CODE() )

#define ENABLED(bit)	( (bit) ? (char*) RSC(ON).CODE()		\
				: (char*) RSC(OFF).CODE() )

#define MARGIN_WIDTH	2
#define MARGIN_HEIGHT	1
#define INTER_WIDTH	3
#define INTER_HEIGHT	(3 + 1)
#define LEADING_LEFT	(MIN_WIDTH / (MARGIN_WIDTH + (4 * INTER_WIDTH)))
#define LEADING_TOP	1

#define LOAD_LEAD	4

typedef struct {
	Coordinate	origin;
	CUINT		length;
	ATTRIBUTE	*attr;
	ASCII		*code;
} LAYER_DECL_ST;

#define LayerDeclare(_ID, _len, _col, _row, _var)			\
	LAYER_DECL_ST _var = {						\
			.origin = {					\
				.col = _col,				\
				.row = _row				\
		},							\
			.length = _len,					\
			.attr = RSC(_ID).ATTR(),			\
			.code = RSC(_ID).CODE() 			\
	}

typedef char HBCLK[11 + 1];

enum DISPOSAL {
	D_MAINVIEW,
	D_DASHBOARD,
	D_ASCIITEST
};

#define DISPOSAL_SIZE	(1 + D_ASCIITEST)

enum VIEW {
	V_FREQ,
	V_INST,
	V_CYCLES,
	V_CSTATES,
	V_PACKAGE,
	V_TASKS,
	V_INTR,
	V_SENSORS,
	V_VOLTAGE,
	V_ENERGY,
	V_SLICE,
	V_CUSTOM
};

#define VIEW_SIZE	(1 + V_CUSTOM)

typedef void (*DISPOSAL_FUNC)(Layer*);

typedef CUINT (*VIEW_FUNC)(Layer*, const unsigned int, CUINT);

#define CELL_ARGS	Window *win,					\
			unsigned long long key, 			\
			ATTRIBUTE *attrib,				\
			ASCII *item,					\
			unsigned int *cellPadding

typedef TGrid* (*CELL_FUNC)(CELL_ARGS);
typedef void (*CPU_ITEM_CALLBACK)(unsigned int, ASCII*);
typedef void (*PKG_ITEM_CALLBACK)(ASCII*);
typedef void (*UPDATE_CALLBACK)(TGrid*, DATA_TYPE[]);

#define RENDER_OK	0x000
#define RENDER_KO	0x010
#define RENDER_OFF	0x100

#define RECORDER_DEFAULT 30

#define RECORDER_COMPUTE(_recorder, _interval)				\
({									\
	_recorder.Reset = (	(_recorder.Ratios[_recorder.Select]	\
				* RECORDER_DEFAULT			\
				* 1000) / _interval );			\
})

#define RECORDER_SECONDS(_tick, _interval)				\
	((_interval * _tick) / 1000)

#if defined(UBENCH) && UBENCH == 1
  #define Draw_uBenchmark(layer)					\
  ({									\
    if (Draw.Flag.uBench) {						\
	int len = snprintf(Buffer, 20+1, "%llu", UBENCH_METRIC(0));	\
	if (len > 0)							\
		LayerFillAt(	layer, 0, 0, len, Buffer,		\
				RSC(UI).ATTR()[UI_LAYOUT_UBENCH] );	\
    }									\
  })
#else
  #define Draw_uBenchmark(layer) {}
#endif /* UBENCH */

struct SETTING_ST {
	unsigned int
	fahrCels:  1-0, /* 0:Celsius || 1:Fahrenheit	*/
	jouleWatt: 2-1, /* 0:Joule || 1:Watt		*/
	secret	:  3-2, /* 0:Show || 1:Hide Secret Data */
	_padding: 32-3;
};

struct RULER_ST {
	double		Minimum,
			Maximum,
			Median;

	unsigned int	Top[BOOST(SIZE)],
			Uniq[BOOST(SIZE)],
			Count;
    struct TOPOF {
	unsigned int	Top;
	enum RATIO_BOOST Boost;
    } TopOf;
};

struct DRAW_ST {
    struct {
    #ifndef NO_HEADER
	double		TopAvg;
    #endif
    #ifndef NO_FOOTER
	unsigned long	FreeRAM;
	int		procCount;
    #endif
    } Cache;
    struct {
	unsigned int
		layout	:  1-0 ,	/* Draw layout			*/
		clear	:  2-1 ,	/* Clear screen 		*/
		height	:  3-2 ,	/* Valid height 		*/
		width	:  4-3 ,	/* Valid width			*/
		daemon	:  5-4 ,	/* Draw dynamic 		*/
		taskVal :  6-5 ,	/* Display task's value 	*/
		avgOrPC :  7-6 ,	/* C-states average || % pkg states */
		clkOrLd :  8-7 ,	/* Relative freq. || % load	*/
	    #if defined(UBENCH) && UBENCH == 1
		uBench	:  9-8 ,	/* Display UI micro-benchmark	*/
	    #endif
		_padding: 32-9 ;
    } Flag;
	enum VIEW	View;
	enum DISPOSAL	Disposal;
	SCREEN_SIZE	Size;
    struct {
		CUINT	MinHeight;
		CUINT	MaxRows;
		CUINT	LoadWidth;
    #ifndef NO_FOOTER
	struct {
	    struct {
		CUINT	Hot[2];
	    } VoltTemp;
	    struct {
		CUINT	Count,
			Free,
			Total;
	    } TaskMem;
	} Footer;
    #endif
    } Area;
	unsigned int	iClock,
			cpuScroll,
			Load;
    struct {
	unsigned int	Memory;
    } Unit;
	enum SMB_STRING SmbIndex;
	enum THEMES	Theme;
    #ifndef NO_UPPER
	BitCC		garbage;
    #endif /* NO_UPPER */
};

struct RECORDER_ST {
	unsigned int	Reset,
			Select,
			Ratios[];
};

#define HOT_LOG_EVENT_FILTER (	EVENT_PROCHOT_LOG	\
			|	EVENT_CRITIC_LOG	\
			|	EVENT_CORE_HOT_LOG	\
			|	EVENT_GFX_HOT_LOG	\
			|	EVENT_RING_HOT_LOG	)

#define HOT_STS_EVENT_FILTER (	EVENT_THERMAL_STS	\
			|	EVENT_PROCHOT_STS	\
			|	EVENT_CRITIC_TMP	\
			|	EVENT_THOLD1_STS	\
			|	EVENT_THOLD2_STS	\
			|	EVENT_CORE_THM_STS	\
			|	EVENT_CORE_HOT_STS	\
			|	EVENT_GFX_THM_STS	\
			|	EVENT_GFX_HOT_STS	\
			|	EVENT_RING_THM_STS	\
			|	EVENT_RING_HOT_STS	)

#define STATUS_EVENT_FILTER (	EVENT_THERMAL_STS	\
			|	EVENT_PROCHOT_STS	\
			|	EVENT_CRITIC_TMP	\
			|	EVENT_THOLD1_STS	\
			|	EVENT_THOLD2_STS	)
