
        
        
def formset_view(request):
    'A view that tests a simple formset'
    if request.method == 'POST':
        formset = TestFormSet(request.POST)
        if formset.is_valid():
            t = Template('Valid POST data.', name='Valid POST Template')
            c = Context()
        else:
            t = Template('Invalid POST data. {{ my_formset.errors }}',
                         name='Invalid POST Template')
            c = Context({'my_formset': formset})
    else:
        formset = TestForm(request.GET)
        t = Template('Viewing base formset. {{ my_formset }}.',
                     name='Formset GET Template')
        c = Context({'my_formset': formset})
    return HttpResponse(t.render(c))
    
        def test_location_comments_for_templatized_files(self):
        '''
        Ensure no leaky paths in comments, e.g. #: path\to\file.html.py:123
        Refs #21209/#26341.
        '''
        management.call_command('makemessages', locale=[LOCALE], verbosity=0)
        self.assertTrue(os.path.exists(self.PO_FILE))
        with open(self.PO_FILE) as fp:
            po_contents = fp.read()
        self.assertMsgId('#: templates/test.html.py', po_contents)
        self.assertLocationCommentNotPresent(self.PO_FILE, None, '.html.py')
        self.assertLocationCommentPresent(self.PO_FILE, 5, 'templates', 'test.html')
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
    
# Class mapping dictionary for OFT Types and reverse mapping.
OGRFieldTypes = {
    0: OFTInteger,
    1: OFTIntegerList,
    2: OFTReal,
    3: OFTRealList,
    4: OFTString,
    5: OFTStringList,
    6: OFTWideString,
    7: OFTWideStringList,
    8: OFTBinary,
    9: OFTDate,
    10: OFTTime,
    11: OFTDateTime,
    # New 64-bit integer types in GDAL 2
    12: OFTInteger64,
    13: OFTInteger64List,
}
ROGRFieldTypes = {cls: num for num, cls in OGRFieldTypes.items()}

    
        @x.setter
    def x(self, value):
        gtf = self._raster.geotransform
        gtf[self.indices[self._prop][0]] = value
        self._raster.geotransform = gtf
    
        def test_mark_safe_lazy_result_implements_dunder_html(self):
        self.assertEqual(mark_safe(lazystr('a&b')).__html__(), 'a&b')
    
        def _get_alert_policies(self, alias):
        '''
        Get the alert policies for account alias by calling the CLC API.
        :param alias: the account alias
        :return: the alert policies for the account alias
        '''
        response = {}
    
    #
#  Requires the clc-python-sdk.
#  sudo pip install clc-sdk
#
CLC_IMP_ERR = None
try:
    import clc as clc_sdk
    from clc import CLCException
except ImportError:
    CLC_IMP_ERR = traceback.format_exc()
    CLC_FOUND = False
    clc_sdk = None
else:
    CLC_FOUND = True
    
        if module.params['state'] == 'present' and instance is not None:
        module.exit_json(changed=False, instance=instance._raw_json)
    
            else:
            # More than 1 matching issue
            return (False, changed, 'More than one issue with subject %s in project %s' % (issue_subject, project_name), {})
    
    
def main():
    run_module()
    
    
def post_sendgrid_api(module, username, password, from_address, to_addresses,
                      subject, body, api_key=None, cc=None, bcc=None, attachments=None,
                      html_body=False, from_name=None, headers=None):
    
    from ansible.module_utils.basic import AnsibleModule, missing_required_lib
    
    EXAMPLES = '''
- name: Get latest release of a public repository
  github_release:
    user: ansible
    repo: ansible
    action: latest_release
    
    
@YouCompleteMeInstance( { 'g:ycm_cache_omnifunc': 1,
                          'g:ycm_semantic_triggers': TRIGGERS } )
def OmniCompleter_GetCompletions_Cache_List_Filter_Unicode_test( ycm ):
  def Omnifunc( findstart, base ):
    if findstart:
      return 12
    return [ '†est', 'å_unicode_identifier', 'πππππππ yummy πie' ]
    
    
def CompileLevel( level ):
  # valid kinds are WARNING and ERROR;
  #  expected input levels are `warning` and `error`
  # NOTE: we don't validate the input...
  expected_kind = level.upper()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      post_vim_message.assert_has_exact_calls( [
    call( 'this is a message', warning=False, truncate=True )
  ] )
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerResponse ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      post_vim_message.assert_has_exact_calls( [
        call( 'Exception: message', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': contains( has_entries( {
            'word': 'insertion_text',
            'abbr': 'menu_text',
            'menu': 'extra_menu_info',
            'info': 'detailed_info\ndoc_string',
            'kind': 'k',
            'dup': 1,
            'empty': 1
          } ) ),
          'completion_start_column': 3
        } )
      )
    
    
def KeywordsFromSyntaxListOutput_PhpSyntax_ContainsPreProc_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'php_syntax' ) ),
               has_items( 'skip', 'function' ) )