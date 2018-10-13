
        
                  def name_and_id_index(options)
            if options.key?('index')
              options.delete('index') || ''
            elsif @generate_indexed_names
              @auto_index || ''
            end
          end
    
              super(object_name, method_name, template_object, options)
        end
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
                DateTimeSelector.new(datetime, options, html_options)
          end
    
        initializer 'action_view.setup_action_pack' do |app|
      ActiveSupport.on_load(:action_controller) do
        ActionView::RoutingUrlFor.include(ActionDispatch::Routing::UrlFor)
      end
    end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
          def store_meta(store)
        json = as_json
        json[:mtime] = Time.now.to_i
        json[:db_size] = store.size(DB_FILENAME)
        store.write(META_FILENAME, json.to_json)
      end
    end
    
        def to_a
      @filters.dup
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
        def blank?
      body.blank?
    end
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
      def set_filter
    @filter = current_account.custom_filters.find(params[:id])
  end
    
      before_action :set_account
  before_action :set_size
  before_action :set_statuses
    
      before_action :set_account
    
            log_action :change_email, @user
    
        def filtered_custom_emojis
      CustomEmojiFilter.new(filter_params).results
    end
    
        def index
      authorize :email_domain_block, :index?
      @email_domain_blocks = EmailDomainBlock.page(params[:page])
    end
    
      def hub_topic
    params['hub.topic']
  end
    
        # The default options for Sass::Engine.
    # @api public
    DEFAULT_OPTIONS = {
      :style => :nested,
      :load_paths => [],
      :cache => true,
      :cache_location => './.sass-cache',
      :syntax => :sass,
      :filesystem_importer => Sass::Importers::Filesystem
    }.freeze
    
        # @param msg [String] The error message
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def initialize(msg, attrs = {})
      @message = msg
      @sass_backtrace = []
      add_backtrace(attrs)
    end
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      frames = frames = exception.backtrace.map { |line|
        frame = OpenStruct.new
        if line =~ /(.*?):(\d+)(:in `(.*)')?/
          frame.filename = $1
          frame.lineno = $2.to_i
          frame.function = $4
    }
    
          def call(env)
        unless accepts? env
          instrument env
          result = react env
        end
        result or app.call(env)
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end