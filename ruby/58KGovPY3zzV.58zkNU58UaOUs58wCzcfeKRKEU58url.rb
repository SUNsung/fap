
        
        describe Utils::Bottles::Collector do
  describe '#fetch_checksum_for' do
    it 'returns passed tags' do
      subject[:yosemite] = 'foo'
      subject[:el_captain] = 'bar'
      expect(subject.fetch_checksum_for(:el_captain)).to eq(['bar', :el_captain])
    end
    
          Option.new(name, description)
    end
    options << opt
  end
    
        it 'allows specifying deprecated options as a Hash from an Array/String to an Array/String' do
      subject.deprecated_option(['foo1', 'foo2'] => 'bar1', 'foo3' => ['bar2', 'bar3'])
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo1', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo2', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar2'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar3'))
    end
    
    describe Cask::Cmd::Cache, :cask do
  let(:local_transmission) {
    Cask::CaskLoader.load(cask_path('local-transmission'))
  }
    
        context 'with an unusually long query string' do
      let(:url) do
        [
          'https://node49152.ssl.fancycdn.example.com',
          '/fancycdn/node/49152/file/upload/download',
          '?cask_class=zf920df',
          '&cask_group=2348779087242312',
          '&cask_archive_file_name=cask.zip',
          '&signature=CGmDulxL8pmutKTlCleNTUY%2FyO9Xyl5u9yVZUE0',
          'uWrjadjuz67Jp7zx3H7NEOhSyOhu8nzicEHRBjr3uSoOJzwkLC8L',
          'BLKnz%2B2X%2Biq5m6IdwSVFcLp2Q1Hr2kR7ETn3rF1DIq5o0lHC',
          'yzMmyNe5giEKJNW8WF0KXriULhzLTWLSA3ZTLCIofAdRiiGje1kN',
          'YY3C0SBqymQB8CG3ONn5kj7CIGbxrDOq5xI2ZSJdIyPysSX7SLvE',
          'DBw2KdR24q9t1wfjS9LUzelf5TWk6ojj8p9%2FHjl%2Fi%2FVCXN',
          'N4o1mW%2FMayy2tTY1qcC%2FTmqI1ulZS8SNuaSgr9Iys9oDF1%2',
          'BPK%2B4Sg==',
        ].join
      end
    
        # Update tab with actual runtime dependencies
    tab = Tab.for_keg(keg)
    Tab.clear_cache
    f_runtime_deps = formula.runtime_dependencies(read_from_tab: false)
    tab.runtime_dependencies = Tab.runtime_deps_hash(f_runtime_deps)
    tab.write
    
      def initialize(name = nil, &block)
    @name = name
    @url = nil
    @version = nil
    @mirrors = []
    @specs = {}
    @checksum = nil
    @using = nil
    @patches = []
    instance_eval(&block) if block_given?
  end
    
          def extract_options(array)
        array.last.is_a?(::Hash) ? array.pop : {}
      end
    end
  end
end

    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
        def editable?
      checkout? || pending?
    end
    
          def currency
        @payment.currency
      end
    
          Spree.check_unused_translations
      if false && Spree.unused_translation_messages.any?
        puts '\nThere are unused translations within Spree:'
        puts Spree.unused_translation_messages.sort
        exit(1)
      end
    end
  end
end

    
            def prepare_event
          return unless @event = params[:fire]
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def show
          respond_with(@payment)
        end
    
              if @product_property.update(product_property_params)
            respond_with(@product_property, status: 200, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
      s.required_rubygems_version = '>= 1.8.23'
  s.required_ruby_version = '>= 2.4.6'
    
    formatters = [
  SimpleCov::Formatter::HTMLFormatter,
  Coveralls::SimpleCov::Formatter
]
SimpleCov.formatter = SimpleCov::Formatter::MultiFormatter.new(formatters)
SimpleCov.start do
  add_filter 'vendor/cache'
end
    
          def home?
        File.directory?(home)
      end
    
          it 'should load and validate the project' do
        expect(described_class).to receive_messages(directory: fixtures_dir)
        expect(described_class.validate(name: 'sample')).to \
          be_a Tmuxinator::Project
      end
    end
    
    ActiveRecord::Migration.maintain_test_schema!
RSpec.configure do |config|
  config.use_transactional_fixtures = true
  config.infer_spec_type_from_file_location!
  config.include FactoryBot::Syntax::Methods
  config.include Postal::RspecHelpers
    
            elsif @credential
          # This is outgoing mail for an authenticated user
          @state = :rcpt_to_received
          if @credential.server.suspended?
            '535 Mail server has been suspended'
          else
            log 'Added external address '#{rcpt_to}''
            @recipients << [:credential, rcpt_to, @credential.server]
            '250 OK'
          end
    
                    if result.retry
                  log '#{log_prefix} Message requeued for trying later.'
                  queued_message.retry_later(result.retry.is_a?(Fixnum) ? result.retry : nil)
                else
                  log '#{log_prefix} Message processing completed.'
                  queued_message.message.endpoint.mark_as_used
                  queued_message.destroy
                end
              else
                log '#{log_prefix} No route and/or endpoint available for processing. Hard failing.'
                queued_message.message.create_delivery('HardFail', :details => 'Message does not have a route and/or endpoint available for delivery.')
                queued_message.destroy
                next
              end
            end
    
      extend ActiveSupport::Concern
    
      include WithinOrganization
    
    end

    
      def destroy
    @ip_pool_rule.destroy
    redirect_to_with_json [organization, @server, :ip_pool_rules]
  end
    
      def create
    @ip_pool = IPPool.new(safe_params)
    if @ip_pool.save
      redirect_to_with_json [:edit, @ip_pool], :notice => 'IP Pool has been added successfully. You can now add IP addresses to it.'
    else
      render_form_errors 'new', @ip_pool
    end
  end
    
      def outgoing
    @searchable = true
    get_messages('outgoing')
    respond_to do |wants|
      wants.html
      wants.json { render :json => {
        :flash => flash.each_with_object({}) { |(type, message), hash| hash[type] = message},
        :region_html => render_to_string(:partial => 'index', :formats => [:html])
      }}
    end
  end