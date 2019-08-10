
        
        #############################################################################
#
# Standard tasks
#
#############################################################################
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
          def masked_token?(token)
        token.length == TOKEN_LENGTH * 2
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
      describe '#new_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
            def remove_incorrect_closing_paren(node, corrector)
          corrector.remove(
            range_between(
              incorrect_parenthesis_removal_begin(node),
              incorrect_parenthesis_removal_end(node)
            )
          )
        end
    
            it_behaves_like 'invalid'
      end
    
            expect(corrected).to eq(<<~RUBY)
          some_method #{open}
          #{close}
        RUBY
      end
    
      context 'when a named capture is unreferenced in top level' do
    it 'registers an offense' do
      expect_offense(<<~RUBY)
        /(?<foo>\w+)/ =~ 'FOO'
        ^^^^^^^^^^^^ Useless assignment to variable - `foo`.
      RUBY
    end
  end
    
            def correct_style?(node)
          !contains_guard_clause?(node) ||
            next_line_rescue_or_ensure?(node) ||
            next_sibling_parent_empty_or_else?(node) ||
            next_sibling_empty_or_guard_clause?(node)
        end
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
        def initialize(params={})
      @thehash = default.merge(params)
    end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
          msg['locale'] = 'jp'
      I18n.locale = I18n.default_locale
      assert_equal :en, I18n.locale
      mw = Sidekiq::Middleware::I18n::Server.new
      mw.call(nil, msg, nil) do
        assert_equal :jp, I18n.locale
      end
      assert_equal :en, I18n.locale
    end
    
    describe 'job scheduling' do
  describe 'middleware' do
    class SomeScheduledWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :custom_queue
      def perform(x)
      end
    end
    
      it 'should be false if the given selector is on the page' do
    expect { @session.assert_no_selector(:xpath, '//p') }.to raise_error(Capybara::ElementNotFound)
    expect { @session.assert_no_selector(:css, 'p a#foo') }.to raise_error(Capybara::ElementNotFound)
    expect { @session.assert_no_selector('//p[contains(.,'est')]') }.to raise_error(Capybara::ElementNotFound)
  end
    
      context 'with an asynchronous alert' do
    it 'should accept the alert' do
      @session.accept_alert do
        @session.click_link('Open delayed alert')
      end
      expect(@session).to have_xpath('//a[@id='open-delayed-alert' and @opened='true']')
    end
    
        it 'should not find when false' do
      Capybara.enable_aria_label = false
      expect { @session.find_button('Mediocre Button') }.to raise_error(Capybara::ElementNotFound)
    end
  end
    
      context 'with :visible option' do
    it 'finds invisible elements when `false`' do
      expect(@session.find_by_id('hidden_via_ancestor', visible: false).text(:all)).to match(/with hidden ancestor/)
    end
    
    task :install => [ 'redis:install', 'dtach:install' ]
    
        # Given an object, returns a list `after_perform` hook names.
    def after_hooks(job)
      get_hook_names(job, 'after_perform')
    end