
        
            with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    # ---------
# Specifics
# ---------
    
            if not args:
            raise TypeError('descriptor 'update' of 'Counter' object '
                            'needs an argument')
        self, *args = args
        if len(args) > 1:
            raise TypeError('expected at most 1 arguments, got %d' % len(args))
        iterable = args[0] if args else None
        if iterable is not None:
            if isinstance(iterable, _collections_abc.Mapping):
                if self:
                    self_get = self.get
                    for elem, count in iterable.items():
                        self[elem] = count + self_get(elem, 0)
                else:
                    super(Counter, self).update(iterable) # fast path when counter is empty
            else:
                _count_elements(self, iterable)
        if kwds:
            self.update(kwds)
    
            self.check_tokenize('async\n#comment\nawait', '''\
    NAME       'async'       (1, 0) (1, 5)
    NEWLINE    '\\n'          (1, 5) (1, 6)
    COMMENT    '#comment'    (2, 0) (2, 8)
    NL         '\\n'          (2, 8) (2, 9)
    NAME       'await'       (3, 0) (3, 5)
    ''')
    
        def test_invert(self):
        Perm = self.Perm
        RW = Perm.R | Perm.W
        RX = Perm.R | Perm.X
        WX = Perm.W | Perm.X
        RWX = Perm.R | Perm.W | Perm.X
        values = list(Perm) + [RW, RX, WX, RWX, Perm(0)]
        for i in values:
            self.assertIs(type(~i), Perm)
            self.assertEqual(~~i, i)
        for i in Perm:
            self.assertIs(~~i, i)
        Open = self.Open
        self.assertIs(Open.WO & ~Open.WO, Open.RO)
        self.assertIs((Open.WO|Open.CE) & ~Open.WO, Open.CE)
    
    
# Are two filenames really pointing to the same file?
def samefile(f1, f2):
    '''Test whether two pathnames reference the same actual file'''
    s1 = os.stat(f1)
    s2 = os.stat(f2)
    return samestat(s1, s2)
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    #
# Test code
#
    
            return self.last_results.keys()
    
            self.last_results = last_results
    
    
class FlockNotificationService(BaseNotificationService):
    '''Implement the notification service for Flock.'''
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_APP_NAME, default=DEFAULT_APP_NAME): cv.string,
    vol.Optional(CONF_APP_ICON): vol.Url,
    vol.Optional(CONF_HOSTNAME, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, ATTR_DATA, BaseNotificationService)
from homeassistant.const import (CONF_HOST, CONF_PORT)
import homeassistant.helpers.config_validation as cv