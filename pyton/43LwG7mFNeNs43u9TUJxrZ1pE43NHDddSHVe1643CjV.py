
        
            t = Template('This is a view that modifies the session.',
                 name='Session Modifying View Template')
    c = Context()
    return HttpResponse(t.render(c))
    
    
class InlineAdminForm(AdminForm):
    '''
    A wrapper around an inline form for use in the admin system.
    '''
    def __init__(self, formset, form, fieldsets, prepopulated_fields, original,
                 readonly_fields=None, model_admin=None, view_on_site_url=None):
        self.formset = formset
        self.model_admin = model_admin
        self.original = original
        self.show_url = original and view_on_site_url is not None
        self.absolute_url = view_on_site_url
        super().__init__(form, fieldsets, prepopulated_fields, readonly_fields, model_admin)
    
    
class AuthorAdmin(admin.ModelAdmin):
    inlines = [
        BookInline, NonAutoPKBookTabularInline, NonAutoPKBookStackedInline,
        EditablePKBookTabularInline, EditablePKBookStackedInline,
        NonAutoPKBookChildTabularInline,
    ]
    
        def test_tabular_inline_show_change_link_false_registered(self):
        'Inlines `show_change_link` disabled by default.'
        poll = Poll.objects.create(name='New poll')
        Question.objects.create(poll=poll)
        response = self.client.get(reverse('admin:admin_inlines_poll_change', args=(poll.pk,)))
        self.assertTrue(response.context['inline_admin_formset'].opts.has_registered_model)
        self.assertNotContains(response, INLINE_CHANGELINK_HTML)
    
            for version in versions:
            with self.subTest(version=version):
                ops = FakePostGISOperations(version[0])
                actual = ops.spatial_version
                self.assertEqual(version[1:], actual)
    
    
class classonlymethod(classmethod):
    def __get__(self, instance, cls=None):
        if instance is not None:
            raise AttributeError('This method is available only on the class, not on instances.')
        return super().__get__(instance, cls)
    
                # {% trans %} with a filter
            for minor_part in 'abcdefgh':  # Iterate from #7.1a to #7.1h template markers
                self.assertIn('msgctxt 'context #7.1{}''.format(minor_part), po_contents)
                self.assertMsgId('Translatable literal #7.1{}'.format(minor_part), po_contents)
    
        def _set_spatial_filter(self, filter):
        if isinstance(filter, OGRGeometry):
            capi.set_spatial_filter(self.ptr, filter.ptr)
        elif isinstance(filter, (tuple, list)):
            if not len(filter) == 4:
                raise ValueError('Spatial filter list/tuple must have 4 elements.')
            # Map c_double onto params -- if a bad type is passed in it
            # will be caught here.
            xmin, ymin, xmax, ymax = map(c_double, filter)
            capi.set_spatial_filter_rect(self.ptr, xmin, ymin, xmax, ymax)
        elif filter is None:
            capi.set_spatial_filter(self.ptr, None)
        else:
            raise TypeError('Spatial filter must be either an OGRGeometry instance, a 4-tuple, or None.')
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
        @classmethod
    def from_args(
        cls,
        request_item_args: List[KeyValueArg],
        as_form=False,
        chunked=False
    ) -> 'RequestItems':
        instance = RequestItems(as_form=as_form, chunked=chunked)
        rules: Dict[str, Tuple[Callable, dict]] = {
            SEPARATOR_HEADER: (
                process_header_arg,
                instance.headers,
            ),
            SEPARATOR_HEADER_EMPTY: (
                process_empty_header_arg,
                instance.headers,
            ),
            SEPARATOR_QUERY_PARAM: (
                process_query_param_arg,
                instance.params,
            ),
            SEPARATOR_FILE_UPLOAD: (
                process_file_upload_arg,
                instance.files,
            ),
            SEPARATOR_DATA_STRING: (
                process_data_item_arg,
                instance.data,
            ),
            SEPARATOR_DATA_EMBED_FILE_CONTENTS: (
                process_data_embed_file_contents_arg,
                instance.data,
            ),
            SEPARATOR_DATA_RAW_JSON: (
                process_data_raw_json_embed_arg,
                instance.data,
            ),
            SEPARATOR_DATA_EMBED_RAW_JSON_FILE: (
                process_data_embed_raw_json_file_arg,
                instance.data,
            ),
        }
    
        def test_binary_file_path(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', 'POST', httpbin.url + '/post',
                 '@' + BIN_FILE_PATH_ARG, env=env, )
        assert r == BIN_FILE_CONTENT
    
        def get_converters(self) -> List[Type[ConverterPlugin]]:
        return self.filter(ConverterPlugin)
    
        def __init__(self, directory: Union[str, Path] = DEFAULT_CONFIG_DIR):
        super().__init__()
        self.update(self.DEFAULTS)
        self.directory = Path(directory)
    
    When starting from the default values (alpha_init = 1.90, lambda_init = 1.),
the bias of the resulting curve is large, and the variance is small.
So, lambda_init should be relatively small (1.e-3) so as to reduce the bias.
    
        # now do a benchmark where the number of points is fixed
    # and the variable is the number of features
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
        in_exercise_region = False
    
    plt.matshow(np.outer(np.sort(model.row_labels_) + 1,
                     np.sort(model.column_labels_) + 1),
            cmap=plt.cm.Blues)
plt.title('Checkerboard structure of rearranged data')
    
    # Now predict the value of the digit on the second half:
expected = digits.target[n_samples // 2:]
predicted = classifier.predict(data[n_samples // 2:])
    
    
X = np.concatenate((x, y))
X += .7 * np.random.randn(2, n_samples)
X = X.T
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
        ax.w_xaxis.set_ticklabels([])
    ax.w_yaxis.set_ticklabels([])
    ax.w_zaxis.set_ticklabels([])
    ax.set_xlabel('Petal width')
    ax.set_ylabel('Sepal length')
    ax.set_zlabel('Petal length')
    ax.set_title(titles[fignum - 1])
    ax.dist = 12
    fignum = fignum + 1
    
    plt.show()

    
            ddb_deserializer = TypeDeserializer()
        if ddb.get('OldImage'):
            result['old_image'] = ddb_deserializer.deserialize({'M': ddb.get('OldImage')})
        if ddb.get('NewImage'):
            result['new_image'] = ddb_deserializer.deserialize({'M': ddb.get('NewImage')})
    
        # subscribe SQS to SNS, publish message
    sns_client.subscribe(TopicArn=topic_info['TopicArn'], Protocol='sqs',
        Endpoint=aws_stack.sqs_queue_arn(TEST_QUEUE_NAME_FOR_SNS))
    test_value = short_uid()
    sns_client.publish(TopicArn=topic_info['TopicArn'], Message='test message for SQS',
        MessageAttributes={'attr1': {'DataType': 'String', 'StringValue': test_value}})
    
            Data is given as multipart form submission bytes, and redirect is found
        in the success_action_redirect field according to Amazon S3
        documentation for Post uploads:
        http://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPOST.html
    '''
    _, params = cgi.parse_header(headers.get('Content-Type', ''))
    key, redirect_url = None, None
    
        T, N, K = 7, 1, 1
    lags = nd.array([[6, 7, 8, 3, 2, 1, 7]]).astype(_dtype)
    marks = nd.array([[0, 0, 0, 0, 0, 0, 0]]).astype(np.int32)
    valid_length = nd.array([7]).astype(_dtype)
    
    def test_tutorial_downloadable():
    '''
    Make sure that every tutorial that isn't in the whitelist has the placeholder
    that enables notebook download
    '''
    download_button_string = '<!-- INSERT SOURCE DOWNLOAD BUTTONS -->'
    
    
def test_transpose_partial_shape():
    # test converting tensor shape
    # from channels first to channels last
    # with batch size unknown
    axes = [0, 3, 2, 1]
    x = mx.sym.Variable('x')
    y = mx.sym.transpose(x, axes=axes)
    _, result, _ = y.infer_shape_partial(x=(0, 3, 224, 224))
    assert result == [(0, 224, 224, 3)]
    
            wd = self._get_wd(index)
        num_rows = weight.shape[0]
        coef1 = 1. - self.beta1**t
        coef2 = 1. - self.beta2**t
        lr *= math.sqrt(coef2)/coef1
        for row in range(num_rows):
            # check row slices of all zeros
            all_zeros = mx.test_utils.almost_equal(grad[row].asnumpy(), np.zeros_like(grad[row].asnumpy()))
            # skip zeros during lazy update
            if all_zeros and self.lazy_update:
                continue
            grad[row] = grad[row] * self.rescale_grad + wd * weight[row]
            # clip gradients
            if self.clip_gradient is not None:
                mx.nd.clip(grad[row], -self.clip_gradient, self.clip_gradient, out=grad[row])
            # update mean
            mean[row] *= self.beta1
            mean[row] += grad[row] * (1. - self.beta1)
            # update variance
            variance[row] *= self.beta2
            variance[row] += (1 - self.beta2) * mx.nd.square(grad[row], out=grad[row])
            # update weight
            weight[row] -= lr*mean[row]/(mx.nd.sqrt(variance[row]) + self.epsilon)
    
    
def test_rnn_unroll_variant_length():
    # Test for imperative usage
    cell_list = []
    for base_cell_class in [gluon.rnn.RNNCell, gluon.rnn.LSTMCell, gluon.rnn.GRUCell]:
        cell_list.append(base_cell_class(20))
        cell_list.append(gluon.rnn.BidirectionalCell(
                         l_cell=base_cell_class(20),
                         r_cell=base_cell_class(20)))
        cell_list.append(gluon.contrib.rnn.VariationalDropoutCell(base_cell=base_cell_class(20)))
    stack_res_rnn_cell = gluon.rnn.SequentialRNNCell()
    stack_res_rnn_cell.add(gluon.rnn.ResidualCell(base_cell=gluon.rnn.RNNCell(20)))
    stack_res_rnn_cell.add(gluon.rnn.ResidualCell(base_cell=gluon.rnn.RNNCell(20)))
    cell_list.append(stack_res_rnn_cell)
    batch_size = 4
    max_length = 10
    valid_length = [3, 10, 5, 6]
    valid_length_nd = mx.nd.array(valid_length)
    for cell in cell_list:
        cell.collect_params().initialize()
        cell.hybridize()
        # Test for NTC layout
        data_nd = mx.nd.random.normal(0, 1, shape=(batch_size, max_length, 20))
        outs, states = cell.unroll(length=max_length, inputs=data_nd,
                                   valid_length=valid_length_nd,
                                   merge_outputs=True,
                                   layout='NTC')
        for i, ele_length in enumerate(valid_length):
            # Explicitly unroll each sequence and compare the final states and output
            ele_out, ele_states = cell.unroll(length=ele_length,
                                              inputs=data_nd[i:(i+1), :ele_length, :],
                                              merge_outputs=True,
                                              layout='NTC')
            assert_allclose(ele_out.asnumpy(), outs[i:(i+1), :ele_length, :].asnumpy(),
                            atol=1E-4, rtol=1E-4)
            if ele_length < max_length:
                # Check the padded outputs are all zero
                assert_allclose(outs[i:(i+1), ele_length:max_length, :].asnumpy(), 0)
            for valid_out_state, gt_state in zip(states, ele_states):
                assert_allclose(valid_out_state[i:(i+1)].asnumpy(), gt_state.asnumpy(),
                                atol=1E-4, rtol=1E-4)
    
        Inputs:
        - **data**: Tensor of shape ``(N, f1*f2*f3*C, D, H, W)``.
    Outputs:
        - **out**: Tensor of shape ``(N, C, D*f1, H*f2, W*f3)``.