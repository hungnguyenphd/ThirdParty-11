/*
 * $HEADER$
 */
#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

extern const pmix_mca_base_component_t prte_mca_prtebacktrace_execinfo_component;

const pmix_mca_base_component_t *prte_prtebacktrace_base_static_components[] = {
  &prte_mca_prtebacktrace_execinfo_component, 
  NULL
};

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif
