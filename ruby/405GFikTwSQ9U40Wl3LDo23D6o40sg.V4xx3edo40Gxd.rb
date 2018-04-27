
        
          # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # Helper for use in before_actions where no authentication is required.
  #
  # Example:
  #   before_action :require_no_authentication, only: :new
  def require_no_authentication
    assert_is_devise_resource!
    return unless is_navigational_format?
    no_input = devise_mapping.no_input_strategies
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
      def test_conflicting_encodings
    Dir.mktmpdir(__method__.to_s) do |tmpdir|
      tmp = File.join(tmpdir, 'x')
      File.open(tmp, 'wb', :encoding => Encoding::EUC_JP) do |x|
        assert_equal Encoding::EUC_JP, x.external_encoding
      end
    end
  end
    
      it 'creates a time based on given C-style gmtime arguments, interpreted as UTC (GMT)' do
    time = Time.send(@method, 1, 15, 20, 1, 1, 2000, :ignored, :ignored, :ignored, :ignored)
    time.inspect.should == '2000-01-01 20:15:01 UTC'
  end
    
      config.active_support.test_order = :random
    
          def bom_filelist_from_path(mount)
        # We need to use `find` here instead of Ruby in order to properly handle
        # file names containing special characters, such as “e” + “´” vs. “é”.
        @command.run('/usr/bin/find', args: ['.', '-print0'], chdir: mount, print_stderr: false).stdout
                .split('\0')
                .reject { |path| skip_path?(mount, path) }
                .join('\n')
      end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
      def self.save_current_attachments_styles!
    File.open(Paperclip.registered_attachments_styles_path, 'w') do |f|
      YAML.dump(current_attachments_styles, f)
    end
  end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
          if app.config.respond_to?(:paperclip_defaults)
        Paperclip::Attachment.default_options.merge!(app.config.paperclip_defaults)
      end
    end