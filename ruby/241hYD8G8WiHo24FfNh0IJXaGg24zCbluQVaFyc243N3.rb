
        
        module ActionCable
  module SubscriptionAdapter
    class Redis < Base # :nodoc:
      prepend ChannelPrefix
    
      class C < A
    helper { def shout; 'C' end }
    
            assert_equal 'summary, title', @controller.response.body
        assert @controller.params.has_key?(:summary)
        assert @controller.params.has_key?(:title)
        assert_equal 'content...', @controller.params['summary']
        assert_equal 'JSON', @controller.params['title']
      end
    end
  end
    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
            def determine_default_mailer(name)
          mailer = determine_constant_from_test_name(name) do |constant|
            Class === constant && constant < ActionMailer::Base
          end
          raise NonInferrableMailerError.new(name) if mailer.nil?
          mailer
        end
      end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def site_configuration(overrides = {})
  build_configs({
    'source'      => source_dir,
    'destination' => dest_dir
  }, build_configs(overrides))
end
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
          theme.create!
      Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
        ' is ready for you in #{theme.path.to_s.cyan}!'
      Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
    end
    # rubocop:enable Metrics/AbcSize
  end
end

    
      module Wrapper
    attr_accessor :results
    
    class Agents::ExampleAgent < Agent
  include LongRunnable
    
      protected
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
    #{stack}
#{executable_path}
### Plugins
    
            target_module << if app.resolved_build_setting('SWIFT_OPTIMIZATION_LEVEL').values.any?
                           <<-RUBY
  # Comment the next line if you're not using Swift and don't want to use dynamic frameworks
  use_frameworks!
    
    # usage rake new_post[my-new-post] or rake new_post['my new post'] or rake new_post (defaults to 'new-post')
desc 'Begin a new post in #{source_dir}/#{posts_dir}'
task :new_post, :title do |t, args|
  if args.title
    title = args.title
  else
    title = get_stdin('Enter a title for your post: ')
  end
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  mkdir_p '#{source_dir}/#{posts_dir}'
  filename = '#{source_dir}/#{posts_dir}/#{Time.now.strftime('%Y-%m-%d')}-#{title.to_url}.#{new_post_ext}'
  if File.exist?(filename)
    abort('rake aborted!') if ask('#{filename} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
  end
  puts 'Creating new post: #{filename}'
  open(filename, 'w') do |post|
    post.puts '---'
    post.puts 'layout: post'
    post.puts 'title: \'#{title.gsub(/&/,'&amp;')}\''
    post.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M:%S %z')}'
    post.puts 'comments: true'
    post.puts 'categories: '
    post.puts '---'
  end
end
    
    module Jekyll
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            def_node_matcher :only_truthiness_matters?, <<-PATTERN
          ^({if while until case while_post until_post} equal?(%0) ...)
        PATTERN
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
            # @param annotated_source [String] string passed to the matchers
        #
        # Separates annotation lines from source lines. Tracks the real
        # source line number that each annotation corresponds to.
        #
        # @return [AnnotatedSource]
        def self.parse(annotated_source)
          source      = []
          annotations = []