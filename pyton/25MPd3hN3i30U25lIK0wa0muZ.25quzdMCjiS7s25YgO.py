
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
    import pytest
    
        # Set to `False` to make it possible to invoke this auth
    # plugin without requiring the user to specify credentials
    # through `--auth, -a`.
    auth_require = True
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
      def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
      Args:
    tce_table: A Pandas DateFrame containing the TCEs in the shard.
    file_name: The output TFRecord file.
  '''
  process_name = multiprocessing.current_process().name
  shard_name = os.path.basename(file_name)
  shard_size = len(tce_table)
  tf.logging.info('%s: Processing %d items in shard %s', process_name,
                  shard_size, shard_name)
    
        input_fn = lambda: tf.random_uniform([3, 784])
    predictions_generator = classifier.predict(input_fn)
    for _ in range(3):
      predictions = next(predictions_generator)
      self.assertEqual(predictions['probabilities'].shape, (10,))
      self.assertEqual(predictions['classes'].shape, ())
    
    DATA_URL = 'https://archive.ics.uci.edu/ml/machine-learning-databases/adult'
TRAINING_FILE = 'adult.data'
TRAINING_URL = '%s/%s' % (DATA_URL, TRAINING_FILE)
EVAL_FILE = 'adult.test'
EVAL_URL = '%s/%s' % (DATA_URL, EVAL_FILE)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
        def __init__(
        self, grammarDecisionDescription, decisionNumber, stateNumber, input
        ):
        RecognitionException.__init__(self, input)
    
    
    def skip(self):
        '''
        Instruct the lexer to skip creating a token for current lexer rule
        and look for another token.  nextToken() knows to keep looking when
        a lexer rule finishes with token set to SKIP_TOKEN.  Recall that
        if token==null at end of any token rule, it creates one for you
        and emits it.
        '''
        
        self._state.token = SKIP_TOKEN
    
            Raises:
            TimeoutError: If the entire result iterator could not be generated
                before the given timeout.
            Exception: If fn(*args) raises for any values.
        '''
        timeout = kwargs.get('timeout')
        if timeout is not None:
            end_time = timeout + time.time()
    
      for path in python_paths:
    yield EndsWithPython_Good, path
    
    from r2.lib.translation import I18N_PATH
from r2.lib.plugin import PluginLoader
from r2.lib import js
    
    
def load_environment(global_conf={}, app_conf={}, setup_globals=True):
    r2_path = get_r2_path()
    root_path = os.path.join(r2_path, 'r2')
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
        def current_subreddit(self):
        site = self.stacked_proxy_safe_get(c, 'site')
        if not site:
            # In non-request code (eg queued jobs), there isn't necessarily a
            # site name (or other request-type data).  In those cases, we don't
            # want to trigger any subreddit-specific code.
            return ''
        return site.name
    
    api('subredditstylesheet', StylesheetTemplate)
api('subredditstylesheetsource', StylesheetTemplate)
api('createsubreddit', SubredditSettingsTemplate)
api('uploadedimage', UploadedImageJsonTemplate)
    
    
PREFS_JSON_SPEC = VValidatedJSON.PartialObject({
    k[len('pref_'):]: v for k, v in
    vprefs.PREFS_VALIDATORS.iteritems()
})
    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort