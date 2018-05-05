
        
        
def load_environment(global_conf={}, app_conf={}, setup_globals=True):
    r2_path = get_r2_path()
    root_path = os.path.join(r2_path, 'r2')
    
    API_TYPES = ('api', 'json')
RSS_TYPES = ('rss', 'xml')
    
        def _login(self, responder, user, rem=None):
        '''Login the user.
    
                code =  request.GET.get('code', '')
            try:
                code = int(code)
            except ValueError:
                code = 404
            srname = request.GET.get('srname', '')
            takedown = request.GET.get('takedown', '')
            error_name = request.GET.get('error_name', '')