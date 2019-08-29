
        
              # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
    
                problem 'Dir([\'#{string_content(path)}\']) is unnecessary; just use \'#{match[0]}\''
          end
    
              find_method_with_args(body_node, :system, 'xcodebuild') do
            problem %q(use 'xcodebuild *args' instead of 'system 'xcodebuild', *args')
          end
    
        it 'When plist_options are not defined when using a formula-defined plist', :ruby23 do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
        checksum, tag = spec.checksum_for(Utils::Bottles.tag)
    
        it 'acts like #depends_on' do
      f = formula 'foo' do
        url 'foo-1.0'
    
          expect(spec.deps).to be_empty
    end
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
        case val
    when nil     then Version.detect(url, specs)
    when String  then Version.create(val)
    when Version then val
    else
      raise TypeError, 'version '#{val.inspect}' should be a string'
    end
  end
    
      def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
        return if skip_distribution?
    
        return unless @account.present? && @status.distributable?
    
      # ID to add for error notification helper.
  # config.error_notification_id = nil
    
        def pam_conflict(_attributes)
      # Block pam login tries on traditional account
    end
    
          it 'processes payload with actor if valid signature exists' do
        payload['signature'] = { 'type' => 'RsaSignature2017' }
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
      task :publishing do
    invoke 'deploy:symlink:release'
  end
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
        private
    
          def call
        ask_question
        value_or_default
      end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
      def autocorrect_source_file(source)
    Tempfile.open('tmp') { |f| autocorrect_source(source, f) }
  end
    
            rhs
      end
    end
  end
end

    
            def outermost_send_on_same_line(heredoc)
          previous = heredoc
          current = previous.parent
          until send_missing_closing_parens?(current, previous, heredoc)
            previous = current
            current = current.parent
            return unless previous && current
          end
          current
        end
    
        context 'correct + opposite' do
      it 'registers an offense' do
        inspect_source(source)
        expect(cop.offenses.size).to eq(1)
        expect(cop.messages.first)
          .to eq('`end` at 7, 4 is not aligned with `foo def` at 5, 0.')
        expect(cop.highlights.first).to eq('end')
        expect(cop.config_to_allow_offenses).to eq('Enabled' => false)
      end
    
            expect(new_source).to eq(<<~RUBY)
          def func
            {a: 1, b: 2, c: 3}.each do |(a, b)|
              puts a, b
            end
          end
        RUBY
      end
    
      before { inspect_source(source) }
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Returns the inverse delimiter of the `pair` as a string.
      #
      # @param [Boolean] with_spacing whether to include spacing
      # @return [String] the inverse delimiter of the `pair`
      def inverse_delimiter(with_spacing = false)
        if with_spacing
          hash_rocket? ? SPACED_COLON : SPACED_HASH_ROCKET
        else
          hash_rocket? ? COLON : HASH_ROCKET
        end
      end
    
          params = add_dead('jid-with-hyphen')
      post '/morgue/#{job_params(*params)}', 'retry' => 'Retry'
      assert_equal 302, last_response.status
      assert_equal 0, Sidekiq::DeadSet.new.size
    
        it 'handles symbols and strings' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set('queue' => 'bar', :retry => 11).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 11, job['retry']
    
        it 'shows empty retries' do
      r = Sidekiq::RetrySet.new
      assert_equal 0, r.size
    end
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
      describe 'I18n' do
    before do
      require 'i18n'
      I18n.enforce_available_locales = false
      require 'sidekiq/middleware/i18n'
    end
    
          Time.stub(:now, created_time) do
        @retry.schedule (enqueued_time - 60).to_f, @error_1.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time - 50).to_f, @error_2.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time + 60).to_f, @error_3.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 60).to_f, @future_1.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 50).to_f, @future_2.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time + 60).to_f, @future_3.merge!('created_at' => created_time.to_f)
      end