
        
          def _record(self, label, red, green, blue):
    image_size = 32 * 32
    record = bytes(bytearray([label] + [red] * image_size +
                             [green] * image_size + [blue] * image_size))
    expected = [[[red, green, blue]] * 32] * 32
    return record, expected
    
    Coord Type      upper_left      upper_right     pass
-------------------------------------------------------
minigo coord    (0, 0)          (0, 18)         None
flat            0               18              361
SGF             'aa'            'sa'            ''
KGS             'A19'           'T19'           'pass'
pygtp           (1, 19)         (19, 19)        (0, 0)
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        # keep a rolling history of last 7 deltas - that's all we'll need to
    # extract the last 8 board states.
    pos.board_deltas = np.concatenate((
        new_board_delta.reshape(1, self.board_size, self.board_size),
        pos.board_deltas[:6]))
    pos.to_play *= -1
    return pos
    
        # Root was visited twice: first at the root, then at this child.
    self.assertEqual(root.N, 2)
    # Root has 0 as a prior and two visits with value 0, -1
    self.assertAlmostEqual(root.Q, -1/3)  # average of 0, 0, -1
    # Leaf should have one visit
    self.assertEqual(root.child_N[leaf.fmove], 1)
    self.assertEqual(leaf.N, 1)
    # And that leaf's value had its parent's Q (0) as a prior, so the Q
    # should now be the average of 0, -1
    self.assertAlmostEqual(root.child_Q[leaf.fmove], -0.5)
    self.assertAlmostEqual(leaf.Q, -0.5)
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    
@keras_test
def test_temporal_classification():
    '''
    Classify temporal sequences of float numbers
    of length 3 into 2 classes using
    single layer of GRU units and softmax applied
    to the last activations of the units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 4),
                                                         classification=True,
                                                         num_classes=2)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
    The dataset is actually too small for LSTM to be of any advantage
compared to simpler, much faster methods such as TF-IDF + LogReg.
    
        Each code snipped should get additional C++ code around it to help compile the line in context, with
    some heuristic guessing of what is needed around. The wrapping code should have a token in each line allowing
    other tools to filter out these lines
    
    def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
    
def ExtractKeywordsFromGroup_KeywordMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo contained bar',
                   'zoo goo'
                 ] ) ),
               contains_inanyorder( 'foo', 'contained', 'bar', 'zoo', 'goo' ) )
    
    
def LastEnteredCharIsIdentifierChar_NotIdentChar_test():
  with MockCurrentFiletypes():
    with MockCurrentColumnAndLineContents( 3, 'ab;' ):
      ok_( not base.LastEnteredCharIsIdentifierChar() )
    
    
def BuildYcmdLibs( args ):
  if not args.skip_build:
    subprocess.check_call( [
      sys.executable,
      p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    ] )