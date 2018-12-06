
        
          path = 'assets/stylesheets'
  css_path = args.with_defaults(css_path: 'tmp')[:css_path]
  puts Term::ANSIColor.bold 'Compiling SCSS in #{path}'
  Dir.mkdir(css_path) unless File.directory?(css_path)
  %w(_bootstrap bootstrap/_theme).each do |file|
    save_path = '#{css_path}/#{file.sub(/(^|\/)?_+/, '\1').sub('/', '-')}.css'
    puts Term::ANSIColor.cyan('  #{save_path}') + '...'
    engine    = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    css       = engine.render
    File.open(save_path, 'w') { |f| f.write css }
  end
end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
          # Checks whether this `hash` element is on the same line as `other`.
      #
      # @note A multiline element is considered to be on the same line if it
      #       shares any of its lines with `other`
      #
      # @return [Boolean] whether this element is on the same line as `other`
      def same_line?(other)
        loc.last_line == other.loc.line || loc.line == other.loc.last_line
      end
    
            ActiveSupport.on_load(:active_record) do
          include Sidekiq::Extensions::ActiveRecord
        end
        ActiveSupport.on_load(:action_mailer) do
          extend Sidekiq::Extensions::ActionMailer
        end
      end
    
        def self.job_hash_context(job_hash)
      # If we're using a wrapper class, like ActiveJob, use the 'wrapped'
      # attribute to expose the underlying thing.
      klass = job_hash['wrapped'] || job_hash['class']
      bid = job_hash['bid']
      '#{klass} JID-#{job_hash['jid']}#{' BID-#{bid}' if bid}'
    end
    
      module TestingClient
    def raw_push(payloads)
      if Sidekiq::Testing.fake?
        payloads.each do |job|
          job = Sidekiq.load_json(Sidekiq.dump_json(job))
          job.merge!('enqueued_at' => Time.now.to_f) unless job['at']
          Queues.push(job['queue'], job['class'], job)
        end
        true
      elsif Sidekiq::Testing.inline?
        payloads.each do |job|
          klass = Sidekiq::Testing.constantize(job['class'])
          job['id'] ||= SecureRandom.hex(12)
          job_hash = Sidekiq.load_json(Sidekiq.dump_json(job))
          klass.process_job(job_hash)
        end
        true
      else
        super
      end
    end
  end
    
        def use(*middleware_args, &block)
      middlewares << [middleware_args, block]
    end