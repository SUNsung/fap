
        
            #####################################################
    # @!group Other things
    #####################################################
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
        def handle_unknown_error!(e)
      # Some spaceship exception classes implement #preferred_error_info in order to share error info
      # that we'd rather display instead of crashing with a stack trace. However, fastlane_core and
      # spaceship can not know about each other's classes! To make this information passing work, we
      # use a bit of Ruby duck-typing to check whether the unknown exception type implements the right
      # method. If so, we'll present any returned error info in the manner of a user_error!
      error_info = e.respond_to?(:preferred_error_info) ? e.preferred_error_info : nil
      should_show_github_issues = e.respond_to?(:show_github_issues) ? e.show_github_issues : true
    
          it 'sets the platform to Mac' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'Mac'
            )
          end').runner.execute(:test)
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 300')
        expect(result[1]).to_not(include('-l'))
        expect(result[1]).to_not(include('-u'))
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
        expect(result[2]).to start_with('security list-keychains -s')
        expect(result[2]).to end_with(File.expand_path('~/Library/Keychains/test.keychain').to_s)
      end
    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{keychain_path.shellescape} &> /dev/null'
    
          it 'passes an environment Hash' do
        expect_command({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
        Fastlane::Actions.sh({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
      end
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
                ##
            # We assume that unspecified entry is undefined.
            # See issue #18775.
            #
            if @value.nil?
              Entry::Unspecified.new(
                fabricate_unspecified
              )
            else
              fabricate(@entry, @value)
            end
          end
    
              def location
            name = @key.presence || self.class.name.to_s.demodulize
                                        .underscore.humanize.downcase
    
    desc 'Test all Gemfiles from test/*.gemfile'
task :test_all_gemfiles do
  require 'term/ansicolor'
  require 'pty'
  require 'shellwords'
  cmd      = 'bundle install --quiet && bundle exec rake --trace'
  statuses = Dir.glob('./test/gemfiles/*{[!.lock]}').map do |gemfile|
    env = {'BUNDLE_GEMFILE' => gemfile}
    cmd_with_env = '  (#{env.map { |k, v| 'export #{k}=#{Shellwords.escape v}' } * ' '}; #{cmd})'
    $stderr.puts Term::ANSIColor.cyan('Testing\n#{cmd_with_env}')
    PTY.spawn(env, cmd) do |r, _w, pid|
      begin
        r.each_line { |l| puts l }
      rescue Errno::EIO
        # Errno:EIO error means that the process has finished giving output.
      ensure
        ::Process.wait pid
      end
    end
    [$? && $?.exitstatus == 0, cmd_with_env]
  end
  failed_cmds = statuses.reject(&:first).map { |(_status, cmd_with_env)| cmd_with_env }
  if failed_cmds.empty?
    $stderr.puts Term::ANSIColor.green('Tests pass with all gemfiles')
  else
    $stderr.puts Term::ANSIColor.red('Failing (#{failed_cmds.size} / #{statuses.size})\n#{failed_cmds * '\n'}')
    exit 1
  end
end
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def empty
          authorize! :update, @order, order_token
          @order.empty!
          render plain: nil, status: 204
        end
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end