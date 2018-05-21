
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
# Executing the interpreter in a subprocess
def _assert_python(expected_success, *args, **env_vars):
    cmd_line = [sys.executable]
    if not env_vars:
        cmd_line.append('-E')
    # Need to preserve the original environment, for in-place testing of
    # shared library builds.
    env = os.environ.copy()
    # But a special flag that can be set to override -- in this case, the
    # caller is responsible to pass the full environment.
    if env_vars.pop('__cleanenv', None):
        env = {}
    env.update(env_vars) 
    cmd_line.extend(args)
    p = subprocess.Popen(cmd_line, stdin=subprocess.PIPE,
                         stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                         env=env)
    try:
        out, err = p.communicate()
    finally:
        subprocess._cleanup()
        p.stdout.close()
        p.stderr.close()
    rc = p.returncode
    err = strip_python_stderr(err)
    if (rc and expected_success) or (not rc and not expected_success):
        raise AssertionError(
            'Process return code is %d, '
            'stderr follows:\n%s' % (rc, err.decode('ascii', 'ignore')))
    return rc, out, err
    
      f = _CreateFilterForTypes( opts, [ 'cs' ] )
    
    
def get_changed_files(old_ref, new_ref):
    '''Return a list of files that have changed from one ref to another.'''
    root = get_root()
    changed_files_text = subprocess.check_output(['git', 'diff', '--name-only',
                                                  old_ref, new_ref])
    changed_files = changed_files_text.splitlines()
    return [os.path.join(root, x) for x in changed_files]
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import require_oauth2_scope
from r2.controllers.reddit_base import OAuth2OnlyController
from r2.lib.jsontemplates import (
    FriendTableItemJsonTemplate,
    get_usertrophies,
    IdentityJsonTemplate,
    KarmaListJsonTemplate,
    PrefsJsonTemplate,
)
from r2.lib.pages import FriendTableItem
from r2.lib.validator import (
    validate,
    VAccountByName,
    VFriendOfMine,
    VLength,
    VList,
    VUser,
    VValidatedJSON,
)
from r2.models import Account, Trophy
import r2.lib.errors as errors
import r2.lib.validator.preferences as vprefs
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
        @validate(buttonimage = VInt('i', 0, 14),
              title = nop('title'),
              url = VSanitizedUrl('url'),
              newwindow = VBoolean('newwindow', default = False),
              styled = VBoolean('styled', default=True))
    def GET_button_lite(self, buttonimage, title, url, styled, newwindow):
        c.user = UnloggedUser([c.lang])
        c.user_is_loggedin = False
        c.render_style = 'js'
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
            fp, content = renderurl_cached(path)
        if content is None:
            self.abort404()
        return self.rendercontent(content, fp)