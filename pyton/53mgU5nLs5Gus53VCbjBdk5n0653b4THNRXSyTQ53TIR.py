
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
        headers = dict(
        Authorization='apiToken %s' % args.key,
    )
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
            :module:          AnsibleModule, instance of AnsibleModule
        :action_args:     tuple, args to pass for the action to take place
        :zone:            str,  firewall zone
        :desired_state:   str,  the desired state (enabled, disabled, etc)
        :permanent:       bool, action should be permanent
        :immediate:       bool, action should take place immediately
        :enabled_values:  str[], acceptable values for enabling something (default: enabled)
        :disabled_values: str[], acceptable values for disabling something (default: disabled)
        '''
    
        def __init__(self, config, account_, auth, installer, acme=None):
        '''Initialize a client.'''
        self.config = config
        self.account = account_
        self.auth = auth
        self.installer = installer
    
        def _test_with_already_existing(self):
        self.client.installer = mock.MagicMock()
        self.client.installer.supported_enhancements.return_value = [
            'ensure-http-header', 'redirect', 'staple-ocsp']
        self.client.installer.enhance.side_effect = errors.PluginEnhancementAlreadyPresent()
        self.client.enhance_config([self.domain], None)
    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)

    
                with open(md, 'r') as inp:
                text = inp.readlines()
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
            ``cursor`` should be the ``id`` of the last message received.
        '''
        results = []
        for msg in reversed(self.cache):
            if msg['id'] == cursor:
                break
            results.append(msg)
        results.reverse()
        return results
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
    
class BaseRequestHandler(web.RequestHandler):
    SUPPORTED_METHODS = ('PUT', 'GET', 'DELETE')
    
    # On RTD we can't import sphinx_rtd_theme, but it will be applied by
# default anyway.  This block will use the same theme when building locally
# as on RTD.
if not on_rtd:
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]

    
    To run the tests by hand, cd to e:\ and run
  c:\python27\python.exe -m tornado.test.runtests
To run the tests with tox, cd to e:\maint\vm\windows and run
  c:\python27\scripts\tox
To run under cygwin (which must be installed separately), run
  cd /cygdrive/e; python -m tornado.test.runtests
'''