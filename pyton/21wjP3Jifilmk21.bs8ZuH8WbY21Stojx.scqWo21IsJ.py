
        
        
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
    if __name__ == '__main__':
    main()

    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
            title = self._html_search_regex(
            r'<div[^>]+style='float:left'[^>]*>\s*<h2>(.+?)</h2>', webpage, 'title')
        description = self._html_search_regex(
            r'>Description:</span>(.+?)</div>', webpage, 'description', default=None)
    
            select = self._search_regex(
            r'(?s)<select[^>]+id='select-version'[^>]*>(.+?)</select>',
            webpage, 'select version', default=None)
        if select:
            entry_ids = set()
            entries = []
            for mobj in re.finditer(
                    r'<option[^>]+value=(['\'])(?P<id>[0-9a-z_]+)(?:#.+?)?\1[^>]*>(?P<title>[^<]+)',
                    webpage):
                entry_id = mobj.group('id')
                if entry_id in entry_ids:
                    continue
                entry_ids.add(entry_id)
                entries.append({
                    '_type': 'url_transparent',
                    'url': 'kaltura:%s:%s' % (partner_id, entry_id),
                    'ie_key': 'Kaltura',
                    'title': mobj.group('title'),
                })
            if entries:
                return self.playlist_result(entries, display_id, title)
    
        s = TaggedJSONSerializer()
    
        iterkeys = lambda d: d.iterkeys()
    itervalues = lambda d: d.itervalues()
    iteritems = lambda d: d.iteritems()
    
    
#: Log messages to :func:`~flask.logging.wsgi_errors_stream` with the format
#: ``[%(asctime)s] %(levelname)s in %(module)s: %(message)s``.
default_handler = logging.StreamHandler(wsgi_errors_stream)
default_handler.setFormatter(logging.Formatter(
    '[%(asctime)s] %(levelname)s in %(module)s: %(message)s'
))
    
        def _fail(self, *args, **kwargs):
        raise RuntimeError('The session is unavailable because no secret '
                           'key was set.  Set the secret_key on the '
                           'application to something unique and secret.')
    __setitem__ = __delitem__ = clear = pop = popitem = \
        update = setdefault = _fail
    del _fail
    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                yield blueprint, loader
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False, trim_namespace=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
        stream = StringIO()
    client.get('/', errors_stream=stream)
    assert 'ERROR in test_logging: test' in stream.getvalue()
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
        if unit_1 == LENGTH_MILES:
        meters = __miles_to_meters(value)
    elif unit_1 == LENGTH_FEET:
        meters = __feet_to_meters(value)
    elif unit_1 == LENGTH_KILOMETERS:
        meters = __kilometers_to_meters(value)
    
    patch_file = 'homeassistant.components.device_tracker.bt_home_hub_5'