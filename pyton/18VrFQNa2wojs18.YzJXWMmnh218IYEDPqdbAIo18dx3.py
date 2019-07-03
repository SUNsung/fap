
        
            try:
        citext_oids = get_citext_oids(connection.alias)
        array_type = psycopg2.extensions.new_array_type(citext_oids, 'citext[]', psycopg2.STRING)
        psycopg2.extensions.register_type(array_type, None)
    except ProgrammingError:
        # citext is not available on the database.
        #
        # The same comments in the except block of the above call to
        # register_hstore() also apply here.
        pass

    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
        class Meta:
        abstract = True
        verbose_name = _('session')
        verbose_name_plural = _('sessions')
    
        def as_hidden(self, attrs=None, **kwargs):
        '''
        Return a string of HTML for representing this as an <input type='hidden'>.
        '''
        return self.as_widget(self.field.hidden_widget(), attrs, **kwargs)
    
    
class ContentDecodingError(RequestException, BaseHTTPError):
    '''Failed to decode response content'''
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
    import sys
    
    
@pytest.mark.parametrize('size,resolved', [
    ('xx-small', '6pt'),
    ('x-small', '{pt:f}pt'.format(pt=7.5)),
    ('small', '{pt:f}pt'.format(pt=9.6)),
    ('medium', '12pt'),
    ('large', '{pt:f}pt'.format(pt=13.5)),
    ('x-large', '18pt'),
    ('xx-large', '24pt'),
    
    
def test_incorrect_type_map():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_map_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
    
class MyDict(dict):
    pass
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
                if self._state in [CANCELLED, CANCELLED_AND_NOTIFIED]:
                raise CancelledError()
            elif self._state == FINISHED:
                return self._exception
            else:
                raise TimeoutError()
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None
    
      if is_bad_config:
    raise ValueError(
        'You passed in `--do_lower_case=%s` with `--init_checkpoint=%s`. '
        'However, `%s` seems to be a %s model, so you '
        'should pass in `--do_lower_case=%s` so that the fine-tuning matches '
        'how the model was pre-training. If this error is wrong, please '
        'just comment out this check.' % (actual_flag, init_checkpoint,
                                          model_name, case_name, opposite_flag))
    
            tokens_a = []
        for j in range(a_end):
          tokens_a.extend(current_chunk[j])