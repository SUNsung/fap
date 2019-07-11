
        
          plt.subplot(nrows,2,5+subplot_cidx)
  plot_time_series(means, bidx,
                   n_to_plot=n_to_plot, scale=1.0,
                   title=col_title + ' Spikes (LFADS - red, Spikes - black)')
  plot_time_series(data_bxtxn, bidx, n_to_plot=n_to_plot, color='k', scale=1.0)
    
      # First generate all firing rates. in the next loop, generate all
  # replications this allows the random state for rate generation to be
  # independent of n_replications.
  dataset_name = 'dataset_N' + str(N) + '_S' + str(S)
  if S < N:
    dataset_name += '_n' + str(n+1)
    
    with tf.Session() as sess:
  # restore the latest model ckpt
  if FLAGS.checkpoint_path == 'SAMPLE_CHECKPOINT':
    dir_path = os.path.dirname(os.path.realpath(__file__))
    model_checkpoint_path = os.path.join(dir_path, 'trained_itb/model-65000')
  else:
    model_checkpoint_path = FLAGS.checkpoint_path
  try:
    saver.restore(sess, model_checkpoint_path)
    print ('Model restored from', model_checkpoint_path)
  except:
    assert False, ('No checkpoints to restore from, is the path %s correct?'
                   %model_checkpoint_path)
    
      E = len(data_e)
  spikes_e = []
  for e in range(E):
    data = data_e[e]
    N,T = data.shape
    data_s = np.zeros([N,T]).astype(np.int)
    for n in range(N):
      f = data[n,:]
      s = rng.poisson(f*max_firing_rate*dt, size=T)
      data_s[n,:] = s
    spikes_e.append(data_s)
    
      Returns:
    flat_list: Flattened list.
    flat_list_idxs: Flattened list indices.
  '''
  flat_list = []
  flat_list_idxs = []
  start_idx = 0
  for item in list_of_lists:
    if isinstance(item, list):
      flat_list += item
      l = len(item)
      idxs = range(start_idx, start_idx+l)
      start_idx = start_idx+l
    else:                   # a value
      flat_list.append(item)
      idxs = [start_idx]
      start_idx += 1
    flat_list_idxs.append(idxs)
    
    
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      This generates batch_size pointers into the raw PTB data, and allows
  minibatch iteration along these pointers.
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
          # seq2seq_vd derived from the same code base as seq2seq_zaremba.
      elif (FLAGS.generator_model == 'seq2seq_zaremba' or
            FLAGS.generator_model == 'seq2seq_vd'):
        # Encoder.
        gen_encoder_variable_maps = variable_mapping.gen_encoder_seq2seq(
            hparams)
        gen_encoder_init_saver = tf.train.Saver(
            var_list=gen_encoder_variable_maps)
        # Decoder.
        gen_decoder_variable_maps = variable_mapping.gen_decoder_seq2seq(
            hparams)
        gen_decoder_init_saver = tf.train.Saver(
            var_list=gen_decoder_variable_maps)
        init_savers['gen_encoder_init_saver'] = gen_encoder_init_saver
        init_savers['gen_decoder_init_saver'] = gen_decoder_init_saver
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
        return render_template('auth/login.html')
    
    from flaskr.auth import login_required
from flaskr.db import get_db
    
    master_doc = 'index'
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinxcontrib.log_cabinet',
    'pallets_sphinx_themes',
    'sphinx_issues',
]
intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'werkzeug': ('https://werkzeug.palletsprojects.com/', None),
    'click': ('https://click.palletsprojects.com/', None),
    'jinja': ('http://jinja.pocoo.org/docs/', None),
    'itsdangerous': ('https://itsdangerous.palletsprojects.com/', None),
    'sqlalchemy': ('https://docs.sqlalchemy.org/', None),
    'wtforms': ('https://wtforms.readthedocs.io/en/stable/', None),
    'blinker': ('https://pythonhosted.org/blinker/', None),
}
issues_github_path = 'pallets/flask'
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        def test_delete___dict__(self):
        try:
            del self.b.__dict__
        except TypeError:
            pass
        else:
            self.fail('deleting function dictionary should raise TypeError')
    
            results = [pool.apply_async(calculate, t) for t in TASKS]
        imap_it = pool.imap(calculatestar, TASKS)
        imap_unordered_it = pool.imap_unordered(calculatestar, TASKS)
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''
    
    p = Point(4.0, -3.2)