
        
            private
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
      def package(gem, ext='')
    'pkg/#{gem}-#{source_version}' + ext
  end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
            reaction
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
    Capybara.register_driver :named_test do |app|
  Capybara::RackTest::Driver.new(app)
end

    
        it 'can disable use of gumbo' do
      skip 'Test doesn't make sense unlesss nokogumbo is loaded' unless Nokogiri.respond_to?(:HTML5)
      Capybara.allow_gumbo = false
      expect(Capybara.string('<td>1</td>')).to have_css('td')
    end
    
        it 'should allow to adjust the delay' do
      @session.accept_alert wait: 10 do
        @session.click_link('Open slow alert')
      end
      expect(@session).to have_xpath('//a[@id='open-slow-alert' and @opened='true']')
    end
  end
end

    
      it 'should accept the prompt with no message' do
    @session.accept_prompt do
      @session.click_link('Open prompt')
    end
    expect(@session).to have_xpath('//a[@id='open-prompt' and @response='']')
  end
    
      it 'should raise ElementNotFound with a useful default message if nothing was found' do
    el = @session.find(:css, '#child')
    expect do
      el.ancestor(:xpath, '//div[@id='nosuchthing']')
    end.to raise_error(Capybara::ElementNotFound, 'Unable to find xpath '//div[@id=\\'nosuchthing\\']' that is an ancestor of visible css '#child'')
  end
    
    $LOAD_PATH.unshift File.expand_path(File.dirname(__FILE__) + '/../lib')
begin
  require 'redis-namespace'
rescue LoadError
  require 'rubygems'
  require 'redis-namespace'
end
require 'resque'
require 'optparse'
    
      def self.perform(repo_id, branch = 'master')
    repo = Repository.find(repo_id)
    repo.create_archive(branch)
  end
end
    
          case ENV['FAILURE_BACKEND']
      when 'redis_multi_queue'
        require 'resque/failure/redis_multi_queue'
        @backend = Failure::RedisMultiQueue
      when 'redis', nil
        require 'resque/failure/redis'
        @backend = Failure::Redis
      else
        raise ArgumentError, 'invalid failure backend: #{FAILURE_BACKEND}'
      end
    end
    
          def poll
        if defined?(@polling) && @polling
          text = 'Last Updated: #{Time.now.strftime('%H:%M:%S')}'
        else
          text = '<a href='#{u(request.path_info)}.poll' rel='poll'>Live Poll</a>'
        end
        '<p class='poll'>#{text}</p>'
      end
    
        # Kill the child and shutdown immediately.
    # If not forking, abort this process.
    def shutdown!
      shutdown
      if term_child
        if fork_per_job?
          new_kill_child
        else
          # Raise TermException in the same process
          trap('TERM') do
            # ignore subsequent terms
          end
          raise TermException.new('SIGTERM')
        end
      else
        kill_child
      end
    end