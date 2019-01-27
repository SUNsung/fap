
        
            if state == 'present':
        if not all((replication_id, cluster_id)):
            module.fail_json(msg='The state 'present' requires options: 'replication_id' and 'cluster_id'')
        response, changed = create(module, connection, replication_id, cluster_id, name)
    elif state == 'absent':
        response, changed = delete(module, connection, name)
    elif state == 'copy':
        if not all((target, bucket)):
            module.fail_json(msg='The state 'copy' requires options: 'target' and 'bucket'.')
        response, changed = copy(module, connection, name, target, bucket)
    
            for server_cert in server_certs:
            if not name:
                server_cert = iam.get_server_certificate(ServerCertificateName=server_cert['ServerCertificateName'])['ServerCertificate']
            cert_md = server_cert['ServerCertificateMetadata']
            results[cert_md['ServerCertificateName']] = {
                'certificate_body': server_cert['CertificateBody'],
                'server_certificate_id': cert_md['ServerCertificateId'],
                'server_certificate_name': cert_md['ServerCertificateName'],
                'arn': cert_md['Arn'],
                'path': cert_md['Path'],
                'expiration': cert_md['Expiration'].isoformat(),
                'upload_date': cert_md['UploadDate'].isoformat(),
            }
    
    # Copyright: (c) 2017, Google Inc.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        keys = ['protocol', 'dest_port', 'dest_ip', 'source_port', 'source_ip']
    for rule in deletions:
        if not module.check_mode:
            kwargs = dict([(k, v) for k, v in rule.items() if k in keys])
            kwargs['protocol'] = protocol_to_string(kwargs['protocol'])
            gateway.delete_fw_rule(**kwargs)
        result['changed'] = True
    
        ipa_dnszone = client.dnszone_find(zone_name)
    
        host = module.params['host']
    hostcategory = module.params['hostcategory']
    hostgroup = module.params['hostgroup']
    service = module.params['service']
    servicecategory = module.params['servicecategory']
    servicegroup = module.params['servicegroup']
    sourcehost = module.params['sourcehost']
    sourcehostcategory = module.params['sourcehostcategory']
    sourcehostgroup = module.params['sourcehostgroup']
    user = module.params['user']
    usercategory = module.params['usercategory']
    usergroup = module.params['usergroup']
    
    
def get_role_diff(client, ipa_role, module_role):
    return client.get_diff(ipa_data=ipa_role, module_data=module_role)
    
    
def source_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/blob/master/' + text
    set_classes(options)
    node = nodes.reference(rawtext, text, refuri=ref, **options)
    return [node], []
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        requires_project = True
    
            if self.settings.get('BOT_NAME') == module:
            print('Cannot create a spider with the same name as your project')
            return
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
    REVERSE_NAME_MAPPING.update({
    ('_functools', 'reduce'): ('__builtin__', 'reduce'),
    ('tkinter.filedialog', 'FileDialog'): ('FileDialog', 'FileDialog'),
    ('tkinter.filedialog', 'LoadFileDialog'): ('FileDialog', 'LoadFileDialog'),
    ('tkinter.filedialog', 'SaveFileDialog'): ('FileDialog', 'SaveFileDialog'),
    ('tkinter.simpledialog', 'SimpleDialog'): ('SimpleDialog', 'SimpleDialog'),
    ('xmlrpc.server', 'ServerHTMLDoc'): ('DocXMLRPCServer', 'ServerHTMLDoc'),
    ('xmlrpc.server', 'XMLRPCDocGenerator'):
        ('DocXMLRPCServer', 'XMLRPCDocGenerator'),
    ('xmlrpc.server', 'DocXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocXMLRPCRequestHandler'),
    ('xmlrpc.server', 'DocXMLRPCServer'):
        ('DocXMLRPCServer', 'DocXMLRPCServer'),
    ('xmlrpc.server', 'DocCGIXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocCGIXMLRPCRequestHandler'),
    ('http.server', 'SimpleHTTPRequestHandler'):
        ('SimpleHTTPServer', 'SimpleHTTPRequestHandler'),
    ('http.server', 'CGIHTTPRequestHandler'):
        ('CGIHTTPServer', 'CGIHTTPRequestHandler'),
    ('_socket', 'socket'): ('socket', '_socketobject'),
})
    
        @classmethod
    def _parse_args(cls, args):
        # This is useful when you don't want to create an instance, just
        # canonicalize some constructor arguments.
        parts = []
        for a in args:
            if isinstance(a, PurePath):
                parts += a._parts
            else:
                a = os.fspath(a)
                if isinstance(a, str):
                    # Force-cast str subclasses to str (issue #21127)
                    parts.append(str(a))
                else:
                    raise TypeError(
                        'argument should be a str object or an os.PathLike '
                        'object returning str, not %r'
                        % type(a))
        return cls._flavour.parse_parts(parts)
    
    # If true, keep warnings as 'system message' paragraphs in the built
# documents.
#keep_warnings = False
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of dlib 'rect' objects of found face locations
    '''
    if model == 'cnn':
        return cnn_face_detector(img, number_of_times_to_upsample)
    else:
        return face_detector(img, number_of_times_to_upsample)
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)