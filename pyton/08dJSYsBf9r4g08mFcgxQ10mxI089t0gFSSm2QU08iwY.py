
        
            yield app
    
        with app.app_context():
        db = get_db()
        count = db.execute('SELECT COUNT(id) FROM post').fetchone()[0]
        assert count == 2
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
    
if not PY2:
    text_type = str
    string_types = (str,)
    integer_types = (int,)
    
            It is not recommended to use this function for development with
        automatic reloading as this is badly supported.  Instead you should
        be using the :command:`flask` command line script's ``run`` support.
    
    from werkzeug.exceptions import HTTPException
    
    
_request_ctx_err_msg = '''\
Working outside of request context.
    
        The following extra types are supported:
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def exists(self, session_key):
        return bool(session_key) and (self.cache_key_prefix + session_key) in self._cache
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
        @classmethod
    def get_model_class(cls):
        # Avoids a circular import and allows importing SessionStore when
        # django.contrib.sessions is not in INSTALLED_APPS.
        from django.contrib.sessions.models import Session
        return Session
    
        def __str__(self):
        return self.session_key
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
        x_train = np.array(x[:int(len(x) * (1 - test_split))])
    y_train = np.array(y[:int(len(x) * (1 - test_split))])
    x_test = np.array(x[int(len(x) * (1 - test_split)):])
    y_test = np.array(y[int(len(x) * (1 - test_split)):])
    return (x_train, y_train), (x_test, y_test)

    
        # Arguments
        label_mode: one of 'fine', 'coarse'.
    
    
def l2(l=0.01):
    return L1L2(l2=l)