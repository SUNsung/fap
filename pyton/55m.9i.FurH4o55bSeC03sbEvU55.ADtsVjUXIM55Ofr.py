
        
        - name: obtain all facts for a single WAF
  aws_waf_facts:
    name: test_waf
'''
    
    - cloudwatchevent_rule:
    name: MyDisabledCronTask
    schedule_expression: 'rate(5 minutes)'
    description: Run my disabled scheduled task
    state: disabled
    targets:
      - id: MyOtherTargetId
        arn: arn:aws:lambda:us-east-1:123456789012:function:MyFunction
        input: '{'foo': 'bar'}'
    
    
DOCUMENTATION = '''
---
module: ec2_customer_gateway
short_description: Manage an AWS customer gateway
description:
    - Manage an AWS customer gateway
version_added: '2.2'
author: Michael Baydoun (@MichaelBaydoun)
requirements: [ botocore, boto3 ]
notes:
    - You cannot create more than one customer gateway with the same IP address. If you run an identical request more than one time, the
      first request creates the customer gateway, and subsequent requests return information about the existing customer gateway. The subsequent
      requests do not create new customer gateway resources.
    - Return values contain customer_gateway and customer_gateways keys which are identical dicts. You should use
      customer_gateway. See U(https://github.com/ansible/ansible-modules-extras/issues/2773) for details.
options:
  bgp_asn:
    description:
      - Border Gateway Protocol (BGP) Autonomous System Number (ASN), required when state=present.
  ip_address:
    description:
      - Internet-routable IP address for customers gateway, must be a static address.
    required: true
  name:
    description:
      - Name of the customer gateway.
    required: true
  routing:
    description:
      - The type of routing.
    choices: ['static', 'dynamic']
    default: dynamic
    version_added: '2.4'
  state:
    description:
      - Create or terminate the Customer Gateway.
    default: present
    choices: [ 'present', 'absent' ]
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
if __name__ == '__main__':
    main()

    
        create_snapshot(
        module=module,
        state=state,
        description=description,
        wait=wait,
        wait_timeout=wait_timeout,
        ec2=ec2,
        volume_id=volume_id,
        instance_id=instance_id,
        snapshot_id=snapshot_id,
        device_name=device_name,
        snapshot_tags=snapshot_tags,
        last_snapshot_min_age=last_snapshot_min_age
    )
    
        for eigw in response.get('EgressOnlyInternetGateways', []):
        for attachment in eigw.get('Attachments', []):
            if attachment.get('VpcId') == vpc_id and attachment.get('State') in ('attached', 'attaching'):
                gateway_id = eigw.get('EgressOnlyInternetGatewayId')
    
        show_details = module.params.get('details')
    
        Basic Usage:
        >>> client = boto3.client('kinesis')
        >>> stream_name = 'test-stream'
        >>> number_of_shards = 10
        >>> tags = {'env': 'test'}
        >>> create_stream(client, stream_name, number_of_shards, tags=tags)
    
        :param client: AWS API client reference (boto3)
    :param module: Ansible module reference
    :return dict:
    '''
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
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
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
            for release_project in RangeQuerySetWrapperWithProgressBar(
            orm.ReleaseProject.objects.all()
        ):
            orm.ReleaseProject.objects.filter(id=release_project.id).update(
                new_groups=orm.Group.objects.filter(
                    project_id=release_project.project_id,
                    first_release_id=release_project.release_id,
                ).count()
            )
    
            # Adding field 'ApiToken.scope_list'
        db.add_column(
            'sentry_apitoken',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            # Adding model 'DSymApp'
        db.create_table(
            'sentry_dsymapp', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), ('app_id', self.gf('django.db.models.fields.CharField')(max_length=64)),
                ('sync_id', self.gf('django.db.models.fields.CharField')(max_length=64, null=True)),
                ('data', self.gf('jsonfield.fields.JSONField')(default={})), (
                    'platform',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0
                    )
                ), (
                    'last_synced',
                    self.gf('django.db.models.fields.DateTimeField')()
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['DSymApp'])
    
            # Deleting field 'ReleaseFile.dist'
        db.delete_column('sentry_releasefile', 'dist_id')
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Load image file and find face locations
    X_img = face_recognition.load_image_file(X_img_path)
    X_face_locations = face_recognition.face_locations(X_img)
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
        return score
    
            a += a
        b >>= 1