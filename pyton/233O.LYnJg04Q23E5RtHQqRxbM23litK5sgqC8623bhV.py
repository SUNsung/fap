
        
            s.register(Tag1, index=-1)
    assert isinstance(s.order[-2], Tag1)
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
        app.testing = False
    stream = StringIO()
    rv = client.get('/', errors_stream=stream)
    assert rv.status_code == 500
    assert rv.data
    err = stream.getvalue()
    assert 'Exception on / [GET]' in err
    assert 'Exception: test' in err

    
        Tests regressions.
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def __repr__(self):
        return str(dict(self.items()))
    
    requires = [
    'chardet>=3.0.2,<3.1.0',
    'idna>=2.5,<2.7',
    'urllib3>=1.21.1,<1.23',
    'certifi>=2017.4.17'
    
    
@pytest.mark.parametrize(
    'value, expected', (
        ('example.com/path', 'http://example.com/path'),
        ('//example.com/path', 'http://example.com/path'),
    ))
def test_prepend_scheme_if_needed(value, expected):
    assert prepend_scheme_if_needed(value, 'http') == expected
    
            def mako_module_path(filename, uri):
            filename = filename.lstrip('/').replace('/', '-')
            path = os.path.join(module_directory, filename + '.py')
            return os.path.abspath(path)
    else:
        # disable caching templates since we don't know where they should go.
        module_directory = mako_module_path = None
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
        def pre(self):
        super(APIv1LoginController, self).pre()
        c.extension = 'json'
        set_extension(request.environ, 'json')
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res
    
        def GET_blog(self):
        return self.redirect('https://blog.%s/' %
                             get_domain(subreddit=False, no_www=True))