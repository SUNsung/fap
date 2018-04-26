
        
        
def main(argv):
  del argv  # Unused.
    
    
def count_transit_points(time, event):
  '''Computes the number of points in each transit of a given event.
    
    DATA_URL = 'https://www.cs.toronto.edu/~kriz/cifar-10-binary.tar.gz'
    
      eval_file_path = os.path.join(FLAGS.data_dir, EVAL_FILE)
  _download_and_clean_file(eval_file_path, EVAL_URL)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # Save the path vocabulary
  path_vocab_filename = os.path.join(
      embeddings_base_path, '%d_path_vocab' % model.lstm_output_dim)
  with open(path_vocab_filename, 'w') as f_out:
    f_out.write('\n'.join(path_vocab))
    f_out.write('\n')
    
        if self.discretize_actions:
      new_actions = []
      idx = 0
      for i, (dim, typ) in enumerate(zip(self._act_dims, self._act_types)):
        if typ == spaces.discrete:
          new_actions.append(actions[idx])
          idx += 1
        elif typ == spaces.box:
          low, high = self.act_info[i]
          cur_action = []
          for j in xrange(dim):
            cur_action.append(
                low[j] + (high[j] - low[j]) * actions[idx] /
                float(self.discretize_actions))
            idx += 1
          new_actions.append(np.hstack(cur_action))
      actions = new_actions
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.add_argument(
      '--data-dir',
      type=str,
      default='',
      help='Directory to download and extract CIFAR-10 to.')
    
        h = history.history
    assert_array_almost_equal(h['loss'], h[loss_full_name], decimal=decimal)
    assert_array_almost_equal(h['loss'], h['weighted_' + loss_full_name], decimal=decimal)
    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    
EXCLUDE = {
    'Optimizer',
    'Wrapper',
    'get_session',
    'set_session',
    'CallbackList',
    'serialize',
    'deserialize',
    'get',
    'set_image_dim_ordering',
    'image_dim_ordering',
    'get_variable_shape',
}
    
    - The length and noise (i.e. 'useless' story components) impact the ability for
LSTMs / GRUs to provide the correct answer. Given only the supporting facts,
these RNNs can achieve 100% accuracy on many tasks. Memory networks and neural
networks that use attentional processes can efficiently search through this
noise to find the relevant statements, improving performance substantially.
This becomes especially obvious on QA2 and QA3, both far longer than QA1.
'''
    
    
if six.PY3:
    for line in open('tests/py3-ignores.txt'):
        file_path = line.strip()
        if file_path and file_path[0] != '#':
            collect_ignore.append(file_path)
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        if WSAAddressToStringA(
            ctypes.byref(addr),
            addr_size,
            None,
            ip_string,
            ctypes.byref(ip_string_size)
    ) != 0:
        raise socket.error(ctypes.FormatError())
    
    
class NoViableAltException(RecognitionException):
    '''@brief Unable to decide which alternative to choose.'''
    
        def test_create_entries(self):
        self.dialog.top = self.root
        self.dialog.row = 0
        self.engine.setpat('hello')
        self.dialog.create_entries()
        self.assertIn(self.dialog.ent.get(), 'hello')
    
        def test_string_with_utf8_bom(self):
        # see #18958
        bom_json = '[1,2,3]'.encode('utf-8-sig').decode('utf-8')
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.loads(bom_json)
        self.assertIn('BOM', str(cm.exception))
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.json.load(StringIO(bom_json))
        self.assertIn('BOM', str(cm.exception))
        # make sure that the BOM is not detected in the middle of a string
        bom_in_str = ''{}''.format(''.encode('utf-8-sig').decode('utf-8'))
        self.assertEqual(self.loads(bom_in_str), '\ufeff')
        self.assertEqual(self.json.load(StringIO(bom_in_str)), '\ufeff')
    
    #
# NOTE: This is the pi function from the decimal documentation, modified
# for benchmarking purposes. Since floats do not have a context, the higher
# intermediate precision from the original is NOT used, so the modified
# algorithm only gives an approximation to the correctly rounded result.
# For serious use, refer to the documentation or the appropriate literature.
#
def pi_float():
    '''native float'''
    lasts, t, s, n, na, d, da = 0, 3.0, 3, 1, 0, 0, 24
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
        def add_folder(self, folder):
        '''Create a folder and return an MH instance representing it.'''
        return MH(os.path.join(self._path, folder),
                  factory=self._factory)
    
    
# Test retrieval when run as a script.
if __name__ == '__main__':
    import argparse
    
        def accept_encodings(self):
        r = {}
        ae = self.headers.get('Accept-Encoding', '')
        for e in ae.split(','):
            match = self.aepattern.match(e)
            if match:
                v = match.group(3)
                v = float(v) if v else 1.0
                r[match.group(1)] = v
        return r
    
        def test_stdin_stdout(self):
        args = sys.executable, '-m', 'json.tool'
        with Popen(args, stdin=PIPE, stdout=PIPE, stderr=PIPE) as proc:
            out, err = proc.communicate(self.data.encode())
        self.assertEqual(out.splitlines(), self.expect.encode().splitlines())
        self.assertEqual(err, b'')
    
            WNDPROC_2 = WINFUNCTYPE(c_long, c_int, c_int, c_int, c_int)
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
    from pylons import request
from pylons import tmpl_context as c
from pylons import app_globals as g
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'))
    def GET_winners(self, award):
        if award is None:
            abort(404, 'page not found')