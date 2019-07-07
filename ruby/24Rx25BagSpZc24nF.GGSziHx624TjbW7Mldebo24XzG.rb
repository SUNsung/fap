
        
            def root_url
      @root_url ||= root_path? ? URL.parse(File.join(base_url.to_s, root_path)) : base_url.normalize
    end
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
            css('pre.no-bg-with-indent').each do |node|
          node.content = '  ' + node.content.gsub('\n', '\n  ')
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
          # Returns an array of all available failure queues
      def self.queues
        []
      end
    
        # Alias of `find`
    def self.attach(worker_id)
      find(worker_id)
    end
    
      def assert_exception_caught(result)
    refute_nil result
    assert !result.start_with?('Finished Normally'), 'Job Finished normally.  (sleep parameter to LongRunningJob not long enough?)'
    assert result.start_with?('Caught TermException'), 'TermException exception not raised in child.'
  end