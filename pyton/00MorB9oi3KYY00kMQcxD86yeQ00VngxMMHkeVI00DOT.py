
        
        EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    notes:
  - does not support check mode
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True),
            schedule_expression=dict(),
            event_pattern=dict(),
            state=dict(choices=['present', 'disabled', 'absent'],
                       default='present'),
            description=dict(),
            role_arn=dict(),
            targets=dict(type='list', default=[]),
        )
    )
    module = AnsibleAWSModule(argument_spec=argument_spec)
    
    try:
    import botocore
except ImportError:
    pass  # will be detected by imported HAS_BOTO3
    
        connection = boto3_conn(module,
                            resource='ec2', conn_type='client',
                            region=region, endpoint=ec2_url, **aws_connect_params)
    
            last_snapshot_min_age = last_snapshot_min_age * 60  # Convert to seconds
        snapshot = _get_most_recent_snapshot(current_snapshots,
                                             max_snapshot_age_secs=last_snapshot_min_age)
    try:
        # Create a new snapshot if we didn't find an existing one to use
        if snapshot is None:
            snapshot = ec2.create_snapshot(volume_id, description=description)
            changed = True
        if wait:
            if not _create_with_wait(snapshot, wait_timeout):
                module.fail_json(msg='Timed out while creating snapshot.')
        if snapshot_tags:
            for k, v in snapshot_tags.items():
                snapshot.add_tag(k, v)
    except boto.exception.BotoServerError as e:
        module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    
def get_tags(connection, load_balancer_name):
    tags = connection.describe_tags(LoadBalancerNames=[load_balancer_name])['TagDescriptions']
    if not tags:
        return {}
    return boto3_tag_list_to_ansible_dict(tags[0]['Tags'])
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
            tick_vals = []
        tick_labels = []
    
    
if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
        link = nodes.reference(text=text, refuri=ref, **options)
    return [link], []
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    
# Join pathnames.
# Ignore the previous parts if a part is absolute.
# Insert a '/' unless the first part is empty or already ends in '/'.
    
            with self.restrict_walk_packages():
            for url, title in requests:
                self.call_url_handler(url, title)
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
    # Proxy type for generator objects
class GeneratorProxy(BaseProxy):
    _exposed_ = ['__next__']
    def __iter__(self):
        return self
    def __next__(self):
        return self._callmethod('__next__')
    
        # Get and print results
    print('Unordered results:')
    for i in range(len(TASKS1)):
        print('\t', done_queue.get())
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)