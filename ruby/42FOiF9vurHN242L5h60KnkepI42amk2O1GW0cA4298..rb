Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          def rate_limit_counter
        @rate_limit_counter ||= Gitlab::Metrics.counter(
          :github_importer_rate_limit_hits,
          'The number of times we hit the GitHub rate limit when importing projects'
        )
      end
    
            def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
          private
    
          # Marks the given object as 'already imported'.
      def mark_as_imported(object)
        id = id_for_already_imported_cache(object)
    
            retval
      end
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
        def register(klass, attachment_name, attachment_options)
      @attachments ||= {}
      @attachments[klass] ||= {}
      @attachments[klass][attachment_name] = attachment_options
    end