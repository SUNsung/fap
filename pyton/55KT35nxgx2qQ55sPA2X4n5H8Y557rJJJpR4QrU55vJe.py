# Custom sidebar templates, maps document names to template names.
html_sidebars = {
    'index': [
        'sidebarintro.html',
        'sourcelink.html',
        'searchbox.html'
    ],
    '**': [
        'sidebarlogo.html',
        'localtoc.html',
        'relations.html',
        'sourcelink.html',
        'searchbox.html'
    ]
}
    
        r = client.get('/world')
    assert r.status_code == 200
    
    
@app.route('/<username>/unfollow')
def unfollow_user(username):
    '''Removes the current user as follower of the given user.'''
    if not g.user:
        abort(401)
    whom_id = get_user_id(username)
    if whom_id is None:
        abort(404)
    db = get_db()
    db.execute('delete from follower where who_id=? and whom_id=?',
              [session['user_id'], whom_id])
    db.commit()
    flash('You are no longer following '%s'' % username)
    return redirect(url_for('user_timeline', username=username))
    
      def __init__(self, metagraph, model):
    self._metagraph = metagraph
    self.replicate_states(model.initial_state_name)
    self.replicate_states(model.final_state_name)
    self.update_snapshot_name('variables')
    self.update_snapshot_name('trainable_variables')
    
    
class PtbReaderTest(tf.test.TestCase):
    
    exports_files(['LICENSE'])
    
          Args:
      batch_size: Total batch size used to calculate examples/second from
      global time.
      every_n_steps: Log stats every n steps.
      every_n_secs: Log stats every n seconds.
    '''
    if (every_n_steps is None) == (every_n_secs is None):
      raise ValueError('exactly one of every_n_steps'
                       ' and every_n_secs should be provided.')
    self._timer = basic_session_run_hooks.SecondOrStepTimer(
        every_steps=every_n_steps, every_secs=every_n_secs)
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
        >>> IS_CHARACTER_JUNK(' ')
    True
    >>> IS_CHARACTER_JUNK('\t')
    True
    >>> IS_CHARACTER_JUNK('\n')
    False
    >>> IS_CHARACTER_JUNK('x')
    False
    '''
    
    ArticleInfo = collections.namedtuple('ArticleInfo',
                                     ['number', 'message_id', 'lines'])
    
        def test_from_buffer_copy_with_offset(self):
        a = array.array('i', range(16))
        x = (c_int * 15).from_buffer_copy(a, sizeof(c_int))