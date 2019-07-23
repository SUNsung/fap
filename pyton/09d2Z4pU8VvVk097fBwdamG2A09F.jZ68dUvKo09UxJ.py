
        
                return {
            'id': video_id,
            'title': title,
            'formats': formats,
            'comment_count': int_or_none(item.get('comments')),
            'description': item.get('description'),
            'duration': int_or_none(item.get('duration')),
            'thumbnails': thumbnails,
            'timestamp': int_or_none(item.get('date')),
            'uploader': item.get('owner_id'),
            'view_count': int_or_none(item.get('views')),
        }

    
        _TESTS = [{
        'url': 'http://www.southparkstudios.dk/full-episodes/s18e07-grounded-vindaloop',
        'info_dict': {
            'title': 'Grounded Vindaloop',
            'description': 'Butters is convinced he\'s living in a virtual reality.',
        },
        'playlist_mincount': 3,
    }, {
        'url': 'http://www.southparkstudios.dk/collections/2476/superhero-showdown/1',
        'only_matching': True,
    }, {
        'url': 'http://www.southparkstudios.nu/collections/2476/superhero-showdown/1',
        'only_matching': True,
    }]

    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
    if __name__ == '__main__':
    main()

    
        outfile, = args
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
def _download_restricted(url, filename, age):
    ''' Returns true if the file has been downloaded '''
    
        def test_app_alias(self, shell):
        assert 'setenv TF_SHELL tcsh' in shell.app_alias('fuck')
        assert 'alias fuck' in shell.app_alias('fuck')
        assert 'alias FUCK' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
    
        def how_to_configure(self):
        return self._create_shell_configuration(
            content=u'thefuck --alias | source',
            path='~/.config/fish/config.fish',
            reload='fish')
    
            In most of shells we change history on shell-level, but not
        all shells support it (Fish).
    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
        import sys
    from mymodule import entry_function
    sys.exit(entry_function())
    
    
@pytest.mark.parametrize('command, result', [
    (Command('az providers list', misspelled_command), ['az provider list']),
    (Command('az provider lis', misspelled_subcommand), ['az provider list'])
])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    from django.utils.deprecation import RemovedInDjango31Warning
from django.utils.functional import cached_property
from django.utils.inspect import method_has_no_args
from django.utils.translation import gettext_lazy as _
    
            if form._meta.labels and class_name in form._meta.labels:
            label = form._meta.labels[class_name]
        else:
            label = label_for_field(field, form._meta.model, model_admin, form=form)
    
        def has_perms(self, perm_list, obj=None):
        '''
        Return True if the user has each of the specified permissions. If
        object is passed, check if the user has all required perms for it.
        '''
        return all(self.has_perm(perm, obj) for perm in perm_list)
    
        def _assertPoKeyword(self, keyword, expected_value, haystack, use_quotes=True):
        q = '''
        if use_quotes:
            expected_value = ''%s'' % expected_value
            q = '''
        needle = '%s %s' % (keyword, expected_value)
        expected_value = re.escape(expected_value)
        return self.assertTrue(
            re.search('^%s %s' % (keyword, expected_value), haystack, re.MULTILINE),
            'Could not find %(q)s%(n)s%(q)s in generated PO file' % {'n': needle, 'q': q}
        )
    
    
# ### The Field sub-classes for each OGR Field type. ###
class OFTInteger(Field):
    _bit64 = False
    
            if response.status == 503:
            # out of quota
            if 'gws' not in server_type and 'Google Frontend' not in server_type and 'GFE' not in server_type:
                xlog.warn('503 but server type:%s', server_type)
                return False
            else:
                return True
    
                # Is there a bitwise operation to do this?
            if v == 0xFFFF:
                v = -1
    
    
class AbstractExpert(object):
    
        # And can also be undone at will
    >>> for cmd in reversed(command_stack):
    ...     cmd.undo()
    renaming baz.txt to bar.txt
    renaming bar.txt to foo.txt
    
    from __future__ import print_function
    
        @Transactional will rollback to entry-state upon exceptions.
    '''
    
    
def convert_to_text(data):
    print('[CONVERT]')
    return '{} as text'.format(data)
    
        # After we've accessed `relatives`
    >>> sorted(Jhon.__dict__.items())
    [('call_count2', 0), ..., ('relatives', 'Many relatives.')]
    
    *TL;DR
Allows the interface of an existing class to be used as another interface.
'''
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
        def add(self, graphic):
        self.graphics.append(graphic)
    
    
class ComputerFacade(object):
    '''
    Represents a facade for various computer parts.
    '''
    def __init__(self):
        self.cpu = CPU()
        self.memory = Memory()
        self.ssd = SolidStateDrive()