
        
              def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
              page.objects.each do |object|
            next if already_imported?(object)
    
              new(hash)
        end
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            attr_reader :attributes
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
        select_agent_type('Trigger Agent')
    fill_in(:agent_name, with: 'Test Trigger Agent')
    click_on 'Save'
    
      context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          it 'handles signals' do
        @agent_runner.instance_variable_set(:@signal_queue, ['TERM'])
        @agent_runner.run
      end
    end
    
      describe '#value_at' do
    it 'returns the value at a JSON path' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}.to_json, 'foo.bar')).to eq('baz')
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar.bing')).to eq(2)
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar[?(@.bing == 2)].bing')).to eq(2)
    end
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
        terminate_interaction 1
  rescue OpenSSL::PKey::RSAError
    alert_error \
      '--private-key not specified and ~/.gem/gem-private_key.pem is not valid'
    
        raise Gem::FilePermissionError.new(install_dir) unless
      File.writable?(install_dir)
    
    RubyGems will ask for confirmation if you are attempting to uninstall a gem
that is a dependency of an existing gem.  You can use the
--ignore-dependencies option to skip this check.
    EOF
  end
    
      def verify
    @files     = []
    @spec      = nil
    
      ##
  # See ::process_based_port
    
      def test_execute_two
    specs = spec_fetcher do |fetcher|
      fetcher.gem 'a', 2
      fetcher.gem 'b', 2
    end
    
        assert_equal ['#{'qwer/' * 19}bla', 'a' * 151],
                 @tar_writer.split_name('#{'a' * 151}/#{'qwer/' * 19}bla')
    names = [
      ([''] + ['123456789'] * 9 + ['1234567890']).join('/'),  # 101 bytes (several pieces)
      (['123456789'] * 9 + ['1234567890'] + ['']).join('/'),  # 101 bytes (several pieces)
      '/' * 99,
      '/' * 100,
      '/' * 101,
      '/' * 102,
    ]
    names.each do |name|
      newname, prefix = @tar_writer.split_name(name)
      assert(!(newname.empty?), 'split_name() returned empty name')
      assert(newname.bytesize <= 100, 'split_name() returned name longer than 100 bytes: '#{newname}' for '#{name}'')
      assert(prefix.bytesize <= 155, 'split_name() returned prefix longer than 155 bytes: '#{prefix}' for '#{name}'')
      newname = [prefix, newname].join('/') unless prefix.empty?
      assert_equal name, newname
    end
  end
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
          def constantize(str)
        names = str.split('::')
        names.shift if names.empty? || names.first.empty?
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end
    
      include WithinOrganization
    
      def create
    login(User.authenticate(params[:email_address], params[:password]))
    flash[:remember_login] = true
    redirect_to_with_return_to root_path
  rescue Postal::Errors::AuthenticationError => e
    flash.now[:alert] = 'The credentials you've provided are incorrect. Please check and try again.'
    render 'new'
  end