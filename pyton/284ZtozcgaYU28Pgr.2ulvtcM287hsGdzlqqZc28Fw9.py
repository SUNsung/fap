print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        def test_socks4a(self):
        self.assertTrue(isinstance(self._get_ip('socks4a'), compat_str))
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
        def set_appid_not_exist(self, appid):
        xlog.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
                try:
                    config.GAE_APPIDS.remove(appid)
                except:
                    pass
    
    def os_detail():
    if sys.platform == 'win32':
        return win32_version_string()
    elif sys.platform.startswith('linux'):
        distname,version,id = platform.linux_distribution()
        return 'Dist:%s; Version:%s; ID:%s' % (distname,version,id)
    elif sys.platform == 'darwin':
        release, versioninfo, machine = platform.mac_ver()
        return 'Release:%s; Version:%s Machine:%s' % (release, versioninfo, machine)
    else:
        return 'None'

    
    
    def reduceToSingleOperationPerIndex(self, rewrites):
        '''
        We need to combine operations and report invalid operations (like
        overlapping replaces that are not completed nested).  Inserts to
        same index need to be combined etc...   Here are the cases:
    
    # revision identifiers, used by Alembic.
revision = '12d55656cbca'
down_revision = '55179c7f25c7'
    
    class Dashboard(Base, AuditMixin):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'dashboards'
    id = Column(Integer, primary_key=True)
    owners = relationship('User', secondary=dashboard_user)
    
    Revision ID: 43df8de3a5f4
Revises: 7dbf98566af7
Create Date: 2016-01-18 23:43:16.073483
    
    
def upgrade():
    op.add_column('tables', sa.Column('description', sa.Text(), nullable=True))
    
            self.reader, addr = a.accept()
        set_close_exec(self.reader.fileno())
        self.reader.setblocking(0)
        self.writer.setblocking(0)
        a.close()
        self.reader_fd = self.reader.fileno()
    
    try:
    xrange
except NameError:
    xrange = range
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        # tornado.websocket
    'WebSocketProtocol',
    'WebSocketProtocol13',
    'WebSocketProtocol76',
]
    
    
def search(img):
    result = cv2.matchTemplate(img, template, cv2.TM_SQDIFF)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
    
    
if __name__ == '__main__':
    main()
