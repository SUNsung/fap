
        
        
class InlineFieldset(Fieldset):
    def __init__(self, formset, *args, **kwargs):
        self.formset = formset
        super().__init__(*args, **kwargs)
    
        def has_change_permission(self, request, obj=None):
        return False
    
        def test_plain_annotate(self):
        agg = Sum('book__pages', filter=Q(book__rating__gt=3))
        qs = Author.objects.annotate(pages=agg).order_by('pk')
        self.assertSequenceEqual([a.pages for a in qs], [447, None, 1047])
    
    
class UUIDConverter:
    regex = '[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}'
    
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
    
        @property
    def fields(self):
        'Return a list of fields in the Feature.'
        return [
            force_str(
                capi.get_field_name(capi.get_field_defn(self._layer._ldefn, i)),
                self.encoding,
                strings_only=True
            ) for i in range(self.num_fields)
        ]
    
        @property
    def boundary(self):
        'Return the boundary as a newly allocated Geometry object.'
        return self._topology(capi.geos_boundary(self.ptr))
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
    
class UserSpecification(CompositeSpecification):
    def is_satisfied_by(self, candidate):
        return isinstance(candidate, User)
    
    '''
*What is this pattern about?
    
        def build_size(self):
        self.size = 'Small'
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        def add(self, graphic):
        self.graphics.append(graphic)