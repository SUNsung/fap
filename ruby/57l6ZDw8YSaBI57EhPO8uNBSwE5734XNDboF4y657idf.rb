
        
              def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
    end

    
        def handle_bounce(e)
      # never reply to bounced emails
      log_email_process_failure(@mail, e)
      set_incoming_email_rejection_message(@receiver.incoming_email, I18n.t('emails.incoming.errors.bounced_email_error'))
    end
    
      # register callbacks for detailed request loggers called on every request
  # example:
  #
  # Middleware::RequestTracker.detailed_request_logger(->|env, data| do
  #   # do stuff with env and data
  # end
  def self.register_detailed_request_logger(callback)
    MethodProfiler.ensure_discourse_instrumentation!
    (@@detailed_request_loggers ||= []) << callback
  end
    
        if !self.errors.full_messages.empty?
      raise ActiveRecord::RecordNotSaved.new(self.errors.full_messages.to_sentence)
    end
    
          it 'should not mark image uploads as private' do
        fname = 'logo.jpg'
        upload = UploadCreator.new(file_from_fixtures(fname), fname).create_for(user.id)
        stored_upload = Upload.last
    
              s3_bucket.expects(:object).with('uploads/tombstone/second/original/1X/#{upload.sha1}.png').returns(s3_object)
          s3_object.expects(:copy_from).with(copy_source: 's3-upload-bucket/uploads/second/original/1X/#{upload.sha1}.png')
          s3_bucket.expects(:object).with('uploads/second/original/1X/#{upload.sha1}.png').returns(s3_object)
          s3_object.expects(:delete)
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end