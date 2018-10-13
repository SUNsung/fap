
        
            np.random.seed(args.seed)
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = PCA(n_components=n_components, svd_solver='randomized',
                   random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
                gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (with Gram)'].append(delta)
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
        ###########################################################################
    # Set transformer input
    ###########################################################################
    transformers = {}
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
            return link_list
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
                    ffmpeg.ffmpeg_concat_audio_and_video([loop_file_path, single_file_path], title + '_full', 'mp4')
                cleanup_files([video_file_path, audio_file_path, loop_file_path])
            except EnvironmentError as err:
                print('Error preparing full coub video. {}'.format(err))
    except Exception as err:
        print('Error while downloading files. {}'.format(err))
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
        def test_realpath(self):
        self.assertIn('foo', self.pathmodule.realpath('foo'))
        with warnings.catch_warnings():
            warnings.simplefilter('ignore', DeprecationWarning)
            self.assertIn(b'foo', self.pathmodule.realpath(b'foo'))
    
        def run_xdev(self, *args, check_exitcode=True, xdev=True):
        env = dict(os.environ)
        env.pop('PYTHONWARNINGS', None)
        env.pop('PYTHONDEVMODE', None)
        env.pop('PYTHONMALLOC', None)
    
        def test_optim_level(self):
        # CPython: check that Py_Main() doesn't increment Py_OptimizeFlag
        # twice when -X utf8 requires to parse the configuration twice (when
        # the encoding changes after reading the configuration, the
        # configuration is read again with the new encoding).
        code = 'import sys; print(sys.flags.optimize)'
        out = self.get_output('-X', 'utf8', '-O', '-c', code)
        self.assertEqual(out, '1')
        out = self.get_output('-X', 'utf8', '-OO', '-c', code)
        self.assertEqual(out, '2')
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def UpdateWithNewDiagnostics( self, diags ):
    self._diagnostics = [ _NormalizeDiagnostic( x ) for x in
                            self._ApplyDiagnosticFilter( diags ) ]
    self._ConvertDiagListToDict()
    
      python_interpreter = _PathToPythonUsedDuringBuild()
  if python_interpreter and utils.GetExecutable( python_interpreter ):
    return python_interpreter
    
    
def _CreateInitialGroupMap():
  def AddToGroupMap( name, parent ):
    new_group = SyntaxGroup( name )
    group_name_to_group[ name ] = new_group
    parent.children.append( new_group )
    
    
  def Just_Doc_String_test( self ):
    self._Check( 'not_an_int', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': 'not_an_int',
    } )
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def SyntaxGroupsFromOutput_Basic_test():
  assert_that( syntax_parse._SyntaxGroupsFromOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
               has_item( 'foogroup' ) )
    
      # List of diagnostics returned by ycmd for the above code.
  diagnostics = [ {
    'kind': 'ERROR',
    'text': 'expected ';' after expression',
    'location': {
      'filepath': 'buffer',
      'line_num': 3,
      'column_num': 9
    },
    # Looks strange but this is really what ycmd is returning.
    'location_extent': {
      'start': {
        'filepath': '',
        'line_num': 0,
        'column_num': 0,
      },
      'end': {
        'filepath': '',
        'line_num': 0,
        'column_num': 0,
      }
    },
    'ranges': [],
    'fixit_available': True
  }, {
    'kind': 'WARNING',
    'text': 'equality comparison result unused',
    'location': {
      'filepath': 'buffer',
      'line_num': 3,
      'column_num': 7,
    },
    'location_extent': {
      'start': {
        'filepath': 'buffer',
        'line_num': 3,
        'column_num': 5,
      },
      'end': {
        'filepath': 'buffer',
        'line_num': 3,
        'column_num': 7,
      }
    },
    'ranges': [ {
      'start': {
        'filepath': 'buffer',
        'line_num': 3,
        'column_num': 3,
      },
      'end': {
        'filepath': 'buffer',
        'line_num': 3,
        'column_num': 9,
      }
    } ],
    'fixit_available': True
  } ]