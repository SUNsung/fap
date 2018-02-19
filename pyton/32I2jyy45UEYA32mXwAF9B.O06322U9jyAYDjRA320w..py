
        
            Reference: Armin Ronacher, 'Flask for Fun and for Profit' PyBay 2016.
    '''
    for name in find_modules('flaskr.blueprints'):
        mod = import_string(name)
        if hasattr(mod, 'bp'):
            app.register_blueprint(mod.bp)
    return None
    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
        def test_not_equal(self):
        self.assertFalse(self.addr1 != self.addr2)
        self.assertTrue(self.addr != self.addr1)
    
        def has_more_configs(self):
        '''Returns true if there are more configs to test'''
        return bool(self._configs)
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
    
class NotifyTests(unittest.TestCase):
    '''Tests for the notifier.'''
    
    if os.path.isfile(log_file):
    os.remove(log_file)
    
        if WSAStringToAddressA(
            ip_string,
            address_family,
            None,
            ctypes.byref(addr),
            ctypes.byref(addr_size)
    ) != 0:
        raise socket.error(ctypes.FormatError())
    
    
def allow_scan():
    global scan_allow_time
    if not allow_connect:
        return False
    if time.time() < scan_allow_time:
        return False
    else:
        return True
    
        try:
        send_to_browser = True
        try:
            response_headers = dict((k.title(), v) for k, v in response.getheaders())
            wfile.write('HTTP/1.1 %d %s\r\n' % (response.status, response.reason))
            for key, value in response.getheaders():
                send_header(wfile, key, value)
            wfile.write('\r\n')
        except Exception as e:
            send_to_browser = False
            wait_time = time.time()-time_request
            xlog.info('direct_handler.handler send response fail. t:%d e:%r %s%s', wait_time, e, host, url)
    
            self.decisionNumber = decisionNumber
        self.eot = eot
        self.eof = eof
        self.min = min
        self.max = max
        self.accept = accept
        self.special = special
        self.transition = transition
    
            return ''.join([t.text for t in self.tokens[start:stop+1]])
    
            raise NotImplementedError
    
    def setCharPositionInLine(self, pos):
        '''@brief Set the column of the tokens first character,
    
    # revision identifiers, used by Alembic.
revision = '1226819ee0e3'
down_revision = '956a063c52b3'
    
    Revision ID: 18e88e1cc004
Revises: 430039611635
Create Date: 2016-03-13 21:30:24.833107
    
    '''
    
    class Dashboard(Base, AuditMixin):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'dashboards'
    id = Column(Integer, primary_key=True)
    owners = relationship('User', secondary=dashboard_user)
    
        for slc in session.query(Slice).all():
        if slc.druid_datasource_id:
            slc.datasource_id = slc.druid_datasource_id
        if slc.table_id:
            slc.datasource_id = slc.table_id
        session.merge(slc)
        session.commit()
    session.close()
    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
    Revision ID: 55179c7f25c7
Revises: 315b3f4da9b0
Create Date: 2015-12-13 08:38:43.704145
    
    # revision identifiers, used by Alembic.
revision = '7e3ddad2a00b'
down_revision = 'b46fa1b0b39e'
    
    from concurrent.futures import (as_completed, ThreadPoolExecutor,
                                ProcessPoolExecutor)
    
    
def reap_threads(func):
    '''Use this function when threads are being used.  This will
    ensure that the threads are cleaned up even when the test fails.
    If threading is unavailable this function does nothing.
    '''
    @functools.wraps(func)
    def decorator(*args): 
        key = test_support.threading_setup()
        try:
            return func(*args)
        finally:
            test_support.threading_cleanup(*key)
    return decorator
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    from future.utils import iterkeys, iteritems
from ycm import vimsupport
import re
    
    api('modaction', ModActionTemplate)
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
        @csrf_exempt
    def renderurl(self, override=None):
        if override:
            path = override
        else:
            path = request.path