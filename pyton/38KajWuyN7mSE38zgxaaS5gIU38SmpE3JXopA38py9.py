
        
                The arguments passed to :meth:`as_view` are forwarded to the
        constructor of the class.
        '''
        def view(*args, **kwargs):
            self = view.view_class(*class_args, **class_kwargs)
            return self.dispatch_request(*args, **kwargs)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        if logging_plugin:
        pytestconfig.pluginmanager.register(logging_plugin, 'logging-plugin')
    
        flask.appcontext_tearing_down.connect(record_teardown, app)
    try:
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.status_code == 500
            assert recorded == []
        assert recorded == [('tear_down', {'exc': None})]
    finally:
        flask.appcontext_tearing_down.disconnect(record_teardown, app)

    
    def test_templates_auto_reload_debug_run(app, monkeypatch):
    def run_simple_mock(*args, **kwargs):
        pass
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    from .compat import OrderedDict
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    
def test_redirect_rfc1808_to_non_ascii_location():
    path = u'š'
    expected_path = b'%C5%A1'
    redirect_request = []  # stores the second request to the server
    
    if __name__ == '__main__':
    main()

    
    from .theplatform import theplatform_download_by_pid
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    from ..common import *
import re
    
    from html.parser import HTMLParser
    
    import homeassistant.config as config_util
    
    
def convert(value: float, unit_1: str, unit_2: str) -> float:
    '''Convert one unit of measurement to another.'''
    if unit_1 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_1, LENGTH))
    if unit_2 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_2, LENGTH))