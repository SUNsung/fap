
        
            with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
                    fn = os.path.join(dirpath, basename)
                with io.open(fn, encoding='utf-8') as inf:
                    code = inf.read()
    
        By default this will get the strings from the blns.txt file
    
        def test_printer_buttons(self):
        '''Test buttons whose commands use printer function.'''
        dialog = self.dialog
        button_sources = [(dialog.py_license, license, 'license'),
                          (dialog.py_copyright, copyright, 'copyright'),
                          (dialog.py_credits, credits, 'credits')]
    
    def _check_arg_types(funcname, *args):
    hasstr = hasbytes = False
    for s in args:
        if isinstance(s, str):
            hasstr = True
        elif isinstance(s, bytes):
            hasbytes = True
        else:
            raise TypeError('%s() argument must be str or bytes, not %r' %
                            (funcname, s.__class__.__name__)) from None
    if hasstr and hasbytes:
        raise TypeError('Can't mix strings and bytes in path components') from None

    
    
def is_resource(package: Package, name: str) -> bool:
    '''True if 'name' is a resource inside 'package'.
    
    from email.message import EmailMessage
from email.policy import SMTP
    
    def handleToc(slides):
    for slide in slides:
        title = slide.getElementsByTagName('title')[0]
        print('<p>%s</p>' % getText(title.childNodes))
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    def adapt_point(point):
    return ('%f;%f' % (point.x, point.y)).encode('ascii')
    
    
Test cyclic gc(?)
    
    from __future__ import absolute_import
    
        def forwards(self, orm):
        # Adding model 'TagValue'
        db.create_table(u'tagstore_tagvalue', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('value', self.gf('django.db.models.fields.CharField')(max_length=200)),
            ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')(null=True, blank=True)),
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['TagValue'])
    
        complete_apps = ['tagstore']

    
            # Changing field 'GroupTagValue.group_id'
        db.alter_column(u'tagstore_grouptagvalue', 'group_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
        return results
    
            activity.update(data={
            'version': release.version,
        })

    
        This **does not** guarantee that the correct value is written into the cache
    though it will correct itself in the next update window.
    '''
    cutoff_dt = timezone.now() - timedelta(seconds=cutoff)
    # TODO(dcramer): this doesnt handle deleted options (which shouldn't be allowed)
    for option in Option.objects.filter(last_updated__gte=cutoff_dt).iterator():
        try:
            opt = default_manager.lookup_key(option.key)
            default_manager.store.set_cache(opt, option.value)
        except UnknownOption as e:
            logger.exception(six.text_type(e))

    
    import cv2
import logging
import os
import uuid
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
        # sum -> ReLU
    # shortcut function: by default using bn; support gn
    add_shortcut = globals()[cfg.RESNETS.SHORTCUT_FUNC]
    sc = add_shortcut(model, prefix, blob_in, dim_in, dim_out, stride)
    if inplace_sum:
        s = model.net.Sum([tr, sc], tr)
    else:
        s = model.net.Sum([tr, sc], prefix + '_sum')
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    from detectron.core.config import cfg
import detectron.utils.blob as blob_utils
    
        outputs[0].reshape(rois.shape)
    outputs[0].data[...] = rois
    
        # Scale rois and format as (batch_idx, x1, y1, x2, y2)
    sampled_rois = sampled_boxes * im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones((sampled_rois.shape[0], 1))
    sampled_rois = np.hstack((repeated_batch_idx, sampled_rois))
    
        num_keypoints = gt_keypoints.shape[2]
    sampled_keypoints = -np.ones(
        (len(sampled_fg_rois), gt_keypoints.shape[1], num_keypoints),
        dtype=gt_keypoints.dtype
    )
    for ii in range(len(sampled_fg_rois)):
        ind = box_to_gt_ind_map[ii]
        if ind >= 0:
            sampled_keypoints[ii, :, :] = gt_keypoints[gt_inds[ind], :, :]
            assert np.sum(sampled_keypoints[ii, 2, :]) > 0