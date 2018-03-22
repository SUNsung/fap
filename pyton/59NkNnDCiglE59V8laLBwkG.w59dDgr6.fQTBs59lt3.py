if os.path.isfile(log_file):
    os.remove(log_file)
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_missing_location(self, mock_get_request):
        mock_get_request.return_value = create_response(301)
        self.assertFalse(self.validator.redirect('test.com'))
    
    
# -- Options for HTML output ----------------------------------------------
    
    
class KeyValue(Model):
    
            datasource_id & datasource_type used to be passed in the URL
        directory, now they should come as part of the form_data,
        This function allows supporting both without duplicating code'''
        datasource = form_data.get('datasource', '')
        if '__' in datasource:
            datasource_id, datasource_type = datasource.split('__')
        datasource_id = int(datasource_id)
        return datasource_id, datasource_type
    
            db = make_url(model.get_sqla_engine(schema='core_db').url).database
        self.assertEquals('core_db', db)
    
        # find if the column was already imported
    existing_column = lookup_obj(i_obj)
    i_obj.table = None
    if existing_column:
        existing_column.override(i_obj)
        session.flush()
        return existing_column
    
    FORM_DATA_KEY_WHITELIST = list(frontend_config.get('controls').keys()) + ['slice_id']
    
    # other values from the config, defined by the needs of env.py,
# can be acquired:
# my_important_option = config.get_main_option('my_important_option')
# ... etc.