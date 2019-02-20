
        
                # Remove some <code> elements
        css('h1 > code', 'h2 > code', 'h3 > code', 'h4 > code', 'h6 > code').each do |node|
          node.before(node.content).remove
        end
    
      desc 'Generate Documentation'
  task :doc => [:yard, 'doc:add_ids']
  task :redoc => [:yard, 'doc:add_ids']
rescue LoadError
  desc 'Generate Documentation'
  task :doc => :rdoc
  task :yard => :rdoc
end
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
        # Create a {Sass::Selector::CommaSequence} containing only a single
    # {Sass::Selector::Sequence}.
    #
    # @param sseqs [Array<Sass::Selector::Sequence, String>]
    # @return [Sass::Selector::CommaSequence]
    def make_seq(*sseqs)
      make_cseq(Sass::Selector::Sequence.new(sseqs))
    end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
          private
    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
          def delete_for(jid, queue, klass)
        jobs_by_queue[queue.to_s].delete_if { |job| job['jid'] == jid }
        jobs_by_worker[klass].delete_if { |job| job['jid'] == jid }
      end