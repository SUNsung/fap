
        
        
def main():
    '''Pretty-print the bug information as JSON.'''
    print(json.dumps(info(), sort_keys=True, indent=2))
    
        with server as (host, port):
        url = 'http://{}:{}/'.format(host, port)
        r = requests.get(url, auth=auth)
        # Verify server didn't authenticate us.
        assert r.status_code == 401
        assert r.history[0].status_code == 401
        close_server.set()
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
      _assert_accepts( f, { 'text' : 'This is an IMPORTANT taco',
                        'kind' : 'WARNING' } )
  _assert_rejects( f, { 'text' : 'This taco will NOT be shown',
                        'kind' : 'ERROR' } )
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'futuresdoc'
    
    if __name__ == '__main__':
    main()

    
        def test_exception_with_timeout(self):
        self.assertRaises(futures.TimeoutError,
                          PENDING_FUTURE.exception, timeout=0)
        self.assertRaises(futures.TimeoutError,
                          RUNNING_FUTURE.exception, timeout=0)
        self.assertRaises(futures.CancelledError,
                          CANCELLED_FUTURE.exception, timeout=0)
        self.assertRaises(futures.CancelledError,
                          CANCELLED_AND_NOTIFIED_FUTURE.exception, timeout=0)
        self.assertTrue(isinstance(EXCEPTION_FUTURE.exception(timeout=0),
                                   IOError))
        self.assertEqual(SUCCESSFUL_FUTURE.exception(timeout=0), None)
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    content = open(file_name, 'rb').read()
    
    for topic_idx, topic in enumerate(nmf.components_):
    print('Topic #%d:' % topic_idx)
    print(' '.join([feature_names[i]
                    for i in topic.argsort()[:-n_top_words - 1:-1]]))
    print('')

    
    Latin5_BulgarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 77, 90, 99,100, 72,109,107,101, 79,185, 81,102, 76, 94, 82,  # 40
110,186,108, 91, 74,119, 84, 96,111,187,115,253,253,253,253,253,  # 50
253, 65, 69, 70, 66, 63, 68,112,103, 92,194,104, 95, 86, 87, 71,  # 60
116,195, 85, 93, 97,113,196,197,198,199,200,253,253,253,253,253,  # 70
194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,  # 80
210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,  # 90
 81,226,227,228,229,230,105,231,232,233,234,235,236, 45,237,238,  # a0
 31, 32, 35, 43, 37, 44, 55, 47, 40, 59, 33, 46, 38, 36, 41, 30,  # b0
 39, 28, 34, 51, 48, 49, 53, 50, 54, 57, 61,239, 67,240, 60, 56,  # c0
  1, 18,  9, 20, 11,  3, 23, 15,  2, 26, 12, 10, 14,  6,  4, 13,  # d0
  7,  8,  5, 19, 29, 25, 22, 21, 27, 24, 17, 75, 52,241, 42, 16,  # e0
 62,242,243,244, 58,245, 98,246,247,248,249,250,251, 91,252,253,  # f0
)
    
            if self.state == ProbingState.DETECTING:
            if (self.distribution_analyzer.got_enough_data() and
                    (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
        def reset(self):
        super(SingleByteCharSetProber, self).reset()
        # char order of last character
        self._last_order = 255
        self._seq_counters = [0] * SequenceLikelihood.get_num_categories()
        self._total_seqs = 0
        self._total_char = 0
        # characters that fall in our sampling range
        self._freq_char = 0
    
            # Log all prober confidences if none met MINIMUM_THRESHOLD
        if self.logger.getEffectiveLevel() == logging.DEBUG:
            if self.result['encoding'] is None:
                self.logger.debug('no probers hit minimum threshold')
                for group_prober in self._charset_probers:
                    if not group_prober:
                        continue
                    if isinstance(group_prober, CharSetGroupProber):
                        for prober in group_prober.probers:
                            self.logger.debug('%s %s confidence = %s',
                                              prober.charset_name,
                                              prober.language,
                                              prober.get_confidence())
                    else:
                        self.logger.debug('%s %s confidence = %s',
                                          prober.charset_name,
                                          prober.language,
                                          prober.get_confidence())
        return self.result

    
    with open(path.join(here, 'README.rst'), encoding='utf-8') as f:
    long_description = f.read()