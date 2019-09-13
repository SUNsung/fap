
        
            def test_filtered_aggregate_ref_annotation(self):
        aggs = Author.objects.annotate(
            double_age=F('age') * 2,
        ).aggregate(
            cnt=Count('pk', filter=Q(double_age__gt=100)),
        )
        self.assertEqual(aggs['cnt'], 2)
    
        @classmethod
    def driver_count(cls):
        '''
        Return the number of GDAL/OGR data source drivers registered.
        '''
        return vcapi.get_driver_count() + rcapi.get_driver_count()
    
        def __iter__(self):
        'Iterate over each Feature in the Layer.'
        # ResetReading() must be called before iteration is to begin.
        capi.reset_reading(self._ptr)
        for i in range(self.num_feat):
            yield Feature(capi.get_next_feature(self._ptr), self)
    
        @property
    def hexewkb(self):
        '''
        Return the EWKB of this Geometry in hexadecimal form. This is an
        extension of the WKB specification that includes SRID value that are
        a part of this geometry.
        '''
        return ewkb_w(dim=3 if self.hasz else 2).write_hex(self)
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(default=0))
    
    
def shingle(n, iterator):
    '''\
    Shingle a token stream into N-grams.
    
            results = defaultdict(list)
        for worker in self.workers:
            worker.join()
            for k, v in six.iteritems(worker.results):
                results[k].extend(v)
        return results

    
            # Adding index on 'Association', fields ['issued']
        db.create_index('social_auth_association', ['issued'])
    
            # Adding model 'Association'
        db.create_table(u'social_auth_association', (
            ('secret', self.gf('django.db.models.fields.CharField')(max_length=255)),
            ('handle', self.gf('django.db.models.fields.CharField')(max_length=255)),
            ('lifetime', self.gf('django.db.models.fields.IntegerField')()),
            ('issued', self.gf('django.db.models.fields.IntegerField')(db_index=True)),
            ('id', self.gf('django.db.models.fields.AutoField')(primary_key=True)),
            ('assoc_type', self.gf('django.db.models.fields.CharField')(max_length=64)),
            ('server_url', self.gf('django.db.models.fields.CharField')(max_length=255)),
        ))
        db.send_create_signal('social_auth', ['Association'])
    
    from __future__ import unicode_literals
import sys
sys.path.append('../')
    
    tags = jieba.analyse.extract_tags(content,topK=topK)