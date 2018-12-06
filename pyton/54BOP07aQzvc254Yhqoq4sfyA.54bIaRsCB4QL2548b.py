
        
            def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
    
# Does a path exist?
# This is false for dangling symbolic links on systems that support them.
def exists(path):
    '''Test whether a path exists.  Returns False for broken symbolic links'''
    try:
        os.stat(path)
    except (OSError, ValueError):
        return False
    return True
    
        def test_path_commonprefix(self):
        self.assertEqual(os.path.commonprefix([self.file_path, self.file_name]),
                         self.file_name)
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
    p = Point(4.0, -3.2)
    
    class _FunctionState(object):
  '''Tracks current function name and the number of lines in its body.'''
    
            if time_diff > self._timeout:
            _LOGGER.warning(
                'Queued %s dropped for %s. Time in queue was %s',
                click_type, self.address, time_string)
            return True
        _LOGGER.info(
            'Queued %s allowed for %s. Time in queue was %s',
            click_type, self.address, time_string)
        return False
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the demo tracker.'''
    def offset():
        '''Return random offset.'''
        return (random.randrange(500, 2000)) / 2e5 * random.choice((-1, 1))
    
            self.success_init = self._update_info()
        _LOGGER.info('Scanner initialized')
    
        def keep_alive(self, now):
        '''Keep the API alive.'''
        if self.api is None:
            self.reset_account_icloud()
    
            Return boolean if scanning successful.
        '''
        if not self.success_init:
            return False
    
        async def async_get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = {}
    
                        with open(final_path, 'wb') as fil:
                        for chunk in req.iter_content(1024):
                            fil.write(chunk)
    
        def __init__(self, path, patterns, hass):
        '''Initialise the watchdog observer.'''
        from watchdog.observers import Observer
        self._observer = Observer()
        self._observer.schedule(
            create_event_handler(patterns, hass),
            path,
            recursive=True)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_START, self.startup)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP, self.shutdown)
    
    
if __name__ == '__main__':
    import doctest
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
    ingredients = 'spam eggs apple'
line = '-' * 10
    
        def build_floor(self):
        raise NotImplementedError
    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))