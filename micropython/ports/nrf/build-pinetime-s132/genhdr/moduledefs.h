// Automatically generated by makemoduledefs.py.

#if (MODULE_BMA42X_ENABLED)
    extern const struct _mp_obj_module_t mp_module_bma42x;
    #define MODULE_DEF_MP_QSTR_BMA42X { MP_ROM_QSTR(MP_QSTR_bma42x), MP_ROM_PTR(&mp_module_bma42x) },
#else
    #define MODULE_DEF_MP_QSTR_BMA42X
#endif

#if (MICROPY_PY_ARRAY)
    extern const struct _mp_obj_module_t mp_module_uarray;
    #define MODULE_DEF_MP_QSTR_UARRAY { MP_ROM_QSTR(MP_QSTR_uarray), MP_ROM_PTR(&mp_module_uarray) },
#else
    #define MODULE_DEF_MP_QSTR_UARRAY
#endif


#define MICROPY_REGISTERED_MODULES \
    MODULE_DEF_MP_QSTR_BMA42X \
    MODULE_DEF_MP_QSTR_UARRAY \
// MICROPY_REGISTERED_MODULES
