
        
                print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
        # Print the classification report
    print(metrics.classification_report(y_test, y_predicted,
                                        target_names=dataset.target_names))
    
    n_clusters = (4, 3)
data, rows, columns = make_checkerboard(
    shape=(300, 300), n_clusters=n_clusters, noise=10,
    shuffle=False, random_state=0)
    
            # Adding model 'EventTag'
        db.create_table(u'tagstore_eventtag', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('event_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value_id')),
            ('date_added', self.gf('django.db.models.fields.DateTimeField')(
                db_index=True)),
        ))
        db.send_create_signal('tagstore', ['EventTag'])
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True))
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(null=True))
    
            As an alternative you might even in case of success
        call the next handler.
        '''
        res = self.check_range(request)
        if not res and self.successor:
            self.successor.handle(request)
    
        >>> os.unlink('foo.txt')
    '''
    
        >>> data2.data = 15
    HexViewer: Subject Data 2 has data 0xf
    DecimalViewer: Subject Data 2 has data 15
    
    ### OUTPUT ###
# PRODUCT LIST:
# (Fetching from Data Store)
# cheese
# eggs
# milk
#
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Cheese, Price: 2.00, Quantity: 10
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Eggs, Price: 0.20, Quantity: 100
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Milk, Price: 1.50, Quantity: 10
# (Fetching from Data Store)
# That product 'arepas' does not exist in the records

    
    '''
*What is this pattern about?
The Adapter pattern provides a different interface for a class. We can
think about it as a cable adapter that allows you to charge a phone
somewhere that has outlets in a different shape. Following this idea,
the Adapter pattern is useful to integrate classes that couldn't be
integrated due to their incompatible interfaces.
    
    from __future__ import print_function
    
    
@pytest.mark.parametrize('chunksize', [None, 1])
def test_readjson_chunks_closes(chunksize):
    with ensure_clean('test.json') as path:
        df = pd.DataFrame({'A': [1, 2, 3], 'B': [4, 5, 6]})
        df.to_json(path, lines=True, orient='records')
        reader = JsonReader(
            path,
            orient=None,
            typ='frame',
            dtype=True,
            convert_axes=True,
            convert_dates=True,
            keep_default_dates=True,
            numpy=False,
            precise_float=False,
            date_unit=None,
            encoding=None,
            lines=True,
            chunksize=chunksize,
            compression=None,
        )
        reader.read()
        assert (
            reader.open_stream.closed
        ), 'didn't close stream with \
            chunksize = {chunksize}'.format(
            chunksize=chunksize
        )
    
        # Generators get exhausted on use, so run setup before every call
    number = 1
    repeat = (3, 250, 10)