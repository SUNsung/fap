
        
            def test_certificate_failure(self, httpbin_secure):
        '''
        When underlying SSL problems occur, an SSLError is raised.
        '''
        with pytest.raises(SSLError):
            # Our local httpbin does not have a trusted CA, so this call will
            # fail if we use our default trust bundle.
            requests.get(httpbin_secure('status', '200'))
    
                [dimensiondatacloud]
            MCP_USER: myusername
            MCP_PASSWORD: mypassword
        '''
    
    ---
- name: Delete Alert Policy Example
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Delete an Alert Policy
      clc_alert_policy:
        alias: wfad
        name: 'alert for disk > 80%'
        state: absent
      register: policy
    
        def _get_lbpool_nodes(self, alias, location, lb_id, pool_id):
        '''
        Return the list of nodes available to the provided load balancer pool
        :param alias: the account alias
        :param location: the datacenter the load balancer resides in
        :param lb_id: the id string of the load balancer
        :param pool_id: the id string of the pool
        :return: result: The list of nodes
        '''
        result = None
        try:
            result = self.clc.v2.API.Call('GET',
                                          '/v2/sharedLoadBalancers/%s/%s/%s/pools/%s/nodes'
                                          % (alias, location, lb_id, pool_id))
        except APIFailedResponse as e:
            self.module.fail_json(
                msg='Unable to fetch list of available nodes for load balancer pool id: {0}. {1}'.format(
                    pool_id, str(e.response_text)))
        return result
    
    # Create a jenkins job using the token
- jenkins_job:
    config: '{{ lookup('template', 'templates/test.xml.j2') }}'
    name: test
    token: asdfasfasfasdfasdfadfasfasdfasdfc
    url: http://localhost:8080
    user: admin
    
        # Perform the action
    if action is not None and not module.check_mode:
        try:
            action()
        except Exception as e:
            module.fail_json(msg='Entry action failed.', details=to_native(e), exception=traceback.format_exc())
    
    
DOCUMENTATION = '''
---
version_added: '2.0'
module: sendgrid
short_description: Sends an email with the SendGrid API
description:
   - 'Sends an email with a SendGrid account through their API, not through
     the SMTP service.'
notes:
   - 'This module is non-idempotent because it sends an email through the
     external API. It is idempotent only in the case that the module fails.'
   - 'Like the other notification modules, this one requires an external
     dependency to work. In this case, you'll need an active SendGrid
     account.'
   - 'In order to use api_key, cc, bcc, attachments, from_name, html_body, headers
     you must pip install sendgrid'
   - 'since 2.2 username and password are not required if you supply an api_key'
requirements:
  - sendgrid python library
options:
  username:
    description:
      - username for logging into the SendGrid account.
      - Since 2.2 it is only required if api_key is not supplied.
  password:
    description:
      - password that corresponds to the username
      - Since 2.2 it is only required if api_key is not supplied.
  from_address:
    description:
      - the address in the 'from' field for the email
    required: true
  to_addresses:
    description:
      - a list with one or more recipient email addresses
    required: true
  subject:
    description:
      - the desired subject for the email
    required: true
  api_key:
    description:
      - sendgrid API key to use instead of username/password
    version_added: 2.2
  cc:
    description:
      - a list of email addresses to cc
    version_added: 2.2
  bcc:
    description:
      - a list of email addresses to bcc
    version_added: 2.2
  attachments:
    description:
      - a list of relative or explicit paths of files you want to attach (7MB limit as per SendGrid docs)
    version_added: 2.2
  from_name:
    description:
      - the name you want to appear in the from field, i.e 'John Doe'
    version_added: 2.2
  html_body:
    description:
      - whether the body is html content that should be rendered
    version_added: 2.2
    type: bool
    default: 'no'
  headers:
    description:
      - a dict to pass on as headers
    version_added: 2.2
author: 'Matt Makai (@makaimc)'
'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    These recognizers are baseclasses for the code which is generated by ANTLR3.
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
    def setTokenTypeChannel(self, ttype, channel):
        '''
        A simple filter mechanism whereby you can tell this token stream
        to force all tokens of type ttype to be on channel.  For example,
        when interpreting, we cannot exec actions so we need to tell
        the stream to force all WS and NEWLINE to be a different, ignored
        channel.
	'''
        
        self.channelOverrideMap[ttype] = channel
    
        def test_global_visibility(self):
        expected = {0: 'Global variable', 1: 'Global variable',
                    2: 'Global variable', 3: 'Global variable',
                    4: 'Global variable', 5: 'Global variable',
                    6: 'Global variable', 7: 'Global variable',
                    8: 'Global variable', 9: 'Global variable'}
        actual = {k: g for k in range(10)}
        self.assertEqual(actual, expected)
    
        Instantiate with:
            POP3(hostname, port=110)
    
    
@parameterize
class TestEmailMessageBase:
    
    def test():
    runner = unittest.TextTestRunner()
    runner.run(suite())
    
        def run(self):
        if not self.future.set_running_or_notify_cancel():
            return
    
                async with asyncio.connect_write_pipe(pipeobj) as stream:
                self.assertEqual(stream.mode, asyncio.StreamMode.WRITE)
    
    
class TemporaryDirectory(object):
    '''Create and return a temporary directory.  This has the same
    behavior as mkdtemp but can be used as a context manager.  For
    example:
    
        # Clear assorted module caches.
    # Don't worry about resetting the cache if the module is not loaded
    try:
        distutils_dir_util = sys.modules['distutils.dir_util']
    except KeyError:
        pass
    else:
        distutils_dir_util._path_created.clear()
    re.purge()
    
        if path is None:
        path = os.environ.get('PATH', None)
        if path is None:
            try:
                path = os.confstr('CS_PATH')
            except (AttributeError, ValueError):
                # os.confstr() or CS_PATH is not available
                path = os.defpath
        # bpo-35755: Don't use os.defpath if the PATH environment variable is
        # set to an empty string
    
        A dictionary containing name/value pairs is returned.  If an
    optional dictionary is passed in as the second argument, it is
    used instead of a new dictionary.
    '''
    if g is None:
        g = {}
    define_rx = re.compile('#define ([A-Z][A-Za-z0-9_]+) (.*)\n')
    undef_rx = re.compile('/[*] #undef ([A-Z][A-Za-z0-9_]+) [*]/\n')
    #
    while True:
        line = fp.readline()
        if not line:
            break
        m = define_rx.match(line)
        if m:
            n, v = m.group(1, 2)
            try: v = int(v)
            except ValueError: pass
            g[n] = v
        else:
            m = undef_rx.match(line)
            if m:
                g[m.group(1)] = 0
    return g
    
        >>> requests = [2, 5, 14, 22, 18, 3, 35, 27, 20]
    >>> for request in requests:
    ...     h0.handle(request)
    request 2 handled in handler 0
    request 5 handled in handler 0
    request 14 handled in handler 1
    request 22 handled in handler 2
    request 18 handled in handler 1
    request 3 handled in handler 0
    end of chain, no handler for 35
    request 27 handled in handler 2
    request 20 handled in handler 2
    '''
    
    *TL;DR
Encapsulates how a set of objects interact.
'''
    
        >>> try:
    ...    num_obj.do_stuff()
    ... except Exception:
    ...    print('-> doing stuff failed!')
    ...    import sys
    ...    import traceback
    ...    traceback.print_exc(file=sys.stdout)
    -> doing stuff failed!
    Traceback (most recent call last):
    ...
    TypeError: ...str...int...
    
    from abc import abstractmethod
    
    *Where is the pattern used practically?
Sharing state is useful in applications like managing database connections:
https://github.com/onetwopunch/pythonDbTemplate/blob/master/database.py
    
            def wrapper(*args, **kwargs):
            return attr(*args, **kwargs)
        return wrapper
    
    *References:
http://ginstrom.com/scribbles/2008/11/06/generic-adapter-class-in-python/
https://sourcemaking.com/design_patterns/adapter
http://python-3-patterns-idioms-test.readthedocs.io/en/latest/ChangeInterface.html#adapter
    
    *Where is the pattern used practically?
The Grok framework uses decorators to add functionalities to methods,
like permissions or subscription to an event:
http://grok.zope.org/doc/current/reference/decorators.html
    
    
def setUpPackage():
  # We treat warnings as errors in our tests because warnings raised inside Vim
  # will interrupt user workflow with a traceback and we don't want that.
  warnings.filterwarnings( 'error' )
  # We ignore warnings from nose as we are not interested in them.
  warnings.filterwarnings( 'ignore', module = 'nose' )
    
        for match in matches_to_remove:
      vimsupport.RemoveDiagnosticMatch( match )
    
        def get_allowed_warnings(self):
        return [
            # We can't set a non-heuristic freshness at the framework level,
            # so just ignore this warning
            rs.FRESHNESS_HEURISTIC,
            # For our small test responses the Content-Encoding header
            # wipes out any gains from compression
            rs.CONNEG_GZIP_BAD,
        ]
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    define('num', default=100, help='number of iterations')
define('dump', default=False, help='print template generated code and exit')
    
        def start_tree(self, tree, filename):
        self.found_future_import = False
    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::