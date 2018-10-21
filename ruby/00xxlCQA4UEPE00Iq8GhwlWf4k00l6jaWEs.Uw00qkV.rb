
        
            def initialize
      Fastlane.load_actions
      @runner = Runner.new
      @actions_requiring_special_handling = ['sh'].to_set
    end
    
      before(:each) do
    # This value needs to be set or our event fixtures will not match
    allow(FastlaneCore::Helper).to receive(:ci?).and_return(false)
    allow(FastlaneCore::Helper).to receive(:operating_system).and_return('macOS')
  end
    
            cmd = ['git tag']
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          it 'generates the correct git command with an array of paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
            it 'supports autocorrect mode option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              mode: :autocorrect
            )
          end').runner.execute(:test)
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
        it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'unregisters disabled SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
    module Homebrew
  module_function
    
            if rest.empty?
          current_rule.children += child.children
        else
          rest.unshift Sass::Selector::Parent.new
          child.parsed_rules = make_sseq(sseq.subject?, *rest)
          current_rule << child
        end
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
          # Polling is used by default on Windows.
      unless Sass::Util.windows?
        opts.on('--poll', 'Check for file changes manually, rather than relying on the OS.',
                          'Only meaningful for --watch.') do
          @options[:poll] = true
        end
      end
    
          # @see Base#to_s
      def to_s
        @root
      end
    
          def allow_uploads
        @allow_uploads
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
        EMOJI_PATHNAME = Pathname.new(Gemojione.images_path).freeze
    
      s.add_development_dependency 'rack-test', '~> 0.6.2'
  s.add_development_dependency 'shoulda', '~> 3.5.0'
  s.add_development_dependency 'minitest-reporters', '~> 0.14.16'
  s.add_development_dependency 'twitter_cldr', '~> 3.2.0'
  s.add_development_dependency 'mocha', '~> 1.1.0'
  s.add_development_dependency 'test-unit', '~> 3.1.0'
  s.add_development_dependency 'webrick', '~> 1.3.1'