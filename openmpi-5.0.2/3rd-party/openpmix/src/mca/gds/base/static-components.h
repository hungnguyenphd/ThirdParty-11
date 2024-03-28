/*
 * $HEADER$
 */
#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

extern const pmix_mca_base_component_t pmix_mca_gds_hash_component;
extern const pmix_mca_base_component_t pmix_mca_gds_ds12_component;
extern const pmix_mca_base_component_t pmix_mca_gds_ds21_component;

const pmix_mca_base_component_t *pmix_mca_gds_base_static_components[] = {
  &pmix_mca_gds_hash_component, 
  &pmix_mca_gds_ds12_component, 
  &pmix_mca_gds_ds21_component, 
  NULL
};

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif

