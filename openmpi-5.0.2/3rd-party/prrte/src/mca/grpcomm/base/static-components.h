/*
 * $HEADER$
 */
#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

extern const pmix_mca_base_component_t prte_mca_grpcomm_direct_component;

const pmix_mca_base_component_t *prte_grpcomm_base_static_components[] = {
  &prte_mca_grpcomm_direct_component, 
  NULL
};

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif

