
        
            # This is needed to make sure that the gradients are simple.
    # The value of the function shouldn't change.
    if z == self.sample:
      return gaussian_pos_log_likelihood(self.mean, self.logvar, self.noise)
    
    
flags.DEFINE_float('prior_ar_atau',  PRIOR_AR_AUTOCORRELATION,
                   'Initial autocorrelation of AR(1) priors.')
flags.DEFINE_float('prior_ar_nvar', PRIOR_AR_PROCESS_VAR,
                   'Initial noise variance for AR(1) priors.')
flags.DEFINE_boolean('do_train_prior_ar_atau', DO_TRAIN_PRIOR_AR_ATAU,
                     'Is the value for atau an init, or the constant value?')
flags.DEFINE_boolean('do_train_prior_ar_nvar', DO_TRAIN_PRIOR_AR_NVAR,
                     'Is the value for noise variance an init, or the constant \
                     value?')
    
      def call(self, h_tm1_bxn, u_bx1):
    act_t_bxn = tf.matmul(h_tm1_bxn, self.Wh_nxn) + self.b_1xn + u_bx1 * self.Bu_1xn
    h_t_bxn = tf.nn.tanh(act_t_bxn)
    z_t = tf.nn.xw_plus_b(h_t_bxn, self.Wro_nxo, self.bro_o)
    return z_t, h_t_bxn
    
          # Cut sentences into patches of shape processable by the LM.
      batch_size, num_timesteps = self.shape
      word_patches = utils.cut_to_patches(sentences, batch_size, num_timesteps)
      probs = self._score_patches(word_patches)
    
      # Two consecutive substitutions always belong to the same question
  question_ids = [qid for i, qid in enumerate(question_ids) if i % 2 == 0]
  assert len(question_ids) == len(prediction_correctness)
  num_questions = len(set(question_ids))
    
          else:
        to_fill_in = num_steps - len(example)
        final_x = example + [EOS_INDEX] * to_fill_in
        final_y = final_x[1:] + [EOS_INDEX]
        w[i] = [1] * len(example) + [0] * to_fill_in
    
            if user is None:
            error = 'Incorrect username.'
        elif not check_password_hash(user['password'], password):
            error = 'Incorrect password.'
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
        def before_app_first_request(self, f):
        '''Like :meth:`Flask.before_first_request`.  Such a function is
        executed before the first request to the application.
        '''
        self.record_once(lambda s: s.app.before_first_request_funcs.append(f))
        return f
    
    
def _endpoint_from_view_func(view_func):
    '''Internal helper that returns the default endpoint for a given
    function.  This always is the function name.
    '''
    assert view_func is not None, 'expected view func if endpoint ' \
                                  'is not provided.'
    return view_func.__name__
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    
def _render(template, context, app):
    '''Renders the template and fires the signal'''
    
            if 'obj' not in kwargs:
            kwargs['obj'] = ScriptInfo(create_app=lambda: self.app)
    
        exitcode = 0
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def syntax(self):
        return '[options] <spider>'
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def run(self, args, opts):
        url = args[0] if args else None
        if url:
            # first argument may be a local file
            url = guess_scheme(url)
    
    
class Command(ScrapyCommand):