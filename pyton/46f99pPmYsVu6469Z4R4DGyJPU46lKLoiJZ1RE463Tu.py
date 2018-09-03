
        
        latex_documents = [
    (master_doc, 'Flask.tex', 'Flask Documentation', 'Pallets Team', 'manual'),
]
latex_use_modindex = False
latex_elements = {
    'papersize': 'a4paper',
    'pointsize': '12pt',
    'fontpkg': r'\usepackage{mathpazo}',
    'preamble': r'\usepackage{flaskstyle}',
}
latex_use_parts = True
latex_additional_files = ['flaskstyle.sty', 'logo.pdf']
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            if not title:
            error = 'Title is required.'
    
            @app.route('/')
        def index():
            @copy_current_request_context
            def do_some_work():
                # do some work here, it can access flask.request like you
                # would otherwise in the view function.
                ...
            gevent.spawn(do_some_work)
            return 'Regular response'
    
    import logging
import sys
    
    from .search import SearchVector, SearchVectorExact, SearchVectorField
    
        def pop(self, key, default=__not_given):
        self.modified = self.modified or key in self._session
        args = () if default is self.__not_given else (default,)
        return self._session.pop(key, *args)
    
        objects = BaseSessionManager()
    
    
@x_robots_tag
def index(request, sitemaps,
          template_name='sitemap_index.xml', content_type='application/xml',
          sitemap_url_name='django.contrib.sitemaps.views.sitemap'):
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError
    
    
class TestManager:
    
        def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' %
              (subject.name, subject.data))
    
    ###  OUTPUT ###
# Before subclassing:
# BaseRegisteredClass
# After subclassing:
# BaseRegisteredClass
# ClassRegistree

    
        '''A radio.     It has a scan button, and an AM/FM toggle switch.'''
    
    *Where is the pattern used practically?
    
    
class lazy_property(object):
    
        def find_path(self, start, end, path=None):
        path = path or []
    
        def draw_circle(self, x, y, radius):
        print('API2.circle at {}:{} radius {}'.format(x, y, radius))
    
    
__licence__ = 'BSD (3 clause)'
    
    # A dictionary with options for the search language support, empty by default.
# 'ja' uses this config value.
# 'zh' user can custom change `jieba` dictionary path.
#
# html_search_options = {'type': 'default'}
    
        try:
        smart_home_config = config[CONF_SMART_HOME]
    except KeyError:
        pass
    else:
        smart_home_config = smart_home_config or SMART_HOME_SCHEMA({})
        smart_home.async_setup(hass, smart_home_config)
    
        @callback
    def state_automation_listener(entity, from_s, to_s):
        '''Listen for state changes and calls action.'''
        @callback
        def call_action():
            '''Call action with right context.'''
            hass.async_run_job(action, {
                'trigger': {
                    'platform': 'numeric_state',
                    'entity_id': entity,
                    'below': below,
                    'above': above,
                    'from_state': from_s,
                    'to_state': to_s,
                }
            })
    
    from homeassistant.core import callback
from homeassistant.const import (
    CONF_EVENT, CONF_OFFSET, CONF_PLATFORM, SUN_EVENT_SUNRISE)
from homeassistant.helpers.event import async_track_sunrise, async_track_sunset
import homeassistant.helpers.config_validation as cv
    
            statsd.event(
            title='Home Assistant',
            text='%%% \n **{}** {} \n %%%'.format(name, message),
            tags=[
                'entity:{}'.format(event.data.get('entity_id')),
                'domain:{}'.format(event.data.get('domain'))
            ]
        )