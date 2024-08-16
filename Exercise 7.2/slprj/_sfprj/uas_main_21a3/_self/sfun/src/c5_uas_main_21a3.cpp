/* Include files */

#include "uas_main_21a3_sfun.h"
#include "c5_uas_main_21a3.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
const int32_T CALL_EVENT = -1;

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c5_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c5_b_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c5_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c5_d_emlrtMCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "D:\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pName */
};

static emlrtRSInfo c5_emlrtRSI = { 50, /* lineNo */
  "quat2eul",                          /* fcnName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 107,/* lineNo */
  "quat2eul",                          /* fcnName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 108,/* lineNo */
  "quat2eul",                          /* fcnName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 109,/* lineNo */
  "quat2eul",                          /* fcnName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 15,/* lineNo */
  "normalizeRows",                     /* fcnName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "D:\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 4,/* lineNo */
  "receive position1/MATLAB Function", /* fcnName */
  "#uas_main_21a3:2225"                /* pathName */
};

static emlrtRTEInfo c5_emlrtRTEI = { 111,/* lineNo */
  29,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c5_b_emlrtRTEI = { 111,/* lineNo */
  60,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c5_c_emlrtRTEI = { 111,/* lineNo */
  72,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c5_d_emlrtRTEI = { 111,/* lineNo */
  54,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtRTEInfo c5_e_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "ixfun",                             /* fName */
  "D:\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c5_f_emlrtRTEI = { 236,/* lineNo */
  26,                                  /* colNo */
  "ixfun",                             /* fName */
  "D:\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c5_g_emlrtRTEI = { 236,/* lineNo */
  5,                                   /* colNo */
  "ixfun",                             /* fName */
  "D:\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c5_h_emlrtRTEI = { 163,/* lineNo */
  14,                                  /* colNo */
  "ixfun",                             /* fName */
  "D:\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtRTEInfo c5_i_emlrtRTEI = { 111,/* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c5_emlrtECI = { 1,  /* nDims */
  111,                                 /* lineNo */
  24,                                  /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

static emlrtECInfo c5_b_emlrtECI = { -1,/* nDims */
  111,                                 /* lineNo */
  9,                                   /* colNo */
  "quat2eul",                          /* fName */
  "D:\\MATLAB\\toolbox\\shared\\robotics\\robotutils\\quat2eul.m"/* pName */
};

/* Function Declarations */
static void initialize_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void initialize_params_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct *
  chartInstance);
static void mdl_start_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void mdl_terminate_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static void enable_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void disable_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void sf_gateway_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void ext_mode_exec_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void c5_update_jit_animation_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static void c5_do_animation_call_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static void set_sim_state_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_st);
static void initSimStructsc5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void initSubchartIOPointersc5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance);
static real_T c5_sumColumnB(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  real_T c5_x[4]);
static real_T c5_function_handle_parenReference(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_varargin_2);
static void c5_expand_atan2(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  real_T c5_a_data[], int32_T c5_a_size[1], real_T c5_b_data[], int32_T
  c5_b_size[1], real_T c5_c_data[], int32_T c5_c_size[1]);
static void c5_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  const mxArray *c5_b_y, const char_T *c5_identifier, real_T c5_c_y[3]);
static void c5_b_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_b_y[3]);
static uint8_T c5_c_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_uas_main_21a3, const char_T
  *c5_identifier);
static uint8_T c5_d_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_slStringInitializeDynamicBuffers(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void c5_chart_data_browse_helper(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig);
static void c5_times(SFc5_uas_main_21a3InstanceStruct *chartInstance, real_T
                     c5_in1_data[], int32_T c5_in1_size[1], real_T c5_in2_data[],
                     int32_T c5_in2_size[1]);
static void init_dsm_address_info(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_uas_main_21a3InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_is_active_c5_uas_main_21a3 = 0U;
}

static void initialize_params_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct *
  chartInstance)
{
}

static void mdl_start_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
}

static void mdl_setup_runtime_resources_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
  static const uint32_T c5_decisionTxtEndIdx = 0U;
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c5_chart_data_browse_helper);
  chartInstance->c5_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c5_RuntimeVar,
    &chartInstance->c5_IsDebuggerActive,
    &chartInstance->c5_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c5_mlFcnLineNumber, &chartInstance->c5_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    23U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 89);
}

static void mdl_cleanup_runtime_resources_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c5_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void enable_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  static char_T c5_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c5_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c5_cv1[4] = { 's', 'q', 'r', 't' };

  static char_T c5_cv3[4] = { 'a', 's', 'i', 'n' };

  c5_quaternion c5_q;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c5_f_y = NULL;
  const mxArray *c5_g_y = NULL;
  const mxArray *c5_h_y = NULL;
  const mxArray *c5_v_y = NULL;
  const mxArray *c5_x_y = NULL;
  const mxArray *c5_y_y = NULL;
  real_T c5_b_q[4];
  real_T c5_d_y[4];
  real_T c5_bb_y[3];
  real_T c5_b_x_data[1];
  real_T c5_c_tmp_data[1];
  real_T c5_dv[1];
  real_T c5_dv1[1];
  real_T c5_x_data[1];
  real_T c5_y_data[1];
  real_T c5_a;
  real_T c5_aSinInput;
  real_T c5_ab_a;
  real_T c5_ab_y;
  real_T c5_arg1;
  real_T c5_arg2;
  real_T c5_arg3;
  real_T c5_arg4;
  real_T c5_b;
  real_T c5_b_a;
  real_T c5_b_arg1;
  real_T c5_b_arg2;
  real_T c5_b_arg3;
  real_T c5_b_arg4;
  real_T c5_b_b;
  real_T c5_b_r;
  real_T c5_b_x;
  real_T c5_b_y;
  real_T c5_bb_a;
  real_T c5_c_a;
  real_T c5_c_arg1;
  real_T c5_c_arg2;
  real_T c5_c_arg3;
  real_T c5_c_arg4;
  real_T c5_c_b;
  real_T c5_c_x;
  real_T c5_c_y;
  real_T c5_cb_a;
  real_T c5_d_a;
  real_T c5_d_b;
  real_T c5_d_x;
  real_T c5_db_a;
  real_T c5_e_a;
  real_T c5_e_b;
  real_T c5_e_x;
  real_T c5_e_y;
  real_T c5_eb_a;
  real_T c5_f_a;
  real_T c5_f_x;
  real_T c5_fb_a;
  real_T c5_g_a;
  real_T c5_g_b;
  real_T c5_g_x;
  real_T c5_gb_a;
  real_T c5_h_a;
  real_T c5_h_x;
  real_T c5_hb_a;
  real_T c5_i_x;
  real_T c5_i_y;
  real_T c5_ib_a;
  real_T c5_j_a;
  real_T c5_j_x;
  real_T c5_j_y;
  real_T c5_jb_a;
  real_T c5_k_a;
  real_T c5_k_x;
  real_T c5_k_y;
  real_T c5_kb_a;
  real_T c5_m_a;
  real_T c5_m_x;
  real_T c5_m_y;
  real_T c5_mb_a;
  real_T c5_o_a;
  real_T c5_o_x;
  real_T c5_o_y;
  real_T c5_ob_a;
  real_T c5_p_a;
  real_T c5_p_y;
  real_T c5_q_a;
  real_T c5_qw;
  real_T c5_qx;
  real_T c5_qy;
  real_T c5_qz;
  real_T c5_r;
  real_T c5_r_a;
  real_T c5_r_y;
  real_T c5_s_a;
  real_T c5_s_y;
  real_T c5_t_a;
  real_T c5_t_y;
  real_T c5_u_a;
  real_T c5_u_y;
  real_T c5_v_a;
  real_T c5_varargin_1;
  real_T c5_varargin_2;
  real_T c5_varargin_3;
  real_T c5_varargin_4;
  real_T c5_w;
  real_T c5_w_a;
  real_T c5_w_y;
  real_T c5_x;
  real_T c5_x_a;
  real_T c5_y_a;
  real_T c5_z;
  int32_T c5_tmp_size[2];
  int32_T c5_b_tmp_data[1];
  int32_T c5_b_tmp_size[1];
  int32_T c5_b_x_size[1];
  int32_T c5_c_tmp_size[1];
  int32_T c5_d_trueCount[1];
  int32_T c5_f_trueCount[1];
  int32_T c5_iv[1];
  int32_T c5_iv1[1];
  int32_T c5_tmp_data[1];
  int32_T c5_x_size[1];
  int32_T c5_y_size[1];
  int32_T c5_b_end;
  int32_T c5_b_i;
  int32_T c5_b_k;
  int32_T c5_b_loop_ub;
  int32_T c5_b_nx;
  int32_T c5_b_partialTrueCount;
  int32_T c5_b_trueCount;
  int32_T c5_b_varargin_1;
  int32_T c5_b_varargin_2;
  int32_T c5_b_varargin_4;
  int32_T c5_c_end;
  int32_T c5_c_i;
  int32_T c5_c_k;
  int32_T c5_c_loop_ub;
  int32_T c5_c_partialTrueCount;
  int32_T c5_c_trueCount;
  int32_T c5_c_varargin_2;
  int32_T c5_d_end;
  int32_T c5_d_i;
  int32_T c5_d_k;
  int32_T c5_d_loop_ub;
  int32_T c5_e_end;
  int32_T c5_e_i;
  int32_T c5_e_loop_ub;
  int32_T c5_e_trueCount;
  int32_T c5_end;
  int32_T c5_f_end;
  int32_T c5_f_i;
  int32_T c5_f_loop_ub;
  int32_T c5_g_end;
  int32_T c5_g_i;
  int32_T c5_g_loop_ub;
  int32_T c5_g_trueCount;
  int32_T c5_h_i;
  int32_T c5_h_loop_ub;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_ia;
  int32_T c5_ic;
  int32_T c5_j_i;
  int32_T c5_k;
  int32_T c5_k_i;
  int32_T c5_loop_ub;
  int32_T c5_m_i;
  int32_T c5_partialTrueCount;
  int32_T c5_trueCount;
  boolean_T c5_b_b1;
  boolean_T c5_b_p;
  boolean_T c5_c_p;
  boolean_T c5_d_p;
  boolean_T c5_e_p;
  boolean_T c5_f_b;
  boolean_T c5_mask1;
  boolean_T c5_mask2;
  boolean_T c5_p;
  boolean_T c5_samesize;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c5_i = 0; c5_i < 4; c5_i++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U, (*chartInstance->c5_u)
                      [c5_i]);
  }

  chartInstance->c5_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  c5_varargin_1 = (*chartInstance->c5_u)[0];
  c5_varargin_2 = (*chartInstance->c5_u)[1];
  c5_varargin_3 = (*chartInstance->c5_u)[2];
  c5_varargin_4 = (*chartInstance->c5_u)[3];
  c5_arg1 = c5_varargin_1;
  c5_arg2 = c5_varargin_2;
  c5_arg3 = c5_varargin_3;
  c5_arg4 = c5_varargin_4;
  c5_b_arg1 = c5_arg1;
  c5_b_arg2 = c5_arg2;
  c5_b_arg3 = c5_arg3;
  c5_b_arg4 = c5_arg4;
  c5_c_arg4 = c5_b_arg4;
  c5_c_arg3 = c5_b_arg3;
  c5_c_arg2 = c5_b_arg2;
  c5_c_arg1 = c5_b_arg1;
  c5_q.a = c5_c_arg1;
  c5_q.b = c5_c_arg2;
  c5_q.c = c5_c_arg3;
  c5_q.d = c5_c_arg4;
  c5_b_st.site = &c5_g_emlrtRSI;
  c5_w = c5_q.a;
  c5_x = c5_q.b;
  c5_b_y = c5_q.c;
  c5_z = c5_q.d;
  c5_b_q[0] = c5_w;
  c5_b_q[1] = c5_x;
  c5_b_q[2] = c5_b_y;
  c5_b_q[3] = c5_z;
  c5_c_st.site = &c5_emlrtRSI;
  for (c5_k = 0; c5_k < 4; c5_k++) {
    c5_b_k = c5_k;
    c5_a = c5_b_q[c5_b_k];
    c5_e_y = c5_a * c5_a;
    c5_d_y[c5_b_k] = c5_e_y;
  }

  c5_c_y = c5_sumColumnB(chartInstance, c5_d_y);
  c5_d_st.site = &c5_e_emlrtRSI;
  c5_b_x = c5_c_y;
  c5_c_x = c5_b_x;
  c5_d_x = c5_c_x;
  if (c5_d_x < 0.0) {
    c5_p = true;
  } else {
    c5_p = false;
  }

  c5_b_p = c5_p;
  if (c5_b_p) {
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_g_y = NULL;
    sf_mex_assign(&c5_g_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_h_y = NULL;
    sf_mex_assign(&c5_h_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c5_d_st, &c5_b_emlrtMCI, "error", 0U, 2U, 14, c5_f_y, 14,
                sf_mex_call(&c5_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_d_st, NULL, "message", 1U, 2U, 14, c5_g_y, 14, c5_h_y)));
  }

  c5_c_x = muDoubleScalarSqrt(c5_c_x);
  c5_b = 1.0 / c5_c_x;
  for (c5_i1 = 0; c5_i1 < 4; c5_i1++) {
    c5_d_y[c5_i1] = c5_b_q[c5_i1];
  }

  c5_b_b = c5_b;
  for (c5_c_k = 0; c5_c_k < 4; c5_c_k++) {
    c5_ia = c5_c_k;
    c5_ic = c5_c_k;
    c5_c_b = c5_b_b;
    c5_b_varargin_1 = c5_ic + 1;
    c5_b_varargin_2 = c5_ia + 1;
    c5_d_b = c5_c_b;
    c5_c_varargin_2 = c5_b_varargin_1 - 1;
    c5_b_varargin_4 = c5_b_varargin_2 - 1;
    c5_b_q[c5_c_varargin_2] = c5_d_y[c5_b_varargin_4] * c5_d_b;
  }

  c5_qw = c5_b_q[0];
  c5_qx = c5_b_q[1];
  c5_qy = c5_b_q[2];
  c5_qz = c5_b_q[3];
  c5_aSinInput = 2.0 * (c5_qx * c5_qz + c5_qy * c5_qw);
  c5_mask1 = (c5_aSinInput >= 0.99999999999999778);
  c5_mask2 = (c5_aSinInput <= -0.99999999999999778);
  c5_dv[0] = c5_aSinInput;
  c5_end = 1;
  for (c5_b_i = 0; c5_b_i < c5_end; c5_b_i++) {
    if (c5_aSinInput >= 0.99999999999999778) {
      c5_dv[c5_b_i] = 1.0;
    }
  }

  c5_aSinInput = c5_dv[0];
  c5_dv1[0] = c5_aSinInput;
  c5_b_end = 1;
  for (c5_c_i = 0; c5_c_i < c5_b_end; c5_c_i++) {
    if (c5_mask2) {
      c5_dv1[c5_c_i] = -1.0;
    }
  }

  c5_aSinInput = c5_dv1[0];
  c5_c_st.site = &c5_b_emlrtRSI;
  c5_b_a = c5_qw;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_c_a = c5_b_a;
  c5_d_a = c5_c_a;
  c5_e_a = c5_d_a;
  c5_i_y = c5_e_a * c5_e_a;
  c5_c_st.site = &c5_b_emlrtRSI;
  c5_f_a = c5_qx;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_g_a = c5_f_a;
  c5_h_a = c5_g_a;
  c5_j_a = c5_h_a;
  c5_j_y = c5_j_a * c5_j_a;
  c5_c_st.site = &c5_b_emlrtRSI;
  c5_k_a = c5_qy;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_m_a = c5_k_a;
  c5_o_a = c5_m_a;
  c5_p_a = c5_o_a;
  c5_k_y = c5_p_a * c5_p_a;
  c5_c_st.site = &c5_b_emlrtRSI;
  c5_q_a = c5_qz;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_r_a = c5_q_a;
  c5_s_a = c5_r_a;
  c5_t_a = c5_s_a;
  c5_m_y = c5_t_a * c5_t_a;
  c5_c_st.site = &c5_d_emlrtRSI;
  c5_u_a = c5_qw;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_v_a = c5_u_a;
  c5_w_a = c5_v_a;
  c5_x_a = c5_w_a;
  c5_o_y = c5_x_a * c5_x_a;
  c5_c_st.site = &c5_d_emlrtRSI;
  c5_y_a = c5_qx;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_ab_a = c5_y_a;
  c5_bb_a = c5_ab_a;
  c5_cb_a = c5_bb_a;
  c5_p_y = c5_cb_a * c5_cb_a;
  c5_c_st.site = &c5_d_emlrtRSI;
  c5_db_a = c5_qy;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_eb_a = c5_db_a;
  c5_fb_a = c5_eb_a;
  c5_gb_a = c5_fb_a;
  c5_r_y = c5_gb_a * c5_gb_a;
  c5_c_st.site = &c5_d_emlrtRSI;
  c5_hb_a = c5_qz;
  c5_d_st.site = &c5_f_emlrtRSI;
  c5_ib_a = c5_hb_a;
  c5_jb_a = c5_ib_a;
  c5_kb_a = c5_jb_a;
  c5_s_y = c5_kb_a * c5_kb_a;
  c5_t_y = -2.0 * (c5_qy * c5_qz - c5_qx * c5_qw);
  c5_e_x = ((c5_i_y - c5_j_y) - c5_k_y) + c5_m_y;
  c5_mb_a = c5_t_y;
  c5_e_b = c5_e_x;
  c5_u_y = c5_mb_a;
  c5_f_x = c5_e_b;
  c5_r = muDoubleScalarAtan2(c5_u_y, c5_f_x);
  c5_c_st.site = &c5_c_emlrtRSI;
  c5_g_x = c5_aSinInput;
  c5_h_x = c5_g_x;
  c5_i_x = c5_h_x;
  c5_f_b = (c5_i_x < -1.0);
  c5_b_b1 = (c5_i_x > 1.0);
  if (c5_f_b || c5_b_b1) {
    c5_c_p = true;
  } else {
    c5_c_p = false;
  }

  c5_d_p = c5_c_p;
  if (c5_d_p) {
    c5_v_y = NULL;
    sf_mex_assign(&c5_v_y, sf_mex_create("y", c5_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_x_y = NULL;
    sf_mex_assign(&c5_x_y, sf_mex_create("y", c5_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_y_y = NULL;
    sf_mex_assign(&c5_y_y, sf_mex_create("y", c5_cv3, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c5_c_st, &c5_d_emlrtMCI, "error", 0U, 2U, 14, c5_v_y, 14,
                sf_mex_call(&c5_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_c_st, NULL, "message", 1U, 2U, 14, c5_x_y, 14, c5_y_y)));
  }

  c5_h_x = muDoubleScalarAsin(c5_h_x);
  c5_w_y = -2.0 * (c5_qx * c5_qy - c5_qz * c5_qw);
  c5_j_x = ((c5_o_y + c5_p_y) - c5_r_y) - c5_s_y;
  c5_ob_a = c5_w_y;
  c5_g_b = c5_j_x;
  c5_ab_y = c5_ob_a;
  c5_k_x = c5_g_b;
  c5_b_r = muDoubleScalarAtan2(c5_ab_y, c5_k_x);
  c5_bb_y[0] = c5_r;
  c5_bb_y[1] = c5_h_x;
  c5_bb_y[2] = c5_b_r;
  c5_c_end = 1;
  c5_trueCount = 0;
  for (c5_d_i = 0; c5_d_i < c5_c_end; c5_d_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_trueCount++;
    }
  }

  c5_tmp_size[1] = c5_trueCount;
  c5_partialTrueCount = 0;
  for (c5_e_i = 0; c5_e_i < c5_c_end; c5_e_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_tmp_data[c5_partialTrueCount] = c5_e_i;
      c5_partialTrueCount++;
    }
  }

  c5_iv[0] = c5_tmp_size[1];
  c5_loop_ub = c5_iv[0] - 1;
  for (c5_i2 = 0; c5_i2 <= c5_loop_ub; c5_i2++) {
    c5_bb_y[c5_tmp_data[c5_i2]] = 0.0;
  }

  c5_d_end = 1;
  c5_b_trueCount = 0;
  for (c5_f_i = 0; c5_f_i < c5_d_end; c5_f_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_b_trueCount++;
    }
  }

  c5_b_tmp_size[0] = c5_b_trueCount;
  c5_b_partialTrueCount = 0;
  for (c5_g_i = 0; c5_g_i < c5_d_end; c5_g_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_b_tmp_data[c5_b_partialTrueCount] = c5_g_i;
      c5_b_partialTrueCount++;
    }
  }

  c5_x_size[0] = c5_b_tmp_size[0];
  c5_b_loop_ub = c5_b_tmp_size[0] - 1;
  for (c5_i3 = 0; c5_i3 <= c5_b_loop_ub; c5_i3++) {
    c5_x_data[c5_i3] = c5_aSinInput;
  }

  c5_b_nx = c5_x_size[0];
  c5_i4 = static_cast<uint8_T>(c5_b_nx) - 1;
  for (c5_d_k = 0; c5_d_k <= c5_i4; c5_d_k++) {
    c5_m_x = c5_x_data[0];
    c5_o_x = c5_m_x;
    c5_o_x = muDoubleScalarSign(c5_o_x);
    c5_x_data[0] = c5_o_x;
  }

  c5_c_loop_ub = c5_x_size[0] - 1;
  for (c5_i5 = 0; c5_i5 <= c5_c_loop_ub; c5_i5++) {
    c5_x_data[c5_i5] *= 2.0;
  }

  c5_e_end = 1;
  c5_c_trueCount = 0;
  for (c5_h_i = 0; c5_h_i < c5_e_end; c5_h_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_c_trueCount++;
    }
  }

  c5_d_trueCount[0] = c5_c_trueCount;
  c5_y_size[0] = c5_d_trueCount[0];
  c5_d_loop_ub = c5_d_trueCount[0] - 1;
  for (c5_i6 = 0; c5_i6 <= c5_d_loop_ub; c5_i6++) {
    c5_y_data[c5_i6] = c5_qx;
  }

  c5_f_end = 1;
  c5_e_trueCount = 0;
  for (c5_j_i = 0; c5_j_i < c5_f_end; c5_j_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_e_trueCount++;
    }
  }

  c5_f_trueCount[0] = c5_e_trueCount;
  c5_b_x_size[0] = c5_f_trueCount[0];
  c5_e_loop_ub = c5_f_trueCount[0] - 1;
  for (c5_i7 = 0; c5_i7 <= c5_e_loop_ub; c5_i7++) {
    c5_b_x_data[c5_i7] = c5_qw;
  }

  c5_e_p = (static_cast<real_T>(c5_y_size[0]) == static_cast<real_T>
            (c5_b_x_size[0]));
  c5_samesize = c5_e_p;
  if (c5_samesize) {
    c5_c_tmp_size[0] = c5_y_size[0];
    c5_f_loop_ub = c5_y_size[0] - 1;
    for (c5_i8 = 0; c5_i8 <= c5_f_loop_ub; c5_i8++) {
      c5_c_tmp_data[c5_i8] = c5_function_handle_parenReference(chartInstance,
        c5_y_data[c5_i8], c5_b_x_data[c5_i8]);
    }
  } else {
    c5_expand_atan2(chartInstance, c5_y_data, c5_y_size, c5_b_x_data,
                    c5_b_x_size, c5_c_tmp_data, c5_c_tmp_size);
  }

  if ((c5_x_size[0] != c5_c_tmp_size[0]) && ((c5_x_size[0] != 1) &&
       (c5_c_tmp_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c5_x_size[0], c5_c_tmp_size[0], &c5_emlrtECI,
      &c5_b_st);
  }

  c5_g_end = 1;
  c5_g_trueCount = 0;
  for (c5_k_i = 0; c5_k_i < c5_g_end; c5_k_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_g_trueCount++;
    }
  }

  c5_b_tmp_size[0] = c5_g_trueCount;
  c5_c_partialTrueCount = 0;
  for (c5_m_i = 0; c5_m_i < c5_g_end; c5_m_i++) {
    if (c5_mask1 || c5_mask2) {
      c5_b_tmp_data[c5_c_partialTrueCount] = c5_m_i;
      c5_c_partialTrueCount++;
    }
  }

  if (c5_x_size[0] == c5_c_tmp_size[0]) {
    c5_g_loop_ub = c5_x_size[0] - 1;
    for (c5_i9 = 0; c5_i9 <= c5_g_loop_ub; c5_i9++) {
      c5_x_data[c5_i9] *= c5_c_tmp_data[c5_i9];
    }
  } else {
    c5_times(chartInstance, c5_x_data, c5_x_size, c5_c_tmp_data, c5_c_tmp_size);
  }

  c5_iv1[0] = c5_b_tmp_size[0];
  emlrtSubAssignSizeCheckR2012b(&c5_iv1[0], 1, &c5_x_size[0], 1, &c5_b_emlrtECI,
    &c5_b_st);
  c5_h_loop_ub = c5_x_size[0] - 1;
  for (c5_i10 = 0; c5_i10 <= c5_h_loop_ub; c5_i10++) {
    c5_bb_y[2 + c5_b_tmp_data[c5_i10]] = c5_x_data[c5_i10];
  }

  for (c5_i11 = 0; c5_i11 < 3; c5_i11++) {
    (*chartInstance->c5_y)[c5_i11] = c5_bb_y[c5_i11];
  }

  c5_do_animation_call_c5_uas_main_21a3(chartInstance);
  for (c5_i12 = 0; c5_i12 < 3; c5_i12++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U, (*chartInstance->c5_y)
                      [c5_i12]);
  }
}

static void ext_mode_exec_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
}

static void c5_update_jit_animation_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
}

static void c5_do_animation_call_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_st;
  c5_st = NULL;
  c5_st = NULL;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_createcellmatrix(2, 1), false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", *chartInstance->c5_y, 0, 0U, 1U, 0U,
    2, 1, 3), false);
  sf_mex_setcell(c5_b_y, 0, c5_c_y);
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_uas_main_21a3, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_b_y, 1, c5_d_y);
  sf_mex_assign(&c5_st, c5_b_y, false);
  return c5_st;
}

static void set_sim_state_c5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_b_u;
  real_T c5_dv[3];
  int32_T c5_i;
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_b_u = sf_mex_dup(c5_st);
  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_b_u, 0)), "y",
                      c5_dv);
  for (c5_i = 0; c5_i < 3; c5_i++) {
    (*chartInstance->c5_y)[c5_i] = c5_dv[c5_i];
  }

  chartInstance->c5_is_active_c5_uas_main_21a3 = c5_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_b_u, 1)),
     "is_active_c5_uas_main_21a3");
  sf_mex_destroy(&c5_b_u);
  sf_mex_destroy(&c5_st);
}

static void initSimStructsc5_uas_main_21a3(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc5_uas_main_21a3
  (SFc5_uas_main_21a3InstanceStruct *chartInstance)
{
}

static real_T c5_sumColumnB(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  real_T c5_x[4])
{
  real_T c5_b_y;
  int32_T c5_b_k;
  int32_T c5_k;
  c5_b_y = c5_x[0];
  for (c5_k = 0; c5_k < 3; c5_k++) {
    c5_b_k = c5_k;
    c5_b_y += c5_x[c5_b_k + 1];
  }

  return c5_b_y;
}

static real_T c5_function_handle_parenReference(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_varargin_2)
{
  real_T c5_b_x;
  real_T c5_b_y;
  real_T c5_c_y;
  real_T c5_x;
  c5_x = c5_varargin_1;
  c5_b_y = c5_varargin_2;
  c5_c_y = c5_x;
  c5_b_x = c5_b_y;
  return muDoubleScalarAtan2(c5_c_y, c5_b_x);
}

static void c5_expand_atan2(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  real_T c5_a_data[], int32_T c5_a_size[1], real_T c5_b_data[], int32_T
  c5_b_size[1], real_T c5_c_data[], int32_T c5_c_size[1])
{
  real_T c5_b_c_data[1];
  real_T c5_b_y;
  real_T c5_r;
  real_T c5_x;
  int32_T c5_csz[2];
  int32_T c5_i;
  int32_T c5_k;
  int32_T c5_loop_ub;
  int32_T c5_sak;
  int32_T c5_sbk;
  int32_T c5_sck;
  c5_sak = c5_a_size[0];
  c5_sbk = c5_b_size[0];
  if (c5_sbk == 1) {
    c5_sck = c5_sak;
  } else {
    c5_sck = 0;
  }

  c5_csz[0] = c5_sck;
  c5_c_size[0] = c5_csz[0];
  if (c5_c_size[0] != 0) {
    c5_loop_ub = c5_c_size[0] - 1;
    for (c5_i = 0; c5_i <= c5_loop_ub; c5_i++) {
      c5_b_c_data[c5_i] = c5_c_data[c5_i];
    }

    for (c5_k = 0; c5_k < 1; c5_k++) {
      c5_b_y = c5_a_data[0];
      c5_x = c5_b_data[0];
      c5_r = muDoubleScalarAtan2(c5_b_y, c5_x);
      c5_b_c_data[0] = c5_r;
    }

    c5_c_size[0] = 1;
    c5_c_data[0] = c5_b_c_data[0];
  }
}

const mxArray *sf_c5_uas_main_21a3_get_eml_resolved_functions_info()
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static void c5_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct *chartInstance,
  const mxArray *c5_b_y, const char_T *c5_identifier, real_T c5_c_y[3])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = const_cast<const char_T *>(c5_identifier);
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_y), &c5_thisId, c5_c_y);
  sf_mex_destroy(&c5_b_y);
}

static void c5_b_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_b_y[3])
{
  real_T c5_dv[3];
  int32_T c5_i;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_b_u), c5_dv, 1, 0, 0U, 1, 0U, 2, 1, 3);
  for (c5_i = 0; c5_i < 3; c5_i++) {
    c5_b_y[c5_i] = c5_dv[c5_i];
  }

  sf_mex_destroy(&c5_b_u);
}

static uint8_T c5_c_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_uas_main_21a3, const char_T
  *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_b_y;
  c5_thisId.fIdentifier = const_cast<const char_T *>(c5_identifier);
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_b_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_uas_main_21a3), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_uas_main_21a3);
  return c5_b_y;
}

static uint8_T c5_d_emlrt_marshallIn(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, const mxArray *c5_b_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_b_y;
  uint8_T c5_c_u;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_b_u), &c5_c_u, 1, 3, 0U, 0, 0U, 0);
  c5_b_y = c5_c_u;
  sf_mex_destroy(&c5_b_u);
  return c5_b_y;
}

static void c5_slStringInitializeDynamicBuffers(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
}

static void c5_chart_data_browse_helper(SFc5_uas_main_21a3InstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig)
{
  *c5_mxData = NULL;
  *c5_mxData = NULL;
  *c5_isValueTooBig = 0U;
  switch (c5_ssIdNumber) {
   case 4U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_u, 0, 0U,
      1U, 0U, 1, 4), false);
    break;

   case 5U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_y, 0, 0U,
      1U, 0U, 2, 1, 3), false);
    break;
  }
}

static void c5_times(SFc5_uas_main_21a3InstanceStruct *chartInstance, real_T
                     c5_in1_data[], int32_T c5_in1_size[1], real_T c5_in2_data[],
                     int32_T c5_in2_size[1])
{
  real_T c5_b_in1_data[1];
  int32_T c5_b_in1_size[1];
  int32_T c5_aux_0_0;
  int32_T c5_aux_1_0;
  int32_T c5_b_loop_ub;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i2;
  int32_T c5_loop_ub;
  int32_T c5_stride_0_0;
  int32_T c5_stride_1_0;
  if (c5_in2_size[0] == 1) {
    c5_b_in1_size[0] = c5_in1_size[0];
  } else {
    c5_b_in1_size[0] = c5_in2_size[0];
  }

  c5_stride_0_0 = static_cast<int32_T>(c5_in1_size[0] != 1);
  c5_stride_1_0 = static_cast<int32_T>(c5_in2_size[0] != 1);
  c5_aux_0_0 = 0;
  c5_aux_1_0 = 0;
  if (c5_in2_size[0] == 1) {
    c5_i = c5_in1_size[0];
  } else {
    c5_i = c5_in2_size[0];
  }

  c5_loop_ub = c5_i - 1;
  for (c5_i1 = 0; c5_i1 <= c5_loop_ub; c5_i1++) {
    c5_b_in1_data[c5_i1] = c5_in1_data[c5_aux_0_0] * c5_in2_data[c5_aux_1_0];
    c5_aux_1_0 += c5_stride_1_0;
    c5_aux_0_0 += c5_stride_0_0;
  }

  c5_in1_size[0] = c5_b_in1_size[0];
  c5_b_loop_ub = c5_b_in1_size[0] - 1;
  for (c5_i2 = 0; c5_i2 <= c5_b_loop_ub; c5_i2++) {
    c5_in1_data[c5_i2] = c5_b_in1_data[c5_i2];
  }
}

static void init_dsm_address_info(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc5_uas_main_21a3InstanceStruct
  *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_u = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_y = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_uas_main_21a3_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(347243372U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2815615850U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(20673182U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3412433126U);
}

mxArray *sf_c5_uas_main_21a3_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c5_uas_main_21a3_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c5_uas_main_21a3_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_uas_main_21a3(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/E/g"
    "AC7pdCcT+En1kcn5hcklmWGp9sGl+aWByfm5iZF29kmGiMMBcEADvWGWw="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_uas_main_21a3_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "ssDXrLadCUsGQwSPfxati9B";
}

static void sf_opaque_initialize_c5_uas_main_21a3(void *chartInstanceVar)
{
  initialize_params_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    chartInstanceVar);
  initialize_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_uas_main_21a3(void *chartInstanceVar)
{
  enable_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_uas_main_21a3(void *chartInstanceVar)
{
  disable_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_uas_main_21a3(void *chartInstanceVar)
{
  sf_gateway_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_uas_main_21a3(SimStruct* S)
{
  return get_sim_state_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_uas_main_21a3(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c5_uas_main_21a3(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_uas_main_21a3InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_uas_main_21a3_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_uas_main_21a3
      ((SFc5_uas_main_21a3InstanceStruct*) chartInstanceVar);
    ((SFc5_uas_main_21a3InstanceStruct*) chartInstanceVar)->
      ~SFc5_uas_main_21a3InstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_uas_main_21a3(void *chartInstanceVar)
{
  mdl_start_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc5_uas_main_21a3InstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c5_uas_main_21a3(void *chartInstanceVar)
{
  mdl_terminate_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_uas_main_21a3(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc5_uas_main_21a3((SFc5_uas_main_21a3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_uas_main_21a3_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWNuO20QYnqTLigqoIkCqqJDoJZeUCgkkBLs5LRFZNuDsgnoTzdq/41HGY3cOOSAegSfgCXg",
    "EXoE34DGQuOkl/9hOGrwh8SRiaRGWHMf2fPMf5vsPY1LrnRM87uE5f4eQY7y+imed5McrxX1t7c",
    "yfH5FPi/sfXiPETwIYg/BMGLI5cTuEiQdU0lgR90PQGL4BlXCjWSJ6IkyqY5kIQYLwcYI0kdpJr",
    "mKx4UxMukb4VrL6NmJ+5EWJ4UETJ6TBheCLv5ObGj1AiW0mwdddgEBHMjHjqMvpeLsXpJ61IvAn",
    "ysTOvlKgPZNaU9W54ZqlHDpz8HtCaYpeUDvs9TTV0NJzNydbe5W3RCdxyhkV1X0dUeVBiuzQcJk",
    "G+HthNHqvEtaPqNRNiOgUVJ9NMumJgErSmcLR10xQnUhGeSfmLTtbRXsHHG08x5DgrmuE9jYl0E",
    "maMKEdA8Lrop87gl5zaMO1GTvK9eCpsdFwxWAG0m19w1YyBUnHcCHcdM7WqDPPSLmKpYpYzWK4o",
    "vLUR+4qCNzyBgad8ijSEYY4jRMWMhf31FCyKXLDNdf1bPjvletMnLNf7YXN5Ham4MyrldyuL1qU",
    "c+WGHSZpH6bAM/ltquke2Fy+A1gpFgwTZIfNNo4ZywiGkVBgW4kIWHVWTkuorLB9hUWqApzFNgw",
    "gQDevVF9NtCuOjNJJ3MKU0+73K8q7ie0JDTKkPlSuMZIyBahwxitHuQFTNpAQjV7SmZWVZ8hjcC",
    "8oUaER7VkiJ+hj12L23Fc2EtzQEIwxMWvIklwH2X1Fuamoc6zGGD9Ij0uFWdZNLmJt/OwF9qkfQ",
    "WArJ+NwjnkWJ6i6xMqW/FO0dsr0og3KlyytGkkGEzoWXeul4SKFSzERyUx0ZRJ7Ree1hVcAmDWo",
    "FEyMm1jC5aKLylfTWsLTYZbdXZsc62eqOb223DgDgdXQ2mq7BupjVHUEtsio0CFYj32PTYxQTGk",
    "s1Iu81Od1z/bvJ+R5/360oX9vrPXvjeL0PxoZqkYxZWL04SP62M7zwdo8r1fYByzlb8ORGziywi",
    "2v76/haxvkkrVrWd7d+nY96/ivtsFPb5TkHJVwx4WfTgbBr3803pr8+NOb8pfwyaND5P9cd9tn3",
    "Svu3132S6vsPL2RwOzYL3bw4H6JB/ezetn+TvZp0LpUZ1/PvEE4Rwp+0szme1bbrm+9pO/y+UPb",
    "o2HwZrlA+r2g2K/Ze2ryfYSd/+M1fY93+OPuGp8I+f3zw/Bvn5TX8WgHvoH/FiXe7i//4clh+Fz",
    "+YIf+D0rr/SDr2UfUZmYYlTPAzbjcl+euOHLLuJdFz//98s/bV6XO3TaO3DLuUPtc6/fLPn5b3S",
    "Cl8Y0X2I5t+d6lj3vR7PqNuPVZ7xX3n62+H7QixoMNO5jiNW4ywk1v/yP8fubov2Vf2bH+Kz40P",
    "3l8Kihf4JYl3xIWjwfSfi9cvZJA1eZ94b9RT6rEtx195y/xfYecNb/cux79CZ9OFAo=",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_uas_main_21a3(SimStruct *S)
{
  const char* newstr = sf_c5_uas_main_21a3_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3378794560U));
  ssSetChecksum1(S,(1796411635U));
  ssSetChecksum2(S,(1913821836U));
  ssSetChecksum3(S,(828008120U));
}

static void mdlRTW_c5_uas_main_21a3(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_uas_main_21a3(SimStruct *S)
{
  SFc5_uas_main_21a3InstanceStruct *chartInstance;
  chartInstance = (SFc5_uas_main_21a3InstanceStruct *)utMalloc(sizeof
    (SFc5_uas_main_21a3InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_uas_main_21a3InstanceStruct));
  chartInstance = new (chartInstance) SFc5_uas_main_21a3InstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c5_uas_main_21a3;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_uas_main_21a3;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c5_uas_main_21a3;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_uas_main_21a3;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_uas_main_21a3;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_uas_main_21a3;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_uas_main_21a3;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_uas_main_21a3;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_uas_main_21a3;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_uas_main_21a3;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_uas_main_21a3;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c5_uas_main_21a3;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c5_JITStateAnimation,
    chartInstance->c5_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c5_uas_main_21a3(chartInstance);
}

void c5_uas_main_21a3_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_uas_main_21a3(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_uas_main_21a3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_uas_main_21a3(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_uas_main_21a3_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
