
        
        @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def title
        '#{@page.title}'
      end
    
    module Precious
  module Views
    class Layout < Mustache
      include Rack::Utils
      alias_method :h, :escape_html
    
        get '/compare/A/fc66539528eb96f21b2bbdbf557788fe8a1196ac..b26b791cb7917c4f37dd9cb4d1e0efb24ac4d26f'
    
      test 'create sets the correct path for a relative path subdirectory with the page file directory set' do
    Precious::App.set(:wiki_options, { :page_file_dir => 'foo' })
    dir  = 'bardir'
    name = '#{dir}/baz'
    get '/create/foo/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
    # reset page_file_dir
    Precious::App.set(:wiki_options, { :page_file_dir => nil })
  end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
    
    
    require 'rake/testtask'
Rake::TestTask.new(:test) do |test|
  test.libs << 'lib' << 'test' << '.'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
      class Error < StandardError;
  end
    
    # Quiet some warnings we see when running in warning mode:
# RUBYOPT=-w bundle exec sidekiq
$TESTING = false
    
        execute 'ensure-sidekiq-is-setup-with-monit' do 
      command %Q{ 
        monit reload 
      } 
    end
    
        def self.with_context(msg)
      Thread.current[:sidekiq_context] ||= []
      Thread.current[:sidekiq_context] << msg
      yield
    ensure
      Thread.current[:sidekiq_context].pop
    end