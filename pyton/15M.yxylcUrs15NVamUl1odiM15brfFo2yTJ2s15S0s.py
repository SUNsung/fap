
        
            return render_template('auth/login.html')
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        def context_processor(self, f):
        '''Like :meth:`Flask.context_processor` but for a blueprint.  This
        function is only executed for requests handled by a blueprint.
        '''
        self.record_once(lambda s: s.app.template_context_processors
            .setdefault(self.name, []).append(f))
        return f
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
            return list(result)
    
    
@pytest.fixture
def purge_module(request):
    def inner(name):
        request.addfinalizer(lambda: sys.modules.pop(name, None))
    
    
def source_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/blob/master/' + text
    set_classes(options)
    node = nodes.reference(rawtext, text, refuri=ref, **options)
    return [node], []
    
    
def __feet_to_meters(feet: float) -> float:
    '''Convert feet to meters.'''
    return feet * 0.3048
    
        elif bump_type == 'dev':
        # Convert 0.67.3 to 0.67.4.dev0
        # Convert 0.67.3.b5 to 0.67.4.dev0
        # Convert 0.67.3.dev0 to 0.67.3.dev1
        if version.is_devrelease:
            to_change['dev'] = ('dev', version.dev + 1)
        else:
            to_change['pre'] = ('dev', 0)
            to_change['release'] = _bump_release(version.release, 'minor')
    
        w, x, y, z = quat[..., 0], quat[..., 1], quat[..., 2], quat[..., 3]
    Nq = np.sum(quat * quat, axis=-1)
    s = 2.0 / Nq
    X, Y, Z = x * s, y * s, z * s
    wX, wY, wZ = w * X, w * Y, w * Z
    xX, xY, xZ = x * X, x * Y, x * Z
    yY, yZ, zZ = y * Y, y * Z, z * Z
    
    class DoubleWrapperError(Error):
    pass
    
            def __del__(self):
            self.close()
    ```
    
        rng = np.random.RandomState()
    rng.seed(_int_list_from_bigint(hash_seed(seed)))
    return rng, seed
    
            if done:
            if self.autoreset:
                self.before_reset()
                self.after_reset(observation)
    
                # Physically correct is to always apply friction_limit until speed is equal.
            # But dt is finite, that will lead to oscillations if difference is already near zero.
            f_force *= 205000*SIZE*SIZE  # Random coefficient to cut oscillations in few steps (have no effect on friction_limit)
            p_force *= 205000*SIZE*SIZE
            force = np.sqrt(np.square(f_force) + np.square(p_force))