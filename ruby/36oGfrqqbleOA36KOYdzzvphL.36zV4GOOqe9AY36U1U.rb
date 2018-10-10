
        
            %w(<< concat push insert unshift).each do |method|
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{method}(*args)
          paths.#{method}(*typecast(args))
        end
      METHOD
    end
    
        initializer 'action_view.setup_action_pack' do |app|
      ActiveSupport.on_load(:action_controller) do
        ActionView::RoutingUrlFor.include(ActionDispatch::Routing::UrlFor)
      end
    end
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
    begin
  require 'cucumber/rake/task'
  Cucumber::Rake::Task.new(:features) do |t|
    t.profile = 'travis'
  end
  Cucumber::Rake::Task.new(:'features:html', 'Run Cucumber features and produce HTML output') do |t|
    t.profile = 'html_report'
  end
rescue LoadError
  desc 'Cucumber rake task not available'
  task :features do
    abort 'Cucumber rake task is not available. Be sure to install cucumber as a gem or plugin'
  end
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
      config.on_event :test_case_started do |event|
    f.print_feature_element_name(event.test_case)
    f.before_feature_element(event.test_case)
  end
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
    require_relative 'websockets'
    
        ff.each do |f|
      missing = f.missing_dependencies(hide: ARGV.values('hide'))
      next if missing.empty?
    
        protected
    
    desc 'Watch the site and regenerate when it changes'
task :watch do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts 'Starting to watch source with Jekyll and Compass.'
  system 'compass compile --css-dir #{source_dir}/stylesheets' unless File.exist?('#{source_dir}/stylesheets/screen.css')
  jekyllPid = Process.spawn({'OCTOPRESS_ENV'=>'preview'}, 'jekyll build --watch')
  compassPid = Process.spawn('compass watch')