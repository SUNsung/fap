
@bp.route('/')
def show_entries():
    db = get_db()
    cur = db.execute('select title, text from entries order by id desc')
    entries = cur.fetchall()
    return render_template('show_entries.html', entries=entries)
    
        app.config.update(dict(
        DATABASE=os.path.join(app.root_path, 'flaskr.db'),
        DEBUG=True,
        SECRET_KEY=b'_5#y2L'F4Q8z\n\xec]/',
        USERNAME='admin',
        PASSWORD='default'
    ))
    app.config.update(config or {})
    app.config.from_envvar('FLASKR_SETTINGS', silent=True)
    
    
def query_db(query, args=(), one=False):
    '''Queries the database and returns a list of dictionaries.'''
    cur = get_db().execute(query, args)
    rv = cur.fetchall()
    return (rv[0] if rv else None) if one else rv
    
    
if __name__ == '__main__':
  tf.test.main()

    
    import tensorflow as tf
    
        predictions = classifier.predict(
        input_fn=lambda:iris_data.eval_input_fn(predict_x,
                                                labels=None,
                                                batch_size=args.batch_size))
    
    To initialize embedding and LSTM cell weights from a pretrained model, set
FLAGS.pretrained_model_dir to the pretrained model's checkpoint directory.
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    exports_files(['LICENSE'])
    
    # Maximum length of input is 'int + int' (e.g., '345+678'). Maximum length of
# int is DIGITS.
MAXLEN = DIGITS + 1 + DIGITS
    
        # fit_generator will throw an exception if steps is unspecified for regular generator
    with pytest.raises(ValueError):
        def gen_data():
            while True:
                yield (np.asarray([]), np.asarray([]))
        out = model.fit_generator(generator=gen_data(), epochs=5,
                                  initial_epoch=0, validation_data=gen_data(),
                                  callbacks=[tracker_cb])
    
    import numpy as np
import random
from six.moves import range
    
        out = K.eval(weighted_loss(K.variable(x),
                               K.variable(y),
                               K.variable(weights),
                               K.variable(mask)))
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = reuters.load_data(num_words=max_words,
                                                         test_split=0.2)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
        has_raise = re.findall(r'^\s*raise \S+', code, re.MULTILINE)
    if has_raise and '# Raises' not in doc:
        innerfunction = [inspect.getsource(x) for x in member.__code__.co_consts if
                         inspect.iscode(x)]
        raise_in_sub = [ret for code_inner in innerfunction for ret in
                        re.findall(r'\s*raise \S+', code_inner, re.MULTILINE)]
        if len(raise_in_sub) < len(has_raise):
            raise ValueError('{} needs a '# Raises' section'.format(name),
                             member.__module__)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
        for data_format in ['channels_first', 'channels_last']:
        if data_format == 'channels_first':
            shape = (3, 5, 5)
            target_shape = (5, 5, 3)
            prev_shape = (2, 3, 2)
            flip = lambda x: np.flip(np.flip(x, axis=2), axis=3)
            transpose = lambda x: np.transpose(x, (0, 2, 3, 1))
            target_data_format = 'channels_last'
        elif data_format == 'channels_last':
            shape = (5, 5, 3)
            target_shape = (3, 5, 5)
            prev_shape = (2, 2, 3)
            flip = lambda x: np.flip(np.flip(x, axis=1), axis=2)
            transpose = lambda x: np.transpose(x, (0, 3, 1, 2))
            target_data_format = 'channels_first'
    
    # Vectorize the data.
input_texts = []
target_texts = []
input_characters = set()
target_characters = set()
with open(data_path, 'r', encoding='utf-8') as f:
    lines = f.read().split('\n')
for line in lines[: min(num_samples, len(lines) - 1)]:
    input_text, target_text = line.split('\t')
    # We use 'tab' as the 'start sequence' character
    # for the targets, and '\n' as 'end sequence' character.
    target_text = '\t' + target_text + '\n'
    input_texts.append(input_text)
    target_texts.append(target_text)
    for char in input_text:
        if char not in input_characters:
            input_characters.add(char)
    for char in target_text:
        if char not in target_characters:
            target_characters.add(char)
    
        # Generate empty target sequence of length 1.
    target_seq = np.zeros((1, 1, num_decoder_tokens))
    # Populate the first character of target sequence with the start character.
    target_seq[0, 0, target_token_index['\t']] = 1.
    
    import sys
for plugin in plugins:
    print 'PLUGIN_PATH_%s := %s' % (plugin.name, plugin.path)
    
        return difflib.unified_diff(old_report, new_report)
    
    extension_mapping = {
    'rss': ('xml', 'application/atom+xml; charset=UTF-8'),
    'xml': ('xml', 'application/atom+xml; charset=UTF-8'),
    'js': ('js', 'text/javascript; charset=UTF-8'),
    'embed': ('htmllite', 'text/javascript; charset=UTF-8'),
    'mobile': ('mobile', 'text/html; charset=UTF-8'),
    'png': ('png', 'image/png'),
    'css': ('css', 'text/css'),
    'csv': ('csv', 'text/csv; charset=UTF-8'),
    'api': (api_type(), 'application/json; charset=UTF-8'),
    'json-html': (api_type('html'), 'application/json; charset=UTF-8'),
    'json-compact': (api_type('compact'), 'application/json; charset=UTF-8'),
    'compact': ('compact', 'text/html; charset=UTF-8'),
    'json': (api_type(), 'application/json; charset=UTF-8'),
    'i': ('compact', 'text/html; charset=UTF-8'),
}
    
    from r2.config.extensions import set_extension
from r2.controllers.reddit_base import RedditController, generate_modhash
from r2.controllers.login import handle_login, handle_register
from r2.lib.csrf import csrf_exempt
from r2.lib.validator import (
    json_validate,
    ValidEmail,
    VPasswordChange,
    VRatelimit,
    VSigned,
    VThrottledLogin,
    VUname,
)
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
        friend_rel=VFriendOfMine('username'),
    )
    @api_doc(api_section.users, uri='/api/v1/me/friends/{username}')
    def GET_friends(self, friend_rel):
        '''Get information about a specific 'friend', such as notes.'''
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
    from r2.controllers.reddit_base import RedditController
from r2.lib.base import proxyurl
from r2.lib.csrf import csrf_exempt
from r2.lib.template_helpers import get_domain
from r2.lib.pages import Embed, BoringPage, HelpPage
from r2.lib.filters import websafe, SC_OFF, SC_ON
from r2.lib.memoize import memoize