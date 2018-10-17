
        
              if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
          UI.user_error!('Could not find lane '#{full_lane_name}'. Available lanes: #{available_lanes.join(', ')}') unless lane_obj
      UI.user_error!('You can't call the private lane '#{lane}' directly') if lane_obj.is_private
    
          File.write(new_path, '1')
      false
    end
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 600')
        expect(result[1]).to include('-l')
        expect(result[1]).to include('-u')
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
      end
    
          it 'generates the correct git command with a shell-escaped message' do
        message = 'message with 'quotes' (and parens)'
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: \'#{message}\')
        end').runner.execute(:test)
        expect(result).to eq('git commit -m #{message.shellescape} ./fastlane/README.md')
      end
    end
  end
end

    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_set_key_partition_list_command, print: false)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_security_import_command, print: false)
    
          describe '#sensitive flag' do
        before(:each) do
          allow(FastlaneCore::Helper).to receive(:test?).and_return(false)
          allow(FastlaneCore::UI).to receive(:interactive?).and_return(true)
          allow(FastlaneCore::Helper).to receive(:ci?).and_return(false)
        end
    
          open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
      describe '#omniauth_provider_icon' do
    it 'returns a correct icon tag for Twitter' do
      icon = omniauth_provider_icon(:twitter)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-twitter')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
    end

    
        it 'sorts tuples in order specified: case 2' do
      # order by x1 desc, x2 asc, c3 desc
      orders = [true, false, true]
      expected = tuples.values_at(5, 6, 0, 1, 4, 3, 2)
    
      let :reverted_extract do
    old_extract
  end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
            @agent.trigger_web_request(request)
        expect(@agent.reload.memory['last_request']).to eq([ { 'some_param' => 'some_value' }, 'post', 'text/html', {'HTTP_X_CUSTOM_HEADER' => 'foo'} ])
        expect(@agent.last_web_request_at.to_i).to be_within(1).of(Time.now.to_i)
      end
    end
    
        Pubsubhubbub::UnsubscribeWorker.perform_async(signed_request_account.id) if signed_request_account.subscribed?
    DeliveryFailureTracker.track_inverse_success!(signed_request_account)
  end
    
        def create
      authorize AccountModerationNote, :create?
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
        def create
      authorize :domain_block, :create?
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
        # Returns a new {Gem::Version} based on the systems `git` version.
    #
    # @return [Gem::Version]
    #
    def self.git_version
      raw_version = Executable.capture_command('git', ['--version']).first
      unless match = raw_version.scan(/\d+\.\d+\.\d+/).first
        raise 'Failed to extract git version from `git --version` (#{raw_version.inspect})'
      end
      Gem::Version.new(match)
    end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          @left_diff_line_number = nil
    
      test 'frontend links for editing blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false })
    get '/A'
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      s.executables = ['gollum']
    
      class Error < StandardError;
  end