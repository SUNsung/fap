
        
            Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
        if (has_actual_code and not has_question_marks):
        linebuffer = clean_trailing_newlines(linebuffer)
        write_with_harness(codefile, sourcefile, start_linenum, linebuffer)
    return (line, linenum)
    
      Args:
    line: The line in question.
    filename: The name of the current file.
    linenum: The number of the line to check.
    next_line_start: The first non-whitespace column of the next line.
    error: The function to call with any errors found.
  '''
  commentpos = line.find('//')
  if commentpos != -1:
    # Check if the // may be in quotes.  If so, ignore it
    if re.sub(r'\\.', '', line[0:commentpos]).count(''') % 2 == 0:
      # Allow one space for new scopes, two spaces otherwise:
      if (not (Match(r'^.*{ *//', line) and next_line_start == commentpos) and
          ((commentpos >= 1 and
            line[commentpos-1] not in string.whitespace) or
           (commentpos >= 2 and
            line[commentpos-2] not in string.whitespace))):
        error(filename, linenum, 'whitespace/comments', 2,
              'At least two spaces is best between code and comments')
    }
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def __init__(self, successor=None):
        self._successor = successor
    
    
def memento(obj, deep=False):
    state = deepcopy(obj.__dict__) if deep else copy(obj.__dict__)
    
    
class CompositeSpecification(Specification):