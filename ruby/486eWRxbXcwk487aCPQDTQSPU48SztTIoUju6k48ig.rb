
        
            assert_not @developer.created_at_changed?, 'created_at should not be changed'
    assert_not @developer.changed?, 'record should not be changed'
    assert_not_equal previously_created_at, @developer.created_at
    assert_not_equal @previously_updated_at, @developer.updated_at
  end
    
        %w(btree hash).each do |using|
      expected = 'CREATE  INDEX `index_people_on_last_name` USING #{using} ON `people` (`last_name`) '
      assert_equal expected, add_index(:people, :last_name, using: using)
    end
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
      # Ignore bad email addresses and do not raise email delivery errors.
  # Set this to true and configure the email server for immediate delivery to raise delivery errors.
  # config.action_mailer.raise_delivery_errors = false
    
          it 'is secure when there are no registered editable fields' do
        Group.plugin_editable_group_custom_fields.clear
        params = group_params
        params[:group].merge!(custom_fields: { test: :hello1, test2: :hello2 })
    
          ensure_cors!
      presigned_url(obj, :put, UPLOAD_URL_EXPIRES_AFTER_SECONDS)
    rescue Aws::Errors::ServiceError => e
      Rails.logger.warn('Failed to generate upload URL for S3: #{e.message.presence || e.class.name}')
      raise StorageError
    end
    
      def get_path_for_s3_upload(path)
    path = File.join(@s3_bucket_folder_path, path) if @s3_bucket_folder_path && path !~ /^#{@s3_bucket_folder_path}\//
    path
  end
    
      def file_prefix(db_name, multisite)
    multisite ? '\\/#{db_name}' : ''
  end
end

    
      end
end

    
        def prepare_format
      @column_separator = @options[:column_separator].to_s.encode(@encoding)
      row_separator = @options[:row_separator]
      if row_separator == :auto
        @row_separator = $INPUT_RECORD_SEPARATOR.encode(@encoding)
      else
        @row_separator = row_separator.to_s.encode(@encoding)
      end
      @quote_character = @options[:quote_character]
      @force_quotes = @options[:force_quotes]
      unless @force_quotes
        @quotable_pattern =
          Regexp.new('[\r\n'.encode(@encoding) +
                     Regexp.escape(@column_separator) +
                     Regexp.escape(@quote_character.encode(@encoding)) +
                     ']'.encode(@encoding))
      end
      @quote_empty = @options.fetch(:quote_empty, true)
    end
    
      # This is especially important for JRuby, since eof? there
  # is more than just a simple accessor.
  it 'does not affect the reading data' do
    gz = Zlib::GzipReader.new @io
    0.upto(9) do |i|
      gz.eof?.should be_false
      gz.read(1).should == @data[i, 1]
    end
    gz.eof?.should be_true
    gz.read().should == ''
    gz.eof?.should be_true
  end
    
        gz = Zlib::GzipReader.new(obj)
    gz.rewind()
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
          it 'Does not render variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true)
        get article.path + '?variant_version=1'
        expect(response.body).not_to include html_variant.html
      end
    
      def define_categories
    cat_info = {
      'collabs': ['Collaborators Wanted', '#5AE8D9'],
      'cfp': ['Call For Proposal', '#f58f8d'],
      'forhire': ['Available For Hire', '#b78cf4'],
      'education': ['Education', '#5AABE8'],
      'jobs': ['Now Hiring', '#53c3ad'],
      'mentors': ['Offering Mentorship', '#A69EE8'],
      'mentees': ['Looking For Mentorship', '#88aedb'],
      'forsale': ['Stuff For Sale', '#d0adfb'],
      'events': ['Upcoming Event', '#f8b3d0'],
      'misc': ['Miscellaneous', '#6393FF'],
      'products': ['Products & Tools', '#5AE8D9']
    }
    @category = cat_info[@listing.category.to_sym][0]
    @cat_color = cat_info[@listing.category.to_sym][1]
  end
end

    
        Rails.cache.fetch(cache_key, expires_in: 1.hour) do
      src = GeneratedImage.new(article).social_image
      return src if src.start_with? 'https://res.cloudinary.com/'
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end
    
      def update
    prevent_request_if_requested_twice
    @user = current_user
    @user.assign_attributes(user_params)
    @errors = []
    confirm_presence
    respond_to do |format|
      if @invalid_form
        render :edit
        return
      end