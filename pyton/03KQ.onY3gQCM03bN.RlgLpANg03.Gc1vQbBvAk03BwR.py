
        
        
class Hand(object):
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
        proc.sendline(u'ehco test')
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        assert get_new_command(Command('brew install aa',
                                   brew_no_available_formula))\
        != 'brew install aha'

    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
        requires_project = True
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
        def download_request(self, request, spider):
        p = urlparse_cached(request)
        scheme = 'https' if request.meta.get('is_secure') else 'http'
        bucket = p.hostname
        path = p.path + '?' + p.query if p.query else p.path
        url = '%s://%s.s3.amazonaws.com%s' % (scheme, bucket, path)
        if self.anon:
            request = request.replace(url=url)
        elif self._signer is not None:
            import botocore.awsrequest
            awsrequest = botocore.awsrequest.AWSRequest(
                method=request.method,
                url='%s://s3.amazonaws.com/%s%s' % (scheme, bucket, path),
                headers=request.headers.to_unicode_dict(),
                data=request.body)
            self._signer.add_auth(awsrequest)
            request = request.replace(
                url=url, headers=awsrequest.headers.items())
        else:
            signed_headers = self.conn.make_request(
                    method=request.method,
                    bucket=bucket,
                    key=unquote(p.path),
                    query_args=unquote(p.query),
                    headers=request.headers,
                    data=request.body)
            request = request.replace(url=url, headers=signed_headers)
        return self._download_http(request, spider)

    
        def _is_tar(self, response):
        archive = BytesIO(response.body)
        try:
            tar_file = tarfile.open(name=mktemp(), fileobj=archive)
        except tarfile.ReadError:
            return
    
            self.assertEqual(list(suite), [MyTestCase('test')])
    
    def adapt_point(point):
    return ('%f;%f' % (point.x, point.y)).encode('ascii')
    
    
class GroupTagValueNotFound(Exception):
    pass

    
            # Changing field 'GroupTagValue.project_id'
        db.alter_column(u'tagstore_grouptagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
        This is currenlty only used for ``in_next_release`` resolutions.
    '''
    try:
        release = Release.objects.get_from_cache(
            id=release_id,
        )
    except Release.DoesNotExist:
        return
    
    :copyright: (c) 2010-2014 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
    from sentry import options
from sentry.tasks.base import instrumented_task
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
        dim_bottleneck = cfg.RESNETS.NUM_GROUPS * cfg.RESNETS.WIDTH_PER_GROUP
    (n1, n2, n3) = block_counts[:3]
    s, dim_in = add_stage(model, 'res2', p, n1, dim_in, 256, dim_bottleneck, 1)
    if freeze_at == 2:
        model.StopGradient(s, s)
    s, dim_in = add_stage(
        model, 'res3', s, n2, dim_in, 512, dim_bottleneck * 2, 1
    )
    if freeze_at == 3:
        model.StopGradient(s, s)
    s, dim_in = add_stage(
        model, 'res4', s, n3, dim_in, 1024, dim_bottleneck * 4, 1
    )
    if freeze_at == 4:
        model.StopGradient(s, s)
    if len(block_counts) == 4:
        n4 = block_counts[3]
        s, dim_in = add_stage(
            model, 'res5', s, n4, dim_in, 2048, dim_bottleneck * 8,
            cfg.RESNETS.RES5_DILATION
        )
        if freeze_at == 5:
            model.StopGradient(s, s)
        return s, dim_in, 1. / 32. * cfg.RESNETS.RES5_DILATION
    else:
        return s, dim_in, 1. / 16.
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    
class GenerateProposalLabelsOp(object):
    
    '''Construct minibatches for Mask R-CNN training. Handles the minibatch blobs
that are specific to Mask R-CNN. Other blobs that are generic to RPN or
Fast/er R-CNN are handled by their respecitive roi_data modules.
'''
    
            if check_grad:
            gc = gradient_checker.GradientChecker(
                stepsize=0.1,
                threshold=0.001,
                device_option=core.DeviceOption(caffe2_pb2.CUDA, 0)
            )