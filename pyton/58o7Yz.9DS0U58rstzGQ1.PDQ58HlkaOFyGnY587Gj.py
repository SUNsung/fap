
        
                task = self.dv_switch.ReconfigureDVPort_Task(port_spec)
        try:
            wait_for_task(task)
        except Exception:
            self.restore_original_state()
            self.module.fail_json(msg=task.info.error.msg)
    
    
DOCUMENTATION = '''
---
module: ldap_passwd
short_description: Set passwords in LDAP.
description:
  - Set a password for an LDAP entry.  This module only asserts that
    a given password is valid for a given entry.  To assert the
    existence of an entry, see M(ldap_entry).
notes:
  - The default authentication settings will attempt to use a SASL EXTERNAL
    bind over a UNIX domain socket. This works well with the default Ubuntu
    install for example, which includes a cn=peercred,cn=external,cn=auth ACL
    rule allowing root to modify the server configuration. If you need to use
    a simple bind to access your server, pass the credentials in I(bind_dn)
    and I(bind_pw).
version_added: '2.6'
author:
  - Keller Fuchs (@KellerFuchs)
requirements:
  - python-ldap
options:
  passwd:
    required: true
    description:
      - The (plaintext) password to be set for I(dn).
extends_documentation_fragment: ldap.documentation
'''
    
        except Exception as ex:
        module.fail_json(msg=ex.message)
    
    - name: Send matrix notification with user_id and password
  matrix:
    msg_plain: '**hello world**'
    msg_html: '<b>hello world</b>'
    room_id: '!12345678:server.tld'
    hs_url: 'https://matrix.org'
    user_id: 'ansible_notification_bot'
    password: '{{ matrix_auth_password }}'
'''
    
                    # Read the new file to memory
                with open(_filename) as _file:
                    _contents = _file.read()
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
    class Command(ScrapyCommand):
    
        class ScrapyClientContextFactory(ClientContextFactory):
        'A SSL context factory which is more permissive against SSL bugs.'
        # see https://github.com/scrapy/scrapy/issues/82
        # and https://github.com/scrapy/scrapy/issues/26
        # and https://github.com/scrapy/scrapy/issues/981
    
            def _identityVerifyingInfoCallback(self, connection, where, ret):
            if where & SSL_CB_HANDSHAKE_START:
                set_tlsext_host_name(connection, self._hostnameBytes)
            elif where & SSL_CB_HANDSHAKE_DONE:
                try:
                    verifyHostname(connection, self._hostnameASCII)
                except verification_errors as e:
                    logger.warning(
                        'Remote certificate is not valid for hostname '{}'; {}'.format(
                            self._hostnameASCII, e))
    
        # Stripping scripts and comments is slow (about 20x slower than
    # just checking if a string is in text); this is a quick fail-fast
    # path that should work for most pages.
    if 'fragment' not in text:
        return False
    if 'content' not in text:
        return False
    
        def reset(self):
        self.s = categorical_sample(self.isd, self.np_random)
        self.lastaction = None
        return self.s
    
    def warn(msg, *args):
    if MIN_LEVEL <= WARN:
        warnings.warn(colorize('%s: %s'%('WARN', msg % args), 'yellow'))
    
        def __repr__(self):
        return 'MultiBinary({})'.format(self.n)
    
        def close(self):
        self.proc.stdin.close()
        ret = self.proc.wait()
        if ret != 0:
            logger.error('VideoRecorder encoder exited with status {}'.format(ret))

    
            self.moon = self.world.CreateStaticBody( shapes=edgeShape(vertices=[(0, 0), (W, 0)]) )
        self.sky_polys = []
        for i in range(CHUNKS-1):
            p1 = (chunk_x[i],   smooth_y[i])
            p2 = (chunk_x[i+1], smooth_y[i+1])
            self.moon.CreateEdgeFixture(
                vertices=[p1,p2],
                density=0,
                friction=0.1)
            self.sky_polys.append( [p1, p2, (p2[0],H), (p1[0],H)] )
    
    class FrictionDetector(contactListener):
    def __init__(self, env):
        contactListener.__init__(self)
        self.env = env
    def BeginContact(self, contact):
        self._contact(contact, True)
    def EndContact(self, contact):
        self._contact(contact, False)
    def _contact(self, contact, begin):
        tile = None
        obj = None
        u1 = contact.fixtureA.body.userData
        u2 = contact.fixtureB.body.userData
        if u1 and 'road_friction' in u1.__dict__:
            tile = u1
            obj  = u2
        if u2 and 'road_friction' in u2.__dict__:
            tile = u2
            obj  = u1
        if not tile:
            return