
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        return g.db
    
    import pytest
from flaskr import create_app
from flaskr.db import get_db, init_db
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
    
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
        assert proc.expect([TIMEOUT, u'test'])
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    # 词向量和 n-gram 向量是分开存储的
print(len(model.wv.vectors))  # 7
print(len(model.wv.vectors_ngrams))  # 57
# gensim 好像没有提供直接获取所有 ngrams tokens 的方法
    
    define('num', default=100, help='number of iterations')
define('dump', default=False, help='print template generated code and exit')
    
    
def main():
    parse_command_line()
    
            def find_handler(self, request, **kwargs):
            handler = GetResource if request.method == 'GET' else PostResource
            return self.app.get_handler_delegate(request, handler, path_args=[request.path])
    
    ``{% block *name* %}...{% end %}``
    Indicates a named, replaceable block for use with ``{% extends %}``.
    Blocks in the parent template will be replaced with the contents of
    the same-named block in a child template.::
    
    
class TwitterClientLoginHandler(TwitterClientHandler):
    @gen.coroutine
    def get(self):
        if self.get_argument('oauth_token', None):
            user = yield self.get_authenticated_user()
            if user is None:
                raise Exception('user is None')
            self.finish(user)
            return
        yield self.authorize_redirect()