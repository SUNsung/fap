
        
            s = TaggedJSONSerializer()
    s.register(TagFoo)
    assert s.loads(s.dumps(Foo('bar'))).data == 'bar'
    
    
@need_dotenv
def test_dotenv_path(monkeypatch):
    for item in ('FOO', 'BAR', 'EGGS'):
        monkeypatch._setitem.append((os.environ, item, notset))
    
    
def test_config_from_object():
    app = flask.Flask(__name__)
    app.config.from_object(__name__)
    common_object_test(app)
    
        sys.meta_path.append(Loader())
    request.addfinalizer(sys.meta_path.pop)
    
    import datetime
import json
import multiprocessing
import numbers
import os
import threading
    
    import tensorflow as tf  # pylint: disable=g-bad-import-order
    
      def final_score(self):
    return self.position.result_string()
    
      komi = 0
  if props.get('KM') is not None:
    komi = float(sgf_prop(props.get('KM')))
  result = utils.parse_game_result(sgf_prop(props.get('RE')))
    
      def assertEqualNPArray(self, array1, array2):
    if not np.all(array1 == array2):
      raise AssertionError(
          'Arrays differed in one or more locations:\n%s\n%s' % (array1, array2)
      )
    
    
def flatpage(request, url):
    '''
    Public interface to the flat page view.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def __init__(self, handler=None, host='localhost', port=0, requests_to_handle=1, wait_to_close_event=None):
        super(Server, self).__init__()
    
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

    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        @pytest.mark.parametrize(
        'url', (
            'http://192.168.0.1:5000/',
            'http://192.168.0.1/',
            'http://172.16.1.1/',
            'http://172.16.1.1:5000/',
            'http://localhost.localdomain:5000/v1.0/',
        ))
    def test_bypass(self, url):
        assert get_environ_proxies(url, no_proxy=None) == {}
    
    try:
    import json
except ImportError:
    import simplejson as json
import os
import os.path
import sys
import ConfigParser
import StringIO
    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
        requires_project = False
    crawler_process = None
    
        def test_sales_manager_shall_not_respond_through_proxy_with_delay(cls):
        cls.ntp.busy = 'Yes'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)

    
    from __future__ import print_function
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
        if setup_globals:
        g.setup_complete()
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
