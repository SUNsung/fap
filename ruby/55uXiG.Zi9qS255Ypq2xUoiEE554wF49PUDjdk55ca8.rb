
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
                        if callbacks = @subscribe_callbacks[chan]
                      next_callback = callbacks.shift
                      @event_loop.post(&next_callback) if next_callback
                      @subscribe_callbacks.delete(chan) if callbacks.empty?
                    end
                  end
                end
    
            def test_url_sub_key
          spec = resolve :production, 'production' => { 'url' => 'abstract://foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
            def encoded(value)
          unless default_value?(value)
            coder.dump(value)
          end
        end
    end
  end
end

    
      def test_abstract_class_with_polymorphic_has_many
    post = SubStiPost.create! title: 'fooo', body: 'baa'
    tagging = Tagging.create! taggable: post
    assert_equal [tagging], post.taggings
  end
    
      def test_should_skip_validation_on_has_many_if_destroyed
    @pirate.birds.create!(name: 'birds_1')
    
              wait_for_async
    
      test '#restart shuts down worker pool' do
    assert_called(@server.worker_pool, :halt) do
      @server.restart
    end
  end
    
            # A callback method used to deliver confirmation
        # instructions on creation. This can be overridden
        # in models to map to a nice sign up e-mail.
        def send_on_create_confirmation_instructions
          send_confirmation_instructions
        end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
        options[:fix_urls] = ->(url) do
      url.sub! %r{(#{Rust.base_url}.+/)\z}, '\1index.html'
      url.sub! '/unicode/u_str', '/unicode/str/'
      url
    end
    
        def as_json
      @pages
    end
    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
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
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
            def description
          'validate the content types allowed on attachment #{@attachment_name}'
        end