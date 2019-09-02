
        
            def test_encode_override(self):
        self.assertEqual('y', self.field.encode('y'))
    
        @certbot_util.patch_get_utility()
    def test_select_correct(self, mock_util):
        mock_util().checklist.return_value = (
            display_util.OK, [self.vhosts[3].display_repr(),
                              self.vhosts[2].display_repr()])
        vhs = select_vhost_multiple([self.vhosts[3],
                                     self.vhosts[2],
                                     self.vhosts[1]])
        self.assertTrue(self.vhosts[2] in vhs)
        self.assertTrue(self.vhosts[3] in vhs)
        self.assertFalse(self.vhosts[1] in vhs)
    
        @mock.patch('dns.query.tcp')
    def test_add_txt_record(self, query_mock):
        query_mock.return_value.rcode.return_value = dns.rcode.NOERROR
        # _find_domain | pylint: disable=protected-access
        self.rfc2136_client._find_domain = mock.MagicMock(return_value='example.com')
    
        def certbot_test_nginx(self, args):
        '''
        Main command to execute certbot using the nginx plugin.
        :param list args: list of arguments to pass to nginx
        :param bool force_renew: set to False to not renew by default
        '''
        command = ['--authenticator', 'nginx', '--installer', 'nginx',
                   '--nginx-server-root', self.nginx_root]
        command.extend(args)
        return certbot_call.certbot_test(
            command, self.directory_url, self.http_01_port, self.tls_alpn_01_port,
            self.config_dir, self.workspace, force_renew=True)
    
    
@pytest.mark.parametrize('certname_pattern, params, context', [
    ('nginx.{0}.wtf', ['run'], {'default_server': True}),
    ('nginx2.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # Overlapping location block and server-block-level return 301
    ('nginx3.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server exists
    ('nginx4.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server does not exist
    ('nginx5.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
    # Multiple domains, mix of matching and not
    ('nginx6.{0}.wtf,nginx7.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
], indirect=['context'])
def test_certificate_deployment(certname_pattern, params, context):
    # type: (str, list, nginx_context.IntegrationTestsContext) -> None
    '''
    Test various scenarios to deploy a certificate to nginx using certbot.
    '''
    domains = certname_pattern.format(context.worker_id)
    command = ['--domains', domains]
    command.extend(params)
    context.certbot_test_nginx(command)
    
            # Pylint checks for super init, but also claims the super
        # has no __init__member
        # pylint: disable=super-init-not-called
        self._plugins = collections.OrderedDict(sorted(six.iteritems(plugins)))
    
            gold_tuples (iterable): Gold-standard training data.
        pipeline (list): The pipeline the model is part of.
        '''
        if self.model is True:
            self.model = self.Model(pipeline[0].model.nO)
            link_vectors_to_models(self.vocab)
        if sgd is None:
            sgd = self.create_optimizer()
        return sgd

    
    
@pytest.mark.parametrize('package', ['thinc'])
def test_util_get_package_path(package):
    '''Test that a Path object is returned for a package name.'''
    path = util.get_package_path(package)
    assert isinstance(path, Path)
    
        for base, _, files in os.walk(root):
        for filename in files:
            if filename.endswith('.pxd'):
                hash_add(base, filename, new_db)
                if hash_changed(base, filename, db):
                    res = True
    
    
def get_labelled_sentences(docs, doc_labels):
    labels = []
    sentences = []
    for doc, y in zip(docs, doc_labels):
        for sent in doc.sents:
            sentences.append(sent)
            labels.append(y)
    return sentences, numpy.asarray(labels, dtype='int32')
    
    
def train(train_loc, dev_loc, shape, settings):
    train_texts1, train_texts2, train_labels = read_snli(train_loc)
    dev_texts1, dev_texts2, dev_labels = read_snli(dev_loc)
    
        vectors = np.ndarray((100, 8), dtype='float32')
    shape = (10, 16, 3)
    settings = {'lr': 0.001, 'dropout': 0.2, 'gru_encode': True, 'entail_dir': 'both'}
    model = build_model(vectors, shape, settings)
    
            # Masks
        if masks is not None:
            mask = masks[:, :, i]
            masked_image = apply_mask(masked_image, mask, color)
            # Mask Polygon
            # Pad to ensure proper polygons for masks that touch image edges.
            padded_mask = np.zeros(
                (mask.shape[0] + 2, mask.shape[1] + 2), dtype=np.uint8)
            padded_mask[1:-1, 1:-1] = mask
            contours = find_contours(padded_mask, 0.5)
            for verts in contours:
                # Subtract the padding and flip (y, x) to (x, y)
                verts = np.fliplr(verts) - 1
                p = Polygon(verts, facecolor='none', edgecolor=color)
                ax.add_patch(p)
    ax.imshow(masked_image.astype(np.uint8))
    
        # Number of classes (including background)
    NUM_CLASSES = 1 + 1  # Background + nucleus