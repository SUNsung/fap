
        
            :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        Requests that produced this error are safe to retry.
    '''
    
    import sys
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
    try:
    from urllib3.contrib.socks import SOCKSProxyManager
except ImportError:
    def SOCKSProxyManager(*args, **kwargs):
        raise InvalidSchema('Missing dependencies for SOCKS support.')
    
          >>> import requests
      >>> req = requests.Request('GET', 'https://httpbin.org/get')
      >>> req.prepare()
      <PreparedRequest [GET]>
    '''
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({}) or chardet ({}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
        kwargs.setdefault('allow_redirects', True)
    return request('get', url, params=params, **kwargs)
    
                    try:
                    ip = line.split()[0]
                    return ip
                except:
                    continue
    
            # if current token is consistent with what could come after set
        # then we know we're missing a token; error recovery is free to
        # 'insert' the missing token
        if input.LA(1) in follow or EOR_TOKEN_TYPE in follow:
            return True
    
        def check_tokenize(self, s, expected):
        # Format the tokens in s in a table format.
        # The ENDMARKER and final NEWLINE are omitted.
        f = BytesIO(s.encode('utf-8'))
        result = stringify_tokens_from_source(tokenize(f.readline), s)
    
        def visitField(self, field, name, depth, product):
        def emit(s, d):
            self.emit(s, depth + d)
        if product:
            value = 'o->%s' % field.name
        else:
            value = 'o->v.%s.%s' % (name, field.name)
        self.set(field, value, depth)
        emit('if (!value) goto failed;', 0)
        emit('if (_PyObject_SetAttrId(result, &PyId_%s, value) == -1)' % field.name, 0)
        emit('goto failed;', 1)
        emit('Py_DECREF(value);', 0)
    
        # First, if the caller didn't force us into direct or indirect mode,
    # figure out which mode we should be in.  We take a conservative
    # approach: choose direct mode *only* if the current interpreter is
    # in debug mode and optimize is 0.  If we're not in debug mode (-O
    # or -OO), we don't know which level of optimization this
    # interpreter is running with, so we can't do direct
    # byte-compilation and be certain that it's the right thing.  Thus,
    # always compile indirectly if the current interpreter is in either
    # optimize mode, or if either optimization level was requested by
    # the caller.
    if direct is None:
        direct = (__debug__ and optimize == 0)
    
        Mainly needed on Unix, so we can plug in the information that
    varies across Unices and is stored in Python's Makefile.
    '''
    if compiler.compiler_type == 'unix':
        if sys.platform == 'darwin':
            # Perform first-time customization of compiler-related
            # config vars on OS X now that we know we need a compiler.
            # This is primarily to support Pythons from binary
            # installers.  The kind and paths to build tools on
            # the user system may vary significantly from the system
            # that Python itself was built on.  Also the user OS
            # version and build tools may not support the same set
            # of CPU architectures for universal builds.
            global _config_vars
            # Use get_config_var() to ensure _config_vars is initialized.
            if not get_config_var('CUSTOMIZED_OSX_COMPILER'):
                import _osx_support
                _osx_support.customize_compiler(_config_vars)
                _config_vars['CUSTOMIZED_OSX_COMPILER'] = 'True'
    
                import distutils.bcppcompiler
            import distutils.ccompiler
            import distutils.cygwinccompiler
            import distutils.filelist
            import distutils.text_file
            import distutils.unixccompiler
    
            alloc_before = alloc_after
        rc_before = rc_after
        fd_before = fd_after