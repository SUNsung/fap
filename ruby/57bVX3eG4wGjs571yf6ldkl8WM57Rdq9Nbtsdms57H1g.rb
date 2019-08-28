
        
              agent = Agent.find_by(name: 'Test Weather Agent')
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'should generate the correct projects url' do
      expect(@checker.send(:projects_url)).to eq('https://basecamp.com/12345/api/v1/projects.json')
    end
    
          let(:valid_params) {
        {
          name: 'Example',
          schedule: 'never',
          options: {
            'action' => '{% if target.id == agent_id %}configure{% endif %}',
            'configure_options' => {
              'rules' => [
                {
                  'type' => 'field<value',
                  'value' => '{{price}}',
                  'path' => 'price',
                }
              ]
            }
          },
          user: users(:bob),
          control_targets: [target, real_target]
        }
      }
    
      include Msf::Exploit::Remote::HttpClient
  include Msf::Exploit::FileDropper
    
      #
  # Returns the hardcore alias for the HTTP service
  #
  def self.hardcore_alias(*args)
    '#{(args[0] || '')}#{(args[1] || '')}'
  end
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
        def resolve_inheritance(path, hash, file, debug)
      inherited_files = Array(hash['inherit_from'])
      base_configs(path, inherited_files, file)
        .reverse.each_with_index do |base_config, index|
        base_config.each do |k, v|
          next unless v.is_a?(Hash)
    
      def parse_source(source, file = nil)
    if file&.respond_to?(:write)
      file.write(source)
      file.rewind
      file = file.path
    end
    
        def add_unneeded_disables(file, offenses, source)
      if check_for_unneeded_disables?(source)
        config = @config_store.for(file)
        if config.for_cop(Cop::Lint::UnneededCopDisableDirective)
                 .fetch('Enabled')
          cop = Cop::Lint::UnneededCopDisableDirective.new(config, @options)
          if cop.relevant_file?(file)
            cop.check(offenses, source.disabled_line_ranges, source.comments)
            offenses += cop.offenses
            autocorrect_unneeded_disables(source, cop)
          end
        end
        offenses
      end
    
                do_something
    
                ret
          end
        RUBY
      end
    end
    
          def compatible_external_encoding_for?(src)
        src = src.dup if RUBY_ENGINE == 'jruby'
        src.force_encoding(Encoding.default_external).valid_encoding?
      end
    end
  end
end

    
        context 'with a non-lambda method' do
      let(:source) { 'foo.bar' }
    
        context 'when using safe navigation operator' do
      it 'does not break' do
        expect_no_offenses(<<~RUBY)
          def func
            [1, 2, 3]&.each { |n| puts n }
          end
        RUBY
      end
    end
  end
end

    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Checks whether the method is an enumerator method.
      #
      # @return [Boolean] whether the method is an enumerator
      def enumerator_method?
        ENUMERATOR_METHODS.include?(method_name) ||
          method_name.to_s.start_with?('each_')
      end
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end
    
      def index
    @pages = Page.all
  end
    
            begin
          Component.new.handle_exception exception
          pass
        rescue StandardError
          flunk 'failed handling a nil backtrace'
        end
      end
    end
  end
    
          I18n.enforce_available_locales = false
      I18n.available_locales = nil
    end
  end
end

    
        it 'generates random intervals that target a configured average' do
      with_sidekiq_option(:poll_interval_average, 10) do
        i = 500
        intervals = Array.new(i){ @poller.send(:random_poll_interval) }
    
          assert SomeScheduledWorker.perform_in(TimeDuck.new, 'samwise')
      assert_equal 6, ss.size
    end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
          get_web_content(redirected_url)
    end