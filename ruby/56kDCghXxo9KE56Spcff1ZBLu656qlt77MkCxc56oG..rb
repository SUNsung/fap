
        
              dt = Date.today
      freeze_time dt
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
    describe Agents::BoxcarAgent do
  before(:each) do
  @valid_params = {
                    'user_credentials' => 'access_token',
                    'title' => 'Sample Title',
                    'body' => 'Sample Body'
                  }
  @checker = Agents::BoxcarAgent.new(:name => 'boxcartest', :options => @valid_params)
  @checker.user = users(:bob)
  @checker.save!
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # Defines an additionally available guest implementation with
        # the given key.
        #
        # @param [String] name Name of the guest.
        def self.guest(name=UNSET_VALUE, &block)
          data[:guests] ||= Registry.new
    
            # The configuration for this provisioner. This will be an instance of
        # the `Config` class which is part of the provisioner.
        attr_reader :config
    
              @commands = Registry.new
          @configs = Hash.new { |h, k| h[k] = Registry.new }
          @guests  = Registry.new
          @guest_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @hosts   = Registry.new
          @host_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @providers = Registry.new
          @provider_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @pushes = Registry.new
          @synced_folders = Registry.new
        end
      end
    end
  end
end

    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
      # Default log-level (development=debug, production=info)
  Logging.logger.root.level = config.log_level
    
        reversible(&method(:up_down))
  end
    
          it 'doesn't reduce number of available invites' do
        AppConfig.settings.enable_registrations = false
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
            def update
          find_order(true)
          authorize! :update, @order, order_token
    
            def index
          @products = if params[:ids]
                        product_scope.where(id: params[:ids].split(',').flatten)
                      else
                        product_scope.ransack(params[:q]).result
                      end
    
          @@payment_attributes = [
        :id, :source_type, :source_id, :amount, :display_amount,
        :payment_method_id, :state, :avs_response, :created_at,
        :updated_at, :number
      ]