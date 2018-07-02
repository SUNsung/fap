
        
          def testLogPartitionFunctionAllTrees(self):
    '''Tests the log partition function with all trees feasible.'''
    with self.test_session():
      for forest in [False, True]:
        # The scores allow all trees.  Using Cayley's formula, the
        # number of directed spanning trees and forests in a complete
        # digraph of n nodes is n^{n-1} and (n+1)^{n-1}, respectively.
        # https://en.wikipedia.org/wiki/Cayley%27s_formula
        scores = tf.zeros([10, 10, 10], tf.float64)  # = 1 in log domain
        num_nodes = tf.range(1, 11, dtype=tf.int32)
    
          linked_embeddings = [
          network_units.NamedTensor(lengths, 'lengths'),
          network_units.NamedTensor(scores, 'scores')
      ]
      network_tensors = component.network.create([], linked_embeddings, [],
                                                 None, False, stride)
      cost, correct, total = component.network.compute_bulk_loss(
          stride, network_tensors, gold)
    
      pretrain_steps = _get_steps(FLAGS.pretrain_steps, FLAGS.pretrain_epochs,
                              len(train_corpus))
  train_steps = _get_steps(FLAGS.train_steps, FLAGS.train_epochs,
                           len(train_corpus))
  check.Eq(len(targets), len(pretrain_steps),
           'Length mismatch between training targets and --pretrain_steps')
  check.Eq(len(targets), len(train_steps),
           'Length mismatch between training targets and --train_steps')
    
      # Now that we have parser input data, parse.
  processed = run_parser(parser_input, FLAGS.parser_saved_model, session_config,
                         component_beam_sizes, components_to_locally_normalize,
                         FLAGS.max_batch_size, FLAGS.timeline_output_file)
    
    
if __name__ == '__main__':
    main(sys.argv[1:])

    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    def with_process_pool_executor():
    with ProcessPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
        def test_map_timeout(self):
        results = []
        try:
            for i in self.executor.map(time.sleep,
                                       [0, 0, 3],
                                       timeout=1.5):
                results.append(i)
        except futures.TimeoutError:
            pass
        else:
            self.fail('expected TimeoutError')
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
      for path in not_python_paths:
    yield EndsWithPython_Bad, path

    
    
  def No_Insertion_Text_test( self ):
    self._Check( 0, {
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0'
    } )

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    _logger = logging.getLogger( __name__ )