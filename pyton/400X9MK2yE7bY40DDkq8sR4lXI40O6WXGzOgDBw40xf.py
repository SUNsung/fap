
        
            def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
        return file_path, '/'.join(reversed(internal_path))
    
        def test_rollback_checkpoints(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load