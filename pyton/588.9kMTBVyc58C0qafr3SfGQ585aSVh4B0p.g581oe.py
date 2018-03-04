
        
        atom_template = atom_template.replace('@TIMESTAMP@', now_iso)
    
    
def expect_warnings(ydl, warnings_re):
    real_warning = ydl.report_warning
    
    
def get_config(env_var, config_var):
    result = os.getenv(env_var)
    if not result:
        result = get_from_rhc_config(config_var)
    if not result:
        sys.exit('failed=True msg='missing %s'' % env_var)
    return result
    
    
class SpendingByCategory(MRJob):
    
    class DefaultCategories(Enum):