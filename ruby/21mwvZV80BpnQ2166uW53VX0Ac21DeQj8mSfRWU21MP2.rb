
        
          def relative_url_redirect_with_status_hash
    redirect_to('/things/stuff', status: 301)
  end
    
            # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
            def test_spec_name_on_key_lookup
          spec = spec(:readonly, 'readonly' => { 'adapter' => 'sqlite3' })
          assert_equal 'readonly', spec.name
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
        test 'middleware stack accepts only and except as options' do
      result = ActionsController.action(:show).call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    
        def wrap_delivery_behavior!(*args) # :nodoc:
      self.class.wrap_delivery_behavior(message, *args)
    end
  end
end

    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
          private
        def method_missing(method_name, *args)
          if @mailer.action_methods.include?(method_name.to_s)
            ActionMailer::Parameterized::MessageDelivery.new(@mailer, method_name, @params, *args)
          else
            super
          end
        end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
      def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
          _form_configurable_fields[name] = options
    end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
          def http_error_page_as_json(e)
        render json: {error: :invalid_request, error_description: e.message}, status: 400
      end
    
          def validate!
        super
        raise Informative, 'Existing Podfile found in directory' unless config.podfile_path_in_dir(Pathname.pwd).nil?
        if @project_path
          help! 'Xcode project at #{@project_path} does not exist' unless File.exist? @project_path
          project_path = @project_path
        else
          raise Informative, 'No Xcode project found, please specify one' unless @project_paths.length > 0
          raise Informative, 'Multiple Xcode projects found, please specify one' unless @project_paths.length == 1
          project_path = @project_paths.first
        end
        @xcode_project = Xcodeproj::Project.open(project_path)
      end
    
    # usage rake isolate[my-post]
desc 'Move all other posts than the one currently being worked on to a temporary stash location (stash) so regenerating the site happens much more quickly.'
task :isolate, :filename do |t, args|
  stash_dir = '#{source_dir}/#{stash_dir}'
  FileUtils.mkdir(stash_dir) unless File.exist?(stash_dir)
  Dir.glob('#{source_dir}/#{posts_dir}/*.*') do |post|
    FileUtils.mv post, stash_dir unless post.include?(args.filename)
  end
end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end