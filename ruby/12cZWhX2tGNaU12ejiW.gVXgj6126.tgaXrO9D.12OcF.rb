
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
            # Private: Watch for file changes and rebuild the site.
        #
        # site - A Jekyll::Site instance
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def watch(site, options)
          # Warn Windows users that they might need to upgrade.
          if Utils::Platforms.bash_on_windows?
            Jekyll.logger.warn '',
                               'Auto-regeneration may not work on some Windows versions.'
            Jekyll.logger.warn '',
                               'Please see: https://github.com/Microsoft/BashOnWindows/issues/216'
            Jekyll.logger.warn '',
                               'If it does not work, please upgrade Bash on Windows or '\
                               'run Jekyll with --no-watch.'
          end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        # Determine whether the document is a YAML file.
    #
    # Returns true if the extname is either .yml or .yaml, false otherwise.
    def yaml_file?
      %w(.yaml .yml).include?(extname)
    end
    
        @table_sort_info = {
      order: { attribute.to_sym => direction.to_sym },
      attribute: attribute,
      direction: direction
    }
  end
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        # .btn { ... } -> @mixin btn { ... }; .btn { @include btn }
    def extract_mixins_from_selectors(file, selectors_to_mixins)
      selectors_to_mixins.each do |selector, mixin|
        file = replace_rules file, Regexp.escape(selector), prefix: false do |selector_css|
          log_transform '#{selector} { ... } -> @mixin #{mixin} { ... }; #{selector} { @include #{mixin} } ', from: 'extract_mixins_from_selectors'
          <<-SCSS
// [converter] extracted from `#{selector}` for libsass compatibility
@mixin #{mixin} {#{unwrap_rule_block(selector_css)}
}
// [converter] extracted as `@mixin #{mixin}` for libsass compatibility
#{selector} {
  @include #{mixin};
}
          SCSS
        end
      end
      file
    end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
      [jekyllPid, compassPid, rackupPid].each { |pid| Process.wait(pid) }
end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
    module Jekyll