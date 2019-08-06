
        
            # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
    
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
            :param name: a string containing name of cookie
        :param domain: (optional) string containing domain of cookie
        :param path: (optional) string containing path of cookie
        :raises KeyError: if cookie is not found
        :raises CookieConflictError: if there are multiple cookies
            that match name and optionally domain and path
        :return: cookie.value
        '''
        toReturn = None
        for cookie in iter(self):
            if cookie.name == name:
                if domain is None or cookie.domain == domain:
                    if path is None or cookie.path == path:
                        if toReturn is not None:  # if there are multiple cookies that meet passed in criteria
                            raise CookieConflictError('There are multiple cookies with name, %r' % (name))
                        toReturn = cookie.value  # we will eventually return this as long as no cookie conflict
    
            # u_tilde(u~): context to question attended query vectors
        u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
    
        Examples:
        l2_regularizer = l2(0.01)
        tf.get_variable(..., regularizer=l2_regularizer, ...)
    '''
    
        class Meta:
        app_label = 'sentry'
        db_table = 'sentry_identityprovider'
        unique_together = (('type', 'external_id'),)
    
    from .base import Problem, StatusCheck
    
            # Adding index on 'EventTag', fields ['project_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['project_id', 'key_id', 'value_id'])
    
            # Adding unique constraint on 'TagValue', fields ['project_id', '_key', 'value']
        db.create_unique(u'tagstore_tagvalue', ['project_id', 'key_id', 'value'])
    
            # Changing field 'TagValue.project_id'
        db.alter_column(u'tagstore_tagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())