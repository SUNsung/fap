
        
            strings = []
    with open(filepath, 'r') as f:
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
            # Check cert keyfile exists
        if hasattr(OpenSSL.crypto, 'load_publickey'):
            if os.path.exists(CertUtil.cert_keyfile):
                with open(CertUtil.cert_keyfile, 'rb') as fp:
                    CertUtil.cert_publickey = OpenSSL.crypto.load_publickey(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            else:
                CertUtil.generate_cert_keyfile()
        else:
            CertUtil.cert_keyfile = None
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
        if prober.nat_type in ('cone', 'restricted'):
        usable = 'usable'
    elif prober.nat_type == 'offline':
        usable = 'unusable'
    else:
        usable = 'unknown'
    
        if netloc.startswith(('127.0.0.', '::1', 'localhost')):
        start_response('400 Bad Request', [('Content-Type', 'text/html')])
        html = ''.join('<a href='https://%s/'>%s</a><br/>' % (x, x) for x in ('google.com', 'mail.google.com'))
        yield message_html('GoAgent %s is Running' % __version__, 'Now you can visit some websites', html)
        raise StopIteration
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    
@YouCompleteMeInstance()
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ResponseContainingError_test( ycm, post_vim_message ):
  current_buffer = VimBuffer( 'buffer' )
    
    
  def done( self ):
    return self._done
    
        def _adjust_thread_count(self):
        # When the executor gets lost, the weakref callback will wake up
        # the worker threads.
        def weakref_cb(_, q=self._work_queue):
            q.put(None)
        # TODO(bquinlan): Should avoid creating new threads if there are more
        # idle threads than items in the work queue.
        if len(self._threads) < self._max_workers:
            t = threading.Thread(target=_worker,
                                 args=(weakref.ref(self, weakref_cb),
                                       self._work_queue))
            t.daemon = True
            t.start()
            self._threads.add(t)
            _threads_queues[t] = self._work_queue
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
    # 0 : illegal
# 1 : very unlikely
# 2 : normal
# 3 : very likely
Latin1ClassModel = (
# UDF OTH ASC ASS ACV ACO ASV ASO
    0,  0,  0,  0,  0,  0,  0,  0,  # UDF
    0,  3,  3,  3,  3,  3,  3,  3,  # OTH
    0,  3,  3,  3,  3,  3,  3,  3,  # ASC
    0,  3,  3,  3,  1,  1,  3,  3,  # ASS
    0,  3,  3,  3,  1,  2,  1,  2,  # ACV
    0,  3,  3,  3,  3,  3,  3,  3,  # ACO
    0,  3,  1,  3,  1,  1,  1,  3,  # ASV
    0,  3,  1,  3,  1,  1,  3,  3,  # ASO
)
    
    CP949_SM_MODEL = {'class_table': CP949_CLS,
                  'class_factor': 10,
                  'state_table': CP949_ST,
                  'char_len_table': CP949_CHAR_LEN_TABLE,
                  'name': 'CP949'}
    
    from .mbcharsetprober import MultiByteCharSetProber
from .codingstatemachine import CodingStateMachine
from .chardistribution import SJISDistributionAnalysis
from .jpcntx import SJISContextAnalysis
from .mbcssm import SJIS_SM_MODEL
from .enums import ProbingState, MachineState
    
            if self.state == ProbingState.DETECTING:
            if self.get_confidence() > self.SHORTCUT_THRESHOLD:
                self._state = ProbingState.FOUND_IT