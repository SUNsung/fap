
        
        
@login_required(redirect_field_name='redirect_to')
def login_protected_view_changed_redirect(request):
    'A simple view that is login protected with a custom redirect field set'
    t = Template('This is a login protected test. Username is {{ user.username }}.', name='Login Template')
    c = Context({'user': request.user})
    return HttpResponse(t.render(c))
    
    
class AdminField:
    def __init__(self, form, field, is_first):
        self.field = form[field]  # A django.forms.BoundField instance
        self.is_first = is_first  # Whether this field is first on the line
        self.is_checkbox = isinstance(self.field.field.widget, forms.CheckboxInput)
        self.is_readonly = False
    
    
class Holder4Admin(admin.ModelAdmin):
    inlines = [Inner4StackedInline, Inner4TabularInline]
    
    
class AnonymousUser:
    id = None
    pk = None
    username = ''
    is_staff = False
    is_active = False
    is_superuser = False
    _groups = EmptyManager(Group)
    _user_permissions = EmptyManager(Permission)
    
        def test_filtered_aggregate_on_annotate(self):
        pages_annotate = Sum('book__pages', filter=Q(book__rating__gt=3))
        age_agg = Sum('age', filter=Q(total_pages__gte=400))
        aggregated = Author.objects.annotate(total_pages=pages_annotate).aggregate(summed_age=age_agg)
        self.assertEqual(aggregated, {'summed_age': 140})
    
    
@unittest.skipUnless(HAS_POSTGRES, 'The psycopg2 driver is needed for these tests')
class TestPostGISVersionCheck(unittest.TestCase):
    '''
    The PostGIS version check parses correctly the version numbers
    '''
    
        def test_gin_fastupdate(self):
        index_name = 'integer_array_gin_fastupdate'
        index = GinIndex(fields=['field'], name=index_name, fastupdate=False)
        with connection.schema_editor() as editor:
            editor.add_index(IntegerArrayModel, index)
        constraints = self.get_constraints(IntegerArrayModel._meta.db_table)
        self.assertEqual(constraints[index_name]['type'], 'gin')
        self.assertEqual(constraints[index_name]['options'], ['fastupdate=off'])
        with connection.schema_editor() as editor:
            editor.remove_index(IntegerArrayModel, index)
        self.assertNotIn(index_name, self.get_constraints(IntegerArrayModel._meta.db_table))
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_F_* routines are relevant here.
class Feature(GDALBase):
    '''
    This class that wraps an OGR Feature, needs to be instantiated
    from a Layer object.
    '''
    destructor = capi.destroy_feature
    
        def _name_in_configuration_exists(self, name: str) -> bool:
        '''Return True if name exists in configuration.'''
        if name in smhi_locations(self.hass):
            return True
        return False
    
            assert result['type'] == data_entry_flow.RESULT_TYPE_CREATE_ENTRY
        assert result['title'] == '192.168.1.100'
        assert result['data'] == {
            CONF_IP_ADDRESS: '192.168.1.100',
            CONF_PASSWORD: 'password',
            CONF_PORT: 8080,
            CONF_SSL: True,
            CONF_SCAN_INTERVAL: 60,
        }

    
        try:
        await hass.async_add_job(auth.login)
        return await result
    except AuthorizationError as err:
        if err.response.status_code == 401:
            raise config_flow.CodeInvalid()
        raise config_flow.NestAuthError('Unknown error: {} ({})'.format(
            err, err.response.status_code))

    
        assert await async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'trigger': {
                'platform': 'event',
                'event_type': 'test_event'
            },
            'condition': {
                'condition': 'zone',
                'entity_id': 'test.entity',
                'zone': 'zone.test',
            },
            'action': {
                'service': 'test.automation',
            }
        }
    })
    
        mock_hap.return_value.async_reset.return_value = mock_coro(True)
    assert await hmipc.async_unload_entry(hass, entry)
    assert len(mock_hap.return_value.async_reset.mock_calls) == 1
    assert hass.data[hmipc.DOMAIN] == {}

    
    
def import_nccl_ops():
    '''Import NCCL ops.'''
    # There is no need to load NCCL ops since the
    # NCCL dependency is built into the Caffe2 gpu lib
    pass
    
                try:
                # Under some conditions (e.g., dynamic memory optimization)
                # it is possible that the network frees some blobs when they are
                # no longer needed. Handle this case...
                output_shape = workspace.FetchBlob(output_name).shape
            except BaseException:
                output_shape = '<unknown>'
    
            # fetch per level probability
        cls_prob = cls_probs[cnt]
        box_pred = box_preds[cnt]
        cls_prob = cls_prob.reshape((
            cls_prob.shape[0], A, int(cls_prob.shape[1] / A),
            cls_prob.shape[2], cls_prob.shape[3]))
        box_pred = box_pred.reshape((
            box_pred.shape[0], A, 4, box_pred.shape[2], box_pred.shape[3]))
        cnt += 1
    
    '''Python implementation of the PASCAL VOC devkit's AP evaluation code.'''
    
        def minibatch_loader_thread(self):
        '''Load mini-batches and put them onto the mini-batch queue.'''
        with self.coordinator.stop_on_exception():
            while not self.coordinator.should_stop():
                blobs = self.get_next_minibatch()
                # Blobs must be queued in the order specified by
                # self.get_output_names
                ordered_blobs = OrderedDict()
                for key in self.get_output_names():
                    assert blobs[key].dtype in (np.int32, np.float32), \
                        'Blob {} of dtype {} must have dtype of ' \
                        'np.int32 or np.float32'.format(key, blobs[key].dtype)
                    ordered_blobs[key] = blobs[key]
                coordinated_put(
                    self.coordinator, self._minibatch_queue, ordered_blobs
                )
        logger.info('Stopping mini-batch loading thread')
    
    
def log_json_stats(stats, sort_keys=True):
    # hack to control precision of top-level floats
    stats = {
        k: '{:.6f}'.format(v) if isinstance(v, float) else v
        for k, v in stats.items()
    }
    print('json_stats: {:s}'.format(json.dumps(stats, sort_keys=sort_keys)))
    
            'License :: OSI Approved :: MIT License',