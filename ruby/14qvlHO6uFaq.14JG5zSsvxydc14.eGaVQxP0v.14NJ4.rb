
        
              def inspect
        Kernel.instance_method(:inspect).bind(self).call
      end
    
      def test_serialized_attribute_in_base_class
    Topic.serialize('content', Hash)
    
      include AutosaveAssociationOnACollectionAssociationTests
end
    
      def check_author_name_is_secret
    errors[:author_name] << 'Invalid' unless author_name == 'secret'
  end
end
    
      scope 'approved_as_string', -> { where(approved: true) }
  scope :anonymous_extension, -> {} do
    def one
      1
    end
  end
    
          data = { 'action' => :speak, 'content' => 'hello' }
      @channel.perform_action data
    
        assert subscriptions.verify
  end
    
      private
    def open_connection
      env = Rack::MockRequest.env_for '/test',
        'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
      io, client_io = \
        begin
          Socket.pair(Socket::AF_UNIX, Socket::SOCK_STREAM, 0)
        rescue
          StringIO.new
        end
      env['rack.hijack'] = -> { env['rack.hijack_io'] = io }
    
      def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
        projects
  end
end

    
        # The path used after sending reset password instructions
    def after_sending_reset_password_instructions_path_for(resource_name)
      new_session_path(resource_name) if is_navigational_format?
    end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        def default_failure_app(options)
      @failure_app = options[:failure_app] || Devise::FailureApp
      if @failure_app.is_a?(String)
        ref = Devise.ref(@failure_app)
        @failure_app = lambda { |env| ref.get.call(env) }
      end
    end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        delegate :empty?, :blank?, to: :pages
    
    SPREE_GEMS = %w(core api cmd backend frontend sample).freeze
    
            def show
          respond_with(stock_location)
        end