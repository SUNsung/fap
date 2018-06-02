  with gfile.FastGFile(FLAGS.spec_file, 'w') as f:
    f.write(str(master_spec).encode('utf-8'))
    
      Returns:
    [B,N,L] tensor of label potentials as defined above, with the same dtype as
    the arguments.
  '''
  check.Eq(tokens.get_shape().ndims, 3, 'tokens must be rank 3')
  check.Eq(weights.get_shape().ndims, 2, 'weights must be a matrix')
    
    flags.DEFINE_string('master_spec', None, 'Path to task context with '
                    'inputs and parameters for feature extractors.')
flags.DEFINE_string('params_path', None, 'Path to trained model parameters.')
flags.DEFINE_string('export_path', '', 'Output path for exported servo model.')
flags.DEFINE_bool('export_moving_averages', False,
                  'Whether to export the moving average parameters.')
flags.DEFINE_bool('build_runtime_graph', False,
                  'Whether to build a graph for use by the runtime.')
    
    FLAGS = flags.FLAGS
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        def _longcmdstring(self, line, file=None):
        '''Internal: send a command and get the response plus following text.
        Same as _longcmd() and _getlongresp(), except that the returned `lines`
        are unicode strings rather than bytes objects.
        '''
        self._putcmd(line)
        resp, list = self._getlongresp(file)
        return resp, [line.decode(self.encoding, self.errors)
                      for line in list]
    
        def mtime(self):
        '''Returns the time the robots.txt file was last fetched.