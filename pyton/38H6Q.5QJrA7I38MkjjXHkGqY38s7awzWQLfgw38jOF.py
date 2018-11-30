
        
            Basic Usage:
        >>> name = 'public-webapp-production'
        >>> tags = { 'env': 'production' }
        >>> conn = boto3.client('autoscaling', region_name='us-west-2')
        >>> results = find_asgs(name, conn)
    
        for eigw in response.get('EgressOnlyInternetGateways', []):
        for attachment in eigw.get('Attachments', []):
            if attachment.get('VpcId') == vpc_id and attachment.get('State') in ('attached', 'attaching'):
                gateway_id = eigw.get('EgressOnlyInternetGatewayId')
    
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
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
    
def cluster_snapshot_facts(module, conn):
    snapshot_name = module.params.get('db_cluster_snapshot_identifier')
    snapshot_type = module.params.get('snapshot_type')
    instance_name = module.params.get('db_cluster_instance_identifier')
    
    
DOCUMENTATION = '''
---
author:
  - 'Jens Carl (@j-carl), Hothead Games Inc.'
module: redshift_subnet_group
version_added: '2.2'
short_description: manage Redshift cluster subnet groups
description:
  - Create, modifies, and deletes Redshift cluster subnet groups.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    default: 'present'
    choices: ['present', 'absent' ]
  group_name:
    description:
      - Cluster subnet group name.
    required: true
    aliases: ['name']
  group_description:
    description:
      - Database subnet group description.
    aliases: ['description']
  group_subnets:
    description:
      - List of subnet IDs that make up the cluster subnet group.
    aliases: ['subnets']
requirements: [ 'boto' ]
extends_documentation_fragment:
  - aws
  - ec2
'''
    
    
def delete_hosted_id(module, client, hosted_zone_id, matching_zones):
    if hosted_zone_id == 'all':
        deleted = []
        for z in matching_zones:
            deleted.append(z['Id'])
            if not module.check_mode:
                try:
                    client.delete_hosted_zone(Id=z['Id'])
                except (BotoCoreError, ClientError) as e:
                    module.fail_json_aws(e, msg='Could not delete hosted zone %s' % z['Id'])
        changed = True
        msg = 'Successfully deleted zones: %s' % deleted
    elif hosted_zone_id in [zo['Id'].replace('/hostedzone/', '') for zo in matching_zones]:
        if not module.check_mode:
            try:
                client.delete_hosted_zone(Id=hosted_zone_id)
            except (BotoCoreError, ClientError) as e:
                module.fail_json_aws(e, msg='Could not delete hosted zone %s' % hosted_zone_id)
        changed = True
        msg = 'Successfully deleted zone: %s' % hosted_zone_id
    else:
        changed = False
        msg = 'There is no zone to delete that matches hosted_zone_id %s.' % hosted_zone_id
    return changed, msg
    
        try:
        req = client.globalForwardingRules().setTarget(project=project_id,
                                                       forwardingRule=name,
                                                       body={'target': gcp_dict['target']})
        return_data = GCPUtils.execute_api_client_req(
            req, client=client, raw=False)
        return (True, return_data)
    except:
        raise
    
    Uses the linkcheck's output file to fix links in docs.
    
            slots = int(self.slots)
        if slots > 1:
            urls = [url.replace('localhost', '127.0.0.%d' % (x + 1)) for x in range(slots)]
        else:
            urls = [url]
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
                # backward-compatible SSL/TLS method:
            #
            # * this will respect `method` attribute in often recommended
            #   `ScrapyClientContextFactory` subclass
            #   (https://github.com/scrapy/scrapy/issues/1429#issuecomment-131782133)
            #
            # * getattr() for `_ssl_method` attribute for context factories
            #   not calling super(..., self).__init__
            return CertificateOptions(verify=False,
                        method=getattr(self, 'method',
                                       getattr(self, '_ssl_method', None)),
                        fixBrokenPeers=True,
                        acceptableCiphers=DEFAULT_CIPHERS)
    
            self.reset_appid()
    
        @staticmethod
    def _get_cert(commonname, isip=False, sans=None):
        cert = OpenSSL.crypto.X509()
        cert.set_version(2)
        # setting the only serial number, the browser will refused fixed serial number when cert updated.
        serial_number = int((int(time.time() - CertUtil.serial_reduce) + random.random()) * 100)
        while 1:
            try:
                cert.set_serial_number(serial_number)
            except OpenSSL.SSL.Error:
                serial_number += 1
            else:
                break
        subj = cert.get_subject()
        subj.countryName = 'CN'
        subj.stateOrProvinceName = 'Internet'
        subj.localityName = 'Cernet'
        subj.organizationalUnitName = '%s Branch' % CertUtil.ca_vendor
        subj.commonName = commonname
        subj.organizationName = commonname
        cert.gmtime_adj_notBefore(-600) #avoid crt time error warning
        cert.gmtime_adj_notAfter(CertUtil.cert_validity)
        cert.set_issuer(CertUtil.ca_subject)
        if CertUtil.cert_publickey:
            pkey = CertUtil.cert_publickey
        else:
            pkey = OpenSSL.crypto.PKey()
            pkey.generate_key(OpenSSL.crypto.TYPE_RSA, 2048)
        cert.set_pubkey(pkey)
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
            Using setter/getter methods is deprecated. Use o.text instead.
        '''
        raise NotImplementedError
    
        return list(map(convert_cnn_detections_to_css, raw_detections_batched))
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
        # Save each frame of the video to a list
    frame_count += 1
    frames.append(frame)
    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
        def test_fd_command_line_interface_folder(self):
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images')