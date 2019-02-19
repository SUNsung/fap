
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
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
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    #
    
                c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          # Returns true if the given value is present in the set.
      #
      # raw_key - The key of the set to check.
      # value - The value to check for.
      def self.set_includes?(raw_key, value)
        key = cache_key_for(raw_key)
    
          def action_for_grape(env)
        endpoint = env[ENDPOINT_KEY]
        route = endpoint.route rescue nil
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        private
    
        def self.plural_cache
      @plural_cache ||= PluralCache.new
    end