
        
        
def test_config_from_class():
    class Base(object):
        TEST_KEY = 'foo'
    
        logger.propagate = False
    assert not has_level_handler(logger)
    logger.propagate = True
    
        app.config.update(SERVER_NAME='localhost')
    with app.test_request_context('/', environ_overrides={'SERVER_NAME': 'localhost'}):
        pass
    
            if args:
            if 'gui' in conf and conf['gui']:
                # Enter GUI mode.
                from .gui import gui_main
                gui_main(*args, **conf)
            else:
                # Enter console mode.
                from .console import console_main
                console_main(*args, **conf)
    
        stream_types = [
        {'id': 'video'},
        {'id': 'audio'},
        {'id': 'slides'}
    ]
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')
