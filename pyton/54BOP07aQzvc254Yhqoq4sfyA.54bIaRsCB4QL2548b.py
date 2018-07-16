
        
                    self.tags[key] = tag
    
    
class View(object):
    '''Alternative way to use view functions.  A subclass has to implement
    :meth:`dispatch_request` which is called with the view arguments from
    the URL routing system.  If :attr:`methods` is provided the methods
    do not have to be passed to the :meth:`~flask.Flask.add_url_rule`
    method explicitly::
    
    
def test_config_from_envvar_missing():
    env = os.environ
    try:
        os.environ = {'FOO_SETTINGS': 'missing.cfg'}
        with pytest.raises(IOError) as e:
            app = flask.Flask(__name__)
            app.config.from_envvar('FOO_SETTINGS')
        msg = str(e.value)
        assert msg.startswith('[Errno 2] Unable to load configuration '
                              'file (No such file or directory):')
        assert msg.endswith('missing.cfg'')
        assert not app.config.from_envvar('FOO_SETTINGS', silent=True)
    finally:
        os.environ = env
    
        logger = logging.getLogger('flask.app')
    logger.handlers = []
    logger.setLevel(logging.NOTSET)
    
                greenlets.append(greenlet(g))
            return 'Hello World!'
    
    
def set_best_server(is_local=False):
    return 'Developing'

    
                self.ip_manager.update_ip(ip, ssl_sock.handshake_time)
            self.logger.debug('create_ssl update ip:%s time:%d h2:%d sni:%s, host:%s',
                              ip, ssl_sock.handshake_time, ssl_sock.h2, ssl_sock.sni, ssl_sock.host)
    
        if WSAAddressToStringA(
            ctypes.byref(addr),
            addr_size,
            None,
            ip_string,
            ctypes.byref(ip_string_size)
    ) != 0:
        raise socket.error(ctypes.FormatError())
    
        def __str__(self):
        return 'MismatchedSetException(%r not in %r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    
def setup_platform(hass, config, add_devices, discovery_info=None):
    '''Create and add an entity based on the configuration.'''
    add_devices([ZigBeeLight(hass, ZigBeeDigitalOutConfig(config))])
    
        config_dir = os.path.join(os.getcwd(), args.config)
    
            self.session.add(States(
            entity_id='sensor.humidity',
            state='76',
            last_changed=in_run,
            last_updated=in_run,
        ))
        self.session.add(States(
            entity_id='sensor.lux',
            state='5',
            last_changed=in_run3,
            last_updated=in_run3,
        ))