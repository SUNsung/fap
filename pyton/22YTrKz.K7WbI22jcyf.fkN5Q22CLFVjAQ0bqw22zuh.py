
        
        In the second benchmark, we increase the number of dimensions of the
training set. Then we plot the computation time as function of
the number of dimensions.
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
        clustering_algorithms = (
        ('Single Linkage', single),
        ('Average Linkage', average),
        ('Complete Linkage', complete),
        ('Ward Linkage', ward),
    )
    
        return strings

    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
                if not callable(cb):
                cb_method = getattr(spider, cb, None)
                if callable(cb_method):
                    cb = cb_method
                else:
                    logger.error('Cannot find callback %(callback)r in spider: %(spider)s',
                                 {'callback': cb, 'spider': spider.name})
                    return
    
    from scrapy.commands import ScrapyCommand
from scrapy.settings import BaseSettings
    
        # taken from twisted/twisted/internet/_sslverify.py
    
        delimiter = b'\n'
    
    
def record(api, method, path, data, headers):
    ''' Record a given API call to a persistent file on disk '''
    file_path = get_file_path(api, create=True)
    if CURRENTLY_REPLAYING or not file_path or not should_record(api, method, path, data, headers):
        return
    entry = None
    try:
        if isinstance(data, dict):
            data = json.dumps(data)
        if data or data in [u'', b'']:
            try:
                data = to_bytes(data)
            except Exception as e:
                LOGGER.warning('Unable to call to_bytes: %s' % e)
            data = to_str(base64.b64encode(data))
        entry = {
            'a': api,
            'm': method,
            'p': path,
            'd': data,
            'h': dict(headers)
        }
        with open(file_path, 'a') as dumpfile:
            dumpfile.write('%s\n' % json.dumps(entry))
    except Exception as e:
        print('Error recording API call to persistent file: %s %s' % (e, traceback.format_exc()))
    
            assert 'Parameters' in response
        assert len(response['Parameters']) > 0
        assert response['Parameters'][0]['Name'] == 'test_put'
        assert response['Parameters'][0]['Value'] == '1'

    
        def _create_function(self, function_name):
        arn = lambda_api.func_arn(function_name)
        lambda_api.arn_to_lambda[arn] = LambdaFunction(arn)
        lambda_api.arn_to_lambda[arn].versions = {'$LATEST': {'CodeSize': self.CODE_SIZE}}
        lambda_api.arn_to_lambda[arn].handler = self.HANDLER
        lambda_api.arn_to_lambda[arn].runtime = self.RUNTIME
        lambda_api.arn_to_lambda[arn].timeout = self.TIMEOUT
        lambda_api.arn_to_lambda[arn].envvars = {}

    
    
def validate_template(req_data):
    LOGGER.debug(req_data)
    response_content = '''
        <Capabilities></Capabilities>
        <CapabilitiesReason></CapabilitiesReason>
        <DeclaredTransforms></DeclaredTransforms>
        <Description></Description>
        <Parameters>
        </Parameters>
    '''
    
                    obj_name = str(uuid.uuid4())
                obj_path = '%s%s%s' % (prefix, '' if prefix.endswith('/') else '/', obj_name)
                try:
                    s3.Object(bucket, obj_path).put(Body=data)
                except Exception as e:
                    LOG.error('Unable to put record to stream: %s %s' % (e, traceback.format_exc()))
                    raise e
    
    import sys
import os
import re
    
    # pylint: disable=wrong-import-position,wrong-import-order
from globals import PATH_CHEAT_SHEETS, ROSETTA_PATH
from adapter import Adapter             # pylint: disable=relative-import
# pylint: enable=wrong-import-position,wrong-import-order
    
    from globals import PATH_TLDR_PAGES, PATH_CHEAT_PAGES
from adapter import Adapter
    
    Exports: