
        
            def fields(self):
        fk = getattr(self.formset, 'fk', None)
        empty_form = self.formset.empty_form
        meta_labels = empty_form._meta.labels or {}
        meta_help_texts = empty_form._meta.help_texts or {}
        for i, field_name in enumerate(flatten_fieldsets(self.fieldsets)):
            if fk and fk.name == field_name:
                continue
            if not self.has_change_permission or field_name in self.readonly_fields:
                yield {
                    'name': field_name,
                    'label': meta_labels.get(field_name) or label_for_field(
                        field_name,
                        self.opts.model,
                        self.opts,
                        form=empty_form,
                    ),
                    'widget': {'is_hidden': False},
                    'required': False,
                    'help_text': meta_help_texts.get(field_name) or help_text_for_field(field_name, self.opts.model),
                }
            else:
                form_field = empty_form.fields[field_name]
                label = form_field.label
                if label is None:
                    label = label_for_field(field_name, self.opts.model, self.opts, form=empty_form)
                yield {
                    'name': field_name,
                    'label': label,
                    'widget': form_field.widget,
                    'required': form_field.required,
                    'help_text': form_field.help_text,
                }
    
    
class UUIDConverter:
    regex = '[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}'
    
            # Get the srid for this object
        if value is None:
            value_srid = None
        else:
            value_srid = value.srid
    
                # Comments in templates
            self.assertIn('#. Translators: This comment should be extracted', po_contents)
            self.assertIn(
                '#. Translators: Django comment block for translators\n#. '
                'string's meaning unveiled',
                po_contents
            )
            self.assertIn('#. Translators: One-line translator comment #1', po_contents)
            self.assertIn('#. Translators: Two-line translator comment #1\n#. continued here.', po_contents)
            self.assertIn('#. Translators: One-line translator comment #2', po_contents)
            self.assertIn('#. Translators: Two-line translator comment #2\n#. continued here.', po_contents)
            self.assertIn('#. Translators: One-line translator comment #3', po_contents)
            self.assertIn('#. Translators: Two-line translator comment #3\n#. continued here.', po_contents)
            self.assertIn('#. Translators: One-line translator comment #4', po_contents)
            self.assertIn('#. Translators: Two-line translator comment #4\n#. continued here.', po_contents)
            self.assertIn(
                '#. Translators: One-line translator comment #5 -- with '
                'non ASCII characters: áéíóúö',
                po_contents
            )
            self.assertIn(
                '#. Translators: Two-line translator comment #5 -- with '
                'non ASCII characters: áéíóúö\n#. continued here.',
                po_contents
            )
    
        @property
    def hexewkb(self):
        '''
        Return the EWKB of this Geometry in hexadecimal form. This is an
        extension of the WKB specification that includes SRID value that are
        a part of this geometry.
        '''
        return ewkb_w(dim=3 if self.hasz else 2).write_hex(self)
    
        response, info = fetch_url(module=module, url=url, headers=headers, data=rawdata, method=method)
    status = info['status']
    content = ''
    if response:
        content = response.read()
    if status == 204:
        return True, content
    elif status == 200 or status == 201:
        return True, json.loads(content)
    else:
        return False, str(status) + ': ' + content
    
            return client

    
        @staticmethod
    def _modify_aa_policy(clc, module, acct_alias, server_id, aa_policy_id):
        '''
        modifies the anti affinity policy of the CLC server
        :param clc: the clc-sdk instance to use
        :param module: the AnsibleModule object
        :param acct_alias: the CLC account alias
        :param server_id: the CLC server id
        :param aa_policy_id: the anti affinity policy id
        :return: result: The result from the CLC API call
        '''
        result = None
        if not module.check_mode:
            try:
                result = clc.v2.API.Call('PUT',
                                         'servers/%s/%s/antiAffinityPolicy' % (
                                             acct_alias,
                                             server_id),
                                         json.dumps({'id': aa_policy_id}))
            except APIFailedResponse as ex:
                module.fail_json(
                    msg='Unable to modify anti affinity policy to server : '{0}'. {1}'.format(
                        server_id, str(ex.response_text)))
        return result
    
        if not HAS_LINODE_DEPENDENCY:
        module.fail_json(msg=missing_required_lib('linode-api4'), exception=LINODE_IMP_ERR)
    
        if username not in ht.users():
        return ('%s not present' % username, False)
    else:
        if not check_mode:
            ht.delete(username)
            ht.save()
        return ('Remove %s' % username, True)
    
            self.result = {
            'changed': False,
            'url': self.jenkins_url,
            'name': self.name,
            'user': self.user,
            'state': self.state,
            'diff': {
                'before': '',
                'after': ''
            }
        }
    
            elif matching_issue_list_len == 1:
            # The issue exists in the project
            if state == 'absent':
                # This implies a change
                changed = True
                if not check_mode:
                    # Delete the issue
                    matching_issue_list[0].delete()
                return (True, changed, 'Issue deleted', {})
    
        def compare(self, first_resource, second_resource):
        '''
        Recursively compares dictionary contents equivalence, ignoring types and elements order.
        Particularities of the comparison:
            - Inexistent key = None
            - These values are considered equal: None, empty, False
            - Lists are compared value by value after a sort, if they have same size.
            - Each element is converted to str before the comparison.
        :arg dict first_resource: first dictionary
        :arg dict second_resource: second dictionary
        :return: bool: True when equal, False when different.
        '''
        resource1 = first_resource
        resource2 = second_resource
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    RETURN = '''
create_release:
    description:
    - Version of the created release
    - 'For Ansible version 2.5 and later, if specified release version already exists, then State is unchanged'
    - 'For Ansible versions prior to 2.5, if specified release version already exists, then State is skipped'
    type: str
    returned: success
    sample: 1.1.0
    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
            rank = len(shape)
        if self.seed is not None:
            np.random.seed(self.seed)
    
        # Calling directly the omnifunc may move the cursor position. This is the
    # case with the default Vim omnifunc for C-family languages
    # (ccomplete#Complete) which calls searchdecl to find a declaration. This
    # function is supposed to move the cursor to the found declaration but it
    # doesn't when called through the omni completion mapping (CTRL-X CTRL-O).
    # So, we restore the cursor position after the omnifunc calls.
    line, column = vimsupport.CurrentLineAndColumn()
    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'ft=ycm:ident', 'GoTo' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )
    
    
  def PopulateLocationList( self ):
    # Do nothing if loc list is already populated by diag_interface
    if not self._user_options[ 'always_populate_location_list' ]:
      self._UpdateLocationLists()
    return bool( self._diagnostics )
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    
def HandlePollResponse_MultipleDiagnostics_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )