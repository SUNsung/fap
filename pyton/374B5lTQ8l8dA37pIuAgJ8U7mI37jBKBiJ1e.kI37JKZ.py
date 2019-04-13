
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            if not username:
            error = 'Username is required.'
        elif not password:
            error = 'Password is required.'
        elif db.execute(
            'SELECT id FROM user WHERE username = ?', (username,)
        ).fetchone() is not None:
            error = 'User {0} is already registered.'.format(username)
    
            :param name: the optional name of the global, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.globals[name or f.__name__] = f
        self.record_once(register_template)
    
        if blueprint is not None and seems_fishy:
        info.append('  The template was looked up from an endpoint that '
                    'belongs to the blueprint '%s'.' % blueprint)
        info.append('  Maybe you did not place a template in the right folder?')
        info.append('  See http://flask.pocoo.org/docs/blueprints/#templates')
    
    
class TagMarkup(JSONTag):
    '''Serialize anything matching the :class:`~flask.Markup` API by
    having a ``__html__`` method to the result of that method. Always
    deserializes to an instance of :class:`~flask.Markup`.'''
    
            The arguments passed to :meth:`as_view` are forwarded to the
        constructor of the class.
        '''
        def view(*args, **kwargs):
            self = view.view_class(*class_args, **class_kwargs)
            return self.dispatch_request(*args, **kwargs)
    
    
def make_git_commit(message, *args):
    message = message % args
    Popen(['git', 'commit', '-am', message]).wait()
    
    
def test_url_generation_requires_server_name(app):
    with app.app_context():
        with pytest.raises(RuntimeError):
            flask.url_for('index')
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''