
        
                    if editor.should_skip?
              UI.message('Skipping framing of screenshot #{screenshot.path}.  No title provided in your Framefile.json or title.strings.')
            else
              Helper.show_loading_indicator('Framing screenshot '#{full_path}'')
              editor.frame!
            end
          rescue => ex
            UI.error(ex.to_s)
            UI.error('Backtrace:\n\t#{ex.backtrace.join('\n\t')}') if FastlaneCore::Globals.verbose?
          end
        end
      else
        UI.error('Could not find screenshots in current directory: '#{File.expand_path(path)}'')
      end
    end
    
          expect(result).to eq({ :'identifier.1' => 'value.1', :'identifier.2' => 'value.2' })
    end
    
            options = []
        options += project_path_array
        options << '-sdk '#{config[:sdk]}'' if config[:sdk]
        options << '-derivedDataPath '#{derived_data_path}''
        options << '-resultBundlePath '#{result_bundle_path}'' if result_bundle_path
        options << config[:xcargs] if config[:xcargs]
        return options
      end
    
          def pipe(device_type, language, locale)
        log_path = xcodebuild_log_path(device_type: device_type, language: language, locale: locale)
        return ['| tee #{log_path.shellescape} | xcpretty #{Snapshot.config[:xcpretty_args]}']
      end
    
            groups = [custom_tester_group]
        group_names = groups.map(&:name).join(';')
        expect(FastlaneCore::UI).to receive(:success).with('Successfully added tester #{fake_tester.email} to app #{fake_app_name} in group(s) #{group_names}')
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
          event = Event.new
      event.agent = agents(:bob_rain_notifier_agent)
      event.payload = {
        'url' => 'http://xkcd.com',
        'link' => 'Random',
      }
      agent.receive([event])
    end
    
        def bad_sourceforge_url?
      bad_url_format?(/sourceforge/,
                      [
                        %r{\Ahttps://sourceforge\.net/projects/[^/]+/files/latest/download\Z},
                        %r{\Ahttps://downloads\.sourceforge\.net/(?!(project|sourceforge)\/)},
                      ])
    end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
        return false if args[:after] && OS::Mac.version < args[:after]
    
      include Msf::Post::File
  include Msf::Post::OSX::Priv
  include Msf::Post::OSX::System
  include Msf::Auxiliary::Report
    
        it 'should return the result of echo 10 times' do
      10.times do
        test_string = Rex::Text.rand_text_alpha(4)
        if session.platform.eql? 'windows'
          output = cmd_exec('cmd.exe', '/c echo #{test_string}')
        else
          output = cmd_exec('echo #{test_string}')
        end
        return false unless output == test_string
      end
      true
    end
    vprint_status('Finished cmd_exec tests')
  end
    
            indenter << 'hello'
    
            def attrs
          attrs = {
            'size' => size,
            'mtime' => mtime,
          }.reject { |_k, v| v.nil? }
          return nil if attrs.empty?
          attrs.to_s
        end
      end
    
            # Describes what makes each {PodVariant} distinct among the others.
        #
        # @return [Hash<PodVariant, String>]
        #
        def scope_suffixes
          return { variants.first => nil } if variants.count == 1
          Hash[scope_by_specs.map do |variant, scope|
            require 'digest'
            scope = Digest::MD5.hexdigest(scope)[0..7] if !scope.nil? && scope.length >= 50
            [variant, scope]
          end]
        end
    
                if existing && existing != file_ref
              if existing.real_path.to_path.start_with?(pod_bundle.sandbox.root.to_path << '/')
                config.base_configuration_reference = file_ref
              elsif !xcconfig_includes_target_xcconfig?(config.base_configuration_reference, path)
                unless existing_config_is_identical_to_pod_config?(existing.real_path, pod_bundle.xcconfig_path(config.name))
                  UI.warn 'CocoaPods did not set the base configuration of your ' \
                  'project because your project already has a custom ' \
                  'config set. In order for CocoaPods integration to work at ' \
                  'all, please either set the base configurations of the target ' \
                  '`#{target.name}` to `#{path}` or include the `#{path}` in your ' \
                  'build configuration (#{UI.path(existing.real_path)}).'
                end
              end
            elsif config.base_configuration_reference.nil? || file_ref.nil?
              config.base_configuration_reference = file_ref
            end
          end
    
          # prints a message followed by a new line unless config is silent.
      #
      # @param [String] message
      #        The message to print.
      #
      def print(message)
        return if config.silent?
        begin
          (output_io || STDOUT).print(message)
        rescue Errno::EPIPE
          exit 0
        end
      end
    
        def price_options_cache_key
      current_price_options.sort.map(&:last).map do |value|
        value.try(:cache_key) || value
      end
    end
  end
end

    
        # order state machine (see http://github.com/pluginaweek/state_machine/tree/master for details)
    state_machine initial: :checkout do
      # With card payments, happens before purchase or authorization happens
      #
      # Setting it after creating a profile and authorizing a full amount will
      # prevent the payment from being authorized again once Order transitions
      # to complete
      event :started_processing do
        transition from: [:checkout, :pending, :completed, :processing], to: :processing
      end
      # When processing during checkout fails
      event :failure do
        transition from: [:pending, :processing], to: :failed
      end
      # With card payments this represents authorizing the payment
      event :pend do
        transition from: [:checkout, :processing], to: :pending
      end
      # With card payments this represents completing a purchase or capture transaction
      event :complete do
        transition from: [:processing, :pending, :checkout], to: :completed
      end
      event :void do
        transition from: [:pending, :processing, :completed, :checkout], to: :void
      end
      # when the card brand isnt supported
      event :invalidate do
        transition from: [:checkout], to: :invalid
      end
    
          def handle_payment_preconditions
        unless block_given?
          raise ArgumentError, 'handle_payment_preconditions must be called with a block'
        end
    
        def configure
      yield(self) if block_given?
    end
    
        private
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end
    
    describe Sidekiq::Worker do
  describe '#set' do
    
      it 'should remove dead jobs older than Sidekiq::DeadSet.timeout' do
    Sidekiq::DeadSet.stub(:timeout, 10) do
      Time.stub(:now, Time.now - 11) do
        dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: [])) # the oldest
      end
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      job = ss.first
      assert job['created_at']
      refute job['enqueued_at']
    end
  end
    
      describe 'redis connection' do
    it 'does not continually retry' do
      assert_raises Redis::CommandError do
        Sidekiq.redis do |c|
          raise Redis::CommandError, 'READONLY You can't write against a replica.'
        end
      end
    end
    
      it 'stubs the push_bulk call when in testing mode' do
    assert Sidekiq::Client.push_bulk({'class' => InlineWorker, 'args' => [[true], [true]]})
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end