
        
        
class TimeField(BaseTemporalField):
    widget = TimeInput
    input_formats = formats.get_format_lazy('TIME_INPUT_FORMATS')
    default_error_messages = {
        'invalid': _('Enter a valid time.')
    }
    
        def test_inline_editable_pk(self):
        response = self.client.get(reverse('admin:admin_inlines_author_add'))
        self.assertContains(
            response,
            '<input class='vIntegerField' id='id_editablepkbook_set-0-manual_pk' '
            'name='editablepkbook_set-0-manual_pk' type='number'>',
            html=True, count=1
        )
        self.assertContains(
            response,
            '<input class='vIntegerField' id='id_editablepkbook_set-2-0-manual_pk' '
            'name='editablepkbook_set-2-0-manual_pk' type='number'>',
            html=True, count=1
        )
    
        def test_object_at_custom_name_in_context_data(self):
        # Checks 'pony' key presence in dict returned by get_context_date
        test_view = views.CustomSingleObjectView()
        test_view.context_object_name = 'pony'
        context = test_view.get_context_data()
        self.assertEqual(context['pony'], test_view.object)
    
        def as_mysql(self, compiler, connection, **extra_context):
        sql, params = super().as_sql(compiler, connection, **extra_context)
        if self.output_field.get_internal_type() == 'DurationField':
            sql = 'CAST(%s AS SIGNED)' % sql
        return sql, params
    
                try:
                vtup = self.postgis_version_tuple()
            except ProgrammingError:
                raise ImproperlyConfigured(
                    'Cannot determine PostGIS version for database '%s' '
                    'using command 'SELECT postgis_lib_version()'. '
                    'GeoDjango requires at least PostGIS version 2.2. '
                    'Was the database created from a spatial database '
                    'template?' % self.connection.settings_dict['NAME']
                )
            version = vtup[1:]
        return version
    
        def __iter__(self):
        'Iterate over each Feature in the Layer.'
        # ResetReading() must be called before iteration is to begin.
        capi.reset_reading(self._ptr)
        for i in range(self.num_feat):
            yield Feature(capi.get_next_feature(self._ptr), self)
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
    This pattern aims to decouple the senders of a request from its
receivers by allowing request to move through chained
receivers until it is handled.
    
    *Examples in Python ecosystem:
- Python's ast.NodeVisitor: https://github.com/python/cpython/blob/master/Lib/ast.py#L250
which is then being used e.g. in tools like `pyflakes`.
- `Black` formatter tool implements it's own: https://github.com/ambv/black/blob/master/black.py#L718
'''
    
        graphic.render()
    
    
class ItalicWrapper(TextTag):
    '''Wraps a tag in <i>'''