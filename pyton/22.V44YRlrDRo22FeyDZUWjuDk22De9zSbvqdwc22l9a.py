
        
            app.testing = False
    stream = StringIO()
    rv = client.get('/', errors_stream=stream)
    assert rv.status_code == 500
    assert rv.data
    err = stream.getvalue()
    assert 'Exception on / [GET]' in err
    assert 'Exception: test' in err

    
    
def test_before_render_template():
    app = flask.Flask(__name__)
    
    parser = argparse.ArgumentParser()
parser.add_argument('--batch_size', default=100, type=int, help='batch size')
parser.add_argument('--train_steps', default=1000, type=int,
                    help='number of training steps')
    
        # All our inputs are feature columns of type numeric_column
    feature_columns = [
        tf.feature_column.numeric_column(feature_names[0]),
        tf.feature_column.numeric_column(feature_names[1]),
        tf.feature_column.numeric_column(feature_names[2]),
        tf.feature_column.numeric_column(feature_names[3])
    ]
    
      tf.logging.info('Generating IMDB documents...')
    
    import graphs
import train_utils
    
      task_params = utils.Foo(num_actions=4, step_size=4, num_steps=0,
                          batch_size=32, room_seed=0, base_class='Building',
                          task='mapping', n_ori=6, data_augment=data_augment,
                          output_transform_to_global_map=False,
                          output_canonical_map=False,
                          output_incremental_transform=False,
                          output_free_space=False, move_type='shortest_path',
                          toy_problem=0)
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...