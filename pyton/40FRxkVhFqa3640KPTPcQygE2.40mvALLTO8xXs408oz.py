
        
            print('Cleaning up existing sources directory.')
    if os.path.exists(sources_dir):
        shutil.rmtree(sources_dir)
    
    batch_size = 64  # Batch size for training.
epochs = 100  # Number of epochs to train for.
latent_dim = 256  # Latent dimensionality of the encoding space.
num_samples = 10000  # Number of samples to train on.
# Path to the data txt file on disk.
data_path = 'fra-eng/fra.txt'
    
    # train
rms = RMSprop()
model.compile(loss=contrastive_loss, optimizer=rms, metrics=[accuracy])
model.fit([tr_pairs[:, 0], tr_pairs[:, 1]], tr_y,
          batch_size=128,
          epochs=epochs,
          validation_data=([te_pairs[:, 0], te_pairs[:, 1]], te_y))
    
        A Capsule Network Layer implementation in Keras
    There are two versions of Capsule Networks.
    One is similar to dense layer (for the fixed-shape input),
    and the other is similar to time distributed dense layer
    (for inputs of varied length).
    
        # Properties
        params: dict. Training parameters
            (eg. verbosity, batch size, number of epochs...).
        model: instance of `keras.models.Model`.
            Reference of the model being trained.
    
            if self.inputs:
            self._init_graph_network(self.inputs,
                                     self.outputs,
                                     name=self.name)
            self.built = True
    
        def get_losses_for(self, inputs=None):
        return super(RNN, self).get_losses_for(inputs=inputs)
    
        def compute_mask(self, inputs, mask=None):
        if not self.mask_zero:
            return None
        output_mask = K.not_equal(inputs, 0)
        return output_mask
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
        def test_wildcard(self):
        self.assertFalse(self.addr.is_wildcard())
        self.assertTrue(self.addr1.is_wildcard())
        self.assertTrue(self.addr2.is_wildcard())
    
    from certbot import achallenges
from certbot.compat import filesystem
from certbot.tests import acme_util
from certbot.tests import util as test_util
    
        def test_it(self):
        with mock.patch('certbot.client.acme_client.BackwardsCompatibleClientV2') as mock_client:
            mock_client().external_account_required.side_effect = self._false_mock
            with mock.patch('certbot.account.report_new_account'):
                with mock.patch('certbot.eff.handle_subscription'):
                    self._call()
    
    The path to this file can be provided interactively or using the
``--dns-rfc2136-credentials`` command-line argument. Certbot records the
path to this file for use during renewal, but does not store the file's contents.
    
            :param str domain_name: The domain name to query for an SOA record.
        :returns: True if found, False otherwise.
        :rtype: bool
        :raises certbot.errors.PluginError: if no response is received.
        '''
    
    You should pack your words in a greedy approach; that is, pack as many words as
you can in each line. Pad extra spaces ' ' when necessary so that each line has
exactly maxWidth characters.
    
            self.assertEqual(n_sum(2, [[-3, 0], [-2, 1], [2, 2], [3, 3], [8, 4], [-9, 5]], 0,  # noqa: E501
                               sum_closure=lambda a, b: a[0] + b[0]),  # noqa: E501
                         [[[-3, 0], [3, 3]], [[-2, 1], [2, 2]]])  # noqa: E501
        self.assertEqual(n_sum(2, [[-3, 0], [-2, 1], [2, 2], [3, 3], [8, 4], [-9, 5]], [0, 3],  # noqa: E501
                               sum_closure=lambda a, b: [a[0] + b[0], a[1] + b[1]],  # noqa: E501
                               same_closure=lambda a, b: a[0] == b[0] and a[1] == b[1]),  # noqa: E501
                         [[[-3, 0], [3, 3]], [[-2, 1], [2, 2]]])  # noqa: E501
        self.assertEqual(n_sum(2, [[-3, 0], [-2, 1], [2, 2], [3, 3], [8, 4], [-9, 5]], -5,  # noqa: E501
                               sum_closure=lambda a, b: [a[0] + b[1], a[1] + b[0]],  # noqa: E501
                               compare_closure=lambda a, b: -1 if a[0] < b else 1 if a[0] > b else 0),  # noqa: E501
                         [[[-9, 5], [8, 4]]])  # noqa: E501
    
        @staticmethod
    def decode_file(file_in_name, file_out_name):
        with open(file_in_name, 'rb') as file_in, open(file_out_name, 'wb') as file_out:
            reader = HuffmanReader(file_in)
            additional_bits = reader.get_number_of_additional_bits_in_the_last_byte()
            tree = reader.load_tree()
    
    remove_dups(a1)
print_linked_list(a1)
remove_dups_wothout_set(a1)
print_linked_list(a1)

    
    
if __name__ == '__main__':
  main()

    
    
class UpdateModelMixin:
    '''
    Update a model instance.
    '''
    def update(self, request, *args, **kwargs):
        partial = kwargs.pop('partial', False)
        instance = self.get_object()
        serializer = self.get_serializer(instance, data=request.data, partial=partial)
        serializer.is_valid(raise_exception=True)
        self.perform_update(serializer)
    
        # Map methods into required permission codes.
    # Override this if you need to also provide 'view' permissions,
    # or if you want to provide custom permission codes.
    perms_map = {
        'GET': [],
        'OPTIONS': [],
        'HEAD': [],
        'POST': ['%(app_label)s.add_%(model_name)s'],
        'PUT': ['%(app_label)s.change_%(model_name)s'],
        'PATCH': ['%(app_label)s.change_%(model_name)s'],
        'DELETE': ['%(app_label)s.delete_%(model_name)s'],
    }
    
    
def _reverse(viewname, args=None, kwargs=None, request=None, format=None, **extra):
    '''
    Same as `django.urls.reverse`, but optionally takes a request
    and returns a fully qualified URL, using the request to get the base URL.
    '''
    if format is not None:
        kwargs = kwargs or {}
        kwargs['format'] = format
    url = django_reverse(viewname, args=args, kwargs=kwargs, **extra)
    if request:
        return request.build_absolute_uri(url)
    return url
    
    
class ReadOnlyModelViewSet(mixins.RetrieveModelMixin,
                           mixins.ListModelMixin,
                           GenericViewSet):
    '''
    A viewset that provides default `list()` and `retrieve()` actions.
    '''
    pass
    
        def __str__(self):
        return 'Note: %s' % self.text
