
        
                flash(error)
    
    
def init_db():
    '''Clear existing data and create new tables.'''
    db = get_db()
    
        def app_context_processor(self, f):
        '''Like :meth:`Flask.context_processor` but for a blueprint.  Such a
        function is executed each request, even if outside of the blueprint.
        '''
        self.record_once(lambda s: s.app.template_context_processors
            .setdefault(None, []).append(f))
        return f
    
            if index is None:
            self.order.append(tag)
        else:
            self.order.insert(index, tag)
    
    from werkzeug.local import LocalProxy
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
        :param template_name_or_list: the name of the template to be
                                  rendered, or an iterable with template names
                                  the first one existing will be rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.get_or_select_template(template_name_or_list),
                   context, ctx.app)
    
        @contextmanager
    def session_transaction(self, *args, **kwargs):
        '''When used in combination with a ``with`` statement this opens a
        session transaction.  This can be used to modify the session that
        the test client uses.  Once the ``with`` block is left the session is
        stored back.
    
            if cls.decorators:
            view.__name__ = name
            view.__module__ = cls.__module__
            for decorator in cls.decorators:
                view = decorator(view)
    
    
def test_basic_url_generation(app):
    app.config['SERVER_NAME'] = 'localhost'
    app.config['PREFERRED_URL_SCHEME'] = 'https'
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
            if data is None:
            s = self._get_session_from_db()
            if s:
                data = self.decode(s.session_data)
                self._cache.set(self.cache_key, data, self.get_expiry_age(expiry=s.expire_date))
            else:
                data = {}
        return data
    
        def save(self, must_create=False):
        '''
        To save, get the session key as a securely signed string and then set
        the modified flag so that the cookie is set on the client for the
        current request.
        '''
        self._session_key = self._get_session_key()
        self.modified = True
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
        def enable(self):
        '''Enables the rule in AWS'''
        try:
            response = self.client.enable_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not enable rule %s' % self.name)
        self.changed = True
        return response
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        name=dict(type='str'),
    ))
    
    
def _delete_monitoring_policy_process(module, oneandone_conn, monitoring_policy_id, process_id):
    '''
    Removes a process from a monitoring policy.
    '''
    try:
        if module.check_mode:
            process = oneandone_conn.get_monitoring_policy_process(
                monitoring_policy_id=monitoring_policy_id,
                process_id=process_id
            )
            if process:
                return True
            return False
    
            '''
        if not self.one.host.allocate(self.get_parameter('name'),
                                      self.get_parameter('vmm_mad_name'),
                                      self.get_parameter('im_mad_name'),
                                      self.get_parameter('cluster_id')):
            self.fail(msg='could not allocate host')
        else:
            self.result['changed'] = True
        return True
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
    # If outside servers aren't reachable from your machine, use delegate_to and override hosts:
- bigpanda:
    component: myapp
    version: '1.3'
    token: '{{ bigpanda_token }}'
    hosts: '{{ ansible_hostname }}'
    state: started
  delegate_to: localhost
  register: deployment
    
            change_applied = False
        if self.state == 'present':
            if rc != 0:
                self.module.fail_json(msg='Failed to %s feature %s.'
                                          ' icinga2 command returned %s' % (feature_enable_str,
                                                                            self.feature_name,
                                                                            out))
    
        module = AnsibleModule(
        argument_spec=dict(
            key=dict(required=True),
            event=dict(required=True, choices=['deploy', 'annotation']),
            msg=dict(),
            revision_id=dict(),
            annotated_by=dict(default='Ansible'),
            level=dict(default='INFO', choices=['INFO', 'WARN', 'ERROR']),
            instance_id=dict(),
            event_epoch=dict(),
            deployed_by=dict(default='Ansible'),
            deployed_to=dict(),
            repository=dict(),
        ),
        supports_check_mode=True
    )
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
        @staticmethod
    def create_ca():
        key = OpenSSL.crypto.PKey()
        key.generate_key(OpenSSL.crypto.TYPE_RSA, 2048)
        ca = OpenSSL.crypto.X509()
        ca.set_version(2)
        ca.set_serial_number(0)
        subj = ca.get_subject()
        subj.countryName = 'CN'
        subj.stateOrProvinceName = 'Internet'
        subj.localityName = 'Cernet'
        subj.organizationName = CertUtil.ca_vendor
        # Log generated time.
        subj.organizationalUnitName = '%s Root - %d' % (CertUtil.ca_vendor, int(time.time()))
        subj.commonName = '%s XX-Net' % CertUtil.ca_vendor
        ca.gmtime_adj_notBefore(- 3600 * 24)
        ca.gmtime_adj_notAfter(CertUtil.ca_validity - 3600 * 24)
        ca.set_issuer(subj)
        ca.set_subject(subj)
        ca.set_pubkey(key)
        ca.add_extensions([
            OpenSSL.crypto.X509Extension(
                'basicConstraints', False, 'CA:TRUE', subject=ca, issuer=ca)
            ])
        ca.sign(key, CertUtil.ca_digest)
        #xlog.debug('CA key:%s', key)
        xlog.info('create CA')
        return key, ca
    
    import time
import threading
    
    - ANTLRStringStream: Reads from a string objects. The input should be a unicode
  object, or ANTLR3 will have trouble decoding non-ascii data.
- ANTLRFileStream: Opens a file and read the contents, with optional character
  decoding.
- ANTLRInputStream: Reads the date from a file-like object, with optional
  character decoding.
    
                sum_info.SetProperty(msilib.PID_TITLE, 'a' * 1001)
            title = sum_info.GetProperty(msilib.PID_TITLE)
            self.assertEqual(title, b'a' * 1001)
        finally:
            db = None
            sum_info = None
            os.unlink(db_path)
    
        def testCosh(self):
        self.assertRaises(TypeError, math.cosh)
        self.ftest('cosh(0)', math.cosh(0), 1)
        self.ftest('cosh(2)-2*cosh(1)**2', math.cosh(2)-2*math.cosh(1)**2, -1) # Thanks to Lambert
        self.assertEqual(math.cosh(INF), INF)
        self.assertEqual(math.cosh(NINF), INF)
        self.assertTrue(math.isnan(math.cosh(NAN)))
    
    PYTHON2_EXCEPTIONS = (
    'ArithmeticError',
    'AssertionError',
    'AttributeError',
    'BaseException',
    'BufferError',
    'BytesWarning',
    'DeprecationWarning',
    'EOFError',
    'EnvironmentError',
    'Exception',
    'FloatingPointError',
    'FutureWarning',
    'GeneratorExit',
    'IOError',
    'ImportError',
    'ImportWarning',
    'IndentationError',
    'IndexError',
    'KeyError',
    'KeyboardInterrupt',
    'LookupError',
    'MemoryError',
    'NameError',
    'NotImplementedError',
    'OSError',
    'OverflowError',
    'PendingDeprecationWarning',
    'ReferenceError',
    'RuntimeError',
    'RuntimeWarning',
    # StandardError is gone in Python 3, so we map it to Exception
    'StopIteration',
    'SyntaxError',
    'SyntaxWarning',
    'SystemError',
    'SystemExit',
    'TabError',
    'TargetScopeError',
    'TypeError',
    'UnboundLocalError',
    'UnicodeDecodeError',
    'UnicodeEncodeError',
    'UnicodeError',
    'UnicodeTranslateError',
    'UnicodeWarning',
    'UserWarning',
    'ValueError',
    'Warning',
    'ZeroDivisionError',
)
    
        def __init__(self, file, connection):
        super().__init__(file)
        self.connection = connection
    
    ans = input('View full message?')
if ans.lower()[0] == 'n':
    sys.exit()
    
    def handleSlideshow(slideshow):
    print('<html>')
    handleSlideshowTitle(slideshow.getElementsByTagName('title')[0])
    slides = slideshow.getElementsByTagName('slide')
    handleToc(slides)
    handleSlides(slides)
    print('</html>')
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    
    
    *References:
https://fkromer.github.io/python-pattern-references/design/#singleton
    
    *TL;DR80
Creates objects without having to specify the exact class.
'''
    
        def find_shortest_path(self, start, end, path=None):
        path = path or []
        path.append(start)